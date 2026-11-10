/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00549184; name: FUN_.text__00549184
 */


undefined8 FUN__text__00549184(long param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  fVar3 = (float)param_2[1];
  *(float *)(param_1 + 8) = fVar3;
  fVar4 = (float)param_2[2];
  *(float *)(param_1 + 0xc) = fVar4;
  fVar2 = exp2f((float)param_2[3] * 0.1660964);
  *(float *)(param_1 + 0x10) = fVar2;
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 4);
  uVar1 = *(undefined1 *)((long)param_2 + 0x11);
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  *(undefined1 *)(param_1 + 0x1c) = uVar1;
  *(float *)(param_1 + 8) = fVar3 * 0.01;
  *(float *)(param_1 + 0xc) = fVar4 * 0.01;
  return 1;
}


