/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0020bf30; name: FUN_.text__0020bf30
 */


undefined4 FUN__text__0020bf30(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = *(uint *)(param_1 + 0x74);
  if (uVar2 != 0) {
    iVar5 = 0;
    uVar6 = 0;
    do {
      uVar4 = (ulong)(uVar6 + uVar2 * param_2);
      if ((ulong)((*(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78) >> 2) * -0xf0f0f0f0f0f0f0f)
          <= uVar4) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl();
      }
      if (*(char *)(*(long *)(param_1 + 0x78) + uVar4 * 0x44) != '\0') {
        uVar4 = FUN__text__0020c674();
        if ((uVar4 & 1) == 0) {
          return 1;
        }
        uVar2 = *(uint *)(param_1 + 0x74);
        iVar5 = iVar5 + 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar2);
    if (iVar5 != 0) {
      iVar1 = FUN__text__00322c40();
      uVar2 = FUN__text__00322c20();
      uVar3 = 3;
      if ((uint)(iVar1 + iVar5) <= uVar2) {
        uVar3 = 0;
      }
      return uVar3;
    }
  }
  return 2;
}


