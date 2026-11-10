/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005311fc; name: FUN_.text__005311fc
 */


undefined8
FUN__text__005311fc(double param_1,double param_2,double param_3,long param_4,double *param_5)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar1 = *(uint *)(param_4 + 0x130);
  lVar2 = param_4 + (ulong)(uVar1 - 1) * 0x18;
  fVar8 = (float)(param_2 - param_5[1]);
  fVar7 = (float)(param_1 - *param_5);
  fVar9 = (float)(param_3 - param_5[2]);
  fVar4 = (float)(*(double *)(lVar2 + 0x10) - param_2);
  fVar3 = (float)(*(double *)(lVar2 + 8) - param_1);
  fVar5 = (float)(*(double *)(lVar2 + 0x18) - param_3);
  fVar10 = SQRT((fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9) *
                (fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5));
  if (0.001 < fVar10) {
    fVar3 = (float)NEON_fminnm((fVar7 * fVar3 + fVar4 * fVar8 + fVar5 * fVar9) / fVar10,0x3f800000);
    if (fVar3 <= -1.0) {
      fVar3 = -1.0;
    }
    fVar3 = acosf(fVar3);
    fVar3 = fVar3 * 0.31830987;
    if (0.002 < fVar3) {
      fVar4 = *(float *)(param_4 + 0x128) + fVar3;
      uVar6 = NEON_fminnm(fVar4,0x3f800000);
      *(undefined4 *)(param_4 + 0x128) = uVar6;
      if (7 < uVar1) {
        return 0;
      }
      if (1.0 <= fVar4) {
        return 0;
      }
      *(float *)(param_4 + (ulong)uVar1 * 4 + 0x108) = fVar3;
      lVar2 = param_4 + (ulong)*(uint *)(param_4 + 0x130) * 0x18;
      *(double *)(lVar2 + 0x18) = param_3;
      *(double *)(lVar2 + 8) = param_1;
      *(double *)(lVar2 + 0x10) = param_2;
      *(int *)(param_4 + 0x130) = *(int *)(param_4 + 0x130) + 1;
    }
  }
  return 1;
}


