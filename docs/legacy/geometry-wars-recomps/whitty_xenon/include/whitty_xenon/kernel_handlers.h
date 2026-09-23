// kernel_handlers.h - the first Xbox 360 kernel entry points, as C++ functions.
//
// Each of these is one of the 239 imports Alien Breed needs. Written as an
// ordinary function - `uint32_t ExAllocatePool(uint32_t)` - it becomes a guest
// function by wrapping it in host_function, which reads its arguments out of the
// registers and writes its result back per the calling convention. A guest
// pointer arrives as a `uint32_t` guest address; the handler reaches through
// `active_kernel()->memory()` to read or write it, so the big-endian boundary
// stays in guest_memory's accessors and nowhere else.
//
// The behaviour of each handler is taken from Xenia (BSD 3-Clause), which is the
// behavioural oracle for this whole effort: matching it is what lets Xenia be
// diffed against later to find the first divergence.
#pragma once

#include <cstdint>

#include "whitty_xenon/kernel.h"

namespace whitty_xenon {

// Runs the XMA hardware for every context the title has kicked and not yet had
// serviced; call periodically from the host. Returns how many 256-byte output
// blocks were produced. A title that kicks through the kernel gets its work
// done inside XMAEnableContext, so this is the path for one that writes the
// kick register directly.
uint32_t xma_pump();

// One work pass for a single context: decode as far as its output ring has
// room, retiring input buffers as they are read. Returns the blocks written.
uint32_t xma_work_context(uint32_t context_ptr);

// Room left in a context's output ring, in 256-byte blocks, stopping one short
// of the read offset - with only offsets to go by, a ring that is exactly full
// is indistinguishable from an empty one.
uint32_t xma_output_free_blocks(uint32_t read_offset, uint32_t write_offset,
                                uint32_t blocks);

// Every output block the hardware has written since the process started,
// however it was driven. The pump's return value only covers its own ticks.
uint64_t xma_blocks_written();

// NTSTATUS values a handler returns. Fixed platform constants (from Xenia's
// xbox.h); success is zero, failures have the top two bits set.
namespace x_status {
inline constexpr uint32_t success = 0x00000000u;
inline constexpr uint32_t buffer_overflow = 0x80000005u;
inline constexpr uint32_t no_more_files = 0x80000006u;
inline constexpr uint32_t unsuccessful = 0xC0000001u;
inline constexpr uint32_t invalid_info_class = 0xC0000003u;
inline constexpr uint32_t info_length_mismatch = 0xC0000004u;
inline constexpr uint32_t invalid_parameter = 0xC000000Du;
inline constexpr uint32_t invalid_handle = 0xC0000008u;
inline constexpr uint32_t no_such_file = 0xC000000Fu;
inline constexpr uint32_t end_of_file = 0xC0000011u;
inline constexpr uint32_t no_memory = 0xC0000017u;
inline constexpr uint32_t access_denied = 0xC0000022u;
inline constexpr uint32_t buffer_too_small = 0xC0000023u;
inline constexpr uint32_t object_type_mismatch = 0xC0000024u;
inline constexpr uint32_t object_name_invalid = 0xC0000033u;
inline constexpr uint32_t object_name_not_found = 0xC0000034u;
inline constexpr uint32_t object_name_collision = 0xC0000035u;
inline constexpr uint32_t memory_not_allocated = 0xC00000A0u;
inline constexpr uint32_t not_a_directory = 0xC0000103u;
inline constexpr uint32_t file_is_a_directory = 0xC00000BAu;
inline constexpr uint32_t driver_entrypoint_not_found = 0xC0000263u;
inline constexpr uint32_t not_found = 0xC0000225u;
} // namespace x_status

// Page-protection flags, as the guest passes them (from Xenia's kernel.h).
namespace x_page {
inline constexpr uint32_t noaccess = 0x00000001u;
inline constexpr uint32_t readonly = 0x00000002u;
inline constexpr uint32_t readwrite = 0x00000004u;
} // namespace x_page

// Allocation-type / free-type flags, as the guest passes them (from Xenia's
// kernel.h). Only the ones these handlers act on are named.
namespace x_mem {
inline constexpr uint32_t commit = 0x00001000u;
inline constexpr uint32_t reserve = 0x00002000u;
inline constexpr uint32_t decommit = 0x00004000u;
inline constexpr uint32_t release = 0x00008000u;
inline constexpr uint32_t reset = 0x00080000u;
inline constexpr uint32_t nozero = 0x00800000u;
inline constexpr uint32_t large_pages = 0x20000000u;
inline constexpr uint32_t pages_16mb = 0x80000000u;
} // namespace x_mem

// --- xboxkrnl.exe pool allocation ---------------------------------------
// Small allocations (<= 0xFD8) carry an 8-byte header so ExFreePool can find
// the real base; larger ones are page-aligned and have none. See the .cpp.
uint32_t ExAllocatePool(uint32_t size);
uint32_t ExAllocatePoolWithTag(uint32_t size, uint32_t tag);
uint32_t ExAllocatePoolTypeWithTag(uint32_t size, uint32_t tag,
                                   uint32_t pool_selector);
void ExFreePool(uint32_t base_address);

// --- xboxkrnl.exe virtual memory ----------------------------------------
// base_ptr and size_ptr are guest addresses of in/out ULONGs. On success the
// chosen base and rounded size are written back and STATUS_SUCCESS returned.
uint32_t NtAllocateVirtualMemory(uint32_t base_ptr, uint32_t size_ptr,
                                 uint32_t alloc_type, uint32_t protect,
                                 uint32_t debug_memory);
uint32_t NtFreeVirtualMemory(uint32_t base_ptr, uint32_t size_ptr,
                             uint32_t free_type, uint32_t debug_memory);

// --- xboxkrnl.exe utility ------------------------------------------------
// Counts leading bytes of [source, source+length) whose 32-bit words all equal
// pattern; length is truncated to a multiple of four. Returns the byte count.
uint32_t RtlCompareMemoryUlong(uint32_t source, uint32_t length,
                               uint32_t pattern);

// The Xbox 360 timebase, 50 MHz.
uint32_t KeQueryPerformanceFrequency();

// Records the (NUL-terminated) format string to the kernel's debug log. Full
// printf-style formatting of the variadic arguments is a later refinement.
uint32_t DbgPrint(uint32_t format_ptr);

// --- xboxkrnl.exe critical sections -------------------------------------
// A guest X_RTL_CRITICAL_SECTION is 28 bytes: an 0x10-byte dispatch header,
// then lock_count (0x10), recursion_count (0x14) and owning_thread (0x18).
// owning_thread holds the calling thread's guest KTHREAD, which is what guest
// code comparing it against KeGetCurrentThread() expects to find. Enter really
// blocks until the holder leaves, is re-entrant for the holder, and ignores a
// leave from any other thread. `cs` is a guest address.
void RtlInitializeCriticalSection(uint32_t cs);
uint32_t RtlInitializeCriticalSectionAndSpinCount(uint32_t cs,
                                                  uint32_t spin_count);
void RtlEnterCriticalSection(uint32_t cs);
void RtlLeaveCriticalSection(uint32_t cs);
uint32_t RtlTryEnterCriticalSection(uint32_t cs); // 1 acquired, 0 contended

// --- xboxkrnl.exe interlocked singly-linked lists -----------------------
// A guest X_SLIST_HEADER is 8 bytes: head pointer (0x0), depth (0x4, u16),
// sequence (0x6, u16). A title uses these because it has several threads on one
// list and wants no lock, so all three are serialised against each other -
// without that, two pushes read the same head and one entry is lost.
uint32_t InterlockedPushEntrySList(uint32_t list, uint32_t entry); // old head
uint32_t InterlockedPopEntrySList(uint32_t list);                  // popped, 0 if empty
uint32_t InterlockedFlushSList(uint32_t list);                     // old head

// --- xboxkrnl.exe spin locks / IRQL -------------------------------------
// The spin locks are real: guest threads are host threads, so the lock word is
// operated on with a compare-and-swap and holds the calling thread as its owner.
//
// The IRQL is real per-thread state too - it lives in the calling thread's KPCR,
// where guest code reads it - but raising it masks nothing, because the runtime
// has no interrupts to mask and delivers the one it does raise (vblank) on a
// host thread of its own. What that means for a title is spelled out at
// KeRaiseIrqlToDpcLevel in kernel_handlers.cpp.
uint32_t KfAcquireSpinLock(uint32_t lock);        // returns the prior IRQL
void KfReleaseSpinLock(uint32_t lock, uint32_t old_irql);
void KeAcquireSpinLockAtRaisedIrql(uint32_t lock);
void KeReleaseSpinLockFromRaisedIrql(uint32_t lock);
// Holds off the delivery of kernel APCs to the calling thread, counted in its
// own KTHREAD. Not a lock: it excludes no other thread.
void KeEnterCriticalRegion();
void KeLeaveCriticalRegion();
uint32_t KeRaiseIrqlToDpcLevel();                 // returns the prior IRQL
uint32_t KfRaiseIrql(uint32_t new_irql);          // returns the prior IRQL
void KfLowerIrql(uint32_t new_irql);

// --- xboxkrnl.exe RTL utilities -----------------------------------------
// Fills [dest, dest+length) with a repeating 32-bit pattern; length is used as
// a count of whole words (its low two bits are ignored).
void RtlFillMemoryUlong(uint32_t dest, uint32_t length, uint32_t pattern);

// Initialise an 8-byte guest STRING/UNICODE_STRING (length, maximum_length,
// pointer) to describe the NUL-terminated string at `source`. The ANSI form
// counts bytes; the Unicode form counts 16-bit code units. Unicode returns the
// destination address; ANSI returns nothing.
void RtlInitAnsiString(uint32_t destination, uint32_t source);
uint32_t RtlInitUnicodeString(uint32_t destination, uint32_t source);

// --- xboxkrnl.exe process / debug / firmware ----------------------------
// The running process is the title, so this reports X_PROCTYPE_TITLE.
uint32_t KeGetCurrentProcessType();

// A guest-initiated stop. Rather than taking the host process down, these
// record the request on the kernel so the host loop can react; the guest does
// not run past them.
void KeBugCheck(uint32_t code);
void KeBugCheckEx(uint32_t code, uint32_t p1, uint32_t p2, uint32_t p3,
                  uint32_t p4);
void HalReturnToFirmware(uint32_t routine);

// Stubs: no floating-point exception state or host debugger is modelled, and
// there is no file cache to size.
void KeEnableFpuExceptions(uint32_t enabled);
void DbgBreakPoint();
uint32_t FscSetCacheElementCount(uint32_t unk0, uint32_t unk1);

// --- xboxkrnl.exe events -------------------------------------------------
// An event's state is its dispatcher header's signal_state; type 0 is a manual
// (notification) event, type 1 an auto (synchronization) event. The Ke* forms
// take the guest X_KEVENT pointer directly; the Nt* forms take a handle. The
// set/reset/pulse calls return the previous signalled state. A pulse releases
// the threads already waiting and leaves the event unsignalled - which needs
// more than clearing the state, since a released waiter finds nothing to see.
uint32_t NtCreateEvent(uint32_t handle_ptr, uint32_t object_attributes,
                       uint32_t event_type, uint32_t initial_state);
void KeInitializeEvent(uint32_t event_ptr, uint32_t event_type,
                       uint32_t initial_state);
// Takes a spin lock if it is free, without waiting. Real compare-and-swap on
// the guest word, because guest threads are host threads and two of them can
// genuinely race for it.
uint32_t KeTryToAcquireSpinLockAtRaisedIrql(uint32_t lock_ptr);
uint32_t KeSetEvent(uint32_t event_ptr, uint32_t increment, uint32_t wait);
uint32_t KeResetEvent(uint32_t event_ptr);
uint32_t KePulseEvent(uint32_t event_ptr, uint32_t increment, uint32_t wait);
uint32_t NtSetEvent(uint32_t handle, uint32_t previous_state_ptr);
uint32_t NtClearEvent(uint32_t handle);
uint32_t NtPulseEvent(uint32_t handle, uint32_t previous_state_ptr);

// --- xboxkrnl.exe semaphores --------------------------------------------
// A semaphore's count is its dispatcher header's signal_state, with its limit at
// offset 0x10. Release ADDS to the count, returns the previous one, and wakes the
// threads blocked on it - a count advanced without a wake leaves a released
// waiter asleep, since a waiter only re-tests its object when something wakes
// it. Acquiring is a wait: see KeWaitForSingleObject.
void KeInitializeSemaphore(uint32_t semaphore_ptr, uint32_t count,
                           uint32_t limit);
uint32_t KeReleaseSemaphore(uint32_t semaphore_ptr, uint32_t increment,
                            uint32_t adjustment, uint32_t wait);

// --- xboxkrnl.exe reader/writer locks ------------------------------------
// A guest-allocated X_ERWLOCK (0x38 bytes): a lock count, waiting counts for
// each side, an event writers block on and a semaphore readers block on, all
// guarded by an embedded spin lock. Jetpac Refuelled (584107FB) is the first
// title here to use them.
//
// These MUST exclude for real. A no-op that returns is the recurring failure
// this project keeps finding - the same shape as a critical section whose owner
// always compared equal to the caller, which let every thread walk into every
// guarded region and showed up as an intermittent null vtable read nowhere near
// the lock. There is nothing to gain by faking these: every primitive they need
// already exists above.
//
// The algorithm is Xenia's (xboxkrnl_threading.cc, BSD-3, Copyright 2021 Ben
// Vanik), which is the only written-down account of what the console does with
// the four counters - in particular that `lock_count` starts at -1, that a
// reader joins an existing read group only while no writer is waiting, and that
// releasing hands the lock to the whole waiting read group at once.
void ExInitializeReadWriteLock(uint32_t lock_ptr);
void ExAcquireReadWriteLockExclusive(uint32_t lock_ptr);
void ExAcquireReadWriteLockShared(uint32_t lock_ptr);
void ExReleaseReadWriteLock(uint32_t lock_ptr);

// --- xboxkrnl.exe handle lifetime ---------------------------------------
uint32_t NtClose(uint32_t handle);
uint32_t NtDuplicateObject(uint32_t handle, uint32_t new_handle_ptr,
                           uint32_t options);
uint32_t ObReferenceObjectByHandle(uint32_t handle, uint32_t object_type_ptr,
                                   uint32_t out_object_ptr);
void ObDereferenceObject(uint32_t object_ptr);
// Takes a reference on an object the caller already has a pointer to, as
// opposed to one named by a handle. Object lifetime here is owned by the object
// table rather than by a guest-visible reference count, so this is the
// counterpart to ObDereferenceObject: both are accepted and neither frees.
uint32_t ObReferenceObject(uint32_t object_ptr);

// --- xboxkrnl.exe physical memory ---------------------------------------
// Physical allocations come from the physical-alias region; the returned
// address is a guest pointer into that region, and MmGetPhysicalAddress turns
// it into the raw physical address (its offset from the region base). Page
// protection is not modelled: the query reports read/write and the set is a
// no-op. Needs the runtime to have installed a physical heap.
uint32_t MmAllocatePhysicalMemoryEx(uint32_t flags, uint32_t region_size,
                                    uint32_t protect_bits,
                                    uint32_t min_address, uint32_t max_address,
                                    uint32_t alignment);
void MmFreePhysicalMemory(uint32_t type, uint32_t base_address);
uint32_t MmGetPhysicalAddress(uint32_t base_address);
uint32_t MmQueryAddressProtect(uint32_t base_address);
void MmSetAddressProtect(uint32_t base_address, uint32_t region_size,
                         uint32_t protect_bits);
uint32_t MmQueryStatistics(uint32_t stats_ptr);
// The size of the block at `base_address`, which is what the console's own
// allocators call to size a realloc or a copy. Answered from the heap's record
// rather than guessed: reporting zero for a live block is the kind of plausible
// wrong answer that shows up later as a truncated copy.
uint32_t MmQueryAllocationSize(uint32_t base_address);
// Maps a physical range for direct device access. There are no MMIO devices
// behind this runtime, so it hands back a null mapping - a failure a caller can
// see, rather than a pointer into nothing.
uint32_t MmMapIoSpace(uint32_t unknown, uint32_t physical_address,
                      uint32_t region_size, uint32_t flags);

// --- xboxkrnl.exe files --------------------------------------------------
// A file is named by a guest device path inside an X_OBJECT_ATTRIBUTES; it is
// opened against the mounted host directories, and its handle is a file object
// in the table. Reads and writes copy bytes between the host file and guest
// memory and report the byte count in the X_IO_STATUS_BLOCK.
//
// Every call here is completed synchronously. A title passes an event handle
// and an APC routine so the console can complete the I/O later; we finish
// before returning, so the event is signalled immediately and the APC is not
// queued at all. That is what Xenia does for the same reason, and a title
// cannot tell the difference because it always waits on the event it passed.
//
// The information classes are the ones UE3 uses to size and seek through its
// cooked packages. Anything else is refused with INVALID_INFO_CLASS rather
// than answered with zeroes: in these APIs zero means success, so an invented
// answer is worse than an honest refusal.

// File information classes, as NtQueryInformationFile / NtSetInformationFile
// receive them. Only the ones with real behaviour are named.
namespace x_file_info_class {
inline constexpr uint32_t basic = 4;
inline constexpr uint32_t internal = 6;
inline constexpr uint32_t name = 9;
inline constexpr uint32_t disposition = 13;
inline constexpr uint32_t position = 14;
inline constexpr uint32_t mode = 16;
inline constexpr uint32_t alignment = 17;
inline constexpr uint32_t allocation = 19;
inline constexpr uint32_t end_of_file = 20;
inline constexpr uint32_t sector = 27;
inline constexpr uint32_t xctd_compression = 28;
inline constexpr uint32_t completion = 30;
inline constexpr uint32_t io_priority = 32;
inline constexpr uint32_t network_open = 34;
} // namespace x_file_info_class

// Volume information classes for NtQueryVolumeInformationFile.
namespace x_volume_info_class {
inline constexpr uint32_t volume = 1;
inline constexpr uint32_t size = 3;
inline constexpr uint32_t device = 4;
inline constexpr uint32_t attribute = 5;
} // namespace x_volume_info_class

uint32_t NtCreateFile(uint32_t handle_out, uint32_t desired_access,
                      uint32_t object_attributes, uint32_t io_status_block,
                      uint32_t allocation_size_ptr, uint32_t file_attributes,
                      uint32_t share_access, uint32_t creation_disposition,
                      uint32_t create_options);
uint32_t NtOpenFile(uint32_t handle_out, uint32_t desired_access,
                    uint32_t object_attributes, uint32_t io_status_block,
                    uint32_t open_options);
uint32_t NtReadFile(uint32_t file_handle, uint32_t event_handle,
                    uint32_t apc_routine, uint32_t apc_context,
                    uint32_t io_status_block, uint32_t buffer,
                    uint32_t buffer_length, uint32_t byte_offset_ptr);
// The scatter form fills a list of separate 4 KiB pages from one contiguous
// run of the file - UE3 uses it to read a package straight into the pages its
// allocator handed out, without a staging copy.
uint32_t NtReadFileScatter(uint32_t file_handle, uint32_t event_handle,
                           uint32_t apc_routine, uint32_t apc_context,
                           uint32_t io_status_block, uint32_t segment_array,
                           uint32_t length, uint32_t byte_offset_ptr);
uint32_t NtWriteFile(uint32_t file_handle, uint32_t event_handle,
                     uint32_t apc_routine, uint32_t apc_context,
                     uint32_t io_status_block, uint32_t buffer,
                     uint32_t buffer_length, uint32_t byte_offset_ptr);
uint32_t NtFlushBuffersFile(uint32_t file_handle, uint32_t io_status_block);

// Metadata by path, without opening anything: fills an
// X_FILE_NETWORK_OPEN_INFORMATION (56 bytes). This is how a title asks "does
// this file exist, and how big is it?".
uint32_t NtQueryFullAttributesFile(uint32_t object_attributes,
                                   uint32_t file_info_ptr);

// Metadata and cursor by handle.
uint32_t NtQueryInformationFile(uint32_t file_handle, uint32_t io_status_block,
                                uint32_t info_ptr, uint32_t info_length,
                                uint32_t info_class);
uint32_t NtSetInformationFile(uint32_t file_handle, uint32_t io_status_block,
                              uint32_t info_ptr, uint32_t info_length,
                              uint32_t info_class);
uint32_t NtQueryVolumeInformationFile(uint32_t file_handle,
                                      uint32_t io_status_block,
                                      uint32_t info_ptr, uint32_t info_length,
                                      uint32_t info_class);

// One directory entry per call, into an X_FILE_DIRECTORY_INFORMATION. A name
// with wildcards filters the scan and restarts it; an empty name continues.
uint32_t NtQueryDirectoryFile(uint32_t file_handle, uint32_t event_handle,
                              uint32_t apc_routine, uint32_t apc_context,
                              uint32_t io_status_block, uint32_t file_info_ptr,
                              uint32_t length, uint32_t file_name_ptr,
                              uint32_t restart_scan);

// --- xboxkrnl.exe structured exception handling --------------------------
// A title's C++ runtime and its crash handler both go through these. Real SEH
// over statically recompiled code would mean unwinding native frames from
// guest unwind data, which is a project of its own; what these do instead is
// refuse to unwind and say so, which is honest and keeps a title that only
// registers handlers (rather than actually throwing) running.
//
// RtlRaiseException is the exception: it is also how a title names its threads
// and reports a C++ throw, and both of those are worth recording rather than
// discarding.
namespace x_exception {
inline constexpr uint32_t set_thread_name = 0x406D1388u;
inline constexpr uint32_t cpp_exception = 0xE06D7363u;
} // namespace x_exception

void RtlRaiseException(uint32_t record_ptr);
void RtlUnwind(uint32_t target_frame, uint32_t target_ip, uint32_t record_ptr,
               uint32_t return_value);
// Snapshots the caller's register state into a guest X_CONTEXT, which is how a
// title captures a stack for its own crash reporting. The recompiled CPU keeps
// its state in a PPCContext rather than on a PowerPC stack frame, so the
// register values a console would record are not reachable from here. It writes
// a zeroed, correctly sized block: a caller that walks it finds a terminated
// chain instead of whatever the buffer held before, which is the difference
// between "no stack recorded" and a walk through uninitialised memory.
void RtlCaptureContext(uint32_t context_ptr);
// The language-specific handler the compiler emits calls into. Reporting
// "continue searching" leaves the exception to whatever is above, which for an
// unwound-through frame is the right answer and for an unhandled one ends in
// the title's own top-level handler rather than here.
uint32_t __C_specific_handler(uint32_t record_ptr, uint32_t frame,
                              uint32_t context_ptr, uint32_t dispatch_ptr);

// --- xboxkrnl.exe XMA audio ----------------------------------------------
// The 360 decodes XMA in hardware through the contexts described in apu/xma.h:
// a 64-byte block of packed bitfields per voice, living in physical memory,
// which the title fills in and the hardware consumes. These calls are the
// title's only way to touch one - it never writes the bitfields itself.
//
// The handshake behind them is a rate loop, and getting the rate wrong stops a
// title's audio dead rather than distorting it:
//
//   - The title queues packets into one of two input buffers and marks it
//     valid. The hardware decodes into a small ring of 256-byte output blocks
//     and clears the valid bit only once the last packet has been read.
//   - Every service pass the title compares the ring's write offset against
//     its own read cursor, mixes what is there, pushes the read offset back,
//     and - if either input buffer is still valid - kicks the context again
//     with XMAEnableContext. One kick is one work pass, exactly as writing the
//     kick register is.
//   - If a pass finds no progress anywhere, the title concludes the voice has
//     finished and stops it. So consuming a whole input buffer in one go looks
//     to the title like a stream that ended: it plays one buffer and goes
//     silent. Decoding only as far as the ring has room is what keeps the loop
//     turning.
uint32_t XMACreateContext(uint32_t context_out_ptr);
uint32_t XMAReleaseContext(uint32_t context_ptr);
uint32_t XMAInitializeContext(uint32_t context_ptr, uint32_t init_ptr);
uint32_t XMASetLoopData(uint32_t context_ptr, uint32_t loop_data_ptr);
uint32_t XMAGetInputBufferReadOffset(uint32_t context_ptr);
uint32_t XMASetInputBufferReadOffset(uint32_t context_ptr, uint32_t value);
uint32_t XMASetInputBuffer0(uint32_t context_ptr, uint32_t buffer,
                            uint32_t packet_count);
uint32_t XMAIsInputBuffer0Valid(uint32_t context_ptr);
uint32_t XMASetInputBuffer0Valid(uint32_t context_ptr);
uint32_t XMASetInputBuffer1(uint32_t context_ptr, uint32_t buffer,
                            uint32_t packet_count);
uint32_t XMAIsInputBuffer1Valid(uint32_t context_ptr);
uint32_t XMASetInputBuffer1Valid(uint32_t context_ptr);
uint32_t XMAIsOutputBufferValid(uint32_t context_ptr);
uint32_t XMASetOutputBufferValid(uint32_t context_ptr);
uint32_t XMAGetOutputBufferReadOffset(uint32_t context_ptr);
uint32_t XMASetOutputBufferReadOffset(uint32_t context_ptr, uint32_t value);
uint32_t XMAGetOutputBufferWriteOffset(uint32_t context_ptr);
uint32_t XMAGetPacketMetadata(uint32_t context_ptr);
uint32_t XMAEnableContext(uint32_t context_ptr);
uint32_t XMADisableContext(uint32_t context_ptr, uint32_t wait);
uint32_t XMABlockWhileInUse(uint32_t context_ptr);

// --- xboxkrnl.exe video / GPU bridge ------------------------------------
// These are how the recompiled title drives the GPU. The title allocates a
// command ring in physical memory and hands it over with VdInitializeRingBuffer;
// it writes PM4 packets into that ring and calls VdSwap to present a frame. What
// each call is told is recorded in kernel_state::video() for the GPU layer to
// act on. Behaviour follows Xenia.

// Writes a 48-byte X_VIDEO_MODE describing the display (1280x720, 60Hz).
void VdQueryVideoMode(uint32_t video_mode_ptr);
// Widescreen / resolution bits derived from that mode.
uint32_t VdQueryVideoFlags();
// Fills the larger display-information block the title queries at startup.
void VdGetCurrentDisplayInformation(uint32_t display_info_ptr);
// Reports the display gamma: type (BT.709) and its power.
void VdGetCurrentDisplayGamma(uint32_t type_ptr, uint32_t power_ptr);
// Which graphics ASIC this is. A title compares it against 0x10 to decide
// whether it must initialise EDRAM itself or leave it to the newer silicon.
uint32_t VdGetGraphicsAsicID();
void VdInitializeEDRAM();

// Engine bring-up. Titles often initialise, query, shut down and re-initialise.
uint32_t VdInitializeEngines(uint32_t unk0, uint32_t callback, uint32_t callback_arg,
                             uint32_t pfp_microcode_ptr, uint32_t me_microcode_ptr);
void VdShutdownEngines();
uint32_t VdEnableDisableClockGating(uint32_t enabled);
uint32_t VdIsHSIOTrainingSucceeded();
uint32_t VdSetDisplayMode(uint32_t flags);

// The PM4 command ring: `ptr` is a physical address, `size_log2` its power-of-
// two size. This is the seam the guest's command stream arrives through.
void VdInitializeRingBuffer(uint32_t ptr, uint32_t size_log2);
// Where the GPU writes back how far it has consumed the ring.
void VdEnableRingBufferRPtrWriteBack(uint32_t ptr, uint32_t block_size_log2);
// The guest routine to call on a graphics interrupt, plus its user argument.
void VdSetGraphicsInterruptCallback(uint32_t callback, uint32_t user_data);
void VdCallGraphicsNotificationRoutines(uint32_t unk0);
// Hands back the two system command buffer identifiers the title expects.
void VdGetSystemCommandBuffer(uint32_t p0_ptr, uint32_t p1_ptr);
void VdSetSystemCommandBufferGpuIdentifierAddress(uint32_t address);

// Fills a command buffer with NOP packets and reports how many words it wrote.
uint32_t VdInitializeScalerCommandBuffer(
    uint32_t scaler_source_xy, uint32_t scaler_source_wh,
    uint32_t scaled_output_xy, uint32_t scaled_output_wh,
    uint32_t front_buffer_wh, uint32_t vertical_filter_type,
    uint32_t vertical_filter_params, uint32_t horizontal_filter_type,
    uint32_t horizontal_filter_params, uint32_t unk9, uint32_t dest_ptr,
    uint32_t dest_count);

// EDRAM retraining and display persistence: nothing to model, but the title
// checks the results.
uint32_t VdPersistDisplay(uint32_t unk0, uint32_t unk1_ptr);
uint32_t VdRetrainEDRAM(uint32_t unk0, uint32_t unk1, uint32_t unk2,
                        uint32_t unk3, uint32_t unk4, uint32_t unk5);
uint32_t VdRetrainEDRAMWorker(uint32_t unk0);

// Presents a frame. The front buffer's address, size and format are recorded
// and the swap counter advances - that is the frame boundary the host loop and
// the GPU present path key off.
void VdSwap(uint32_t buffer_ptr, uint32_t fetch_ptr, uint32_t unk2,
            uint32_t unk3, uint32_t unk4, uint32_t frontbuffer_ptr,
            uint32_t texture_format_ptr, uint32_t color_space_ptr,
            uint32_t width_ptr, uint32_t height_ptr);


// --- xboxkrnl.exe threads: local storage and waiting --------------------
// Guest threads are host threads (see thread.h), so a wait really blocks and
// another thread signalling a dispatcher object really wakes it.

// A TLS slot index is process-wide; the value stored in it is per-thread.
// KeTlsAlloc reports 0xFFFFFFFF when every slot is taken.
uint32_t KeTlsAlloc();
uint32_t KeTlsFree(uint32_t slot);
uint32_t KeTlsGetValue(uint32_t slot);
uint32_t KeTlsSetValue(uint32_t slot, uint32_t value);

// Writes the current system time as 100ns ticks since 1601 into a guest
// 64-bit field.
void KeQuerySystemTime(uint32_t time_ptr);

// Sleeps the calling thread. `interval_ptr` points at a 64-bit tick count,
// negative for a relative delay. Returns STATUS_SUCCESS.
uint32_t KeDelayExecutionThread(uint32_t processor_mode, uint32_t alertable,
                                uint32_t interval_ptr);

// Waits on a dispatcher object until it is signalled or the timeout expires.
// A successful wait consumes the signal of an auto-reset event or a semaphore
// and leaves a manual-reset event signalled. Returns 0 when signalled and
// 0x102 (STATUS_TIMEOUT) when the timeout expired.
uint32_t KeWaitForSingleObject(uint32_t object_ptr, uint32_t wait_reason,
                               uint32_t wait_mode, uint32_t alertable,
                               uint32_t timeout_ptr);
// The same, naming the object by handle.
// Waits on several objects at once. `wait_type` is x_wait::wait_all or
// x_wait::wait_any; the return value names which object satisfied an "any"
// wait, as object_0 plus its index. A title's worker threads block here on a
// work-available event and a shutdown event together, so a stub that returns
// immediately turns every such loop into a spin.
uint32_t KeWaitForMultipleObjects(uint32_t count, uint32_t objects_ptr,
                                  uint32_t wait_type, uint32_t wait_reason,
                                  uint32_t processor_mode, uint32_t alertable,
                                  uint32_t timeout_ptr,
                                  uint32_t wait_block_array_ptr);
uint32_t NtWaitForMultipleObjectsEx(uint32_t count, uint32_t handles_ptr,
                                    uint32_t wait_type, uint32_t wait_mode,
                                    uint32_t alertable, uint32_t timeout_ptr);

// Mutants are the console's mutexes. A title holds one across a data
// structure; handing back a null handle leaves that structure unguarded, and
// the damage shows up as corrupted pointers far from the race.
//
// They are the one dispatcher object whose availability depends on WHO asks:
// recursive for the thread holding it (count 1 free, 0 held once, -1 held twice,
// owner at offset 0x18) and closed to everyone else.
//
// The owner is only as complete as what the kernel saw. A title's own runtime
// claims an uncontended mutant in guest code with an interlocked decrement and
// enters the kernel only to release it, so a release from a thread with no
// recorded ownership is normal and is honoured; ownership is used for what it
// can be trusted for, which is unwinding a recursion the kernel recorded.
uint32_t NtCreateMutant(uint32_t handle_ptr, uint32_t object_attributes,
                        uint32_t initial_owner);
uint32_t NtReleaseMutant(uint32_t handle, uint32_t unknown);

// Semaphores by handle, as opposed to KeInitializeSemaphore's guest-allocated
// ones. A title uses these to count places in a queue, so the count - not just
// the signalled/not distinction - is what has to be right: releasing two must
// let exactly two waiters through.
uint32_t NtCreateSemaphore(uint32_t handle_ptr, uint32_t object_attributes,
                           uint32_t initial_count, uint32_t maximum_count);
uint32_t NtReleaseSemaphore(uint32_t handle, uint32_t release_count,
                            uint32_t previous_count_ptr);

// Hand off in one step: signal one object and wait on another. A producer uses
// it to publish a buffer and then wait for the next free one, and the two
// halves cannot be separated - signalling without waiting lets the producer run
// away with the consumer's buffer.
uint32_t NtSignalAndWaitForSingleObjectEx(uint32_t signal_handle,
                                          uint32_t wait_handle,
                                          uint32_t wait_mode, uint32_t alertable,
                                          uint32_t timeout_ptr);

// Waitable timers: created unsignalled, armed with a due time and an optional
// repeat period, and signalled by the kernel when they come due.
uint32_t NtCreateTimer(uint32_t handle_ptr, uint32_t object_attributes,
                       uint32_t timer_type);
uint32_t NtSetTimerEx(uint32_t handle, uint32_t due_time_ptr,
                      uint32_t routine_ptr, uint32_t unk_one,
                      uint32_t routine_arg, uint32_t resume,
                      uint32_t period_ms, uint32_t unk_zero);
uint32_t NtCancelTimer(uint32_t handle, uint32_t current_state_ptr);

uint32_t NtWaitForSingleObjectEx(uint32_t handle, uint32_t wait_mode,
                                 uint32_t alertable, uint32_t timeout_ptr);

// Where a thread runs, and how urgently. The host scheduler decides both, so
// neither is honoured as placement - but affinity also sets the PROCESSOR NUMBER
// the thread reports in its KPCR, which guest code indexes per-processor state
// with, so that part is real. The previous affinity goes back through the
// pointer (the return value is a status, unlike Windows NT). Priority is inert:
// a title can only observe it as timing, and the previous priority reported is
// normal, which is what every thread here is.
uint32_t KeSetAffinityThread(uint32_t thread_ptr, uint32_t affinity,
                             uint32_t previous_affinity_ptr);
uint32_t KeSetBasePriorityThread(uint32_t thread_ptr, uint32_t priority);
// The counterpart query. It has to agree with what KeSetBasePriorityThread
// reports as the previous priority, or a title that sets, queries and restores
// sees its own write come back changed: both say normal (0).
uint32_t KeQueryBasePriorityThread(uint32_t thread_ptr);

// --- xboxkrnl.exe APCs and DPCs -------------------------------------------
// Deferred procedure calls, which a console driver uses to finish work at a
// lower IRQL. There is no IRQL model and no driver here, so the honest position
// is: the initialisers write the structure the title handed us - so nothing
// downstream reads uninitialised guest memory - and the queue call refuses.
//
// Refusing matters. KeInsertQueueApc returns a BOOL, and reporting TRUE for an
// APC that will never run is the recurring failure of this runtime: the title
// would then wait for a completion that cannot arrive. FALSE is a caller-visible
// "not queued", which every caller of this API already has to handle, because
// the console itself refuses when the thread has APCs disabled.
void KeInitializeApc(uint32_t apc_ptr, uint32_t thread_ptr, uint32_t kernel_routine,
                     uint32_t rundown_routine, uint32_t normal_routine,
                     uint32_t apc_mode, uint32_t normal_context);
uint32_t KeInsertQueueApc(uint32_t apc_ptr, uint32_t system_argument1,
                          uint32_t system_argument2, uint32_t priority_increment);
void KeInitializeDpc(uint32_t dpc_ptr, uint32_t routine, uint32_t context);

// --- xboxkrnl.exe module / privilege --------------------------------------
// `privilege` names a bit position in the title's XEX system-flags word (e.g.
// privilege 6 is XEX_SYSTEM_INSECURE_SOCKETS); returns whether that bit is set.
uint32_t XexCheckExecutablePrivilege(uint32_t privilege);

// Loads a module by name and hands back a handle. Only the system libraries
// ("xboxkrnl.exe", "xam.xex") are recognised - their exports are already
// serviced directly as kernel handlers, so this hands back a stable synthetic
// handle rather than mapping a real image. Any other name (a real user
// module) is not supported yet and fails with STATUS_NO_SUCH_FILE.
uint32_t XexLoadImage(uint32_t module_name_ptr, uint32_t module_flags,
                      uint32_t min_version, uint32_t hmodule_ptr);

// Hands back the callable address of an export by ordinal (a name lookup -
// ordinal with any of its top 16 bits set - is not modelled yet). Only
// resolves ordinals the title also imports statically elsewhere, since that is
// the only address this runtime can offer that an indirect call can actually
// reach (see import_patcher.h's register_import_thunks). Anything else fails
// with STATUS_DRIVER_ENTRYPOINT_NOT_FOUND, matching Xenia.
uint32_t XexGetProcedureAddress(uint32_t hmodule, uint32_t ordinal,
                                uint32_t out_function_ptr);

// Releases a reference to a module. A title cannot actually unload one of the
// system libraries this runtime hands out synthetic handles for, so this only
// validates the handle and reports success - matching Xenia, which lets a
// kernel-module unload succeed as a no-op.
uint32_t XexUnloadImage(uint32_t hmodule);

// --- xboxkrnl.exe error codes --------------------------------------------
// Maps an NTSTATUS onto the Win32 "DOS" error code a title's error-handling
// path checks. Two fast paths pass the status straight through (success, and
// a status with the "customer" bit set); the standard NTSTATUS -> Win32
// mappings this runtime itself produces are covered explicitly. Anything else
// falls back to ERROR_MR_MID_NOT_FOUND (317), matching Xenia's own fallback
// for a status it does not have a table entry for.
uint32_t RtlNtStatusToDosError(uint32_t status);

// --- xboxkrnl.exe string conversion --------------------------------------
// Widens up to min(destination_len/2, source_len) bytes into 16-bit code
// units (zero-extended, not a real codepage conversion) and reports the
// destination byte count written. Matches Xenia's own simplification.
uint32_t RtlMultiByteToUnicodeN(uint32_t destination_ptr, uint32_t destination_len,
                                uint32_t written_ptr, uint32_t source_ptr,
                                uint32_t source_len);
// The reverse: narrows 16-bit code units to bytes, substituting '?' for
// anything outside the Latin-1 range.
uint32_t RtlUnicodeToMultiByteN(uint32_t destination_ptr, uint32_t destination_len,
                                uint32_t written_ptr, uint32_t source_ptr,
                                uint32_t source_len);

// --- xam.xex --------------------------------------------------------------
// The dashboard-side library: launch data, system info, user profiles, input
// and notifications. A statically recompiled title running standalone has no
// dashboard behind it, so most of these report "nothing there" - which is a
// real, expected answer a title handles (no launch data, no signed-in user,
// no controller) rather than a failure. Behaviour follows Xenia.

// Win32-style X_ERROR_* results these return (distinct from NTSTATUS above).
namespace x_error {
inline constexpr uint32_t success = 0x00000000u;
inline constexpr uint32_t path_not_found = 0x00000003u;
inline constexpr uint32_t access_denied = 0x00000005u;
inline constexpr uint32_t invalid_handle = 0x00000006u;
inline constexpr uint32_t no_more_files = 0x00000012u;
inline constexpr uint32_t already_exists = 0x000000B7u;
inline constexpr uint32_t invalid_parameter = 0x00000057u;
inline constexpr uint32_t insufficient_buffer = 0x0000007Au;
// An asynchronous call that has been accepted. The result the title reads
// afterwards is the one written into its XAM_OVERLAPPED, not this.
inline constexpr uint32_t io_pending = 0x000003E5u;
inline constexpr uint32_t io_incomplete = 0x000003E4u;
inline constexpr uint32_t device_not_connected = 0x0000048Fu;
inline constexpr uint32_t not_found = 0x00000490u;
inline constexpr uint32_t no_such_user = 0x00000525u;
inline constexpr uint32_t empty = 0x000010D2u;
inline constexpr uint32_t function_failed = 0x0000065Bu;
} // namespace x_error

// The same failures wrapped as HRESULTs, which is what a handful of xam calls
// return instead of the raw form above. Which form a call uses is not a style
// choice: a title tests an HRESULT with FAILED(), and FAILED() is "top bit set".
// A raw 0x00000525 handed to a caller expecting an HRESULT reads as SUCCESS, so
// the title carries on with an answer the call never gave it. Xenia marks these
// calls by returning X_HRESULT_result_t and X_E_* rather than X_ERROR_*
// (xbox.h: `#define X_HRESULT_FROM_WIN32(x) ((x) <= 0 ? (x) : (0x80070000 | x))`).
namespace x_hresult {
inline constexpr uint32_t from_win32(uint32_t error) {
    return error == 0 ? 0u : (0x80070000u | error);
}
inline constexpr uint32_t success = 0x00000000u;
inline constexpr uint32_t invalid_argument = from_win32(x_error::invalid_parameter);
inline constexpr uint32_t no_such_user = from_win32(x_error::no_such_user);
inline constexpr uint32_t device_not_connected =
    from_win32(x_error::device_not_connected);
} // namespace x_hresult

// Launch data: what a title is handed when the dashboard starts it. Standalone
// there is none, so the size query reports zero and NOT_FOUND.
uint32_t XamLoaderGetLaunchDataSize(uint32_t size_ptr);
uint32_t XamLoaderGetLaunchData(uint32_t buffer_ptr, uint32_t buffer_size);
// The write side, and note it is the opposite direction to the two above: those
// read what a launcher passed *in*, this records what a future launch would read
// *out*. So "no inbound launch data" and "the outbound write succeeded" are
// consistent, not contradictory. The bytes are kept for the rest of the run and
// nothing consumes them, because nothing is relaunched - the call succeeds
// because copying them out of guest memory is the whole of its contract.
uint32_t XamLoaderSetLaunchData(uint32_t buffer_ptr, uint32_t buffer_size);
// The size of what was last set, so a test can prove the bytes were actually
// taken rather than the call merely reporting success.
uint32_t launch_data_recorded_size();
// Asks to return to the dashboard; recorded as a terminate request.
void XamLoaderTerminateTitle();

// System / console identity.
uint32_t XamGetSystemVersion();
uint32_t XGetAVPack();     // 6 = VGA
uint32_t XGetGameRegion(); // 0xFFFF = all regions
uint32_t XGetLanguage();   // 1 = English
// The xam-side alias of VdQueryVideoMode: same 48-byte X_VIDEO_MODE block.
void XGetVideoMode(uint32_t video_mode_ptr);
// Hands back the guest address of the XEX execution-info block.
uint32_t XamGetExecutionId(uint32_t info_ptr);

// xam's own allocator, backed by the same guest heap as ExAllocatePool.
uint32_t XamAlloc(uint32_t flags, uint32_t size, uint32_t out_pointer_ptr);
uint32_t XamFree(uint32_t address);

// Input. No controller is attached, so both report DEVICE_NOT_CONNECTED -
// the same answer a real console gives for an empty port.
uint32_t XamInputGetCapabilities(uint32_t user_index, uint32_t flags,
                                 uint32_t caps_ptr);
uint32_t XamInputGetState(uint32_t user_index, uint32_t flags,
                          uint32_t state_ptr);
// The keyboard/messenger queue. There is no such device here, so the answer
// is DEVICE_NOT_CONNECTED and the keystroke struct is zeroed (Xenia's order:
// zero first, then answer). MCLA's front end drains this in a loop that exits
// only on a non-zero return - a stub answering success loops forever.
uint32_t XamInputGetKeystrokeEx(uint32_t user_index_ptr, uint32_t flags,
                                uint32_t keystroke_ptr);

// User profile. No user is signed in.
uint32_t XamUserGetSigninState(uint32_t user_index);
uint32_t XamUserGetXUID(uint32_t user_index, uint32_t type_mask,
                        uint32_t xuid_ptr);

// Notifications. A listener is created but never delivers anything, so the
// title's polling loop simply never sees an event.
uint32_t XamNotifyCreateListener(uint32_t categories, uint32_t unk);
uint32_t XNotifyGetNext(uint32_t handle, uint32_t match_id, uint32_t id_ptr,
                        uint32_t param_ptr);

// Content licensing: report a full licence mask so a title does not take its
// trial-mode path.
uint32_t XamContentGetLicenseMask(uint32_t mask_ptr, uint32_t overlapped_ptr);

// --- profile settings, which for an XBLA title are the save game -----------
// An Xbox Live Arcade title of this era stores its progress in the signed-in
// profile rather than in a content package: it writes a binary blob under a
// title-specific setting key and reads it back next launch. Both Geometry Wars
// titles do exactly that and import no content API at all, so these two calls
// ARE the save path, and they are backed by a host file (see user_profile.h).
//
// The result codes matter as much as the data. A read of a setting that has
// never been written succeeds, with the setting's `source` field reporting
// NO_VALUE - that is how a title learns it is a first run. Reporting an error
// instead leaves a title that expects an answer retrying forever.
//
// The console's own two-pass protocol is reproduced: called with a zero buffer
// size, the call reports how many bytes are needed and returns
// INSUFFICIENT_BUFFER; called again with a buffer that large, it fills it in.
uint32_t XamUserReadProfileSettings(uint32_t title_id, uint32_t user_index,
                                    uint32_t xuid_count, uint32_t xuids_ptr,
                                    uint32_t setting_count,
                                    uint32_t setting_ids_ptr,
                                    uint32_t buffer_size_ptr,
                                    uint32_t buffer_ptr,
                                    uint32_t overlapped_ptr);
uint32_t XamUserReadProfileSettingsEx(uint32_t title_id, uint32_t user_index,
                                      uint32_t xuid_count, uint32_t xuids_ptr,
                                      uint32_t setting_count,
                                      uint32_t setting_ids_ptr,
                                      uint32_t buffer_size_ptr,
                                      uint32_t unknown_buffer_size_ptr,
                                      uint32_t buffer_ptr,
                                      uint32_t overlapped_ptr);
// Writes settings into the profile AND to the host file. If the file cannot be
// written the call fails rather than reporting a success that lost the save.
uint32_t XamUserWriteProfileSettings(uint32_t title_id, uint32_t user_index,
                                     uint32_t setting_count,
                                     uint32_t settings_ptr,
                                     uint32_t overlapped_ptr);

// --- enumerators -----------------------------------------------------------
// A title asks XAM for a list (achievements, stats, saved games), gets a
// handle, and drains it with XamEnumerate. The list is built when the handle is
// created; the handle only tracks how far the title has read.
uint32_t XamUserCreateAchievementEnumerator(uint32_t title_id,
                                            uint32_t user_index, uint64_t xuid,
                                            uint32_t flags, uint32_t offset,
                                            uint32_t count,
                                            uint32_t buffer_size_ptr,
                                            uint32_t handle_ptr);
uint32_t XamEnumerate(uint32_t handle, uint32_t flags, uint32_t buffer_ptr,
                      uint32_t buffer_length, uint32_t items_returned_ptr,
                      uint32_t overlapped_ptr);


// --- xboxkrnl.exe thread creation ------------------------------------------
// Creates a guest thread: allocates its stack and KPCR, registers it, and
// starts it running `start_address(start_context)` on a host thread. A thread
// created with CREATE_SUSPENDED (flag 0x1) is set up but not started until a
// resume call. Needs a launcher installed on the kernel (see kernel_state);
// without one this reports failure rather than pretending to succeed.
uint32_t ExCreateThread(uint32_t handle_ptr, uint32_t stack_size,
                        uint32_t thread_id_ptr, uint32_t xapi_thread_startup,
                        uint32_t start_address, uint32_t start_context,
                        uint32_t creation_flags);
// Thrown by ExTerminateThread to leave guest code without returning into it.
//
// Every place the host enters recompiled code has to be ready to catch this;
// see ExTerminateThread below for why it cannot simply return.
struct guest_thread_terminated {
    uint32_t exit_code;
};
// Ends the calling guest thread: its object becomes signalled, which is what
// releases anything waiting on its handle, and then this DOES NOT RETURN - it
// throws guest_thread_terminated to unwind the host thread out of the guest
// call stack.
//
// Not returning is the whole point. On the console the kernel ends the calling
// thread inside this call, so a compiler emits nothing after it: Space
// Giraffe's XAPI thread trampoline has no `blr` there at all, and falling
// through ran the function the linker happened to place next - the CRT's
// unhandled-exception dispatcher - with the thread's exit code sitting where an
// EXCEPTION_POINTERS belongs. It dereferenced that as a pointer and faulted at
// guest address 0, in a worker thread, a long way from anything to do with
// threads. Returning "successfully" from a call that cannot return is the same
// mistake as reporting success for work that never happened.
[[noreturn]] void ExTerminateThread(uint32_t exit_code);
// Marks a guest thread object as finished, releasing every thread waiting on
// its handle. Called for the caller by ExTerminateThread, which is how a title
// that goes through the XAPI thread trampoline ends a thread; the harness calls
// it directly for a thread whose entry point simply returned, which the console
// treats the same way. Signalling twice is harmless.
void signal_guest_thread_exit(uint32_t kthread_address);
// Starts a thread that was created suspended (or decrements its suspend
// count). Returns the previous suspend count.
uint32_t NtResumeThread(uint32_t handle, uint32_t suspend_count_ptr);
uint32_t KeResumeThread(uint32_t thread_ptr);
// Reports the suspend count and stops NOTHING. Suspending a running host thread
// needs a point the recompiler emits for it to stop at; until then a title that
// suspends a worker and edits state the worker reads races it instead. The call
// says so once, on stdout, rather than failing silently. See kernel_handlers.cpp.
uint32_t NtSuspendThread(uint32_t handle, uint32_t suspend_count_ptr);


// --- deliberately unavailable subsystems ----------------------------------
// A statically recompiled title running standalone has no network link, no
// dashboard and (for now) no audio device. These are NOT placeholder stubs:
// each reports the specific "unavailable" result the console itself would
// give, so the title takes its own no-network / no-user / no-storage path
// cleanly. Returning zero instead would be wrong - in these Win32-style APIs
// zero means SUCCESS, which would send a title down a path expecting real
// data behind it.
//
// The network model is "adapter present, cable unplugged": startup and
// cleanup succeed, the link reports down, and every socket operation fails.
// Failing startup outright is riskier, as some titles abort rather than
// degrade. XNetGetTitleXnAddr deliberately reports a NON-ZERO MAC, because
// middleware (RakNet) seeds its RNG from those bytes and refuses to start on
// an all-zero one.
namespace x_net {
inline constexpr uint32_t invalid_socket = 0xFFFFFFFFu;
inline constexpr uint32_t socket_error = 0xFFFFFFFFu;
inline constexpr uint32_t wsae_net_down = 10050u; // WSAENETDOWN
inline constexpr uint32_t xnaddr_none = 0;        // XNET_GET_XNADDR_NONE
inline constexpr uint32_t xnaddr_static = 0x0008u; // XNET_GET_XNADDR_STATIC
inline constexpr uint32_t xnaddr_size = 0x24;
// XNetGetConnectStatus states. IDLE and PENDING are both non-terminal, so
// answering either makes a polling title poll forever; LOST ends the poll.
inline constexpr uint32_t xnet_connect_status_idle = 0u;
inline constexpr uint32_t xnet_connect_status_pending = 1u;
inline constexpr uint32_t xnet_connect_status_connected = 2u;
inline constexpr uint32_t xnet_connect_status_lost = 3u;
} // namespace x_net

uint32_t NetDll_WSAStartup(uint32_t a, uint32_t b, uint32_t c);
uint32_t NetDll_WSACleanup(uint32_t a, uint32_t b, uint32_t c);
uint32_t NetDll_XNetStartup(uint32_t a, uint32_t b, uint32_t c);
uint32_t NetDll_XNetCleanup(uint32_t a, uint32_t b, uint32_t c);
uint32_t NetDll_XNetGetTitleXnAddr(uint32_t caller, uint32_t addr_ptr);
uint32_t NetDll_XNetGetEthernetLinkStatus(uint32_t caller);
uint32_t NetDll_XNetRandom(uint32_t caller, uint32_t buffer, uint32_t length);
uint32_t NetDll_WSAGetLastError();
void NetDll_WSASetLastError(uint32_t error);
uint32_t NetDll_socket(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
uint32_t NetDll_accept(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
uint32_t NetDll_WSACreateEvent(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
uint32_t NetDll_XNetDnsLookup(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_XNetDnsRelease(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_XNetQosListen(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_XNetQosLookup(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_XNetQosRelease(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_XNetRegisterKey(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_XNetServerToInAddr(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_XNetUnregisterKey(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_XNetXnAddrToInAddr(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_bind(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_closesocket(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_connect(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_getsockname(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_getsockopt(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_inet_addr(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_ioctlsocket(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_listen(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_recv(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_recvfrom(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_select(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_send(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_sendto(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_setsockopt(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
// The overlapped and XNet surface a title with online multiplayer reaches for
// once the plain socket calls have failed. Every one fails, for the reason the
// whole group fails: there is no link.
//
// Two of these do NOT return SOCKET_ERROR, and that is the point of listing
// them apart rather than beside the rest:
//
//   - WSAGetOverlappedResult returns a BOOL, so its failure is 0. Returning
//     SOCKET_ERROR here would be a non-zero value, which is TRUE - a success
//     report for a transfer that never happened.
//   - XNetGetConnectStatus returns a connection state, where 0 is IDLE and 1 is
//     PENDING. Answering either leaves a title polling forever, which is the
//     mirror of the same bug: an operation that neither completes nor fails.
//     It reports LOST, a terminal state, so the poll ends.
uint32_t NetDll_WSARecvFrom(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_WSASendTo(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_WSAGetOverlappedResult(uint32_t a, uint32_t b, uint32_t c, uint32_t d,
                                       uint32_t e);
uint32_t NetDll_XNetConnect(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_XNetGetConnectStatus(uint32_t a, uint32_t b, uint32_t c, uint32_t d,
                                     uint32_t e);
uint32_t NetDll_XNetGetOpt(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_XNetInAddrToXnAddr(uint32_t a, uint32_t b, uint32_t c, uint32_t d,
                                   uint32_t e);
uint32_t NetDll_XNetUnregisterInAddr(uint32_t a, uint32_t b, uint32_t c, uint32_t d,
                                     uint32_t e);
uint32_t NetDll_XNetQosServiceLookup(uint32_t a, uint32_t b, uint32_t c, uint32_t d,
                                     uint32_t e);
uint32_t NetDll_XNetReplaceKey(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t XNotifyPositionUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t XamShowAchievementsUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t XamShowCustomPlayerListUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t XamShowDirtyDiscErrorUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t XamShowFriendRequestUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t XamShowFriendsUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t XamShowGameInviteUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t XamShowGamerCardUIForXUID(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t XamShowKeyboardUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t XamShowMarketplaceUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t XamShowMessageBoxUIEx(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
// The plain form of the same blade. It fails for the same reason as the Ex form:
// there is no system dialog to raise, so no button can come back, and reporting
// success would hand the title a selection nobody made.
uint32_t XamShowMessageBoxUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
// The storage device a user's saves are on. XamContentGetDeviceName already
// reports DEVICE_NOT_CONNECTED, and this has to agree with it: a device context
// handed back here would be a handle to a device that call says is absent.
uint32_t XamUserGetDeviceContext(uint32_t user_index, uint32_t unknown,
                                 uint32_t out_context_ptr);

// --- xam.xex attached devices ---------------------------------------------
// The remote control (Rmc) and microphone (Mic) request entry points. Neither
// device is attached, and both report that rather than an empty success - a
// title that gets SUCCESS from a device request goes on to read the reply
// buffer the call never wrote.
uint32_t RmcDeviceRequest(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t MicDeviceRequest(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t XamShowMessageComposeUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t XamShowMessagesUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t XamShowPlayerReviewUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t XamShowPlayersUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t XamShowQuickChatUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t XamShowSigninUI(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t XamUserAreUsersFriends(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t XamUserCheckPrivilege(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t XamUserCreateStatsEnumerator(uint32_t title_id, uint32_t user_index,
                                      uint32_t count, uint32_t flags,
                                      uint32_t size, uint32_t stats_ptr,
                                      uint32_t buffer_size_ptr,
                                      uint32_t handle_ptr);
uint32_t XamUserGetName(uint32_t user, uint32_t buffer_ptr,
                        uint32_t buffer_length);
uint32_t XamUserGetSigninInfo(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t XamWriteGamerTile(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t XamVoiceClose(uint32_t a, uint32_t b, uint32_t c);
uint32_t XamVoiceCreate(uint32_t a, uint32_t b, uint32_t c);
uint32_t XamVoiceSubmitPacket(uint32_t a, uint32_t b, uint32_t c);
uint32_t XamVoiceHeadsetPresent(uint32_t a);
uint32_t XamSessionCreateHandle(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
uint32_t XamSessionRefObjByHandle(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
uint32_t XamContentClose(uint32_t root_name_ptr, uint32_t overlapped_ptr,
                         uint32_t c, uint32_t d, uint32_t e);
uint32_t XamContentCreateEnumerator(uint32_t user_index, uint32_t device_id,
                                    uint32_t content_type,
                                    uint32_t content_flags,
                                    uint32_t items_per_enumerate,
                                    uint32_t buffer_size_ptr,
                                    uint32_t handle_out_ptr);
// Mounting a content package - a save, downloadable content, a title update -
// under a root name the title then opens files beneath. Reached by Ridge Racer
// 6, which asks for root 'save', OPEN_EXISTING, content type 1, file name
// 'Game Data' and will not leave its loading screen without it: measured, it
// retries that one call for as long as the run lasts and never once asks to
// CREATE the package instead.
//
// A package is a DIRECTORY in the local store, at
// <content root>/<title id>/<content type>/<file name>, and opening one mounts
// it under the root name so the title's own file calls resolve into it. Every
// disposition either mounts something really there or refuses; a success
// without a mount would hand the title a root whose every open then fails, one
// call further away from the mistake. The argument list is Xenia's.
uint32_t XamContentCreate(uint32_t user_index, uint32_t root_name_ptr,
                          uint32_t content_data_ptr, uint32_t flags,
                          uint32_t disposition_ptr, uint32_t license_mask_ptr,
                          uint32_t overlapped_ptr);
// The same, with a cache size and an expected package size a directory-backed
// store has no use for. The overlapped is the ninth argument and so arrives on
// the caller's stack.
uint32_t XamContentCreateEx(uint32_t user_index, uint32_t root_name_ptr,
                            uint32_t content_data_ptr, uint32_t flags,
                            uint32_t disposition_ptr, uint32_t license_mask_ptr,
                            uint32_t cache_size, uint32_t content_size,
                            uint32_t overlapped_ptr);
// The PNG a save shows in the console's own UI, written into the package it
// belongs to. Refused unless that package exists.
uint32_t XamContentSetThumbnail(uint32_t user_index, uint32_t content_data_ptr,
                                uint32_t buffer_ptr, uint32_t buffer_size,
                                uint32_t overlapped_ptr);
// Removes a package from the store, and says whether there was one.
uint32_t XamContentDelete(uint32_t user_index, uint32_t content_data_ptr,
                          uint32_t overlapped_ptr, uint32_t d, uint32_t e);
// --- the storage device ---------------------------------------------------
// One device: the hard disk this runtime already keeps the profile on. These
// four used to report that there was no storage at all, which was a refusal of
// something true and cost Ridge Racer 6 its whole front end - it called
// XamShowDeviceSelectorUI 12,338 times in a 260 s run, asking where to save.
// See the block above their definitions for the measurement.
//
// The block of facts about the device, X_CONTENT_DEVICE_DATA: id, type, total
// and free bytes, and a name. The two sizes are measured off the host
// filesystem and clamped to Xenia's dummy figures, so they are never larger
// than the room that actually exists.
uint32_t XamContentGetDeviceData(uint32_t device_id, uint32_t device_data_ptr,
                                 uint32_t c, uint32_t d, uint32_t e);
// The display name of a storage device. An id that is not the hard disk gets
// the console's own DEVICE_NOT_CONNECTED and the name buffer is left untouched.
uint32_t XamContentGetDeviceName(uint32_t device_id, uint32_t name_buffer_ptr,
                                 uint32_t name_capacity);
// Whether a device is there. SUCCESS for the hard disk; on the overlapped path
// an unknown id fails the call with the device error as the extended error,
// which is Xenia's split exactly.
uint32_t XamContentGetDeviceState(uint32_t device_id, uint32_t overlapped_ptr,
                                  uint32_t c, uint32_t d, uint32_t e);
// Whether user_index's profile created this content. Always true for user 0,
// the console's one offline profile, and NO_SUCH_USER otherwise.
uint32_t XamContentGetCreator(uint32_t user_index, uint32_t content_data_ptr,
                              uint32_t is_creator_ptr,
                              uint32_t creator_xuid_ptr,
                              uint32_t overlapped_ptr);
// "Choose a storage device". There is one and no blade to choose it on, so this
// is Xenia's headless path: the first device, written into the caller's word
// and completed through the overlapped.
uint32_t XamShowDeviceSelectorUI(uint32_t user_index, uint32_t content_type,
                                 uint32_t content_flags,
                                 uint32_t total_requested,
                                 uint32_t device_id_ptr,
                                 uint32_t overlapped_ptr);
// Installing a content package onto a storage device. There is no storage
// device here, which is the same reason XamContentGetDeviceName above refuses,
// so it gives the same answer rather than reporting an install that did not
// happen. Reached from Jetpac Refuelled's import table.
uint32_t XamContentInstall(uint32_t a, uint32_t b, uint32_t c, uint32_t d,
                           uint32_t e, uint32_t f);

// --- the Xbox Live Vision camera ----------------------------------------
// Modelled the way the network is: the support is present, nothing is plugged
// into it. That distinction lives entirely in XUsbcamGetState, and getting it
// the wrong way round matters in both directions.
//
// XUsbcamCreate SUCCEEDS. It only allocates the driver's buffer, and Xenia
// records a title (Carcassonne) that treats a failure here as "do not
// initialise", then runs on uninitialised data and crashes. So refusing this
// call is not the cautious option.
//
// XUsbcamGetState is where "no camera" is said: 0 = not connected, 1 =
// initialised, 2 = connected. That is the answer a title branches on.
//
// The remaining four configure or read from a camera that is not there. Xenia
// does not implement them, so there is no oracle for what the console returns,
// and they are deliberately left unimplemented here rather than given a guessed
// success - a title that respects GetState never reaches them, and one that
// does will name itself in the unimplemented-import worklist.
uint32_t XUsbcamCreate(uint32_t buffer, uint32_t buffer_size, uint32_t handle_out);
uint32_t XUsbcamDestroy();
uint32_t XUsbcamGetState();
uint32_t XamCreateEnumeratorHandle(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
uint32_t XamGetPrivateEnumStructureFromHandle(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
// --- the XMsg app dispatcher ------------------------------------------------
// XAM's sub-applications - the music player above all - are reached by sending
// an app id and a message id through these, not by importing named functions.
// A title that polls one of these messages hundreds of thousands of times is
// waiting for an answer, so an implementation that only reports failure leaves
// it waiting forever. See the .cpp for which app and message ids are handled.
//
// InProcessCall runs the message and returns its result. StartIORequest is the
// asynchronous form: it runs the message, writes the result into the title's
// XAM_OVERLAPPED and returns IO_PENDING.
uint32_t XMsgInProcessCall(uint32_t app, uint32_t message, uint32_t arg1,
                           uint32_t arg2);
uint32_t XMsgStartIORequest(uint32_t app, uint32_t message,
                            uint32_t overlapped_ptr, uint32_t buffer_ptr,
                            uint32_t buffer_length);
uint32_t XMsgStartIORequestEx(uint32_t app, uint32_t message,
                              uint32_t overlapped_ptr, uint32_t buffer_ptr,
                              uint32_t buffer_length, uint32_t unknown_ptr);
uint32_t XMsgCancelIORequest(uint32_t overlapped_ptr, uint32_t wait);
uint32_t XMsgCompleteIORequest(uint32_t overlapped_ptr, uint32_t result,
                               uint32_t extended_error, uint32_t length);
// Reads the result out of a completed XAM_OVERLAPPED. Everything here finishes
// before it returns, so this never has to wait.
uint32_t XamGetOverlappedResult(uint32_t overlapped_ptr, uint32_t length_ptr,
                                uint32_t wait);
uint32_t XamInputSetState(uint32_t user, uint32_t flags, uint32_t vibration);
// Leaves this title for another one, and DOES NOT RETURN - it throws
// guest_thread_terminated, exactly as ExTerminateThread does and for the same
// reason. The console tears the title down inside this call, so guest code has
// nothing after it that was meant to run. See the definition for what returning
// cost on Jetpac Refuelled.
uint32_t XamLoaderLaunchTitle(uint32_t path_ptr, uint32_t flags);
uint32_t XAudioRegisterRenderDriverClient(uint32_t callback_ptr, uint32_t driver_ptr);
uint32_t XAudioUnregisterRenderDriverClient(uint32_t driver);
uint32_t XAudioSubmitRenderDriverFrame(uint32_t driver, uint32_t samples_ptr);
uint32_t XAudioGetVoiceCategoryVolume(uint32_t category, uint32_t volume_ptr);
uint32_t XAudioGetVoiceCategoryVolumeChangeMask(uint32_t driver, uint32_t mask_ptr);
uint32_t XAudioGetSpeakerConfig(uint32_t config_ptr);


// --- xboxkrnl.exe: assorted kernel services -------------------------------
// Registers or removes a title-termination callback. Nothing here drives the
// callbacks yet (the host loop decides when a title ends), so the request is
// simply accepted.
void ExRegisterTitleTerminateNotification(uint32_t registration_ptr,
                                          uint32_t create);
// Console configuration. Only the handful of settings a title actually reads
// at startup are answered; anything else reports an invalid setting rather
// than silently handing back zeroes.
uint32_t ExGetXConfigSetting(uint32_t category, uint32_t setting,
                             uint32_t buffer_ptr, uint32_t buffer_size,
                             uint32_t required_size_ptr);
// L2 cache locking: nothing to lock on a host CPU.
void KeLockL2();
void KeUnlockL2();
// A deliberately empty APC routine the kernel hands out as a default.
void KiApcNormalRoutineNop();

// Device symbolic links ("d:" -> "\Device\Cdrom0"). The file system already
// resolves device names directly, so these are accepted and recorded as
// mounts rather than modelled as a separate object namespace.
uint32_t ObCreateSymbolicLink(uint32_t link_name_ptr, uint32_t target_name_ptr);
uint32_t ObDeleteSymbolicLink(uint32_t link_name_ptr);

// Releases a guest ANSI string's buffer and zeroes its descriptor.
void RtlFreeAnsiString(uint32_t string_ptr);
// Narrows a UNICODE_STRING into an ANSI_STRING, allocating the destination
// buffer when asked to.
uint32_t RtlUnicodeStringToAnsiString(uint32_t destination_ptr,
                                      uint32_t source_ptr,
                                      uint32_t allocate_destination);
// Calendar <-> 100ns tick conversion, both relative to 1601.
uint32_t RtlTimeFieldsToTime(uint32_t fields_ptr, uint32_t time_ptr);
uint32_t RtlTimeToTimeFields(uint32_t time_ptr, uint32_t fields_ptr);

// Looks up an optional header in a XEX image the guest points at. The
// runtime's own loader already parsed these, so the values it knows are
// answered from the parsed info and anything else reports absent.
uint32_t RtlImageXexHeaderField(uint32_t xex_header_ptr, uint32_t field);

// Reports what is mapped at an address: enough of X_MEMORY_BASIC_INFORMATION
// for a title to see whether a region is committed and how big it is.
uint32_t NtQueryVirtualMemory(uint32_t base_address, uint32_t info_ptr);

// The running title's id, from its own XEX execution info.
uint32_t XNetLogonGetTitleID();

// Module lookup by name. Only the system libraries are known; a null name
// means the running executable itself.
uint32_t XexGetModuleHandle(uint32_t module_name_ptr, uint32_t hmodule_ptr);
// A named section within a module - not modelled, so reported absent.
uint32_t XexGetModuleSection(uint32_t hmodule, uint32_t name_ptr,
                             uint32_t data_ptr, uint32_t size_ptr);

// Earns achievements. NOT an export: a title unlocks by posting the XGI system
// app message 0x000B0008 through XMsgStartIORequest, so this is what that
// dispatcher must call with the message's buffer. `buffer_ptr` points at
// { be32 count; be32 records_ptr; } and each record is
// { be32 user_index; be32 achievement_id; }.
//
// SUCCESS means every achievement named is now unlocked AND persisted (an
// achievement that was already unlocked counts, as it does on a console).
// FUNCTION_FAILED means at least one did not reach the disk - the caller must
// pass that on rather than complete the request successfully.
uint32_t xgi_user_write_achievements(uint32_t buffer_ptr,
                                     uint32_t buffer_length);

// --- added for Geometry Wars 3: Dimensions ---------------------------------
//
// Twenty-one exports the two earlier Geometry Wars never touched. They are
// grouped by what kind of answer each one can honestly give, because that is
// the only thing that separates a handler from a stub here.

// A REAL ANSWER, because the machine already has one.
//
// The console language. This must agree with ExGetXConfigSetting's
// XCONFIG_USER_LANGUAGE, and it does so by reading the same constant rather
// than by a second copy of the number - a title that asks both and gets two
// answers would localise half of itself.
uint32_t XamGetLanguage();

// A REAL ANSWER, because the feature is genuinely absent.
//
// Ducking lowers the game mix while somebody is talking over Live. There is no
// voice chat here, so there is nothing to duck, and "no ducking in effect" is
// the truth rather than a placeholder: enabling it succeeds and changes
// nothing, and every getter reports the neutral setting. `*_ptr` receives the
// value; a null pointer is the caller's error and is refused.
uint32_t XAudioEnableDucker(uint32_t enable);
uint32_t XAudioGetDuckerLevel(uint32_t level_ptr);
uint32_t XAudioGetDuckerThreshold(uint32_t threshold_ptr);
uint32_t XAudioGetDuckerAttackTime(uint32_t milliseconds_ptr);
uint32_t XAudioGetDuckerReleaseTime(uint32_t milliseconds_ptr);
uint32_t XAudioGetDuckerHoldTime(uint32_t milliseconds_ptr);

// FALSE, and true: no process here is doing voice.
uint32_t XamVoiceIsActiveProcess();

// REFUSED, because the thing being asked for does not exist offline.
//
// Marketplace and Live-profile queries. They return the same failure
// XamShowMarketplaceUI already returns, for the same reason: there is no
// marketplace to show and no Live profile to read a tier or a country out of,
// and a title that is told so takes its offline path. Reporting success with a
// made-up tier would send it down the online one.
uint32_t XamShowMarketplaceDownloadItemsUI(uint32_t user_index, uint32_t offer_type,
                                           uint32_t offers_ptr, uint32_t offer_count,
                                           uint32_t result_ptr, uint32_t overlapped_ptr);
uint32_t XamMarketplaceAcquireFreeContent(uint32_t a, uint32_t b, uint32_t c,
                                          uint32_t d, uint32_t e);
uint32_t XamUserGetMembershipTierFromXUID(uint32_t xuid_low, uint32_t xuid_high,
                                          uint32_t tier_ptr);
uint32_t XamUserGetOnlineCountryFromXUID(uint32_t xuid_low, uint32_t xuid_high,
                                         uint32_t country_ptr);
// A gamer tile key names a picture on Live. Nothing here can fetch one.
uint32_t XamParseGamerTileKey(uint32_t key_ptr, uint32_t a, uint32_t b, uint32_t c);

// THE SOCKET CALLS, which refuse exactly as the ones already wired do.
//
// There is no socket layer in this runtime: every NetDll_* handler above
// returns the Winsock error, and these six join them rather than pretending to
// be the exception. They take the same untyped five arguments as their
// neighbours deliberately - naming the parameters would be claiming to know
// which register holds what, and nothing here reads them.
uint32_t NetDll_shutdown(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_WSACloseEvent(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_WSAResetEvent(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll___WSAFDIsSet(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_XNetInAddrToString(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
uint32_t NetDll_XNetTsAddrToInAddr(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

// THE ONE THAT CANNOT ANSWER HONESTLY EITHER WAY. See the definition.
uint32_t KeInsertQueueDpc(uint32_t dpc_ptr, uint32_t argument1, uint32_t argument2);

// --- added for Banjo-Kazooie XBLA -----------------------------------------

// Locking a set of physical segments into the address space, and releasing it.
//
// These exist on the console so a title can hand the GPU or a DMA engine a
// block of physical pages and be certain the kernel will not move or page them
// out while it is in use. Here there is nothing to promise: guest memory is one
// contiguous host mapping made once at start-up and never relocated, so the
// pages a caller wants pinned are pinned before it asks, and unlocking releases
// a hold that was never taken.
//
// So these succeed and do nothing, which is a true statement about this
// runtime rather than a convenient one - and it is the opposite of the right
// answer for MmMapIoSpace beside them, which FAILS, because there the thing
// being asked for genuinely does not exist and a non-null answer would be a
// pointer into memory that models nothing.
uint32_t MmLockAndMapSegmentArray(uint32_t a, uint32_t b, uint32_t c,
                                  uint32_t d, uint32_t e, uint32_t f);
uint32_t MmUnlockAndUnmapSegmentArray(uint32_t a, uint32_t b);

// Queues an APC to a thread. REFUSED, for the reason KeInsertQueueApc refuses:
// nothing in this runtime drains an APC queue, so reporting success would
// promise a callback that never arrives and a caller waiting on it would wait
// for ever.
uint32_t NtQueueApcThread(uint32_t thread_handle, uint32_t apc_routine,
                          uint32_t apc_argument1, uint32_t apc_argument2,
                          uint32_t apc_argument3);

// Marks every handler above as implemented in `registry`, so resolve() reports
// the shrinking worklist. The ordinals are checked against the export table by
// the tests, so a wrong number here cannot pass silently.
void register_kernel_handlers(kernel_registry& registry);

} // namespace whitty_xenon
