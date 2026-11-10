/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d6d50; name: FUN_.text__003d6d50
 */


bool FUN__text__003d6d50(long param_1,long param_2,uint param_3)

{
  bool bVar1;
  ulong uVar2;
  size_t __n;
  ulong uVar3;
  size_t *psVar4;
  
  if ((int)param_3 < 1) {
    return true;
  }
  uVar3 = 0;
  bVar1 = false;
  psVar4 = (size_t *)(param_2 + 8);
  do {
    __n = *psVar4;
    if ((long)__n < 0) {
      if (*(int *)(param_1 + 0x28) == 0) {
        *(undefined4 *)(param_1 + 0x28) = 0x16;
        return bVar1;
      }
      return bVar1;
    }
    if (*(ulong *)(param_1 + 0x20) < *(long *)(param_1 + 0x10) + __n) {
      uVar2 = FUN__text__003d6a74(param_1,(void *)psVar4[-1],__n);
      if ((uVar2 & 1) == 0) {
        return bVar1;
      }
    }
    else {
      memcpy((void *)(*(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x10)),(void *)psVar4[-1],__n)
      ;
      *(size_t *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + __n;
    }
    uVar3 = uVar3 + 1;
    psVar4 = psVar4 + 2;
    bVar1 = param_3 <= uVar3;
  } while (param_3 != uVar3);
  return bVar1;
}


