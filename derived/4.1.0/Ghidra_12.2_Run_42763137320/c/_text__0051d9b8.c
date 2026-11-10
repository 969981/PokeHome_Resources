/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051d9b8; name: FUN_.text__0051d9b8
 */


undefined1  [16] FUN__text__0051d9b8(long param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar1 = *(long *)(param_1 + 8);
  fVar9 = *(float *)(lVar1 + 0x10);
  fVar8 = *(float *)(lVar1 + 0x14);
  fVar4 = *(float *)(lVar1 + 0x3c) * param_2[1];
  fVar2 = *(float *)(lVar1 + 0x38) * *param_2;
  fVar5 = *(float *)(lVar1 + 0x40) * param_2[2];
  fVar6 = *(float *)(lVar1 + 0x18);
  fVar7 = *(float *)(lVar1 + 0x1c);
  fVar4 = (fVar6 * fVar5 - fVar7 * fVar4) * fVar9 +
          fVar8 * (fVar8 * fVar2 + fVar4 * fVar6 + fVar5 * fVar7);
  auVar3._0_8_ = *(double *)(lVar1 + 0x20) +
                 (double)(fVar4 + fVar4 +
                         fVar2 * (fVar9 * fVar9 - (fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7)));
  auVar3._8_8_ = 0;
  return auVar3;
}


