# alienbreed - native kernel coverage
0 of 127 imports called at runtime are native (0%). 237 imported in total.

| group | native | remaining |
|---|---:|---:|
| sync / events / rtl / misc | 0 | 50 |
| GPU / video | 0 | 18 |
| XAM misc | 0 | 13 |
| threads / TLS | 0 | 12 |
| profile / saves | 0 | 11 |
| memory | 0 | 9 |
| file I/O | 0 | 6 |
| audio | 0 | 5 |
| networking | 0 | 3 |

## Still ReXGlue

- **sync / events / rtl / misc** (50): ExGetXConfigSetting, ExRegisterTitleTerminateNotification, FscSetCacheElementCount, InterlockedFlushSList, InterlockedPopEntrySList, KeAcquireSpinLockAtRaisedIrql, KeDelayExecutionThread, KeEnableFpuExceptions, KeEnterCriticalRegion, KeInitializeSemaphore, KeLeaveCriticalRegion, KeQuerySystemTime, KeRaiseIrqlToDpcLevel, KeReleaseSpinLockFromRaisedIrql, KeResetEvent, KeResumeThread, KeSetEvent, KeWaitForMultipleObjects, KeWaitForSingleObject, KfAcquireSpinLock, KfLowerIrql, KfReleaseSpinLock, KiApcNormalRoutineNop, NtClearEvent, NtCreateEvent, NtCreateTimer, NtDuplicateObject, NtSetEvent, NtSetTimerEx, NtWaitForMultipleObjectsEx, NtWaitForSingleObjectEx, RtlEnterCriticalSection, RtlFillMemoryUlong, RtlImageXexHeaderField, RtlInitAnsiString, RtlInitializeCriticalSection, RtlInitializeCriticalSectionAndSpinCount, RtlLeaveCriticalSection, RtlMultiByteToUnicodeN, RtlNtStatusToDosError, RtlTimeToTimeFields, RtlTryEnterCriticalSection, RtlUnicodeToMultiByteN, XGetGameRegion, XGetVideoMode, XexCheckExecutablePrivilege, XexGetModuleHandle, XexGetModuleSection, XexGetProcedureAddress, XexLoadImage
- **GPU / video** (18): VdCallGraphicsNotificationRoutines, VdEnableRingBufferRPtrWriteBack, VdGetCurrentDisplayGamma, VdGetCurrentDisplayInformation, VdGetSystemCommandBuffer, VdInitializeEngines, VdInitializeRingBuffer, VdInitializeScalerCommandBuffer, VdIsHSIOTrainingSucceeded, VdPersistDisplay, VdQueryVideoFlags, VdQueryVideoMode, VdRetrainEDRAM, VdRetrainEDRAMWorker, VdSetDisplayMode, VdSetGraphicsInterruptCallback, VdSetSystemCommandBufferGpuIdentifierAddress, VdSwap
- **XAM misc** (13): XMsgInProcessCall, XMsgStartIORequest, XNotifyGetNext, XamAlloc, XamEnumerate, XamFree, XamGetSystemVersion, XamInputGetCapabilities, XamInputGetState, XamInputSetState, XamLoaderGetLaunchDataSize, XamNotifyCreateListener, XamWriteGamerTile
- **threads / TLS** (12): ExCreateThread, ExTerminateThread, KeGetCurrentProcessType, KeQueryPerformanceFrequency, KeSetAffinityThread, KeSetBasePriorityThread, KeTlsAlloc, KeTlsFree, KeTlsGetValue, KeTlsSetValue, ObDereferenceObject, ObReferenceObjectByHandle
- **profile / saves** (11): XamContentCreateEnumerator, XamContentGetDeviceData, XamContentGetDeviceState, XamContentGetLicenseMask, XamShowDeviceSelectorUI, XamUserCreateAchievementEnumerator, XamUserGetName, XamUserGetSigninInfo, XamUserGetSigninState, XamUserGetXUID, XamUserReadProfileSettings
- **memory** (9): MmAllocatePhysicalMemoryEx, MmFreePhysicalMemory, MmGetPhysicalAddress, MmQueryAddressProtect, MmQueryStatistics, MmSetAddressProtect, NtAllocateVirtualMemory, NtFreeVirtualMemory, NtQueryVirtualMemory
- **file I/O** (6): NtClose, NtCreateFile, NtQueryFullAttributesFile, NtQueryInformationFile, NtReadFile, NtSetInformationFile
- **audio** (5): XAudioGetVoiceCategoryVolumeChangeMask, XAudioRegisterRenderDriverClient, XAudioSubmitRenderDriverFrame, XMACreateContext, XMAReleaseContext
- **networking** (3): NetDll_WSAStartup, NetDll_XNetStartup, XNetLogonGetTitleID
