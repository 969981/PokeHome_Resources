/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00595ab0; name: FUN_.text__00595ab0
 */


void FUN__text__00595ab0(long param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  VibrationDeviceHandle *pVVar6;
  ulong uVar7;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x10);
  local_40 = 0;
  uStack_38 = 0;
  if (*(uint *)(param_1 + 0x10) != 0) {
    uVar7 = 0;
    pVVar6 = (VibrationDeviceHandle *)(param_1 + 0x44);
    do {
      if (*(int *)pVVar6 != 0) {
        nn::hid::SendVibrationValue(pVVar6,(VibrationValue *)&local_40);
        uVar3 = (ulong)*(uint *)(param_1 + 0x10);
      }
      uVar7 = uVar7 + 1;
      pVVar6 = pVVar6 + 4;
    } while (uVar7 < uVar3);
  }
  nn::os::LockMutex((MutexType *)&DAT_00b0cd10);
  plVar4 = DAT_00b0cd38;
  if (DAT_00b0cd40 == 0) {
LAB__text__00595b64:
    plVar1 = DAT_00b0cd38 + DAT_00b0cd40;
    uVar2 = DAT_00b0cd40;
    if (plVar4 != plVar1) {
      if (plVar4 < plVar1 + -1) {
        *plVar4 = plVar1[-1];
      }
      uVar2 = DAT_00b0cd40 - 1;
      DAT_00b0cd40 = uVar2;
    }
  }
  else {
    lVar5 = (ulong)DAT_00b0cd40 << 3;
    do {
      if (*plVar4 == param_1) goto LAB__text__00595b64;
      plVar4 = plVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
    uVar2 = 1;
  }
  if (uVar2 == 0) {
    if (DAT_00b0cd38 != (long *)0x0) {
      DAT_00b0cd40 = 0;
      (**(code **)(*DAT_00b0cd30 + 0x18))();
      DAT_00b0cd38 = (long *)0x0;
      DAT_00b0cd44 = 0;
    }
    nn::os::UnlockMutex((MutexType *)&DAT_00b0cd10);
    if (DAT_00b0cb78 != '\0') {
      nn::os::SignalTimerEvent((TimerEventType *)&DAT_00b0caf8);
      nn::os::WaitThread((ThreadType *)&DAT_00b0cb38);
      nn::os::FinalizeTimerEvent((TimerEventType *)&DAT_00b0caf8);
      DAT_00b0cb28 = 0;
      DAT_00b0cb30 = 0;
      DAT_00b0cb18 = 0;
      DAT_00b0cb20 = 0;
      DAT_00b0cb08 = 0;
      DAT_00b0cb10 = 0;
      DAT_00b0caf8 = 0;
      DAT_00b0cb00 = 0;
      nn::os::DestroyThread((ThreadType *)&DAT_00b0cb38);
      (**(code **)(*param_2 + 0x18))(param_2,DAT_00b0ccf8);
      DAT_00b0ccf8 = 0;
      DAT_00b0cb78 = '\0';
    }
  }
  else {
    nn::os::UnlockMutex((MutexType *)&DAT_00b0cd10);
  }
  if (*(long *)(param_1 + 8) != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (*(uint *)(param_1 + 0x10) != 0) {
    memset((void *)(param_1 + 0x44),0,(ulong)*(uint *)(param_1 + 0x10) << 2);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN__text__0059623c(param_1,param_2);
  return;
}


