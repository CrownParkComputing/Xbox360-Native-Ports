// ppc_bridge.cpp - joins the recompiled title to the whitty_xenon kernel.
//
// Every kernel import the recompiled code calls arrives as
// `__imp__<Name>(PPCContext&, uint8_t*)`. host_function reads that call's
// arguments out of the guest registers, invokes our handler and writes the
// result back. Imports not implemented yet resolve to a stub that names itself
// the first time it is reached, in call order - which is the bring-up worklist
// the static import table cannot give you. Set WHITTY_STOP_ON_UNIMPLEMENTED=1
// to halt at the first one instead of returning zero and continuing.
#include "ppc_config.h"
#include "ppc_context.h"

#include <atomic>
#include <algorithm>
#include <cstring>
#include <mutex>
#include <string>
#include <utility>
#include <vector>
#include "whitty_xenon/host_function.h"
#include "whitty_xenon/kernel_handlers.h"
#include "whitty_xenon/kernel_printf.h"
#include "whitty_xenon/kernel_state.h"
#include "whitty_xenon/heap.h"

#include <cstdio>
#include <cstdlib>
#include <cstdint>

using namespace whitty_xenon;

namespace {
int unimplemented_seen = 0;
bool stop_on_unimplemented() {
    static const bool stop = std::getenv("WHITTY_STOP_ON_UNIMPLEMENTED") != nullptr;
    return stop;
}
void report_unimplemented(const char* name) {
    std::printf("  [%3d] unimplemented kernel import: %s\n", ++unimplemented_seen, name);
    std::fflush(stdout);
    if (stop_on_unimplemented()) {
        std::printf("whitty_xenon: stopping at first unimplemented import (%s)\n", name);
        std::fflush(stdout);
        std::exit(3);
    }
}

// Per-import call counting. A title that boots does not stop, so the question
// during bring-up is never "did it crash" but "what is it doing" - and the
// answer is almost always visible in which kernel calls it is making and how
// often. A spin on KeWaitForSingleObject, a loop of VdSwap with nothing
// between, a file being reopened forever: each has an unmistakable shape here,
// and none of them are visible from a stack sample.
struct import_counter {
    const char* name;
    std::atomic<uint64_t> calls{0};
    explicit import_counter(const char* n);
};
std::vector<import_counter*>& import_counters() {
    static std::vector<import_counter*> counters;
    return counters;
}
std::mutex& import_counter_mutex() {
    static std::mutex mutex;
    return mutex;
}
import_counter::import_counter(const char* n) : name(n) {
    std::lock_guard<std::mutex> lock(import_counter_mutex());
    import_counters().push_back(this);
}

// WHITTY_TRACE_IMPORTS: 1/all traces every call; anything else is a
// comma-separated list of substrings to match, because tracing everything in a
// frame loop buries the one call you care about under millions of others.
const char* trace_filter() {
    static const char* filter = std::getenv("WHITTY_TRACE_IMPORTS");
    return filter;
}
bool traced(const char* name) {
    const char* filter = trace_filter();
    if (filter == nullptr) return false;
    if (*filter == 0 || std::strcmp(filter, "1") == 0 ||
        std::strcmp(filter, "all") == 0)
        return true;
    for (const char* piece = filter; *piece;) {
        const char* end = std::strchr(piece, ',');
        const std::size_t length = end ? static_cast<std::size_t>(end - piece)
                                       : std::strlen(piece);
        if (length != 0 && std::strstr(name, std::string(piece, length).c_str()))
            return true;
        piece = end ? end + 1 : piece + length;
    }
    return false;
}
// WHITTY_TRACE_IMPORTS_FIRST=1 names each import the FIRST time it is called,
// in call order, and never again. That is the one trace that survives a frame
// loop: "what did this screen ask for" is a question about which calls appear,
// not how many times, and tracing every call buries the answer under millions
// of controller polls.
bool trace_first_only() {
    static const bool first = std::getenv("WHITTY_TRACE_IMPORTS_FIRST") != nullptr;
    return first;
}
int first_seen = 0;
void trace_import_first(const char* name, const PPCContext& ctx) {
    std::printf("  [first %3d] %-40s r3=%08X r4=%08X r5=%08X r6=%08X r7=%08X\n",
                ++first_seen, name, static_cast<uint32_t>(ctx.r3.u32),
                static_cast<uint32_t>(ctx.r4.u32),
                static_cast<uint32_t>(ctx.r5.u32),
                static_cast<uint32_t>(ctx.r6.u32),
                static_cast<uint32_t>(ctx.r7.u32));
    std::fflush(stdout);
}
void trace_import_call(const char* name, const PPCContext& ctx) {
    std::printf("  [import] %-40s r3=%08X r4=%08X r5=%08X r6=%08X", name,
                static_cast<uint32_t>(ctx.r3.u32),
                static_cast<uint32_t>(ctx.r4.u32),
                static_cast<uint32_t>(ctx.r5.u32),
                static_cast<uint32_t>(ctx.r6.u32));
    std::fflush(stdout);
}
// The return value matters as much as the arguments: an allocation that hands
// back zero, or an open that fails, is what the title acts on next.
void trace_import_result(const PPCContext& ctx) {
    std::printf(" -> %08X\n", static_cast<uint32_t>(ctx.r3.u32));
    std::fflush(stdout);
}
} // namespace

