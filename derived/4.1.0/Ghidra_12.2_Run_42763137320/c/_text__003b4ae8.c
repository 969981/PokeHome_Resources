/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b4ae8; name: FUN_.text__003b4ae8
 */


float FUN__text__003b4ae8(float param_1)

{
  float fVar1;
  float fVar2;
  
  if (0.5 <= param_1) {
    fVar1 = 1.0 - (param_1 * 2.0 + -1.0);
    fVar2 = 1.0 - fVar1 * fVar1;
    fVar1 = SQRT(fVar2);
    if (NAN(fVar1)) {
      fVar1 = sqrtf(fVar2);
      return (fVar1 + -1.0 + 1.0) * 0.5 + 0.5;
    }
    return (fVar1 + -1.0 + 1.0) * 0.5 + 0.5;
  }
  fVar2 = 1.0 - (param_1 + param_1) * (param_1 + param_1);
  fVar1 = SQRT(fVar2);
  if (NAN(fVar1)) {
    fVar1 = sqrtf(fVar2);
    return (1.0 - fVar1) * 0.5;
  }
  return (1.0 - fVar1) * 0.5;
}


