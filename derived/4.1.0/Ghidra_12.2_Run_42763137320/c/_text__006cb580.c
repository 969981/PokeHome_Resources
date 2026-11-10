/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006cb580; name: FUN_.text__006cb580
 */


void FUN__text__006cb580(float param_1,float param_2,long *param_3)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (**(code **)(*param_3 + 0x70))();
  if (iVar1 == 1) {
    fVar2 = 1.0 - param_2;
    param_2 = 1.0 - param_1;
    *(float *)(param_3 + 1) = fVar2;
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    *(float *)(param_3 + 1) = param_1;
  }
  *(float *)((long)param_3 + 0xc) = param_2;
  return;
}


