/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00520f94; name: FUN_.text__00520f94
 */


undefined1  [16] FUN__text__00520f94(long param_1,double *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar3 = *param_2 - *(double *)(param_1 + 0x598);
  dVar4 = param_2[1] - *(double *)(param_1 + 0x5a0);
  dVar5 = param_2[2] - *(double *)(param_1 + 0x5a8);
  dVar6 = dVar3 * (double)*(float *)(param_1 + 0x5b0) + (double)*(float *)(param_1 + 0x5b4) * dVar4
          + (double)*(float *)(param_1 + 0x5b8) * dVar5;
  dVar2 = (double)-*(float *)(param_1 + 0x5d4);
  if ((dVar2 <= dVar6) && (dVar2 = (double)*(float *)(param_1 + 0x5d4), dVar6 <= dVar2)) {
    dVar2 = dVar6;
  }
  dVar4 = dVar3 * (double)*(float *)(param_1 + 0x5bc) + (double)*(float *)(param_1 + 0x5c0) * dVar4
          + (double)*(float *)(param_1 + 0x5c4) * dVar5;
  dVar3 = (double)-*(float *)(param_1 + 0x5d8);
  if ((dVar3 <= dVar4) && (dVar3 = (double)*(float *)(param_1 + 0x5d8), dVar4 <= dVar3)) {
    dVar3 = dVar4;
  }
  auVar1._0_8_ = *(double *)(param_1 + 0x598) + (double)*(float *)(param_1 + 0x5b0) * dVar2 +
                 (double)*(float *)(param_1 + 0x5bc) * dVar3;
  auVar1._8_8_ = 0;
  return auVar1;
}