// Reported by the harness: the busiest imports, most-called first.
void whitty_xenon_report_import_calls(int top) {
    std::vector<import_counter*> counters;
    {
        std::lock_guard<std::mutex> lock(import_counter_mutex());
        counters = import_counters();
    }
    std::vector<std::pair<uint64_t, const char*>> busy;
    uint64_t total = 0;
    for (import_counter* counter : counters) {
        const uint64_t calls = counter->calls.load(std::memory_order_relaxed);
        total += calls;
        if (calls != 0) busy.emplace_back(calls, counter->name);
    }
    std::sort(busy.begin(), busy.end(), [](const auto& a, const auto& b) {
        return a.first > b.first;
    });
    std::printf("  kernel calls: %llu total across %zu import(s)\n",
                static_cast<unsigned long long>(total), busy.size());
    for (std::size_t i = 0; i < busy.size() && i < static_cast<std::size_t>(top);
         ++i)
        std::printf("    %12llu  %s\n",
                    static_cast<unsigned long long>(busy[i].first),
                    busy[i].second);
    std::fflush(stdout);
}

#define WIRE(name) \
    void __imp__##name(PPCContext& ctx, uint8_t* base) { \
        static import_counter whitty_calls(#name); \
        if (whitty_calls.calls.fetch_add(1, std::memory_order_relaxed) == 0 && \
            trace_first_only()) \
            trace_import_first(#name, ctx); \
        const bool whitty_trace = traced(#name); \
        if (whitty_trace) trace_import_call(#name, ctx); \
        host_function<PPCContext, name>(ctx, base); \
        if (whitty_trace) trace_import_result(ctx); \
    }

// An unimplemented import returns zero, which most callers read as failure.
// Named once, on its first call, so the worklist reads as a call order rather
// than as a flood from whichever one the title happens to poll; the call count
// still lands in the report below.
#define STUB(name) \
    void __imp__##name(PPCContext& ctx, uint8_t* base) { \
        (void)base; \
        static import_counter whitty_calls(#name); \
        if (whitty_calls.calls.fetch_add(1, std::memory_order_relaxed) == 0) \
            report_unimplemented(#name); \
        ctx.r3.u64 = 0; \
    }

// --- 254 implemented ------------------------------------------
WIRE(DbgBreakPoint)
WIRE(DbgPrint)
WIRE(ExAllocatePool)
WIRE(ExCreateThread)
WIRE(ExFreePool)
WIRE(ExGetXConfigSetting)
WIRE(ExRegisterTitleTerminateNotification)
WIRE(ExTerminateThread)
WIRE(FscSetCacheElementCount)
WIRE(HalReturnToFirmware)
WIRE(InterlockedFlushSList)
WIRE(InterlockedPopEntrySList)
WIRE(KeAcquireSpinLockAtRaisedIrql)
WIRE(KeBugCheck)
WIRE(KeBugCheckEx)
WIRE(KeDelayExecutionThread)
WIRE(KeEnableFpuExceptions)
WIRE(KeEnterCriticalRegion)
WIRE(KeGetCurrentProcessType)
WIRE(KeInitializeSemaphore)
WIRE(KeLeaveCriticalRegion)
WIRE(KeLockL2)
WIRE(KeQueryPerformanceFrequency)
WIRE(KeQuerySystemTime)
WIRE(KeRaiseIrqlToDpcLevel)
WIRE(KeReleaseSemaphore)
WIRE(KeReleaseSpinLockFromRaisedIrql)
WIRE(KeResetEvent)
WIRE(KeResumeThread)
WIRE(KeSetAffinityThread)
WIRE(KeSetBasePriorityThread)
WIRE(KeSetEvent)
WIRE(KeTlsAlloc)
WIRE(KeTlsFree)
WIRE(KeTlsGetValue)
WIRE(KeTlsSetValue)
WIRE(KeUnlockL2)
WIRE(KeWaitForSingleObject)
WIRE(KfAcquireSpinLock)
WIRE(KfLowerIrql)
WIRE(KfRaiseIrql)
WIRE(KfReleaseSpinLock)
WIRE(KiApcNormalRoutineNop)
WIRE(MmAllocatePhysicalMemoryEx)
WIRE(MmFreePhysicalMemory)
WIRE(MmGetPhysicalAddress)
WIRE(MmQueryAddressProtect)
WIRE(MmQueryStatistics)
WIRE(MmSetAddressProtect)
WIRE(NetDll_accept)
WIRE(NetDll_bind)
WIRE(NetDll_closesocket)
WIRE(NetDll_connect)
WIRE(NetDll_getsockname)
WIRE(NetDll_getsockopt)
WIRE(NetDll_inet_addr)
WIRE(NetDll_ioctlsocket)
WIRE(NetDll_listen)
WIRE(NetDll_recv)
WIRE(NetDll_recvfrom)
WIRE(NetDll_select)
WIRE(NetDll_send)
WIRE(NetDll_sendto)
WIRE(NetDll_setsockopt)
WIRE(NetDll_socket)
WIRE(NetDll_WSACleanup)
WIRE(NetDll_WSACreateEvent)
WIRE(NetDll_WSAGetLastError)
WIRE(NetDll_WSASetLastError)
WIRE(NetDll_WSAStartup)
WIRE(NetDll_XNetCleanup)
WIRE(NetDll_XNetDnsLookup)
WIRE(NetDll_XNetDnsRelease)
WIRE(NetDll_XNetGetEthernetLinkStatus)
WIRE(NetDll_XNetGetTitleXnAddr)
WIRE(NetDll_XNetQosListen)
WIRE(NetDll_XNetQosLookup)
WIRE(NetDll_XNetQosRelease)
WIRE(NetDll_XNetRandom)
WIRE(NetDll_XNetRegisterKey)
WIRE(NetDll_XNetServerToInAddr)
WIRE(NetDll_XNetStartup)
WIRE(NetDll_XNetUnregisterKey)
WIRE(NetDll_XNetXnAddrToInAddr)
WIRE(NtAllocateVirtualMemory)
WIRE(NtClearEvent)
WIRE(NtClose)
WIRE(NtCreateEvent)
WIRE(NtCreateFile)
WIRE(NtDuplicateObject)
WIRE(NtFreeVirtualMemory)
WIRE(NtOpenFile)
WIRE(NtPulseEvent)
WIRE(NtQueryVirtualMemory)
WIRE(NtReadFile)
WIRE(RtlRaiseException)
WIRE(RtlUnwind)
WIRE(__C_specific_handler)
WIRE(KeTryToAcquireSpinLockAtRaisedIrql)
WIRE(VdGetGraphicsAsicID)
WIRE(VdInitializeEDRAM)
WIRE(XMABlockWhileInUse)
WIRE(XMADisableContext)
WIRE(XMAEnableContext)
WIRE(XMAGetInputBufferReadOffset)
WIRE(XMAGetOutputBufferReadOffset)
WIRE(XMAGetOutputBufferWriteOffset)
WIRE(XMAGetPacketMetadata)
WIRE(XMAInitializeContext)
WIRE(XMAIsInputBuffer0Valid)
WIRE(XMAIsInputBuffer1Valid)
WIRE(XMAIsOutputBufferValid)
WIRE(XMASetInputBuffer0)
WIRE(XMASetInputBuffer0Valid)
WIRE(XMASetInputBuffer1)
WIRE(XMASetInputBuffer1Valid)
WIRE(XMASetInputBufferReadOffset)
WIRE(XMASetLoopData)
WIRE(XMASetOutputBufferReadOffset)
WIRE(XMASetOutputBufferValid)
WIRE(NtFlushBuffersFile)
WIRE(NtQueryDirectoryFile)
WIRE(NtQueryFullAttributesFile)
WIRE(NtQueryInformationFile)
WIRE(NtQueryVolumeInformationFile)
WIRE(NtReadFileScatter)
WIRE(NtSetInformationFile)
WIRE(NtWriteFile)
WIRE(NtResumeThread)
WIRE(NtSetEvent)
WIRE(NtSuspendThread)
WIRE(NtWaitForSingleObjectEx)
WIRE(ObCreateSymbolicLink)
WIRE(ObDeleteSymbolicLink)
WIRE(ObDereferenceObject)
WIRE(ObReferenceObjectByHandle)
WIRE(RtlCompareMemoryUlong)
WIRE(RtlEnterCriticalSection)
WIRE(RtlFillMemoryUlong)
WIRE(RtlFreeAnsiString)
WIRE(RtlImageXexHeaderField)
WIRE(RtlInitAnsiString)
WIRE(RtlInitializeCriticalSection)
WIRE(RtlInitializeCriticalSectionAndSpinCount)
WIRE(RtlInitUnicodeString)
WIRE(RtlLeaveCriticalSection)
WIRE(RtlMultiByteToUnicodeN)
WIRE(RtlNtStatusToDosError)
WIRE(RtlTimeFieldsToTime)
WIRE(RtlTimeToTimeFields)
WIRE(RtlTryEnterCriticalSection)
WIRE(RtlUnicodeStringToAnsiString)
WIRE(RtlUnicodeToMultiByteN)
WIRE(VdCallGraphicsNotificationRoutines)
WIRE(VdEnableDisableClockGating)
WIRE(VdEnableRingBufferRPtrWriteBack)
WIRE(VdGetCurrentDisplayGamma)
WIRE(VdGetCurrentDisplayInformation)
WIRE(VdGetSystemCommandBuffer)
WIRE(VdInitializeEngines)
WIRE(VdInitializeRingBuffer)
WIRE(VdInitializeScalerCommandBuffer)
WIRE(VdIsHSIOTrainingSucceeded)
WIRE(VdPersistDisplay)
WIRE(VdQueryVideoFlags)
WIRE(VdQueryVideoMode)
WIRE(VdRetrainEDRAM)
WIRE(VdRetrainEDRAMWorker)
WIRE(VdSetDisplayMode)
WIRE(VdSetGraphicsInterruptCallback)
WIRE(VdSetSystemCommandBufferGpuIdentifierAddress)
WIRE(VdShutdownEngines)
WIRE(VdSwap)
WIRE(XamAlloc)
WIRE(XamContentClose)
WIRE(XamContentCreate)
WIRE(XamContentSetThumbnail)
WIRE(XamContentCreateEnumerator)
WIRE(XamContentCreateEx)
WIRE(XamContentDelete)
WIRE(XamContentGetCreator)
WIRE(XamContentGetDeviceData)
WIRE(XamContentGetDeviceName)
WIRE(XamContentGetDeviceState)
WIRE(XamContentGetLicenseMask)
WIRE(XamCreateEnumeratorHandle)
WIRE(XamEnumerate)
WIRE(XamFree)
WIRE(XamGetExecutionId)
WIRE(XamGetPrivateEnumStructureFromHandle)
WIRE(XamGetSystemVersion)
WIRE(XamInputGetCapabilities)
WIRE(XamInputGetState)
WIRE(XamInputGetKeystrokeEx)
WIRE(XamInputSetState)
WIRE(XamLoaderGetLaunchData)
WIRE(XamLoaderGetLaunchDataSize)
WIRE(XamLoaderLaunchTitle)
WIRE(XamLoaderTerminateTitle)
WIRE(XamNotifyCreateListener)
WIRE(XamSessionCreateHandle)
WIRE(XamSessionRefObjByHandle)
WIRE(XamShowAchievementsUI)
WIRE(XamShowCustomPlayerListUI)
WIRE(XamShowDeviceSelectorUI)
WIRE(XamShowDirtyDiscErrorUI)
WIRE(XamShowFriendRequestUI)
WIRE(XamShowFriendsUI)
WIRE(XamShowGameInviteUI)
WIRE(XamShowGamerCardUIForXUID)
WIRE(XamShowKeyboardUI)
WIRE(XamShowMarketplaceUI)
WIRE(XamShowMessageBoxUIEx)
WIRE(XamShowMessageComposeUI)
WIRE(XamShowMessagesUI)
WIRE(XamShowPlayerReviewUI)
WIRE(XamShowPlayersUI)
WIRE(XamShowQuickChatUI)
WIRE(XamShowSigninUI)
WIRE(XamUserAreUsersFriends)
WIRE(XamUserCheckPrivilege)
WIRE(XamUserCreateAchievementEnumerator)
WIRE(XamUserCreateStatsEnumerator)
WIRE(XamUserGetName)
WIRE(XamUserGetSigninInfo)
WIRE(XamUserGetSigninState)
WIRE(XamUserGetXUID)
WIRE(XamUserReadProfileSettings)
WIRE(XamUserReadProfileSettingsEx)
WIRE(XamUserWriteProfileSettings)
WIRE(XamVoiceClose)
WIRE(XamVoiceCreate)
WIRE(XamVoiceHeadsetPresent)
WIRE(XamVoiceSubmitPacket)
WIRE(XamWriteGamerTile)
WIRE(XAudioGetSpeakerConfig)
WIRE(XAudioGetVoiceCategoryVolume)
WIRE(XAudioGetVoiceCategoryVolumeChangeMask)
WIRE(XAudioRegisterRenderDriverClient)
WIRE(XAudioSubmitRenderDriverFrame)
WIRE(XAudioUnregisterRenderDriverClient)
WIRE(XexCheckExecutablePrivilege)
WIRE(XexGetModuleHandle)
WIRE(XexGetModuleSection)
WIRE(XexGetProcedureAddress)
WIRE(XexLoadImage)
WIRE(XexUnloadImage)
WIRE(XGetAVPack)
WIRE(XGetGameRegion)
WIRE(XGetLanguage)
WIRE(XGetVideoMode)
WIRE(XMACreateContext)
WIRE(XMAReleaseContext)
WIRE(XMsgCancelIORequest)
WIRE(XMsgInProcessCall)
WIRE(XMsgStartIORequest)
WIRE(XMsgStartIORequestEx)
WIRE(XMsgCompleteIORequest)
WIRE(XamGetOverlappedResult)
WIRE(XNetLogonGetTitleID)
WIRE(XNotifyGetNext)
WIRE(XNotifyPositionUI)

// The printf family is the one group host_function cannot wrap: how many
// arguments there are is only known once the format string has been walked, so
// the handler needs the register file itself. See kernel_printf.h.
void __imp__sprintf(PPCContext& ctx, uint8_t* base) {
    const uint32_t buffer = ctx.r3.u32;
    const uint32_t format = ctx.r4.u32;
    ppc_format_arguments<PPCContext> args(ctx, base, 2);
    ctx.r3.u64 = static_cast<uint32_t>(
        format_to_guest(buffer, SIZE_MAX, format, args));
}

// vsprintf takes a va_list the guest built and no size limit, which is the
// only difference from _vsnprintf below. Reached by Ridge Racer 6.
void __imp__vsprintf(PPCContext& ctx, uint8_t* base) {
    (void)base;
    const uint32_t buffer = ctx.r3.u32;
    const uint32_t format = ctx.r4.u32;
    guest_array_arguments args(ctx.r5.u32);
    ctx.r3.u64 = static_cast<uint32_t>(
        format_to_guest(buffer, SIZE_MAX, format, args));
}

void __imp___vsnprintf(PPCContext& ctx, uint8_t* base) {
    (void)base;
    const uint32_t buffer = ctx.r3.u32;
    const uint32_t count = ctx.r4.u32;
    const uint32_t format = ctx.r5.u32;
    guest_array_arguments args(ctx.r6.u32);
    const int32_t written = format_to_guest(buffer, count, format, args);
    // _vsnprintf reports -1 when the result did not fit, unlike snprintf.
    ctx.r3.u64 = static_cast<uint32_t>(
        (written >= 0 && static_cast<uint32_t>(written) >= count) ? -1 : written);
}

// --- added for Hydro Thunder Hurricane ----------------------
// The pool allocators were already implemented and simply had no entry point
// here, which is why they show up as a link error rather than as a stub report.
WIRE(ExAllocatePoolWithTag)
WIRE(ExAllocatePoolTypeWithTag)
WIRE(MmQueryAllocationSize)
WIRE(MmMapIoSpace)
WIRE(ObReferenceObject)
WIRE(KeQueryBasePriorityThread)
WIRE(KeInitializeApc)
WIRE(KeInsertQueueApc)
WIRE(KeInitializeDpc)
WIRE(RtlCaptureContext)
WIRE(XamLoaderSetLaunchData)
WIRE(XamShowMessageBoxUI)
WIRE(XamUserGetDeviceContext)
WIRE(RmcDeviceRequest)
WIRE(MicDeviceRequest)
// The online-multiplayer surface. Every one fails; see kernel_handlers.h for
// the two that spell failure as something other than SOCKET_ERROR.
WIRE(NetDll_WSARecvFrom)
WIRE(NetDll_WSASendTo)
WIRE(NetDll_WSAGetOverlappedResult)
WIRE(NetDll_XNetConnect)
WIRE(NetDll_XNetGetConnectStatus)
WIRE(NetDll_XNetGetOpt)
WIRE(NetDll_XNetInAddrToXnAddr)
WIRE(NetDll_XNetUnregisterInAddr)
WIRE(NetDll_XNetQosServiceLookup)
WIRE(NetDll_XNetReplaceKey)

// --- added for Jetpac Refuelled -----------------------------
// Reader/writer locks, which must exclude for real - see kernel_handlers.h.
WIRE(ExInitializeReadWriteLock)
WIRE(ExAcquireReadWriteLockExclusive)
WIRE(ExAcquireReadWriteLockShared)
WIRE(ExReleaseReadWriteLock)
WIRE(XamContentInstall)
// The camera: present but with nothing plugged in, which XUsbcamGetState is
// what says. The four that would drive a camera that is not there stay
// unimplemented on purpose, so reaching one is reported rather than faked.
WIRE(XUsbcamCreate)
WIRE(XUsbcamDestroy)
WIRE(XUsbcamGetState)
STUB(XUsbcamSetConfig)
STUB(XUsbcamSetView)
STUB(XUsbcamSetCaptureMode)
STUB(XUsbcamReadFrame)
// Wide-character formatting. Only ever reached through the import thunk table
// so far, never called; if the worklist ever names it, it needs the same
// treatment sprintf got above rather than this.

// --- synchronisation and timers, added during bring-up ------
WIRE(KeWaitForMultipleObjects)
WIRE(NtCancelTimer)
WIRE(NtCreateMutant)
WIRE(NtCreateSemaphore)
WIRE(NtCreateTimer)
WIRE(NtReleaseMutant)
WIRE(NtReleaseSemaphore)
WIRE(NtSetTimerEx)
WIRE(NtSignalAndWaitForSingleObjectEx)
WIRE(NtWaitForMultipleObjectsEx)

// --- added for Banjo-Kazooie XBLA ---------------------------
WIRE(MmLockAndMapSegmentArray)
WIRE(MmUnlockAndUnmapSegmentArray)
WIRE(NtQueueApcThread)

// --- added for Geometry Wars 3: Dimensions ------------------
WIRE(XamGetLanguage)
WIRE(XAudioEnableDucker)
WIRE(XAudioGetDuckerLevel)
WIRE(XAudioGetDuckerThreshold)
WIRE(XAudioGetDuckerAttackTime)
WIRE(XAudioGetDuckerReleaseTime)
WIRE(XAudioGetDuckerHoldTime)
WIRE(XamVoiceIsActiveProcess)
WIRE(XamShowMarketplaceDownloadItemsUI)
WIRE(XamMarketplaceAcquireFreeContent)
WIRE(XamUserGetMembershipTierFromXUID)
WIRE(XamUserGetOnlineCountryFromXUID)
WIRE(XamParseGamerTileKey)
WIRE(NetDll_shutdown)
WIRE(NetDll_WSACloseEvent)
WIRE(NetDll_WSAResetEvent)
WIRE(NetDll___WSAFDIsSet)
WIRE(NetDll_XNetInAddrToString)
WIRE(NetDll_XNetTsAddrToInAddr)
WIRE(KeInsertQueueDpc)

// --- added for Choplifter HD --------------------------------
// Every one of these is in Choplifter's import thunk table, which is why they
// arrive as a link error rather than as a stub report: a missing entry point is
// a link failure, not a runtime one. Being in the table says only that the
// title MIGHT call them. Which it actually calls, and in what order, is what
// the unimplemented-import worklist answers at run time - so these start as
// stubs that name themselves and get implemented in the order they are reached.
//
// The stub returns zero, which in most of these is SUCCESS. That is bug class 1
// in docs/BRINGUP.md and the reason each one prints: a stub that is never
// reported is indistinguishable from a handler that works.
STUB(IoCheckShareAccess)
STUB(IoCompleteRequest)
STUB(IoCreateDevice)
STUB(IoDeleteDevice)
STUB(IoDismountVolume)
STUB(IoDismountVolumeByFileHandle)
STUB(IoInvalidDeviceRequest)
STUB(IoRemoveShareAccess)
STUB(IoSetShareAccess)
STUB(NetDll_XNetQosGetListenStats)
STUB(NetDll_XNetSetSystemLinkPort)
STUB(NtDeviceIoControlFile)
STUB(NtWriteFileGather)
STUB(ObIsTitleObject)
STUB(RtlCompareStringN)
STUB(RtlUpcaseUnicodeChar)
STUB(StfsControlDevice)
STUB(StfsCreateDevice)
STUB(XamReadTileToTexture)
STUB(XamTaskCloseHandle)
STUB(XamTaskSchedule)
STUB(XamTaskShouldExit)
STUB(XeCryptSha)
STUB(XeKeysConsolePrivateKeySign)
STUB(XeKeysConsoleSignatureVerification)
STUB(XexLoadImageHeaders)
STUB(KeSetCurrentProcessType)
STUB(NtYieldExecution)
STUB(VdSetDisplayModeOverride)

// BUBBLE BOBBLE Neo! reaches these. A missing import is a LINK error rather
// than a runtime report, so a title cannot even be built until every ordinal
// its thunk table names resolves to something - which is why they are added in
// a batch on the first link rather than one per bring-up round.
//
// The crypto three are the console's own signing and key services, used to
// sign and verify a save. There is nothing behind them here and nothing that
// could be: the keys are the console's. Stubbed rather than faked, so that a
// title checking a signature gets a failure instead of a forged pass.
STUB(XeCryptRotSumSha)
STUB(XeKeysGetKey)
STUB(XeCryptBnQwBeSigVerify)
// Resolves a content package to a path. Left stubbed until a title is seen to
// depend on the answer - XamContentCreate already refuses with PATH_NOT_FOUND,
// which is the answer a first run gets on a real console.
STUB(XamContentResolve)

// BANJO-TOOIE reaches these. Inactivity processing: the console's idle timer
// that dims the screen or powers the box down while the pad sits untouched.
// A title calls these to keep itself awake through long non-interactive
// stretches (loading, attract mode). There is no idle timer behind this
// runtime for them to manage, so there is nothing to do - and unlike the
// crypto stubs above, success here is a TRUE statement about this runtime,
// not a forged pass. Stubbed rather than wired so the first call still says so.
STUB(XamEnableInactivityProcessing)
STUB(XamResetInactivity)

// The WIDE printf family. Deliberately not stubbed, for the reason _snprintf
// above is not: a stub returns "0 characters written" and leaves the caller's
// buffer holding whatever was there, which is a plausible wrong answer rather
// than a refusal - the failure this project has now been bitten by ten times.
//
// The formatting is done by the narrow machinery and the result widened one
// byte at a time, which is Latin-1. That is the same simplification
// RtlMultiByteToUnicodeN already makes here, and the one Xenia makes too; a
// title printing a score, a filename or a gamertag gets the right characters.
// Anything outside Latin-1 would not, and that is worth knowing before this is
// relied on for text a player reads in another language.
namespace {

// Guest scratch for the wide formatters, allocated once.
//
// The wide family needs somewhere to stage, for a reason that is easy to miss
// and silently produces empty strings: **their format string is WIDE**, and
// `format_to_guest` reads a NARROW guest string. Handing it a UTF-16 format
// makes it stop at the first byte of the first character - which for
// big-endian UTF-16 is the zero high byte - so every result is the empty
// string, successfully. That is the "plausible wrong answer" this project
// keeps being bitten by, so the format is narrowed first, in guest memory,
// where the tested formatter can read it.
constexpr uint32_t kWideScratchBytes = 4096;

uint32_t wide_scratch() {
    static uint32_t block = 0;
    if (block == 0) {
        block = whitty_xenon::active_kernel()->heap().allocate(
            kWideScratchBytes * 2);
    }
    return block;
}

// Narrows a wide guest string into guest scratch, Latin-1, and returns the
// scratch address - the same simplification RtlMultiByteToUnicodeN already
// makes here and Xenia makes too.
uint32_t narrow_format(const uint8_t* base, uint32_t wide_format) {
    const uint32_t scratch = wide_scratch();
    if (scratch == 0 || wide_format == 0) return 0;
    uint32_t out = 0;
    for (; out + 1 < kWideScratchBytes; ++out) {
        // Big-endian UTF-16: the character is the low byte of each pair.
        const uint8_t high = base[wide_format + out * 2 + 0];
        const uint8_t low = base[wide_format + out * 2 + 1];
        if (high == 0 && low == 0) break;
        const_cast<uint8_t*>(base)[scratch + out] = low;
    }
    const_cast<uint8_t*>(base)[scratch + out] = 0;
    return scratch;
}

// Formats into the second half of the scratch, then widens into the caller's
// buffer. `limit` is in CHARACTERS, matching the wide functions' convention -
// reading it as bytes writes twice as far as the caller allowed.
int32_t format_wide(PPCContext& ctx, uint8_t* base, uint32_t buffer,
                    std::size_t limit, uint32_t wide_format,
                    int first_vararg) {
    if (buffer == 0 || limit == 0) return -1;
    const uint32_t format = narrow_format(base, wide_format);
    if (format == 0) return -1;
    const uint32_t staged = wide_scratch() + kWideScratchBytes;
    ppc_format_arguments<PPCContext> args(ctx, base, first_vararg);
    const int32_t written = format_to_guest(staged, kWideScratchBytes, format,
                                            args);
    if (written < 0) return -1;
    const std::size_t count = static_cast<std::size_t>(written);
    // MSVC's wide printf reports -1 when the result did not fit, rather than
    // the length it would have needed.
    if (count + 1 > limit) return -1;
    for (std::size_t i = 0; i < count; ++i) {
        base[buffer + i * 2 + 0] = 0; // big-endian: high byte first
        base[buffer + i * 2 + 1] = base[staged + i];
    }
    base[buffer + count * 2 + 0] = 0;
    base[buffer + count * 2 + 1] = 0;
    return static_cast<int32_t>(count);
}

} // namespace

// swprintf(buffer, format, ...). No count argument, so the caller is promising
// the buffer is big enough; a ceiling is applied anyway rather than trusting it.
void __imp__swprintf(PPCContext& ctx, uint8_t* base) {
    static import_counter whitty_calls("swprintf");
    whitty_calls.calls.fetch_add(1, std::memory_order_relaxed);
    ctx.r3.u64 = static_cast<uint32_t>(
        format_wide(ctx, base, ctx.r3.u32, 2048, ctx.r4.u32, 2));
}

// _snwprintf(buffer, count, format, ...) - count is in CHARACTERS, not bytes.
void __imp___snwprintf(PPCContext& ctx, uint8_t* base) {
    static import_counter whitty_calls("_snwprintf");
    whitty_calls.calls.fetch_add(1, std::memory_order_relaxed);
    ctx.r3.u64 = static_cast<uint32_t>(
        format_wide(ctx, base, ctx.r3.u32, ctx.r4.u32, ctx.r5.u32, 3));
}

// vswprintf(buffer, count, format, va_list) - the one Bubble Bobble actually
// reaches, and the first unimplemented import in its call order. Its stub
// returned "0 characters written" and left the buffer untouched, and the title
// segfaulted on the result a moment later.
//
// The arguments come from a guest va_list rather than the register file, which
// is the only difference from _snwprintf above.
void __imp__vswprintf(PPCContext& ctx, uint8_t* base) {
    static import_counter whitty_calls("vswprintf");
    whitty_calls.calls.fetch_add(1, std::memory_order_relaxed);
    const uint32_t buffer = ctx.r3.u32;
    const uint32_t limit = ctx.r4.u32;
    const uint32_t wide_format = ctx.r5.u32;
    const uint32_t va_list_ptr = ctx.r6.u32;
    if (buffer == 0 || limit == 0) {
        ctx.r3.u64 = static_cast<uint32_t>(-1);
        return;
    }
    const uint32_t format = narrow_format(base, wide_format);
    if (format == 0) {
        ctx.r3.u64 = static_cast<uint32_t>(-1);
        return;
    }
    const uint32_t staged = wide_scratch() + kWideScratchBytes;
    guest_array_arguments args(va_list_ptr);
    const int32_t written = format_to_guest(staged, kWideScratchBytes, format,
                                            args);
    if (written < 0) {
        ctx.r3.u64 = static_cast<uint32_t>(-1);
        return;
    }
    const std::size_t count = static_cast<std::size_t>(written);
    if (count + 1 > limit) {
        ctx.r3.u64 = static_cast<uint32_t>(-1);
        return;
    }
    for (std::size_t i = 0; i < count; ++i) {
        base[buffer + i * 2 + 0] = 0;
        base[buffer + i * 2 + 1] = base[staged + i];
    }
    base[buffer + count * 2 + 0] = 0;
    base[buffer + count * 2 + 1] = 0;
    ctx.r3.u64 = static_cast<uint32_t>(count);
}

// _vscwprintf(format, args) asks how long the result WOULD be and writes
// nothing, so the caller can size an allocation. There is no buffer to format
// into and no guest scratch to borrow, so it is NOT answered with a plausible
// number: a wrong length here sizes the next allocation and the overflow lands
// somewhere else entirely. It reports itself on first call instead, in call
// order, which is the bring-up worklist - if a title ever reaches it, that is
// the moment to give it a real answer.
STUB(_vscwprintf)

// _snprintf is the third member of the variadic printf family and needs the
// register file for the same reason sprintf does. It is written out properly
// rather than stubbed because a stub would return "0 characters written" and
// leave the buffer holding whatever was there - a plausible wrong answer, where
// the correct one is four lines away and already tested through sprintf.
void __imp___snprintf(PPCContext& ctx, uint8_t* base) {
    const uint32_t buffer = ctx.r3.u32;
    const uint32_t count = ctx.r4.u32;
    const uint32_t format = ctx.r5.u32;
    ppc_format_arguments<PPCContext> args(ctx, base, 3);
    const int32_t written = format_to_guest(buffer, count, format, args);
    // The MSVC _snprintf reports -1 when the result did not fit, unlike the
    // C99 snprintf, which reports the length it would have needed.
    ctx.r3.u64 = static_cast<uint32_t>(
        (written >= 0 && static_cast<uint32_t>(written) >= count) ? -1 : written);
}


// --- added for Midnight Club LA -------------------------------------------
// Retail title, so a wider import surface than the XBLA games. These two are
// in its thunk table; whether they are reached is what the runtime report
// answers. Stubs return zero and name themselves on first call.
STUB(KeSetDisableBoostThread)
// XamInputGetKeystrokeEx is implemented for real now - the stub's zero return
// hung the title's keystroke-drain loop (see kernel_handlers.cpp).
