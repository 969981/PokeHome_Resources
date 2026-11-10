/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00112ed0; name: FUN_.text__00112ed0
 */


int FUN__text__00112ed0(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  int iVar4;
  ulong uVar5;
  
  puVar3 = *(ulong **)(*(long *)(param_1 + 0x508) + 400);
  if (*puVar3 == 0) {
    iVar4 = 0;
  }
  else {
    uVar5 = 0;
    iVar4 = 0;
    do {
      uVar2 = FUN__text__00325c90(uVar5);
      if ((uVar2 & 1) != 0) {
        iVar1 = FUN__text__00279db0(puVar3,uVar5);
        iVar4 = iVar1 + iVar4;
      }
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 < *puVar3);
  }
  return iVar4;
}


