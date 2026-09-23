# segarally - native kernel coverage
0 of 123 imports called at runtime are native (0%). 347 imported in total.

| group | native | remaining |
|---|---:|---:|
| sync / events / rtl / misc | 0 | 44 |
| GPU / video | 0 | 18 |
| threads / TLS | 0 | 16 |
| profile / saves | 0 | 11 |
| XAM misc | 0 | 10 |
| file I/O | 0 | 9 |
| memory | 0 | 7 |
| audio | 0 | 7 |
| networking | 0 | 1 |

## Still ReXGlue

- **sync / events / rtl / misc** (44): ExGetXConfigSetting, ExRegisterTitleTerminateNotification, IoDismountVolumeByFileHandle, KeAcquireSpinLockAtRaisedIrql, KeDelayExecutionThread, KeEnableFpuExceptions, KeEnterCriticalRegion, KeInitializeDpc, KeLeaveCriticalRegion, KeQuerySystemTime, KeReleaseSpinLockFromRaisedIrql, KeResetEvent, KeSetEvent, KeWaitForMultipleObjects, KeWaitForSingleObject, KfAcquireSpinLock, KfReleaseSpinLock, KiApcNormalRoutineNop, NtClearEvent, NtCreateEvent, NtCreateTimer, NtDeviceIoControlFile, NtSetEvent, NtSetTimerEx, NtWaitForMultipleObjectsEx, NtWaitForSingleObjectEx, RtlCompareStringN, RtlEnterCriticalSection, RtlFillMemoryUlong, RtlImageXexHeaderField, RtlInitAnsiString, RtlInitializeCriticalSection, RtlInitializeCriticalSectionAndSpinCount, RtlLeaveCriticalSection, RtlNtStatusToDosError, RtlTryEnterCriticalSection, XGetGameRegion, XGetVideoMode, XeCryptSha, XeKeysConsolePrivateKeySign, XexCheckExecutablePrivilege, XexGetModuleHandle, XexGetProcedureAddress, XexLoadImage
- **GPU / video** (18): VdCallGraphicsNotificationRoutines, VdEnableRingBufferRPtrWriteBack, VdGetCurrentDisplayGamma, VdGetCurrentDisplayInformation, VdGetSystemCommandBuffer, VdInitializeEngines, VdInitializeRingBuffer, VdInitializeScalerCommandBuffer, VdIsHSIOTrainingSucceeded, VdPersistDisplay, VdQueryVideoFlags, VdQueryVideoMode, VdRetrainEDRAM, VdRetrainEDRAMWorker, VdSetDisplayMode, VdSetGraphicsInterruptCallback, VdSetSystemCommandBufferGpuIdentifierAddress, VdSwap
- **threads / TLS** (16): ExCreateThread, ExTerminateThread, KeGetCurrentProcessType, KeQueryBasePriorityThread, KeQueryPerformanceFrequency, KeSetAffinityThread, KeSetBasePriorityThread, KeTlsAlloc, KeTlsFree, KeTlsGetValue, KeTlsSetValue, NtResumeThread, NtYieldExecution, ObDereferenceObject, ObOpenObjectByName, ObReferenceObjectByHandle
- **profile / saves** (11): XamContentClose, XamContentCreateEnumerator, XamContentCreateEx, XamContentGetDeviceData, XamContentGetDeviceState, XamContentGetLicenseMask, XamShowDeviceSelectorUI, XamUserGetName, XamUserGetSigninState, XamUserGetXUID, XamUserReadProfileSettings
- **XAM misc** (10): XMsgInProcessCall, XMsgStartIORequest, XMsgStartIORequestEx, XNotifyGetNext, XamEnumerate, XamGetSystemVersion, XamInputGetCapabilities, XamInputGetState, XamInputSetState, XamNotifyCreateListener
- **file I/O** (9): NtClose, NtCreateFile, NtOpenFile, NtQueryFullAttributesFile, NtQueryInformationFile, NtQueryVolumeInformationFile, NtReadFile, NtSetInformationFile, NtWriteFile
- **memory** (7): MmAllocatePhysicalMemoryEx, MmFreePhysicalMemory, MmGetPhysicalAddress, MmMapIoSpace, MmQueryStatistics, NtAllocateVirtualMemory, NtFreeVirtualMemory
- **audio** (7): XAudioGetSpeakerConfig, XAudioGetVoiceCategoryVolume, XAudioRegisterRenderDriverClient, XAudioSubmitRenderDriverFrame, XAudioUnregisterRenderDriverClient, XMACreateContext, XMAReleaseContext
- **networking** (1): NetDll_WSAStartup
