# burnoutrevenge - native kernel coverage
28 of 118 imports called at runtime are native (24%). 216 imported in total.

| group | native | remaining |
|---|---:|---:|
| sync / events / rtl / misc | 20 | 15 |
| GPU / video | 0 | 18 |
| threads / TLS | 5 | 9 |
| profile / saves | 1 | 11 |
| XAM misc | 2 | 8 |
| networking | 0 | 9 |
| file I/O | 0 | 8 |
| memory | 0 | 6 |
| audio | 0 | 6 |

## Still ReXGlue

- **GPU / video** (18): VdCallGraphicsNotificationRoutines, VdEnableRingBufferRPtrWriteBack, VdGetCurrentDisplayGamma, VdGetCurrentDisplayInformation, VdGetGraphicsAsicID, VdGetSystemCommandBuffer, VdInitializeEngines, VdInitializeRingBuffer, VdInitializeScalerCommandBuffer, VdIsHSIOTrainingSucceeded, VdPersistDisplay, VdQueryVideoMode, VdRetrainEDRAM, VdRetrainEDRAMWorker, VdSetDisplayMode, VdSetGraphicsInterruptCallback, VdSetSystemCommandBufferGpuIdentifierAddress, VdSwap
- **sync / events / rtl / misc** (15): ExGetXConfigSetting, ExRegisterTitleTerminateNotification, KeDelayExecutionThread, KeReleaseSemaphore, KeResetEvent, KeSetEvent, KeWaitForSingleObject, NtCreateEvent, NtCreateSemaphore, NtCreateTimer, NtDuplicateObject, NtSetEvent, NtSetTimerEx, NtWaitForSingleObjectEx, RtlImageXexHeaderField
- **profile / saves** (11): XamContentClose, XamContentCreate, XamContentCreateEnumerator, XamContentGetCreator, XamContentGetDeviceName, XamContentGetDeviceState, XamContentSetThumbnail, XamShowDeviceSelectorUI, XamUserCreateAchievementEnumerator, XamUserGetName, XamUserGetXUID
- **threads / TLS** (9): ExCreateThread, ExTerminateThread, KeQueryBasePriorityThread, KeSetAffinityThread, KeSetBasePriorityThread, NtResumeThread, NtSuspendThread, ObDereferenceObject, ObReferenceObjectByHandle
- **networking** (9): NetDll_WSAGetLastError, NetDll_WSAStartup, NetDll_WSAWaitForMultipleEvents, NetDll_XNetGetEthernetLinkStatus, NetDll_XNetGetTitleXnAddr, NetDll_XNetStartup, NetDll_bind, NetDll_ioctlsocket, NetDll_socket
- **file I/O** (8): NtClose, NtCreateFile, NtOpenFile, NtQueryDirectoryFile, NtQueryInformationFile, NtReadFile, NtSetInformationFile, NtWriteFile
- **XAM misc** (8): XMsgStartIORequest, XMsgStartIORequestEx, XMsgSystemProcessCall, XNotifyGetNext, XamEnumerate, XamInputGetState, XamInputSetState, XamNotifyCreateListener
- **memory** (6): MmAllocatePhysicalMemoryEx, MmFreePhysicalMemory, MmGetPhysicalAddress, MmQueryAddressProtect, NtAllocateVirtualMemory, NtFreeVirtualMemory
- **audio** (6): XAudioGetSpeakerConfig, XAudioGetVoiceCategoryVolumeChangeMask, XAudioRegisterRenderDriverClient, XAudioSubmitRenderDriverFrame, XMACreateContext, XMAReleaseContext
