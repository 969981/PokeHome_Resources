/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001195bc; name: FUN_.text__001195bc
 */


void FUN__text__001195bc(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((*(int *)(param_1 + 0x38) != 2) && ((*(int *)(param_1 + 0x38) != 1 || ((param_3 & 1) != 0))))
  {
    lVar1 = 4;
    if ((param_2 & 1) == 0) {
      lVar1 = 8;
    }
    uVar2 = *(ulong *)(param_1 + 8) >> lVar1;
    if ((uVar2 & 0xf000) != 0) {
      uVar3 = (uVar2 & 0xa000) << 0xf;
      *(ulong *)(param_1 + 8) =
           uVar3 & 0xffffffffc0000000 | (uVar2 >> 0xc & 1) << 0x1f |
           uVar3 & 0x3fffffff | (uVar2 >> 0xe & 1) << 0x1d | *(ulong *)(param_1 + 8);
    }
  }
  return;
}


