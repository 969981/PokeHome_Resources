/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bd968; name: FUN_.text__006bd968
 */


void FUN__text__006bd968(long *param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  if (((*(byte *)((long)param_1 + 0x62) >> 1 & 1) == 0) ||
     (lVar1 = FUN__text__006b44cc(param_1), (*(byte *)(lVar1 + 0x228) >> 1 & 1) == 0)) {
    *param_2 = ABS(*(float *)(param_1 + 10));
    param_2[1] = ABS(*(float *)((long)param_1 + 0x54));
    return;
  }
  local_40 = 0;
  local_38 = 0;
  FUN__text__006bda44(param_1,&local_40);
  fVar3 = (float)local_38 - (float)local_40;
  if ((float)local_38 - (float)local_40 <= ABS(*(float *)(param_1 + 10))) {
    fVar3 = ABS(*(float *)(param_1 + 10));
  }
  fVar2 = (float)(**(code **)(*param_1 + 0x70))(param_1);
  *param_2 = fVar3 + fVar2 * 2.0;
  fVar3 = local_38._4_4_ - local_40._4_4_;
  if (local_38._4_4_ - local_40._4_4_ <= ABS(*(float *)((long)param_1 + 0x54))) {
    fVar3 = ABS(*(float *)((long)param_1 + 0x54));
  }
  param_2[1] = fVar3;
  return;
}


