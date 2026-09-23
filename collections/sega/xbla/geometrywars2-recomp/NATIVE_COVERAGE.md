# geometrywars2 - native kernel coverage
0 of 97 imports called at runtime are native (0%). 151 imported in total.

| group | native | remaining |
|---|---:|---:|
| sync / events / rtl / misc | 0 | 35 |
| GPU / video | 0 | 18 |
| threads / TLS | 0 | 11 |
| XAM misc | 0 | 8 |
| profile / saves | 0 | 7 |
| memory | 0 | 6 |
| audio | 0 | 5 |
| file I/O | 0 | 5 |
| networking | 0 | 2 |

## Still ReXGlue

- **sync / events / rtl / misc** (35): ExGetXConfigSetting, ExRegisterTitleTerminateNotification, KeAcquireSpinLockAtRaisedIrql, KeDelayExecutionThread, KeEnableFpuExceptions, KeEnterCriticalRegion, KeInitializeSemaphore, KeLeaveCriticalRegion, KeRaiseIrqlToDpcLevel, KeReleaseSpinLockFromRaisedIrql, KeResumeThread, KeSetEvent, KeWaitForMultipleObjects, KeWaitForSingleObject, KfAcquireSpinLock, KfLowerIrql, KfReleaseSpinLock, KiApcNormalRoutineNop, NtCreateEvent, NtCreateMutant, NtCreateSemaphore, NtReleaseMutant, NtReleaseSemaphore, NtSetEvent, NtSignalAndWaitForSingleObjectEx, NtWaitForSingleObjectEx, RtlEnterCriticalSection, RtlFillMemoryUlong, RtlImageXexHeaderField, RtlInitAnsiString, RtlInitializeCriticalSection, RtlLeaveCriticalSection, XGetGameRegion, XGetVideoMode, XexCheckExecutablePrivilege
- **GPU / video** (18): VdCallGraphicsNotificationRoutines, VdEnableRingBufferRPtrWriteBack, VdGetCurrentDisplayGamma, VdGetCurrentDisplayInformation, VdGetSystemCommandBuffer, VdInitializeEngines, VdInitializeRingBuffer, VdInitializeScalerCommandBuffer, VdIsHSIOTrainingSucceeded, VdPersistDisplay, VdQueryVideoFlags, VdQueryVideoMode, VdRetrainEDRAM, VdRetrainEDRAMWorker, VdSetDisplayMode, VdSetGraphicsInterruptCallback, VdSetSystemCommandBufferGpuIdentifierAddress, VdSwap
- **threads / TLS** (11): ExCreateThread, KeGetCurrentProcessType, KeQueryPerformanceFrequency, KeSetAffinityThread, KeSetBasePriorityThread, KeTlsAlloc, KeTlsGetValue, KeTlsSetValue, NtResumeThread, ObDereferenceObject, ObReferenceObjectByHandle
- **XAM misc** (8): XMsgInProcessCall, XMsgStartIORequest, XNotifyGetNext, XamEnumerate, XamGetSystemVersion, XamInputGetState, XamLoaderLaunchTitle, XamNotifyCreateListener
- **profile / saves** (7): XamContentGetLicenseMask, XamShowAchievementsUI, XamUserCreateAchievementEnumerator, XamUserGetName, XamUserGetSigninState, XamUserGetXUID, XamUserReadProfileSettings
- **memory** (6): MmAllocatePhysicalMemoryEx, MmFreePhysicalMemory, MmGetPhysicalAddress, MmQueryAddressProtect, NtAllocateVirtualMemory, NtFreeVirtualMemory
- **file I/O** (5): NtClose, NtCreateFile, NtQueryInformationFile, NtReadFile, NtSetInformationFile
- **audio** (5): XAudioGetVoiceCategoryVolumeChangeMask, XAudioRegisterRenderDriverClient, XAudioSubmitRenderDriverFrame, XMACreateContext, XMAReleaseContext
- **networking** (2): NetDll_WSAStartup, NetDll_XNetStartup
