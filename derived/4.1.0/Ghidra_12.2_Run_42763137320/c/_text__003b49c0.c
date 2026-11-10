/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b49c0; name: FUN_.text__003b49c0
 */


float FUN__text__003b49c0(float param_1)

{
  float fVar1;
  
  if (param_1 < 0.5) {
    param_1 = param_1 + param_1;
    if (param_1 != 0.0) {
      param_1 = exp2f((param_1 + -1.0) * 10.0);
    }
    return param_1 * 0.5;
  }
  fVar1 = 1.0 - (param_1 * 2.0 + -1.0);
  if (fVar1 == 0.0) {
    return (1.0 - fVar1) * 0.5 + 0.5;
  }
  fVar1 = exp2f((fVar1 + -1.0) * 10.0);
  return (1.0 - fVar1) * 0.5 + 0.5;
}


