/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00192b70; name: FUN_.text__00192b70
 */


int FUN__text__00192b70(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 == 0) {
    return 0;
  }
  if (uVar1 == 1) {
    uVar3 = 0;
    iVar2 = 0;
  }
  else {
    uVar3 = 0;
    iVar2 = 0;
    plVar4 = (long *)(param_1 + 0x30);
    do {
      uVar3 = uVar3 + 2;
      iVar2 = *(int *)(*plVar4 + 8) + *(int *)(plVar4[-4] + 8) + iVar2;
      plVar4 = plVar4 + 8;
    } while (((ulong)uVar1 & 0xfffffffe) != uVar3);
  }
  if ((uVar1 & 1) == 0) {
    return iVar2;
  }
  return *(int *)(*(long *)(param_1 + uVar3 * 0x20 + 0x10) + 8) + iVar2;
}


