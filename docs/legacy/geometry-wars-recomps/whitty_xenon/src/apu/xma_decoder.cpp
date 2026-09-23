#include "whitty_xenon/apu/xma_decoder.h"

#include <cstring>

#ifdef WHITTY_HAVE_FFMPEG
extern "C" {
#include <libavcodec/avcodec.h>
#include <libavutil/channel_layout.h>
#include <libavutil/log.h>
#include <libavutil/samplefmt.h>
}
#endif

namespace whitty_xenon::apu {

#ifdef WHITTY_HAVE_FFMPEG
namespace {

// The 34 bytes of XMA2WAVEFORMATEX that follow the standard WAVEFORMATEX
// header. The decoder needs this to know the stream's shape; without it, it
// has nothing to interpret the packets against.
//
// Only a few fields matter for decoding a live stream - the counts describing
// a whole file are unknown here and are left zero, which the decoder accepts
// because it is fed packet by packet rather than asked to seek.
std::vector<uint8_t> make_extradata(uint32_t channels) {
    std::vector<uint8_t> extra(34, 0);
    const auto put16 = [&](std::size_t at, uint16_t v) {
        extra[at] = static_cast<uint8_t>(v);
        extra[at + 1] = static_cast<uint8_t>(v >> 8);
    };
    const auto put32 = [&](std::size_t at, uint32_t v) {
        for (int i = 0; i < 4; ++i)
            extra[at + i] = static_cast<uint8_t>(v >> (i * 8));
    };
    put16(0, 1);                                    // NumStreams
    put32(2, channels >= 2 ? 3 : 4);                // ChannelMask: L+R, or C
    put32(6, 0);                                    // SamplesEncoded
    put32(10, 2048 * 16);                           // BytesPerBlock
    put32(14, 0);                                   // PlayBegin
    put32(18, 0);                                   // PlayLength
    put32(22, 0);                                   // LoopBegin
    put32(26, 0);                                   // LoopLength
    extra[30] = 0;                                  // LoopCount
    extra[31] = 4;                                  // EncoderVersion
    put16(32, 0);                                   // BlockCount
    return extra;
}

} // namespace
#endif

xma_decoder::~xma_decoder() { close(); }

bool xma_decoder::available() noexcept {
#ifdef WHITTY_HAVE_FFMPEG
    return avcodec_find_decoder(AV_CODEC_ID_XMA2) != nullptr;
#else
    return false;
#endif
}

bool xma_decoder::open(uint32_t sample_rate, uint32_t channels,
                       std::string& error) {
#ifndef WHITTY_HAVE_FFMPEG
    (void)sample_rate;
    (void)channels;
    error = "built without a compressed-audio decoder";
    return false;
#else
    close();
    if (channels == 0) channels = 2;
    if (sample_rate == 0) sample_rate = 48000;

    const AVCodec* codec = avcodec_find_decoder(AV_CODEC_ID_XMA2);
    if (codec == nullptr) {
        error = "this FFmpeg has no xma2 decoder";
        return false;
    }
    AVCodecContext* context = avcodec_alloc_context3(codec);
    if (context == nullptr) {
        error = "could not allocate a decoder";
        return false;
    }
    context->sample_rate = static_cast<int>(sample_rate);
    av_channel_layout_default(&context->ch_layout, static_cast<int>(channels));

    const std::vector<uint8_t> extra = make_extradata(channels);
    // FFmpeg frees extradata itself and wants its own padded allocation.
    context->extradata = static_cast<uint8_t*>(
        av_mallocz(extra.size() + AV_INPUT_BUFFER_PADDING_SIZE));
    if (context->extradata == nullptr) {
        avcodec_free_context(&context);
        error = "out of memory for decoder configuration";
        return false;
    }
    std::memcpy(context->extradata, extra.data(), extra.size());
    context->extradata_size = static_cast<int>(extra.size());

    // FFmpeg talks, at INFO, on the guest's own audio thread.
    //
    // "Could not update timestamps for skipped samples" is emitted several
    // times a second for every XMA stream a title plays - it is a note about
    // container timestamps this runtime does not have and does not need, since
    // the guest tells us where each packet goes. On a desktop those lines go to
    // a redirected stderr and cost nothing; on Android every one is a syscall
    // into logd from the thread that must not be late, and they bury the run's
    // own report in the ring buffer. Silenced once, globally, before the first
    // decoder opens.
    static const int quieted = [] {
        av_log_set_level(AV_LOG_QUIET);
        return 0;
    }();
    (void)quieted;
    if (avcodec_open2(context, codec, nullptr) < 0) {
        avcodec_free_context(&context);
        error = "the xma2 decoder rejected this stream's configuration";
        return false;
    }

    m_context = context;
    m_packet = av_packet_alloc();
    m_frame = av_frame_alloc();
    m_sample_rate = sample_rate;
    m_channels = channels;
    m_opened = m_packet != nullptr && m_frame != nullptr;
    if (!m_opened) {
        close();
        error = "could not allocate decoder buffers";
        return false;
    }
    return true;
#endif
}

bool xma_decoder::decode(const uint8_t* packets, uint32_t size,
                         std::vector<int16_t>& out, std::string& error) {
#ifndef WHITTY_HAVE_FFMPEG
    (void)packets;
    (void)size;
    (void)out;
    error = "built without a compressed-audio decoder";
    return false;
#else
    if (!m_opened) {
        error = "decoder is not open";
        return false;
    }
    auto* context = static_cast<AVCodecContext*>(m_context);
    auto* packet = static_cast<AVPacket*>(m_packet);
    auto* frame = static_cast<AVFrame*>(m_frame);

    // FFmpeg reads past the end of a packet by its padding, so the data is
    // copied into a padded buffer rather than pointed at guest memory.
    std::vector<uint8_t> padded(size + AV_INPUT_BUFFER_PADDING_SIZE, 0);
    std::memcpy(padded.data(), packets, size);
    packet->data = padded.data();
    packet->size = static_cast<int>(size);

    if (avcodec_send_packet(context, packet) < 0) {
        error = "the decoder rejected a packet";
        return false;
    }
    while (true) {
        const int status = avcodec_receive_frame(context, frame);
        // Needing more input is the normal case: a codec frame can span
        // several packets, so a packet that yields nothing is not an error.
        if (status == AVERROR(EAGAIN) || status == AVERROR_EOF) break;
        if (status < 0) {
            error = "the decoder failed mid-stream";
            return false;
        }
        const int channels = frame->ch_layout.nb_channels;
        const int samples = frame->nb_samples;
        const auto append = [&](float value) {
            const float clamped = value > 1.0f    ? 1.0f
                                  : value < -1.0f ? -1.0f
                                                  : value;
            out.push_back(static_cast<int16_t>(clamped * 32767.0f));
        };
        // The decoder hands back planar floats; the console's output buffer
        // holds interleaved 16-bit samples.
        if (frame->format == AV_SAMPLE_FMT_FLTP) {
            for (int s = 0; s < samples; ++s)
                for (int c = 0; c < channels; ++c)
                    append(reinterpret_cast<const float*>(frame->data[c])[s]);
        } else if (frame->format == AV_SAMPLE_FMT_S16P) {
            for (int s = 0; s < samples; ++s)
                for (int c = 0; c < channels; ++c)
                    out.push_back(
                        reinterpret_cast<const int16_t*>(frame->data[c])[s]);
        } else if (frame->format == AV_SAMPLE_FMT_S16) {
            const auto* interleaved =
                reinterpret_cast<const int16_t*>(frame->data[0]);
            out.insert(out.end(), interleaved,
                       interleaved + samples * channels);
        } else {
            error = "the decoder produced an unexpected sample format";
            return false;
        }
        av_frame_unref(frame);
    }
    return true;
#endif
}

void xma_decoder::close() {
#ifdef WHITTY_HAVE_FFMPEG
    if (m_frame != nullptr) {
        auto* frame = static_cast<AVFrame*>(m_frame);
        av_frame_free(&frame);
    }
    if (m_packet != nullptr) {
        auto* packet = static_cast<AVPacket*>(m_packet);
        av_packet_free(&packet);
    }
    if (m_context != nullptr) {
        auto* context = static_cast<AVCodecContext*>(m_context);
        avcodec_free_context(&context);
    }
#endif
    m_context = nullptr;
    m_packet = nullptr;
    m_frame = nullptr;
    m_opened = false;
}

} // namespace whitty_xenon::apu
