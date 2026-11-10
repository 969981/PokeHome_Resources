/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055d6ec; name: FUN_.text__0055d6ec
 */


void FUN__text__0055d6ec(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 1 << (ulong)(param_2 & 0x1f);
  if ((param_3 & 1) == 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & (uVar1 ^ 0xffffffff);
    return;
  }
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | uVar1;
  return;
}


