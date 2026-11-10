/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048cf60; name: FUN_.text__0048cf60
 */


undefined8 FUN__text__0048cf60(long *param_1,uint param_2,long param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 3));
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_2 / uVar1;
    }
    for (lVar3 = *(long *)(*param_1 + (ulong)(param_2 - uVar2 * uVar1) * 8); lVar3 != 0;
        lVar3 = *(long *)(lVar3 + 0x68)) {
      if (*(uint *)(lVar3 + 0x4c) == param_2) {
        if ((*(long *)(lVar3 + 0x28) == param_3) && (*(int *)(lVar3 + 0x24) == param_4)) {
          uVar4 = 1;
          *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 1;
          goto LAB__text__0048d014;
        }
        break;
      }
    }
  }
  uVar4 = 0;
LAB__text__0048d014:
  nn::os::UnlockMutex((MutexType *)(param_1 + 3));
  return uVar4;
}


