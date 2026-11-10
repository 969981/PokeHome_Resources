/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b2e38; name: FUN_.text__006b2e38
 */


float FUN__text__006b2e38(long param_1)

{
  byte bVar1;
  float fVar2;
  
  bVar1 = *(byte *)(param_1 + 0x5b);
  if ((bVar1 & 3) == 2) {
    fVar2 = -*(float *)(param_1 + 0x50);
  }
  else {
    fVar2 = 0.0;
    if ((bVar1 & 3) == 0) {
      fVar2 = *(float *)(param_1 + 0x50) * -0.5;
    }
  }
  bVar1 = bVar1 >> 2 & 3;
  if ((bVar1 == 2) || (bVar1 != 0)) {
    return fVar2;
  }
  return fVar2;
}


