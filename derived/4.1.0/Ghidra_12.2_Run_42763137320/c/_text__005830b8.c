/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005830b8; name: FUN_.text__005830b8
 */


void FUN__text__005830b8(float param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = tanf((param_1 * 3.1415927) / param_2);
  fVar1 = 1.0 / fVar1;
  fVar2 = fVar1 * fVar1;
  fVar3 = 1.0 / (fVar1 * 1.4142135 + 1.0 + fVar2);
  *param_3 = fVar3;
  param_3[1] = fVar3 + fVar3;
  param_3[2] = fVar3;
  param_3[3] = fVar3 * (2.0 - (fVar2 + fVar2));
  param_3[4] = fVar3 * ((1.0 - fVar1 * 1.4142135) + fVar2);
  return;
}


