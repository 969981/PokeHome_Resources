/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006cc350; name: FUN_.text__006cc350
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__006cc350(long param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x34);
  if (*(float *)(param_1 + 0x34) <= *(float *)(param_1 + 0x30)) {
    fVar1 = *(float *)(param_1 + 0x30);
  }
  fVar1 = acosf(-2.0 / (fVar1 * 0.5) + 1.0);
  if (0.0 < fVar1) {
    return (int)(*_DAT_008a5840 / fVar1) * 4 + 4;
  }
  return 4;
}


