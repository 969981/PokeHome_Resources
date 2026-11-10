/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e2930; name: FUN_.text__006e2930
 */


bool FUN__text__006e2930(float param_1,undefined8 param_2,long param_3,long *param_4,uint *param_5,
                        long param_6,int param_7,int param_8)

{
  undefined1 (*pauVar1) [12];
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float *pfVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  char cVar10;
  undefined1 auVar11 [16];
  int iVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  float fVar20;
  undefined8 uVar19;
  undefined8 uVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  
  iVar7 = *(int *)(param_6 + 0x28);
  iVar8 = *(int *)(param_3 + 0x12b8);
  if (iVar8 < iVar7) {
    FUN__text__006d84b0(0x70fefb);
    *param_4 = 0;
    *param_5 = 0;
  }
  else {
    *param_4 = *(long *)(*(long *)(param_3 + 0x10) + (long)param_8 * 0x9e8 + 0x9d8);
    *param_5 = 0;
    plVar6 = (long *)(param_6 + 0x1d0);
    if (*(char *)(*(long *)(param_6 + 0xa0) + 0x752) != '\0') {
      plVar6 = *(long **)(param_6 + 0xc0);
    }
    if (param_7 == 3) {
      iVar12 = *(int *)(param_6 + 0x28);
      if (iVar12 < 1) {
        uVar13 = 0;
      }
      else {
        lVar14 = 0;
        uVar13 = 0;
        lVar15 = 0;
        lVar16 = 0xc;
        do {
          lVar17 = *(long *)(param_6 + 0xb0) + lVar14;
          if (param_1 - *(float *)(lVar17 + 8) < *(float *)(lVar17 + 0xc)) {
            *(undefined4 *)(*param_4 + (-(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3)) =
                 *(undefined4 *)(plVar6[1] + lVar16);
            *(int *)(*param_4 + (long)(int)*param_5 * 8 + 4) = (int)lVar15;
            uVar13 = (ulong)(*param_5 + 1);
            *param_5 = *param_5 + 1;
            iVar12 = *(int *)(param_6 + 0x28);
          }
          lVar15 = lVar15 + 1;
          lVar16 = lVar16 + 0x10;
          lVar14 = lVar14 + 0x20;
        } while (lVar15 < iVar12);
      }
      iVar12 = (int)uVar13;
      lVar15 = 0;
      if (iVar12 != 0) {
        lVar15 = LZCOUNT((long)iVar12) * -2 + 0x7e;
      }
      FUN__text__006e2ed0(*param_4,*param_4 + (long)iVar12 * 8,auStack_40,lVar15,1);
    }
    else if (param_7 == 2) {
      iVar12 = *(int *)(param_6 + 0x28);
      if (iVar12 < 1) {
        uVar13 = 0;
      }
      else {
        param_2 = 0;
        lVar14 = 0;
        uVar13 = 0;
        lVar15 = 0;
        lVar16 = 8;
        lVar17 = *(long *)(param_3 + 0x10) + (long)param_8 * 0x9e8;
        do {
          lVar2 = *(long *)(param_6 + 0xb0) + lVar14;
          if (param_1 - *(float *)(lVar2 + 8) < *(float *)(lVar2 + 0xc)) {
            puVar3 = (undefined4 *)(*(long *)(param_6 + 0x210) + lVar16);
            cVar10 = *(char *)(*(long *)(param_6 + 0xa0) + 0x753);
            puVar4 = (undefined4 *)(*(long *)(param_6 + 0x218) + lVar16);
            uVar19 = *(undefined8 *)((float *)(*plVar6 + lVar16) + -2);
            fVar9 = *(float *)(*plVar6 + lVar16);
            pfVar5 = (float *)(*(long *)(param_6 + 0x220) + lVar16);
            if (cVar10 == '\x02') {
              pauVar1 = (undefined1 (*) [12])(param_6 + 0x370);
              uVar30 = (undefined4)((ulong)*(undefined8 *)(param_6 + 0x378) >> 0x20);
              fVar27 = (float)*(undefined8 *)*pauVar1;
              fVar28 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
              auVar31._12_4_ = uVar30;
              auVar31._0_12_ = *pauVar1;
              auVar11._12_4_ = uVar30;
              auVar11._0_12_ = *pauVar1;
              auVar31 = NEON_ext(auVar31,auVar11,8,1);
              uVar21 = CONCAT44(puVar4[-2],puVar3[-2]);
              uVar25 = CONCAT44(*puVar4,*puVar3);
              fVar29 = auVar31._0_4_;
              fVar22 = pfVar5[-2];
              fVar26 = *pfVar5;
              uVar23 = CONCAT44(puVar4[-1],puVar3[-1]);
              fVar24 = pfVar5[-1];
            }
            else if (cVar10 == '\0') {
              fVar22 = (float)*(undefined8 *)(param_6 + 0x348);
              uVar21 = *(undefined8 *)(param_6 + 0x340);
              fVar24 = (float)*(undefined8 *)(param_6 + 0x358);
              uVar23 = *(undefined8 *)(param_6 + 0x350);
              fVar26 = (float)*(undefined8 *)(param_6 + 0x368);
              uVar25 = *(undefined8 *)(param_6 + 0x360);
              fVar29 = (float)*(undefined8 *)(param_6 + 0x378);
              fVar27 = (float)*(undefined8 *)(param_6 + 0x370);
              fVar28 = (float)((ulong)*(undefined8 *)(param_6 + 0x370) >> 0x20);
            }
            else {
              uVar21 = CONCAT44(puVar4[-2],puVar3[-2]);
              uVar23 = CONCAT44(puVar4[-1],puVar3[-1]);
              fVar22 = pfVar5[-2];
              fVar24 = pfVar5[-1];
              uVar25 = CONCAT44(*puVar4,*puVar3);
              fVar26 = *pfVar5;
              fVar27 = (float)puVar3[1];
              fVar28 = (float)puVar4[1];
              fVar29 = pfVar5[1];
            }
            fVar18 = (float)uVar19;
            fVar20 = (float)((ulong)uVar19 >> 0x20);
            *(float *)(*param_4 + (-(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3)) =
                 *(float *)(lVar17 + 0x684) +
                 *(float *)(lVar17 + 0x67c) *
                 (fVar28 + (float)((ulong)uVar21 >> 0x20) * fVar18 +
                           (float)((ulong)uVar23 >> 0x20) * fVar20 +
                           (float)((ulong)uVar25 >> 0x20) * fVar9) +
                 *(float *)(lVar17 + 0x678) *
                 (fVar27 + (float)uVar21 * fVar18 + (float)uVar23 * fVar20 + (float)uVar25 * fVar9)
                 + *(float *)(lVar17 + 0x680) *
                   (fVar29 + fVar22 * fVar18 + fVar24 * fVar20 + fVar26 * fVar9);
            *(int *)(*param_4 + (long)(int)*param_5 * 8 + 4) = (int)lVar15;
            uVar13 = (ulong)(*param_5 + 1);
            *param_5 = *param_5 + 1;
            iVar12 = *(int *)(param_6 + 0x28);
          }
          lVar15 = lVar15 + 1;
          lVar16 = lVar16 + 0x10;
          lVar14 = lVar14 + 0x20;
        } while (lVar15 < iVar12);
      }
      lVar14 = *param_4;
      iVar12 = (int)uVar13;
      lVar15 = lVar14 + (long)iVar12 * 8;
      lVar16 = 0;
      if (iVar12 != 0) {
        lVar16 = LZCOUNT((long)iVar12) * -2 + 0x7e;
      }
      if (*(char *)(*(long *)(*(long *)(param_6 + 0x238) + 0x10) + 0x89b) == '\0') {
        FUN__text__006e62f0(param_1,param_2,lVar14,lVar15,auStack_34,lVar16,1);
      }
      else {
        FUN__text__006e4f90(lVar14,lVar15,auStack_38,lVar16,1);
      }
    }
    else if (param_7 == 1) {
      iVar12 = *(int *)(param_6 + 0x28);
      if (iVar12 < 1) {
        uVar13 = 0;
      }
      else {
        lVar14 = 0;
        uVar13 = 0;
        lVar15 = 0;
        lVar16 = 0xc;
        do {
          lVar17 = *(long *)(param_6 + 0xb0) + lVar14;
          if (param_1 - *(float *)(lVar17 + 8) < *(float *)(lVar17 + 0xc)) {
            *(undefined4 *)(*param_4 + (-(uVar13 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3)) =
                 *(undefined4 *)(plVar6[1] + lVar16);
            *(int *)(*param_4 + (long)(int)*param_5 * 8 + 4) = (int)lVar15;
            uVar13 = (ulong)(*param_5 + 1);
            *param_5 = *param_5 + 1;
            iVar12 = *(int *)(param_6 + 0x28);
          }
          lVar15 = lVar15 + 1;
          lVar16 = lVar16 + 0x10;
          lVar14 = lVar14 + 0x20;
        } while (lVar15 < iVar12);
      }
      iVar12 = (int)uVar13;
      lVar15 = 0;
      if (iVar12 != 0) {
        lVar15 = LZCOUNT((long)iVar12) * -2 + 0x7e;
      }
      FUN__text__006e3f30(*param_4,*param_4 + (long)iVar12 * 8,auStack_3c,lVar15,1);
    }
  }
  return iVar7 <= iVar8;
}


