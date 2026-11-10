/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048f080; name: FUN_.text__0048f080
 */


undefined8
FUN__text__0048f080(long param_1,int param_2,undefined8 param_3,undefined8 param_4,
                   undefined4 param_5)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x30));
  piVar3 = *(int **)(param_1 + 0x10);
  uVar1 = *(uint *)(param_1 + 0x18);
  piVar2 = piVar3;
  if (uVar1 == 0) {
LAB__text__0048f0f0:
    if (piVar2 != piVar3 + (ulong)uVar1 * 8) {
      local_60 = *(undefined8 *)(piVar2 + 6);
      local_44 = (undefined1)piVar2[4];
      uStack_58 = param_3;
      local_50 = param_4;
      local_48 = param_5;
      (**(code **)(piVar2 + 2))(&local_60);
      uVar5 = 1;
      goto LAB__text__0048f130;
    }
  }
  else {
    lVar4 = (ulong)uVar1 << 5;
    do {
      if (*piVar2 == param_2) goto LAB__text__0048f0f0;
      piVar2 = piVar2 + 8;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  uVar5 = 0;
LAB__text__0048f130:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x30));
  return uVar5;
}


