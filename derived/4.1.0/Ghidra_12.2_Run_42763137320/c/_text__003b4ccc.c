/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b4ccc; name: FUN_.text__003b4ccc
 */


float FUN__text__003b4ccc(float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = sinf(param_1 * 20.420353);
  fVar2 = exp2f((param_1 + -1.0) * 10.0);
  return fVar1 * fVar2;
}


