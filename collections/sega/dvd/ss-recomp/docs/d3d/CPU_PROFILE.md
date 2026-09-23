# Where the CPU cycles go — `perf` profile, 2026-09-12

First function-level profile of the whole process. 58K samples of `cycles:u` at
299 Hz over ~75 s of racing, `out/perf-1/perf.data`, taken with
`bash tools/d3d/perf_race.sh out/perf-1`.

`perf record` launches the harness so the game is a *descendant* of perf; that
works under `kernel.yama.ptrace_scope=1`, where attaching to an already-running
game does not. Frame-pointer call graphs are unreliable in recompiled code —
trust the self-time column, not the callers.

## Samples per thread

| thread | share of all cycles |
| --- | ---: |
| Main XThread | 36.4% |
| Audio Worker | 25.9% |
| GPU Commands (PM4 + Vulkan) | 16.4% |
| splitsecond (host/presenter) | 10.0% |
| everything else | ~11% |

## Hottest symbols (self time, whole process)

| symbol | self | what it is |
| --- | ---: | --- |
| `sub_888E0A70` | 10.3% | guest wait-for-GPU poll (main thread) |
| `sub_888E5A18` | 7.0% | same wait chain |
| `pthread_mutex_trylock` | 7.7% | `WaitMultiple` polling |
| unresolved libc, lock region | 6.2% | same loop, same threads |
| `__imp____restgprlr_29` | 5.4% | PPC epilogue helper |
| `__vdso_clock_gettime` | 3.7% | mostly the same polling loop |
| `TimerQueue::TimerThreadMain` | 3.2% | host timer thread |
| `sub_888FCB38` | 2.6% | guest code |
| `PosixConditionBase::WaitMultiple` | 2.6% | the poll loop itself |
| `__isoc23_sscanf` / `vfscanf` | ~2.7% | parsing `/proc/self/maps` |
| `__imp____savegprlr_29` | 1.7% | PPC prologue helper |
| `PosixCondition<Semaphore>::signaled` | 1.5% | the poll loop |

Nothing in `librexgpu-xenos` exceeds 0.7%: the command processor's 16.4% is
spread thinly across genuine PM4 and Vulkan work.

## Three findings, in order of size

### 1. `WaitMultiple` is a 1 ms polling loop — about a quarter of all cycles — FIXED

`~/rexglue-vmx/src/core/threading_posix.cpp:323-421`. For a multi-handle wait it
`pthread_mutex_trylock`s every handle, tests `signaled()`, drops the locks,
`sleep_for(1ms)`, and repeats — roughly a thousand wake-ups a second per waiting
thread. The Audio Worker sits in exactly this loop and burns 0.49 cores doing
nothing; its profile is almost entirely `trylock`, `clock_gettime` and the
condition helpers, with no audio work near the top.

This is SDK code shared by every recomp, so fixing it once pays everywhere.

**Fixed in `rexglue-vmx` commit `18b8fdf`** (branch `rru-fixes`). A waiter now
registers with each handle it waits on and blocks on its own condition variable;
a handle wakes only its own registered waiters, so unrelated signalling wakes
nobody. Registration happens before the handles are tested, so a signal between
the test and the block is seen rather than lost, and a 50 ms fallback timeout
keeps the wait live. The wait also blocks until the deadline itself: it used to
cast the remaining time to whole milliseconds, so a wait with under a
millisecond left blocked for zero and spun to its deadline.

Measured over 40 s of racing, same track and harness:

| | before | after |
| --- | ---: | ---: |
| whole process | 2.49 cores | **1.95 cores** |
| Audio Worker thread | 0.50 cores | **0.00 cores** |
| multi-wait iterations | ~520,000/s | ~1,500/s |
| frame time (median) | 33.3 ms | 33.3 ms |

