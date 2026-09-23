# ss - native kernel coverage
0 of 136 imports called at runtime are native (0%). 49 imported in total.

| group | native | remaining |
|---|---:|---:|
| sync / events / rtl / misc | 0 | 46 |
| GPU / video | 0 | 18 |
| XAM misc | 0 | 16 |
| threads / TLS | 0 | 15 |
| profile / saves | 0 | 14 |
| memory | 0 | 9 |
| file I/O | 0 | 9 |
| audio | 0 | 5 |
| networking | 0 | 4 |

## Still ReXGlue

- **sync / events / rtl / misc** (46): ExGetXConfigSetting, ExRegisterTitleTerminateNotification, KeAcquireSpinLockAtRaisedIrql, KeDelayExecutionThread, KeEnableFpuExceptions, KeEnterCriticalRegion, KeInitializeDpc, KeLeaveCriticalRegion, KeQuerySystemTime, KeReleaseSpinLockFromRaisedIrql, KeResetEvent, KeSetEvent, KeWaitForMultipleObjects, KeWaitForSingleObject, KfAcquireSpinLock, KfReleaseSpinLock, KiApcNormalRoutineNop, NtClearEvent, NtCreateEvent, NtCreateMutant, NtCreateSemaphore, NtCreateTimer, NtReleaseMutant, NtReleaseSemaphore, NtSetEvent, NtSetTimerEx, NtWaitForMultipleObjectsEx, NtWaitForSingleObjectEx, RtlEnterCriticalSection, RtlFillMemoryUlong, RtlImageXexHeaderField, RtlInitAnsiString, RtlInitializeCriticalSection, RtlInitializeCriticalSectionAndSpinCount, RtlLeaveCriticalSection, RtlNtStatusToDosError, RtlRaiseException, RtlTimeToTimeFields, RtlTryEnterCriticalSection, XGetGameRegion, XGetVideoMode, XexCheckExecutablePrivilege, XexGetModuleHandle, XexGetProcedureAddress, XexLoadImage, XexUnloadImage
- **GPU / video** (18): VdCallGraphicsNotificationRoutines, VdEnableRingBufferRPtrWriteBack, VdGetCurrentDisplayGamma, VdGetCurrentDisplayInformation, VdGetSystemCommandBuffer, VdInitializeEngines, VdInitializeRingBuffer, VdInitializeScalerCommandBuffer, VdIsHSIOTrainingSucceeded, VdPersistDisplay, VdQueryVideoFlags, VdQueryVideoMode, VdRetrainEDRAM, VdRetrainEDRAMWorker, VdSetDisplayMode, VdSetGraphicsInterruptCallback, VdSetSystemCommandBufferGpuIdentifierAddress, VdSwap
- **XAM misc** (16): XMsgCompleteIORequest, XMsgInProcessCall, XMsgStartIORequest, XMsgStartIORequestEx, XNotifyGetNext, XamAlloc, XamEnumerate, XamGetExecutionId, XamGetOverlappedResult, XamGetPrivateEnumStructureFromHandle, XamGetSystemVersion, XamInputGetKeystrokeEx, XamInputGetState, XamInputSetState, XamNotifyCreateListener, XamTaskSchedule
- **threads / TLS** (15): ExCreateThread, ExTerminateThread, KeGetCurrentProcessType, KeQueryBasePriorityThread, KeQueryPerformanceFrequency, KeSetAffinityThread, KeSetBasePriorityThread, KeTlsAlloc, KeTlsFree, KeTlsGetValue, KeTlsSetValue, NtResumeThread, NtYieldExecution, ObDereferenceObject, ObReferenceObjectByHandle
- **profile / saves** (14): XamContentAggregateCreateEnumerator, XamContentClose, XamContentCreateEnumerator, XamContentCreateEx, XamContentGetCreator, XamContentGetDeviceData, XamShowDeviceSelectorUI, XamUserCheckPrivilege, XamUserCreateAchievementEnumerator, XamUserGetName, XamUserGetSigninInfo, XamUserGetSigninState, XamUserGetXUID, XamUserReadProfileSettings
- **memory** (9): MmAllocatePhysicalMemoryEx, MmFreePhysicalMemory, MmGetPhysicalAddress, MmQueryAddressProtect, MmQueryAllocationSize, MmQueryStatistics, NtAllocateVirtualMemory, NtFreeVirtualMemory, NtQueryVirtualMemory
- **file I/O** (9): NtClose, NtCreateFile, NtOpenFile, NtQueryDirectoryFile, NtQueryFullAttributesFile, NtQueryInformationFile, NtReadFile, NtSetInformationFile, NtWriteFile
- **audio** (5): XAudioGetSpeakerConfig, XAudioGetVoiceCategoryVolume, XAudioRegisterRenderDriverClient, XAudioSubmitRenderDriverFrame, XMACreateContext
- **networking** (4): NetDll_WSAStartup, NetDll_XNetGetEthernetLinkStatus, NetDll_XNetGetTitleXnAddr, NetDll_XNetStartup
