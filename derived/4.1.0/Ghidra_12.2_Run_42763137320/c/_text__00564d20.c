/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00564d20; name: FUN_.text__00564d20
 */


void FUN__text__00564d20(long *param_1,undefined4 *param_2,float *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  lVar10 = *param_1;
  fVar17 = *(float *)(param_1[1] + (ulong)param_5 * 4);
  puVar9 = (undefined8 *)(lVar10 + (ulong)param_5 * 0x18);
  uVar8 = *(uint *)((long)puVar9 + 0xc);
  if (param_4 != 0) {
    uVar5 = *(uint *)(param_1 + 3);
    fVar16 = *(float *)(param_1 + 2);
    fVar14 = (float)uVar5;
    lVar10 = *(long *)*puVar9;
    fVar15 = (float)(uVar5 >> 1);
    do {
      uVar13 = uVar5 - uVar8;
      uVar6 = param_4;
      uVar7 = uVar8;
      uVar1 = param_4;
      if (uVar13 <= param_4) {
        uVar6 = uVar13;
        uVar1 = uVar13;
      }
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        fVar17 = fVar17 + fVar16;
        if (fVar14 <= fVar17) {
          fVar18 = fVar14;
          if (fVar17 + fVar15 < fVar14) goto LAB__text__00564e4c;
LAB__text__00564eb0:
          fVar18 = fVar17 - fVar18;
          fVar19 = fVar14;
          if (fVar18 < 0.0) goto LAB__text__00564e5c;
LAB__text__00564ec4:
          fVar22 = -0.0;
          fVar19 = (fVar17 + fVar15) - fVar19;
          if (fVar19 < 0.0) goto LAB__text__00564e6c;
LAB__text__00564ed8:
          fVar21 = -0.0;
          fVar20 = -0.0;
          fVar17 = fVar22 + fVar18;
          fVar22 = (float)uVar7;
          fVar18 = fVar22 - fVar17;
          iVar11 = (int)fVar18;
          if (iVar11 < (int)uVar5) goto LAB__text__00564e84;
LAB__text__00564ef4:
          iVar12 = (int)(fVar22 - (fVar19 + fVar21));
          uVar8 = uVar5;
          if (iVar12 < (int)uVar5) goto LAB__text__00564f0c;
LAB__text__00564da0:
          uVar13 = uVar5;
        }
        else {
          fVar18 = 0.0;
          if (fVar14 <= fVar17 + fVar15) goto LAB__text__00564eb0;
LAB__text__00564e4c:
          fVar18 = fVar17 - fVar18;
          fVar19 = 0.0;
          if (0.0 <= fVar18) goto LAB__text__00564ec4;
LAB__text__00564e5c:
          fVar19 = (fVar17 + fVar15) - fVar19;
          fVar22 = fVar14;
          if (0.0 <= fVar19) goto LAB__text__00564ed8;
LAB__text__00564e6c:
          fVar17 = fVar22 + fVar18;
          fVar22 = (float)uVar7;
          fVar18 = fVar22 - fVar17;
          iVar11 = (int)fVar18;
          fVar20 = fVar14;
          fVar21 = fVar14;
          if ((int)uVar5 <= iVar11) goto LAB__text__00564ef4;
LAB__text__00564e84:
          uVar8 = 0;
          iVar12 = (int)(fVar22 - (fVar19 + fVar20));
          if ((int)uVar5 <= iVar12) goto LAB__text__00564da0;
LAB__text__00564f0c:
          uVar13 = 0;
        }
        uVar2 = uVar5;
        if ((iVar11 - uVar8 & 0x80000000) == 0) {
          uVar2 = 0;
        }
        iVar11 = uVar2 + (iVar11 - uVar8);
        uVar8 = uVar5;
        if ((iVar12 - uVar13 & 0x80000000) == 0) {
          uVar8 = 0;
        }
        fVar18 = fVar18 - (float)(int)fVar18;
        iVar3 = 0;
        if (iVar11 + 1 < (int)uVar5) {
          iVar3 = iVar11 + 1;
        }
        iVar12 = uVar8 + (iVar12 - uVar13);
        fVar19 = *(float *)(lVar10 + (long)iVar12 * 4);
        iVar4 = 0;
        if (iVar12 + 1 < (int)uVar5) {
          iVar4 = iVar12 + 1;
        }
        fVar22 = *(float *)(lVar10 + (long)iVar11 * 4) * (1.0 - fVar18) +
                 fVar18 * *(float *)(lVar10 + (long)iVar3 * 4);
        fVar20 = *(float *)(lVar10 + (long)iVar4 * 4);
        *(undefined4 *)(lVar10 + (ulong)uVar7 * 4) = *param_2;
        *param_3 = fVar22 + ABS(fVar17 - fVar15) * (1.0 / fVar15) *
                            ((fVar19 * (1.0 - fVar18) - fVar22) + fVar18 * fVar20);
        param_2 = param_2 + 1;
        param_3 = param_3 + 1;
        uVar7 = uVar7 + 1;
      }
      uVar8 = 0;
      if (uVar7 != uVar5) {
        uVar8 = uVar7;
      }
      param_4 = param_4 - uVar1;
    } while (param_4 != 0);
    lVar10 = *param_1;
  }
  *(uint *)(lVar10 + (ulong)param_5 * 0x18 + 0xc) = uVar8;
  *(float *)(param_1[1] + (ulong)param_5 * 4) = fVar17;
  return;
}


