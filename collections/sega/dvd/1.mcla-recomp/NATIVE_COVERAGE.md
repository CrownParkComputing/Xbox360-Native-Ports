# mcla - native kernel coverage
0 of 119 imports called at runtime are native (0%). 243 imported in total.

| group | native | remaining |
|---|---:|---:|
| sync / events / rtl / misc | 0 | 44 |
| GPU / video | 0 | 18 |
| threads / TLS | 0 | 12 |
| XAM misc | 0 | 11 |
| file I/O | 0 | 9 |
| profile / saves | 0 | 8 |
| memory | 0 | 7 |
| audio | 0 | 6 |
| networking | 0 | 4 |

## Still ReXGlue

- **sync / events / rtl / misc** (44): ExGetXConfigSetting, ExRegisterTitleTerminateNotification, IoDismountVolumeByFileHandle, KeAcquireSpinLockAtRaisedIrql, KeDelayExecutionThread, KeEnterCriticalRegion, KeInitializeSemaphore, KeLeaveCriticalRegion, KeQuerySystemTime, KeRaiseIrqlToDpcLevel, KeReleaseSpinLockFromRaisedIrql, KeResetEvent, KeResumeThread, KeSetDisableBoostThread, KeSetEvent, KeWaitForMultipleObjects, KeWaitForSingleObject, KfAcquireSpinLock, KfLowerIrql, KfReleaseSpinLock, KiApcNormalRoutineNop, NtCreateEvent, NtCreateSemaphore, NtDeviceIoControlFile, NtReleaseSemaphore, NtSetEvent, NtWaitForMultipleObjectsEx, NtWaitForSingleObjectEx, RtlEnterCriticalSection, RtlFillMemoryUlong, RtlImageXexHeaderField, RtlInitAnsiString, RtlInitializeCriticalSection, RtlLeaveCriticalSection, RtlNtStatusToDosError, RtlTryEnterCriticalSection, XGetAVPack, XGetGameRegion, XGetVideoMode, XeCryptSha, XeKeysConsolePrivateKeySign, XexCheckExecutablePrivilege, XexGetModuleHandle, XexGetProcedureAddress
- **GPU / video** (18): VdCallGraphicsNotificationRoutines, VdEnableRingBufferRPtrWriteBack, VdGetCurrentDisplayGamma, VdGetCurrentDisplayInformation, VdGetSystemCommandBuffer, VdInitializeEngines, VdInitializeRingBuffer, VdInitializeScalerCommandBuffer, VdIsHSIOTrainingSucceeded, VdPersistDisplay, VdQueryVideoFlags, VdQueryVideoMode, VdRetrainEDRAM, VdRetrainEDRAMWorker, VdSetDisplayMode, VdSetGraphicsInterruptCallback, VdSetSystemCommandBufferGpuIdentifierAddress, VdSwap
- **threads / TLS** (12): ExCreateThread, KeGetCurrentProcessType, KeQueryPerformanceFrequency, KeSetAffinityThread, KeSetBasePriorityThread, KeTlsAlloc, KeTlsGetValue, KeTlsSetValue, NtResumeThread, ObDeleteSymbolicLink, ObDereferenceObject, ObReferenceObjectByHandle
- **XAM misc** (11): XMsgInProcessCall, XNotifyGetNext, XamCreateEnumeratorHandle, XamEnumerate, XamGetSystemVersion, XamInputGetCapabilities, XamInputGetKeystrokeEx, XamInputGetState, XamInputSetState, XamLoaderGetLaunchDataSize, XamNotifyCreateListener
- **file I/O** (9): NtClose, NtCreateFile, NtOpenFile, NtQueryDirectoryFile, NtQueryFullAttributesFile, NtQueryInformationFile, NtQueryVolumeInformationFile, NtReadFile, NtWriteFile
- **profile / saves** (8): XamContentClose, XamContentCreateEnumerator, XamContentCreateEx, XamUserGetName, XamUserGetSigninInfo, XamUserGetSigninState, XamUserGetXUID, XamUserReadProfileSettings
- **memory** (7): MmAllocatePhysicalMemoryEx, MmFreePhysicalMemory, MmGetPhysicalAddress, MmQueryAddressProtect, MmQueryAllocationSize, NtAllocateVirtualMemory, NtFreeVirtualMemory
- **audio** (6): XAudioGetSpeakerConfig, XAudioGetVoiceCategoryVolumeChangeMask, XAudioRegisterRenderDriverClient, XAudioSubmitRenderDriverFrame, XMACreateContext, XMAReleaseContext
- **networking** (4): NetDll_WSAStartup, NetDll_XNetGetEthernetLinkStatus, NetDll_XNetGetTitleXnAddr, NetDll_XNetStartup
