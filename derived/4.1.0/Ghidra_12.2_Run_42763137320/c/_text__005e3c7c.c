/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e3c7c; name: FUN_.text__005e3c7c
 */


void FUN__text__005e3c7c(long *param_1)

{
  long lVar1;
  ulong uVar2;
  
  FUN__text__005e3e10();
  uVar2 = (ulong)*(byte *)((long)param_1 + 0x159);
  FUN__text__005e8af0(param_1[uVar2 + 2]);
  if (uVar2 != 2) {
    FUN__text__005e8af0(param_1[uVar2 + 3]);
    if ((uVar2 | 2) != 3) {
      FUN__text__005e8af0(param_1[(uVar2 | 2) + 2]);
    }
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  lVar1 = param_1[1];
  param_1[1] = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  FUN__text__005e3e10(param_1);
  lVar1 = param_1[0x23];
  if (lVar1 != 0) {
    param_1[0x24] = lVar1;
    (**(code **)(*(long *)param_1[0x26] + 0x18))
              ((long *)param_1[0x26],lVar1,param_1[0x25] - lVar1,8);
  }
  lVar1 = param_1[0x1d];
  if (lVar1 != 0) {
    param_1[0x1e] = lVar1;
    (**(code **)(*(long *)param_1[0x20] + 0x18))
              ((long *)param_1[0x20],lVar1,param_1[0x1f] - lVar1,8);
  }
  lVar1 = param_1[0x17];
  if (lVar1 != 0) {
    param_1[0x18] = lVar1;
    (**(code **)(*(long *)param_1[0x1a] + 0x18))
              ((long *)param_1[0x1a],lVar1,param_1[0x19] - lVar1,8);
  }
  FUN__text__005e3f20(param_1 + 10);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 9));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 5));
  if (param_1[4] != 0) {
    (**(code **)(*(long *)(param_1[4] + 0x48) + 0x18))();
    param_1[4] = 0;
  }
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
    param_1[3] = 0;
  }
  if (param_1[2] != 0) {
    (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
    param_1[2] = 0;
  }
  if (param_1[1] != 0) {
    (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
    *param_1 = 0;
  }
  return;
}


