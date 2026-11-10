/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00114698; name: FUN_.text__00114698
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00114698(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = _DAT_0089fde0 + 0x60;
  lVar1 = _DAT_0089fde0 + 0xa0;
  *param_1 = _DAT_0089fde0 + 0x10;
  param_1[9] = lVar2;
  param_1[10] = lVar1;
  if (param_1[0x2d] != 0) {
    (**(code **)(*(long *)(param_1[0x2d] + 0x48) + 0x18))();
    param_1[0x2d] = 0;
  }
  nn::os::FinalizeConditionVariable((ConditionVariableType *)(param_1 + 0x2a));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x26));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x22));
  lVar2 = param_1[0x1c];
  if (lVar2 != 0) {
    param_1[0x1d] = lVar2;
    (**(code **)(*(long *)param_1[0x1f] + 0x18))
              ((long *)param_1[0x1f],lVar2,param_1[0x1e] - lVar2,8);
  }
  lVar2 = param_1[0x16];
  if (lVar2 != 0) {
    param_1[0x17] = lVar2;
    (**(code **)(*(long *)param_1[0x19] + 0x18))
              ((long *)param_1[0x19],lVar2,param_1[0x18] - lVar2,8);
  }
  if (param_1[0x15] != 0) {
    (**(code **)(*(long *)(param_1[0x15] + 0x48) + 0x18))();
    param_1[0x15] = 0;
  }
  if ((param_1[0xf] != 0) && (param_1[0xc] != 0)) {
    (**(code **)(*(long *)(param_1[0xc] + 0x48) + 0x18))();
  }
  param_1[0xc] = 0;
  param_1[0xd] = -0x340d631b7bddd9bb;
  param_1[0xe] = 0x70f683;
  param_1[0xf] = 0;
  if (param_1[0x10] != 0) {
    (**(code **)(*(long *)(param_1[0x10] + 0x48) + 0x18))();
  }
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *param_1 = 0x867b90;
  param_1[9] = 0x867bd0;
  param_1[10] = 0x867c10;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


