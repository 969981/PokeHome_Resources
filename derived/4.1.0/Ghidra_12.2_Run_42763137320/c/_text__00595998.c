/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00595998; name: FUN_.text__00595998
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00595998(long *param_1,undefined8 param_2)

{
  void *pvVar1;
  TimerEventType *pTVar2;
  long *plVar3;
  long lVar4;
  
  pvVar1 = _DAT_008a38c8;
  memset(_DAT_008a38c8,0,0x1d8);
  pTVar2 = _DAT_008a38d0;
  *(undefined8 *)_DAT_008a38d0 = 0;
  *(undefined8 *)(pTVar2 + 8) = 0;
  *(undefined8 *)(pTVar2 + 0x10) = 0;
  *(undefined8 *)(pTVar2 + 0x18) = 0;
  *(undefined8 *)(pTVar2 + 0x20) = 0;
  *(undefined8 *)(pTVar2 + 0x28) = 0;
  *(undefined8 *)(pTVar2 + 0x30) = 0;
  *(undefined8 *)(pTVar2 + 0x38) = 0;
  nn::os::InitializeTimerEvent(pTVar2,1);
  if (pTVar2[0x10] != (TimerEventType)0x1) {
    return 2;
  }
  plVar3 = (long *)(**(code **)(*param_1 + 0x10))(param_1);
  lVar4 = (**(code **)(*plVar3 + 0x90))();
  FUN__text__00595ed0(_DAT_008a38d8,0,lVar4 + 0xa0,pvVar1,0x70e7f1,param_2);
  if (*(char *)((long)pvVar1 + 0x40) == '\0') {
    nn::os::FinalizeTimerEvent(pTVar2);
    *(undefined8 *)(pTVar2 + 0x30) = 0;
    *(undefined8 *)(pTVar2 + 0x38) = 0;
    *(undefined8 *)(pTVar2 + 0x20) = 0;
    *(undefined8 *)(pTVar2 + 0x28) = 0;
    *(undefined8 *)(pTVar2 + 0x10) = 0;
    *(undefined8 *)(pTVar2 + 0x18) = 0;
    *(undefined8 *)pTVar2 = 0;
    *(undefined8 *)(pTVar2 + 8) = 0;
    return 2;
  }
  nn::os::StartPeriodicTimerEvent(_DAT_008a38d0,*_DAT_008a5490,*_DAT_008a5490);
  return 1;
}


