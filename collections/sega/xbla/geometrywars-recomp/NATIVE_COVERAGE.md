# geometrywars - native kernel coverage
12 of 90 imports called at runtime are native (13%). 142 imported in total.

| group | native | remaining |
|---|---:|---:|
| sync / events / rtl / misc | 7 | 17 |
| GPU / video | 0 | 19 |
| audio | 0 | 17 |
| threads / TLS | 1 | 9 |
| memory | 0 | 6 |
| file I/O | 0 | 4 |
| profile / saves | 2 | 2 |
| XAM misc | 0 | 4 |
| networking | 2 | 0 |

## Still ReXGlue

- **GPU / video** (19): VdCallGraphicsNotificationRoutines, VdEnableRingBufferRPtrWriteBack, VdGetCurrentDisplayGamma, VdGetCurrentDisplayInformation, VdGetGraphicsAsicID, VdGetSystemCommandBuffer, VdInitializeEngines, VdInitializeRingBuffer, VdInitializeScalerCommandBuffer, VdIsHSIOTrainingSucceeded, VdPersistDisplay, VdQueryVideoFlags, VdQueryVideoMode, VdRetrainEDRAM, VdRetrainEDRAMWorker, VdSetDisplayMode, VdSetGraphicsInterruptCallback, VdSetSystemCommandBufferGpuIdentifierAddress, VdSwap
- **sync / events / rtl / misc** (17): KeAcquireSpinLockAtRaisedIrql, KeDelayExecutionThread, KeEnterCriticalRegion, KeLeaveCriticalRegion, KeRaiseIrqlToDpcLevel, KeReleaseSpinLockFromRaisedIrql, KeWaitForSingleObject, KfLowerIrql, NtCreateEvent, NtSetEvent, NtWaitForSingleObjectEx, RtlEnterCriticalSection, RtlImageXexHeaderField, RtlInitAnsiString, RtlInitializeCriticalSection, RtlLeaveCriticalSection, XGetVideoMode
- **audio** (17): XAudioGetVoiceCategoryVolumeChangeMask, XAudioRegisterRenderDriverClient, XAudioSubmitRenderDriverFrame, XMABlockWhileInUse, XMACreateContext, XMADisableContext, XMAEnableContext, XMAGetOutputBufferReadOffset, XMAGetOutputBufferWriteOffset, XMAInitializeContext, XMAIsInputBuffer0Valid, XMAIsInputBuffer1Valid, XMAIsOutputBufferValid, XMASetInputBuffer0Valid, XMASetLoopData, XMASetOutputBufferReadOffset, XMASetOutputBufferValid
- **threads / TLS** (9): ExCreateThread, KeGetCurrentProcessType, KeSetAffinityThread, KeSetBasePriorityThread, KeTlsAlloc, KeTlsGetValue, KeTlsSetValue, ObDereferenceObject, ObReferenceObjectByHandle
- **memory** (6): MmAllocatePhysicalMemoryEx, MmFreePhysicalMemory, MmGetPhysicalAddress, MmQueryAddressProtect, NtAllocateVirtualMemory, NtFreeVirtualMemory
- **file I/O** (4): NtClose, NtCreateFile, NtQueryInformationFile, NtReadFile
- **XAM misc** (4): XMsgStartIORequest, XNotifyGetNext, XamInputGetState, XamNotifyCreateListener
- **profile / saves** (2): XamUserGetXUID, XamUserReadProfileSettings
