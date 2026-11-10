/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b45a8; name: FUN_.text__006b45a8
 */


void FUN__text__006b45a8(long *param_1,float *param_2)

{
  byte bVar1;
  float fVar2;
  undefined8 local_28;
  
  local_28 = 0;
  (**(code **)(*param_1 + 0x60))(param_1,&local_28);
  if ((*(byte *)((long)param_1 + 0x5b) & 3) == 2) {
    *param_2 = -(float)local_28;
    bVar1 = *(byte *)((long)param_1 + 0x5b);
  }
  else {
    fVar2 = 0.0;
    if ((*(byte *)((long)param_1 + 0x5b) & 3) == 0) {
      fVar2 = (float)local_28 * -0.5;
    }
    *param_2 = fVar2;
    bVar1 = *(byte *)((long)param_1 + 0x5b);
  }
  bVar1 = bVar1 >> 2 & 3;
  if (bVar1 == 2) {
    param_2[1] = local_28._4_4_;
    return;
  }
  fVar2 = 0.0;
  if (bVar1 == 0) {
    fVar2 = local_28._4_4_ * 0.5;
  }
  param_2[1] = fVar2;
  return;
}


