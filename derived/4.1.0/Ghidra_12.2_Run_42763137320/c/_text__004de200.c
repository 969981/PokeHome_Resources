/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004de200; name: FUN_.text__004de200
 */


float FUN__text__004de200(undefined4 *param_1,ushort param_2)

{
  float fVar1;
  float fVar2;
  
  if (param_2 == 0) {
    return 0.0;
  }
  fVar1 = (float)NEON_ucvtf(param_1[2]);
  fVar2 = (float)NEON_ucvtf(*param_1);
  return ((fVar1 + (float)(int)(param_2 - 1) * (float)((param_1[4] - param_1[3]) + 1)) * 1000.0) /
         fVar2;
}


