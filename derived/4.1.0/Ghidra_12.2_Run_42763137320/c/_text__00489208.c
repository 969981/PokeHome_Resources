/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00489208; name: FUN_.text__00489208
 */


void FUN__text__00489208(long param_1,float *param_2,uint *param_3,float *param_4)

{
  uint uVar1;
  float *pfVar2;
  
  if (param_2 == (float *)0x0) {
    *param_3 = 3;
  }
  else {
    uVar1 = *param_3;
    if (2 < uVar1) {
      uVar1 = 3;
    }
    *param_3 = uVar1;
    if (uVar1 != 0) {
      pfVar2 = *(float **)(param_1 + 0x80);
      *param_2 = *pfVar2 * 57.295776;
      if ((uVar1 != 1) && (param_2[1] = pfVar2[1] * 57.295776, uVar1 != 2)) {
        param_2[2] = pfVar2[2] * 57.295776;
      }
    }
  }
  *param_4 = *(float *)(param_1 + 0x88) * 57.295776;
  return;
}


