// media_player.h - the console's music player, as far as a title can see it.
//
// XAM's music player (XMP) is not reached through named imports. A title sends
// it messages: XMsgInProcessCall / XMsgStartIORequest take an app id and a
// message id and route them into the app that owns them, and XMP is app 0xFA.
// That is why a title can make hundreds of thousands of XMsg calls while
// importing no XMP function at all - and why an XMsg handler that just reports
// failure leaves a title polling forever for an answer it can act on.
//
// Both Geometry Wars titles poll XMPGetPlaybackController from a worker thread.
// What they are asking is "am I still in control of the audio, or has the user
// started their own soundtrack" - and the answer, on a console with no music
// playing, is that the game is in control and nothing is locked.
//
// Nothing here plays music. It holds the state the messages read and write, so
// the answers a title gets are consistent with each other over time: a volume
// it set is the volume it reads back, and a controller it handed to the user is
// the controller reported until it takes it back.
#pragma once

#include <cstdint>

namespace whitty_xenon {

// Which client of the music player is talking, from Xenia's XMP_CLIENT. A
// title is always Game.
namespace xmp_client {
inline constexpr uint32_t dash = 0;
inline constexpr uint32_t hud = 1;
inline constexpr uint32_t game = 2;
inline constexpr uint32_t remote = 3;
inline constexpr uint32_t music_player = 4;
} // namespace xmp_client

// Who decides what plays, from Xenia's PlaybackController.
namespace xmp_playback_controller {
inline constexpr uint32_t game = 0;
inline constexpr uint32_t user = 1;
inline constexpr uint32_t dash = 2;
inline constexpr uint32_t mce = 3;
inline constexpr uint32_t restore = 4;
} // namespace xmp_playback_controller

// XmpApp::State.
namespace xmp_state {
inline constexpr uint32_t idle = 0;
inline constexpr uint32_t playing = 1;
inline constexpr uint32_t paused = 2;
} // namespace xmp_state

struct media_player_state {
    // The defaults are the console's: the game owns playback and nothing is
    // playing, so a title that asks whether it is in control is told yes.
    uint32_t client{xmp_client::game};
    uint32_t playback_controller{xmp_playback_controller::game};
    uint32_t state{xmp_state::idle};
    uint32_t playback_mode{0};  // in order
    uint32_t repeat_mode{0};    // repeat the playlist
    uint32_t playback_flags{0};
    float volume{0.0f};
    // Songs in the playlist the title registered (XMPCreateTitlePlaylist).
    uint32_t song_count{0};
    // Set when a title takes playback control away from the user for the whole
    // of its run (XMPSetPlaybackController's locked flag).
    bool override_enabled{false};

    // Whether the title, rather than the user's own soundtrack, is in control.
    // Xenia's AudioMediaPlayer::IsTitleInPlaybackControl.
    bool title_in_playback_control() const noexcept {
        return (client == xmp_client::game &&
                playback_controller == xmp_playback_controller::game) ||
               override_enabled;
    }
};

} // namespace whitty_xenon
