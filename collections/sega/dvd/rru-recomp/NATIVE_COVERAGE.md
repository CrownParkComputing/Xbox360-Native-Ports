# rru - native kernel coverage
0 of 131 imports called at runtime are native (0%). 253 imported in total.

| group | native | remaining |
|---|---:|---:|
| sync / events / rtl / misc | 0 | 52 |
| GPU / video | 0 | 18 |
| threads / TLS | 0 | 14 |
| profile / saves | 0 | 13 |
| XAM misc | 0 | 11 |
| file I/O | 0 | 9 |
| audio | 0 | 5 |
| memory | 0 | 5 |
| networking | 0 | 4 |

## Still ReXGlue

- **sync / events / rtl / misc** (52): ExGetXConfigSetting, ExRegisterTitleTerminateNotification, FscSetCacheElementCount, IoDismountVolumeByFileHandle, KeAcquireSpinLockAtRaisedIrql, KeDelayExecutionThread, KeEnableFpuExceptions, KeEnterCriticalRegion, KeInitializeDpc, KeLeaveCriticalRegion, KeQuerySystemTime, KeReleaseSpinLockFromRaisedIrql, KeResetEvent, KeSetEvent, KeWaitForMultipleObjects, KeWaitForSingleObject, KfAcquireSpinLock, KfReleaseSpinLock, KiApcNormalRoutineNop, NtClearEvent, NtCreateEvent, NtCreateMutant, NtCreateSemaphore, NtCreateTimer, NtDeviceIoControlFile, NtDuplicateObject, NtReleaseMutant, NtReleaseSemaphore, NtSetEvent, NtSetTimerEx, NtWaitForMultipleObjectsEx, NtWaitForSingleObjectEx, RtlEnterCriticalSection, RtlFillMemoryUlong, RtlImageXexHeaderField, RtlInitAnsiString, RtlInitializeCriticalSection, RtlInitializeCriticalSectionAndSpinCount, RtlLeaveCriticalSection, RtlNtStatusToDosError, RtlRaiseException, RtlTimeToTimeFields, RtlTryEnterCriticalSection, XGetAVPack, XGetGameRegion, XGetVideoMode, XeCryptSha, XeKeysConsolePrivateKeySign, XexCheckExecutablePrivilege, XexGetModuleHandle, XexGetProcedureAddress, XexLoadImage
- **GPU / video** (18): VdCallGraphicsNotificationRoutines, VdEnableRingBufferRPtrWriteBack, VdGetCurrentDisplayGamma, VdGetCurrentDisplayInformation, VdGetSystemCommandBuffer, VdInitializeEngines, VdInitializeRingBuffer, VdInitializeScalerCommandBuffer, VdIsHSIOTrainingSucceeded, VdPersistDisplay, VdQueryVideoFlags, VdQueryVideoMode, VdRetrainEDRAM, VdRetrainEDRAMWorker, VdSetDisplayMode, VdSetGraphicsInterruptCallback, VdSetSystemCommandBufferGpuIdentifierAddress, VdSwap
- **threads / TLS** (14): ExCreateThread, ExTerminateThread, KeGetCurrentProcessType, KeQueryBasePriorityThread, KeQueryPerformanceFrequency, KeSetAffinityThread, KeSetBasePriorityThread, KeTlsAlloc, KeTlsFree, KeTlsGetValue, KeTlsSetValue, NtResumeThread, ObDereferenceObject, ObReferenceObjectByHandle
- **profile / saves** (13): XamContentClose, XamContentCreateEnumerator, XamContentCreateEx, XamContentGetCreator, XamContentGetDeviceData, XamContentGetDeviceState, XamShowDeviceSelectorUI, XamUserCheckPrivilege, XamUserCreateAchievementEnumerator, XamUserGetDeviceContext, XamUserGetSigninInfo, XamUserGetSigninState, XamUserReadProfileSettings
- **XAM misc** (11): XMsgInProcessCall, XNotifyGetNext, XamEnumerate, XamGetSystemVersion, XamInputGetCapabilities, XamInputGetState, XamInputSetState, XamLoaderGetLaunchDataSize, XamNotifyCreateListener, XamVoiceIsActiveProcess, XamVoiceSetMicArrayIdleUsers
- **file I/O** (9): NtClose, NtCreateFile, NtOpenFile, NtQueryDirectoryFile, NtQueryFullAttributesFile, NtQueryInformationFile, NtQueryVolumeInformationFile, NtReadFile, NtWriteFile
- **memory** (5): MmAllocatePhysicalMemoryEx, MmFreePhysicalMemory, MmGetPhysicalAddress, NtAllocateVirtualMemory, NtFreeVirtualMemory
- **audio** (5): XAudioGetSpeakerConfig, XAudioGetVoiceCategoryVolume, XAudioRegisterRenderDriverClient, XAudioSubmitRenderDriverFrame, XMACreateContext
- **networking** (4): NetDll_WSACreateEvent, NetDll_WSAResetEvent, NetDll_WSAStartup, NetDll_XNetStartup
