/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cdb6c; name: FUN_.text__004cdb6c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__004cdb6c(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  lVar4 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
  *_DAT_008a45e8 = lVar4;
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar2 = 0;
  uVar3 = (uint)((ulong)lVar4 >> 0x21);
  if (uVar1 != 0) {
    uVar2 = uVar3 / uVar1;
  }
  return uVar3 - uVar2 * uVar1;
}


