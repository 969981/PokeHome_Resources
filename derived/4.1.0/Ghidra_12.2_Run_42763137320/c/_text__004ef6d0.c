/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ef6d0; name: FUN_.text__004ef6d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__004ef6d0(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 300) == 2) {
    iVar3 = 0;
    if ((*(ushort *)(param_1 + 0x130) + 1 & 0xffff) < *(uint *)(param_1 + 0x110)) {
      iVar3 = *(ushort *)(param_1 + 0x130) + 1;
    }
    *(short *)(param_1 + 0x130) = (short)iVar3;
  }
  else {
    if (*(int *)(param_1 + 300) != 1) {
      return 0;
    }
    uVar1 = *(uint *)(param_1 + 0x110);
    iVar3 = 0;
    if (uVar1 != 0) {
      lVar5 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
      *_DAT_008a45e8 = lVar5;
      uVar2 = 0;
      uVar4 = (uint)((ulong)lVar5 >> 0x21);
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      return uVar4 - uVar2 * uVar1;
    }
  }
  return iVar3;
}