Frame time is unchanged, as expected — the title is locked to a presentation
interval of two, so the freed CPU shows up as headroom, not frames. Rendering
was verified unchanged in the captures. New unit tests
(`tests/unit/core/threading_wait_test.cpp`) cover wait-any/wait-all semantics,
timeouts, wake latency and concurrent waiters; the cost test measures 0.11 ms of
CPU for a 500 ms wait on 64 handles and fails against the old implementation at
2.50 ms. `REX_WAITMULTI_STATS=1` prints multi-wait traffic once a second.

### 2. `Protect`/`QueryProtect` parse `/proc/self/maps` on every call — ~2.7% — FIXED

`~/rexglue-vmx/src/core/memory_posix.cpp`. `FindEntryForAddress` opened
`/proc/self/maps`, read it line by line into a `std::string` and `sscanf`ed each
line, just to report the previous protection of one address. The hot caller is
`mmio_handler.cpp:411`: every access violation that is not in a mapped range —
which is every GPU write-watch fault — queries it.

**Fixed in `rexglue-vmx` commit `c5718d2`.** `ProcMapsScanner` reads into a small
fixed buffer and parses entries by hand as they arrive, with no allocation, and
stops at the first answer (the file is address-ordered, so the search can also
give up once it passes the address).

Staying incremental is the part that matters. An intermediate version read the
whole file first and then parsed it: the parse got cheap, but the kernel formats
this file as it is read, so the cost moved into the kernel instead — the guest
main thread's system time doubled from 4.9 s to 9.3 s per 40 s of racing. The
incremental scanner puts it back at 4.9 s.

| | before | after |
| --- | ---: | ---: |
| parse, share of user cycles | ~2.7% | 0.16% |
| whole process | 1.95 cores | 1.91 cores |
| main-thread system time (40 s) | 4.9 s | 4.9 s |

Frame time and rendering unchanged. Tests in
`tests/unit/core/memory_protect_test.cpp`.

*Found while writing those tests, not fixed:* `BaseHeap::Dispose`
(`xmemory.cpp:1068`) calls `DeallocFixed(addr, 0, kRelease)`, which on POSIX is
`munmap(addr, 0)` and always fails. Heap regions are never unmapped at teardown.
The header documents the Windows contract ("length must be zero"), which the
POSIX implementation cannot honour.

### 3. PPC prologue/epilogue helpers cost 7.1% — and they are on the main thread

`__restgprlr_29` (5.4%) plus `__savegprlr_29` (1.7%) are the recompiler's
register save/restore helpers, called around recompiled functions. This is pure
translation overhead, generic to every recomp, and a codegen question rather
than a game one.

## Why this matters for 60 FPS

At the current 30 FPS lock none of this raises the frame rate — the frame is a
presentation interval of two and the main thread idles (see [PACING.md](PACING.md)).
Two places where it does matter:

- **Handhelds and Android.** Roughly 45% of all cycles in this process were spin,
  poll or translation overhead rather than game or rendering work. On a 4-core
  device those wasted cores are the frame rate. The two fixes above took the
  whole process from **2.49 to 1.91 cores** over the same 40 s of racing.
- **The 60 FPS budget.** Main-thread frame work must fall from ~22 ms to under
  16.7 ms. The main thread's 36.4% of cycles is about 17.3% guest GPU-wait spin
  and 19.1% real work — and `restgprlr`/`savegprlr` (7.1%) plus the maps parsing
  (~1.2% on this thread) are *inside* that real work. Removing runtime and
  codegen overhead is therefore a direct, title-independent contribution to the
  60 FPS target, and looks like roughly the right size for it.

The guest's own 17.3% GPU-wait spin (`sub_888E0A70`) is the title's code and
cannot be removed, only made to sleep rather than spin — worth doing for power
and for contended cores, worth nothing for frame rate here.

## Reproducing

```sh
bash tools/d3d/perf_race.sh out/perf-N            # record while driving a race
perf report -i out/perf-N/perf.data --sort comm --stdio -g none
perf report -i out/perf-N/perf.data --comms 'Main XThread (F' \
    --sort dso,symbol --stdio -g none --percent-limit 0.4
```
