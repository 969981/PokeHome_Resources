/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fcfa0; name: FUN_.text__003fcfa0
 */


undefined8 FUN__text__003fcfa0(long param_1,long *param_2,undefined4 *param_3,uint param_4)

{
  MutexType *pMVar1;
  long lVar2;
  ulong uVar3;
  
  pMVar1 = (MutexType *)(param_1 + 0x28);
  *param_2 = 0;
  *param_3 = 0;
  nn::os::LockMutex(pMVar1);
  lVar2 = FUN__text__003fce50(param_1,param_3);
  *param_2 = lVar2;
  if ((lVar2 != 0) || (*(char *)(param_1 + 0xc3) != '\0')) goto LAB__text__003fcff4;
  if (*(char *)(param_1 + 0x69) == '\0') {
    lVar2 = 0;
    if ((param_4 & 1) == 0) goto LAB__text__003fcff4;
  }
  else {
    lVar2 = FUN__text__003fce50(param_1,param_3);
    *param_2 = lVar2;
    if (lVar2 != 0) goto LAB__text__003fcff4;
    uVar3 = (**(code **)(**(long **)(param_1 + 0x50) + 0x58))(*(long **)(param_1 + 0x50),param_1);
    if ((uVar3 & 1) == 0) {
      lVar2 = *param_2;
    }
    else {
      lVar2 = FUN__text__003fce50(param_1,param_3);
      *param_2 = lVar2;
    }
    if (lVar2 == 0 && (param_4 & 1) == 0) goto LAB__text__003fcff4;
  }
  while (((lVar2 == 0 && (*(char *)(param_1 + 0xc3) == '\0')) &&
         (*(char *)(param_1 + 0x6a) != '\0' || *(int *)(param_1 + 0x98) != 0))) {
    FUN__text__003fdc68(param_1);
    nn::os::UnlockMutex(pMVar1);
    FUN__text__003fe1b0(*(undefined8 *)(param_1 + 0x50),param_1);
    nn::os::LockMutex(pMVar1);
    lVar2 = FUN__text__003fce50(param_1,param_3);
    *param_2 = lVar2;
  }
LAB__text__003fcff4:
  nn::os::UnlockMutex(pMVar1);
  if (*(char *)(param_1 + 0xc3) != '\0') {
    return 2;
  }
  if (*param_2 == 0) {
    if ((*(char *)(param_1 + 0x67) == '\0') ||
       (*(ulong *)(param_1 + 0x78) < **(ulong **)(param_1 + 0x20))) {
      return 0x2e;
    }
  }
  else if ((*(char *)(param_1 + 0x67) == '\0') ||
          (*(ulong *)(param_1 + 0x78) < **(ulong **)(param_1 + 0x20))) {
    return 0x2d;
  }
  return 0x11;
}


