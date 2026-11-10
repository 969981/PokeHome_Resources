/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00471290; name: FUN_.text__00471290
 */


void FUN__text__00471290(uint *param_1,undefined1 param_2 [16],float param_3,long *param_4,
                        long param_5,float *param_6)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  double *pdVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  *param_6 = 0.0;
  fVar9 = (float)FUN__text__00467330();
  param_1[3] = (uint)fVar9;
  param_1[4] = (uint)param_3;
  *param_1 = 0x42480000;
  uVar10 = NEON_fminnm(fVar9,0x42c80000);
  if (((uVar10 ^ 0xffffffff) & 0x7f800000) != 0) {
    *param_1 = uVar10;
  }
  uVar2 = (**(code **)(*param_4 + 0x108))(param_4,param_6);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar4 = *(long *)(param_5 + 8);
  *param_6 = *param_6 * *(float *)(lVar4 + 0x78);
  if (param_3 == 0.0) {
    return;
  }
  lVar8 = *(long *)(lVar4 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x38);
  lVar4 = FUN__text__0044a594(param_5);
  if (*(int *)(lVar4 + 0x18) == 0) {
    fVar14 = 1e+10;
LAB__text__00471400:
    fVar11 = *param_6;
    if (fVar11 <= fVar14) goto LAB__text__00471414;
  }
  else {
    puVar6 = *(undefined8 **)(lVar4 + 0x10);
    if (uVar1 != 0) {
      fVar14 = 1e+10;
      do {
        lVar3 = FUN__text__0047d7d0(*puVar6);
        if (lVar3 != 0) {
          pdVar5 = (double *)(lVar8 + 0x28);
          uVar2 = (ulong)uVar1;
          do {
            uVar2 = uVar2 - 1;
            fVar13 = (float)(*(double *)(lVar3 + 0x88) - *pdVar5);
            fVar12 = (float)(*(double *)(lVar3 + 0x80) - pdVar5[-1]);
            fVar11 = (float)(*(double *)(lVar3 + 0x78) - pdVar5[-2]);
            fVar14 = (float)NEON_fminnm(fVar14,SQRT(fVar11 * fVar11 + fVar12 * fVar12 +
                                                    fVar13 * fVar13) *
                                               (1.0 / *(float *)(lVar3 + 0x90)));
            pdVar5 = pdVar5 + 7;
          } while (uVar2 != 0);
        }
        puVar6 = puVar6 + 1;
      } while (puVar6 != (undefined8 *)
                         (*(long *)(lVar4 + 0x10) + (ulong)*(uint *)(lVar4 + 0x18) * 8));
      goto LAB__text__00471400;
    }
    fVar14 = 1e+10;
    do {
      puVar7 = puVar6 + 1;
      FUN__text__0047d7d0(*puVar6);
      puVar6 = puVar7;
    } while (puVar7 != (undefined8 *)(*(long *)(lVar4 + 0x10) + (ulong)*(uint *)(lVar4 + 0x18) * 8))
    ;
    fVar11 = *param_6;
    if (fVar11 <= 1e+10) goto LAB__text__00471414;
  }
  param_3 = (fVar14 * param_3) / fVar11;
LAB__text__00471414:
  param_3 = param_3 + fVar9;
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  uVar10 = NEON_fminnm(param_3,0x42c80000);
  if (((uVar10 ^ 0xffffffff) & 0x7f800000) != 0) {
    *param_1 = uVar10;
  }
  return;
}


