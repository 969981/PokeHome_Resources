/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b4c2c; name: FUN_.text__003b4c2c
 */


float FUN__text__003b4c2c(float param_1)

{
  float fVar1;
  float fVar2;
  
  if (param_1 < 0.5) {
    param_1 = param_1 + param_1;
    fVar1 = sinf(param_1 * 3.1415927);
    return (-(param_1 * fVar1) + param_1 * param_1 * param_1) * 0.5;
  }
  fVar2 = 1.0 - (param_1 * 2.0 + -1.0);
  fVar1 = sinf(fVar2 * 3.1415927);
  return (1.0 - (-(fVar2 * fVar1) + fVar2 * fVar2 * fVar2)) * 0.5 + 0.5;
}


