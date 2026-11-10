/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005574a0; name: FUN_.text__005574a0
 */


undefined8 FUN__text__005574a0(long param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = param_2[3];
  *(undefined4 *)(param_1 + 0x18) = param_2[4];
  fVar1 = exp2f((float)param_2[5] * 0.1660964);
  *(float *)(param_1 + 0x1c) = fVar1;
  fVar2 = expf((float)param_2[6] * -0.06);
  fVar1 = fVar2 + -0.002478838;
  if (fVar2 + -0.002478838 <= 0.0001) {
    fVar1 = 0.0001;
  }
  *(float *)(param_1 + 0x20) = fVar1;
  *(int *)(param_1 + 0x28) = (int)*(short *)(param_2 + 7);
  *(bool *)(param_1 + 0x24) = *(short *)((long)param_2 + 0x1e) == 1;
  return 1;
}


