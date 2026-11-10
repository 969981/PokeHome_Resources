/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001de988; name: FUN_.text__001de988
 */


float FUN__text__001de988(float *param_1)

{
  uint uVar1;
  float fVar2;
  
  FUN__text__0015ab30();
  uVar1 = (uint)((*param_1 + 840.0 + 1.0) / 112.0);
  uVar1 = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  if (0xe < uVar1) {
    uVar1 = 0xf;
  }
  fVar2 = (float)(int)(uVar1 - 0xc) * 112.0 + 94.0;
  if (uVar1 < 0xc) {
    fVar2 = (float)(int)uVar1 * 112.0 + -710.0;
  }
  return fVar2;
}


