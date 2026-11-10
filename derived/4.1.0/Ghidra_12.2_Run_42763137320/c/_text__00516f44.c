/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00516f44; name: FUN_.text__00516f44
 */


undefined4 FUN__text__00516f44(long param_1,float *param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = param_2[1] - *(float *)(param_1 + 8);
  fVar2 = *param_2 - *(float *)(param_1 + 4);
  fVar4 = param_2[2] - *(float *)(param_1 + 0xc);
  fVar5 = *(float *)(param_1 + 0x1c) * fVar2 + fVar3 * *(float *)(param_1 + 0x20) +
          fVar4 * *(float *)(param_1 + 0x24);
  fVar2 = *(float *)(param_1 + 0x28) * fVar2 + fVar3 * *(float *)(param_1 + 0x2c) +
          fVar4 * *(float *)(param_1 + 0x30);
  uVar1 = 0xfffffffe;
  if (fVar5 < 0.0001 && -0.0001 < fVar2) {
    uVar1 = 1;
  }
  if (fVar2 < 0.0001 && -0.0001 < fVar5) {
    uVar1 = 0;
  }
  if (0.0001 < fVar2 && 0.0001 < fVar5 ||
      (fVar2 < 0.0001 && -0.0001 < fVar5) && (fVar5 < 0.0001 && -0.0001 < fVar2)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


