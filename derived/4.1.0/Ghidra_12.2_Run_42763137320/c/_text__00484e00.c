/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00484e00; name: FUN_.text__00484e00
 */


uint * FUN__text__00484e00(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x58));
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar3 = 0x80000000;
  if ((param_3 & 1) == 0) {
    uVar3 = 0;
  }
  puVar4 = *(uint **)(param_1 + 0x10);
  puVar2 = puVar4;
  if (uVar1 == 0) {
LAB__text__00484e70:
    if (puVar2 != puVar4 + (ulong)uVar1 * 6) {
      puVar2 = puVar2 + 2;
      goto LAB__text__00484e94;
    }
  }
  else {
    lVar5 = (ulong)uVar1 * 0x18;
    do {
      if (*puVar2 == (uVar3 | param_2 & 0x7fffffff)) goto LAB__text__00484e70;
      puVar2 = puVar2 + 6;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
  }
  puVar2 = (uint *)FUN__text__004897d0(param_1);
LAB__text__00484e94:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x58));
  return puVar2;
}


