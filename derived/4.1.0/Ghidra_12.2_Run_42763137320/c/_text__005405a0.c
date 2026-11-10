/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005405a0; name: FUN_.text__005405a0
 */


undefined8 FUN__text__005405a0(undefined8 param_1,long param_2,float *param_3,long *param_4)

{
  float *pfVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  iVar7 = *(int *)(param_2 + 0x200);
  if (*(int *)(param_2 + 0x204) < 1) {
    if (0 < iVar7) {
      lVar10 = 0;
      lVar11 = 0x30;
      do {
        pfVar1 = (float *)(param_2 + lVar10);
        fVar14 = param_3[7] * (pfVar1[1] - param_3[1]);
        fVar12 = param_3[6] * (*pfVar1 - *param_3);
        fVar16 = (pfVar1[3] - *param_3) * param_3[6];
        fVar20 = param_3[8] * (pfVar1[2] - param_3[2]);
        fVar18 = (pfVar1[4] - param_3[1]) * param_3[7];
        fVar19 = (pfVar1[5] - param_3[2]) * param_3[8];
        fVar21 = (float)NEON_fminnm(fVar12,fVar16);
        if (fVar12 <= fVar16) {
          fVar12 = fVar16;
        }
        NEON_fminnm(fVar14,fVar18);
        NEON_fminnm(fVar20,fVar19);
        if (fVar14 <= fVar18) {
          fVar14 = fVar18;
        }
        if (fVar20 <= fVar19) {
          fVar20 = fVar19;
        }
        if (fVar21 <= 0.0) {
          fVar21 = 0.0;
        }
        uVar13 = NEON_fminnm(fVar12,0x3f800000);
        uVar15 = NEON_fminnm(fVar14,0x3f800000);
        uVar17 = NEON_fminnm(fVar20,0x3f800000);
        uVar15 = NEON_fminnm(uVar15,uVar17);
        fVar12 = (float)NEON_fminnm(uVar13,uVar15);
        bVar3 = false;
        bVar4 = false;
        bVar5 = false;
        if (fVar21 <= fVar12) {
          bVar3 = false;
          bVar4 = false;
          bVar5 = true;
          if (!NAN(fVar21)) {
            bVar3 = fVar21 < 1.0;
            bVar4 = fVar21 == 1.0;
            bVar5 = false;
          }
        }
        if (((bVar4 || bVar3 != bVar5) &&
            (puVar8 = *(undefined4 **)(param_2 + lVar11 * 8), puVar8 != (undefined4 *)0x0)) &&
           ((param_4[2] != *param_4 || (*(long *)(puVar8 + 0xe) != param_4[1])))) {
          bVar2 = *(byte *)(param_4 + 0x14);
          lVar9 = (ulong)bVar2 * 4;
          *(undefined4 *)((long)param_4 + lVar9 + 0xb0) = *puVar8;
          *(undefined4 *)((long)param_4 + lVar9 + 0xc0) = puVar8[1];
          *(undefined4 *)((long)param_4 + lVar9 + 0xd0) = puVar8[2];
          *(undefined4 *)((long)param_4 + lVar9 + 0xe0) = puVar8[0xb];
          *(undefined4 *)((long)param_4 + lVar9 + 0xf0) = puVar8[0xc];
          *(undefined4 *)((long)param_4 + lVar9 + 0x100) = puVar8[0xd];
          *(undefined4 *)((long)param_4 + lVar9 + 0x110) = puVar8[3];
          *(undefined4 *)((long)param_4 + lVar9 + 0x120) = puVar8[4];
          *(undefined4 *)((long)param_4 + lVar9 + 0x130) = puVar8[5];
          *(undefined4 *)((long)param_4 + lVar9 + 0x140) = puVar8[7];
          *(undefined4 *)((long)param_4 + lVar9 + 0x150) = puVar8[8];
          *(undefined4 *)((long)param_4 + lVar9 + 0x160) = puVar8[9];
          *(undefined4 *)((long)param_4 + lVar9 + 0x170) = puVar8[6];
          *(undefined4 *)((long)param_4 + lVar9 + 0x180) = puVar8[10];
          param_4[(ulong)bVar2 + 0x10] = *(long *)(puVar8 + 0xe);
          bVar2 = *(byte *)(param_4 + 0x14);
          *(char *)(param_4 + 0x14) = (char)(bVar2 + 1);
          if (bVar2 + 1 == 4) {
            FUN__text__00540910(param_4);
            *(undefined1 *)(param_4 + 0x14) = 0;
          }
        }
        lVar9 = lVar11 + -0x2f;
        lVar11 = lVar11 + 1;
        lVar10 = lVar10 + 0x18;
      } while (lVar9 < *(int *)(param_2 + 0x200));
    }
  }
  else if (0 < iVar7) {
    lVar10 = 0;
    lVar11 = 0x30;
    do {
      pfVar1 = (float *)(param_2 + lVar10);
      fVar14 = param_3[7] * (pfVar1[1] - param_3[1]);
      fVar12 = param_3[6] * (*pfVar1 - *param_3);
      fVar16 = (pfVar1[3] - *param_3) * param_3[6];
      fVar20 = param_3[8] * (pfVar1[2] - param_3[2]);
      fVar18 = (pfVar1[4] - param_3[1]) * param_3[7];
      fVar19 = (pfVar1[5] - param_3[2]) * param_3[8];
      fVar21 = (float)NEON_fminnm(fVar12,fVar16);
      if (fVar12 <= fVar16) {
        fVar12 = fVar16;
      }
      NEON_fminnm(fVar14,fVar18);
      NEON_fminnm(fVar20,fVar19);
      if (fVar14 <= fVar18) {
        fVar14 = fVar18;
      }
      if (fVar20 <= fVar19) {
        fVar20 = fVar19;
      }
      if (fVar21 <= 0.0) {
        fVar21 = 0.0;
      }
      uVar13 = NEON_fminnm(fVar12,0x3f800000);
      uVar15 = NEON_fminnm(fVar14,0x3f800000);
      uVar17 = NEON_fminnm(fVar20,0x3f800000);
      uVar15 = NEON_fminnm(uVar15,uVar17);
      fVar12 = (float)NEON_fminnm(uVar13,uVar15);
      bVar3 = false;
      bVar4 = false;
      bVar5 = false;
      if (fVar21 <= fVar12) {
        bVar3 = false;
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar21)) {
          bVar3 = fVar21 < 1.0;
          bVar4 = fVar21 == 1.0;
          bVar5 = false;
        }
      }
      if (bVar4 || bVar3 != bVar5) {
        uVar6 = FUN__text__005405a0(param_1,*(undefined8 *)(param_2 + lVar11 * 8),param_3,param_4);
        if ((uVar6 & 1) == 0) {
          return 0;
        }
        iVar7 = *(int *)(param_2 + 0x200);
      }
      lVar9 = lVar11 + -0x2f;
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x18;
    } while (lVar9 < iVar7);
  }
  return 1;
}


