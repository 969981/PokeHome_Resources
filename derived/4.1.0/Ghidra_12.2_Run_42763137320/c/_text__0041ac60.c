/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0041ac60; name: FUN_.text__0041ac60
 */


float FUN__text__0041ac60(long param_1)

{
  float fVar1;
  
  fVar1 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x34));
  return (fVar1 * 1.5258789e-05) / *(float *)(param_1 + 100);
}


