/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004de4c0; name: FUN_.text__004de4c0
 */


void FUN__text__004de4c0(undefined8 *param_1,uint *param_2,uint param_3)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = NEON_ucvtf((ulong)param_2[1]);
  *param_1 = uVar1;
  dVar2 = (double)NEON_ucvtf((ulong)*param_2);
  param_1[1] = dVar2 / (double)param_3;
  return;
}


