# geometrywars3 - native kernel coverage
0 of 102 imports called at runtime are native (0%). 240 imported in total.

| group | native | remaining |
|---|---:|---:|
| sync / events / rtl / misc | 0 | 36 |
| GPU / video | 0 | 18 |
| XAM misc | 0 | 12 |
| threads / TLS | 0 | 11 |
| profile / saves | 0 | 9 |
| memory | 0 | 5 |
| file I/O | 0 | 5 |
| audio | 0 | 4 |
| networking | 0 | 2 |

## Still ReXGlue

- **sync / events / rtl / misc** (36): ExGetXConfigSetting, ExRegisterTitleTerminateNotification, KeAcquireSpinLockAtRaisedIrql, KeDelayExecutionThread, KeEnableFpuExceptions, KeEnterCriticalRegion, KeInitializeDpc, KeLeaveCriticalRegion, KeQuerySystemTime, KeReleaseSpinLockFromRaisedIrql, KeSetEvent, KeWaitForMultipleObjects, KeWaitForSingleObject, KfAcquireSpinLock, KfReleaseSpinLock, KiApcNormalRoutineNop, NtCreateEvent, NtCreateMutant, NtCreateSemaphore, NtReleaseMutant, NtReleaseSemaphore, NtSetEvent, NtSignalAndWaitForSingleObjectEx, NtWaitForSingleObjectEx, RtlEnterCriticalSection, RtlFillMemoryUlong, RtlImageXexHeaderField, RtlInitAnsiString, RtlInitializeCriticalSection, RtlInitializeCriticalSectionAndSpinCount, RtlLeaveCriticalSection, RtlNtStatusToDosError, XGetVideoMode, XexCheckExecutablePrivilege, XexGetProcedureAddress, XexLoadImage
- **GPU / video** (18): VdCallGraphicsNotificationRoutines, VdEnableRingBufferRPtrWriteBack, VdGetCurrentDisplayGamma, VdGetCurrentDisplayInformation, VdGetSystemCommandBuffer, VdInitializeEngines, VdInitializeRingBuffer, VdInitializeScalerCommandBuffer, VdIsHSIOTrainingSucceeded, VdPersistDisplay, VdQueryVideoFlags, VdQueryVideoMode, VdRetrainEDRAM, VdRetrainEDRAMWorker, VdSetDisplayMode, VdSetGraphicsInterruptCallback, VdSetSystemCommandBufferGpuIdentifierAddress, VdSwap
- **XAM misc** (12): XMsgInProcessCall, XMsgStartIORequest, XNotifyGetNext, XamAlloc, XamEnumerate, XamFree, XamGetSystemVersion, XamInputGetState, XamNotifyCreateListener, XamReadTileToTexture, XamSessionCreateHandle, XamSessionRefObjByHandle
- **threads / TLS** (11): ExCreateThread, KeGetCurrentProcessType, KeQueryPerformanceFrequency, KeSetAffinityThread, KeSetBasePriorityThread, KeTlsAlloc, KeTlsGetValue, KeTlsSetValue, NtResumeThread, ObDereferenceObject, ObReferenceObjectByHandle
- **profile / saves** (9): XamContentClose, XamContentCreateEnumerator, XamContentCreateEx, XamContentGetCreator, XamContentGetLicenseMask, XamShowDeviceSelectorUI, XamUserGetName, XamUserGetSigninState, XamUserGetXUID
- **memory** (5): MmAllocatePhysicalMemoryEx, MmFreePhysicalMemory, MmGetPhysicalAddress, NtAllocateVirtualMemory, NtFreeVirtualMemory
- **file I/O** (5): NtClose, NtCreateFile, NtQueryInformationFile, NtReadFile, NtSetInformationFile
- **audio** (4): XAudioGetSpeakerConfig, XAudioGetVoiceCategoryVolume, XAudioRegisterRenderDriverClient, XAudioSubmitRenderDriverFrame
- **networking** (2): NetDll_WSAStartup, NetDll_XNetStartup
