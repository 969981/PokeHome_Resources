/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004290f0; name: FUN_.text__004290f0
 */


float FUN__text__004290f0(long *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)(**(code **)(*param_1 + 0x48))();
  fVar1 = (float)((uint)(fVar2 + 1e-38) & 0x7fffff | 0x3f800000);
  fVar3 = fVar1 + 1.0;
  return ((float)((uint)(fVar2 + 1e-38) >> 0x17 & 0xff) * 0.30103 + -38.230812 +
         (fVar1 * 1.1581186 * fVar1 * fVar1 + -1.1581186) / (fVar3 * fVar3 * fVar3)) * 20.0;
}


