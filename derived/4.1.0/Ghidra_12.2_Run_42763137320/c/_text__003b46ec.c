/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b46ec; name: FUN_.text__003b46ec
 */


float FUN__text__003b46ec(float param_1)

{
  float fVar1;
  
  if (param_1 < 0.5) {
    fVar1 = sinf((param_1 + param_1 + -1.0) * 1.5707964);
    return (fVar1 + 1.0) * 0.5;
  }
  fVar1 = sinf(((1.0 - (param_1 * 2.0 + -1.0)) + -1.0) * 1.5707964);
  return (1.0 - (fVar1 + 1.0)) * 0.5 + 0.5;
}


