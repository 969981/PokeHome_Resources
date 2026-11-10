/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ad204; name: FUN_.text__003ad204
 */


void FUN__text__003ad204(long param_1,float *param_2,float *param_3)

{
  undefined1 local_40 [16];
  undefined8 local_30 [2];
  
  if (*(char *)(param_1 + 0x6e8) == '\0') {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x58))
              (*(long **)(param_1 + 0x98),param_1 + 0x6d0,local_30,local_40);
    *(undefined8 *)param_2 = local_30[0];
    *param_3 = local_40._0_4_;
    param_3[1] = local_40._4_4_;
    return;
  }
  *param_2 = *(float *)(param_1 + 0x6d8) - *(float *)(param_1 + 0x6e0) * 0.5;
  param_2[1] = *(float *)(param_1 + 0x6dc) + *(float *)(param_1 + 0x6e4) * 0.5;
  *param_3 = *(float *)(param_1 + 0x6d8) + *(float *)(param_1 + 0x6e0) * 0.5;
  param_3[1] = *(float *)(param_1 + 0x6dc) - *(float *)(param_1 + 0x6e4) * 0.5;
  return;
}


