/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046db48; name: FUN_.text__0046db48
 */


void FUN__text__0046db48(long *param_1,float *param_2,float *param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar5 = *param_1;
  iVar1 = *(int *)((long)param_1 + 0xc);
  fVar10 = *(float *)(lVar5 + 0x10);
  fVar7 = *(float *)(lVar5 + 0x1c);
  if (iVar1 == 4) {
    fVar12 = fVar10 * 0.05;
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    if (-37.0 <= fVar12) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar12)) {
        bVar2 = fVar12 < 37.0;
        bVar3 = fVar12 == 37.0;
        bVar4 = false;
      }
    }
    fVar12 = 0.0;
    if (bVar3 || bVar2 != bVar4) {
      uVar6 = (uint)(fVar10 * 1393317.6 + 1.0653532e+09);
      fVar10 = (float)(uVar6 & 0x7fffff | 0x3f800000);
      fVar12 = (fVar10 * (fVar10 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar6 & 0xff800000);
    }
    fVar10 = fVar12;
    fVar12 = fVar7 * 0.05;
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    if (-37.0 <= fVar12) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar12)) {
        bVar2 = fVar12 < 37.0;
        bVar3 = fVar12 == 37.0;
        bVar4 = false;
      }
    }
    if (!bVar3 && bVar2 == bVar4) {
LAB__text__0046ddc4:
      fVar7 = 0.0;
      goto LAB__text__0046de34;
    }
    fVar12 = 1393317.6;
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 2) {
        fVar8 = (float)NEON_fminnm(fVar10,0x3f800000);
        fVar14 = (float)NEON_fminnm(fVar7,0x3f800000);
        fVar12 = 1.0;
        if (0.0 <= fVar10) {
          fVar12 = -1.0;
        }
        if (fVar8 <= -1.0) {
          fVar8 = -1.0;
        }
        if (fVar14 <= -1.0) {
          fVar14 = -1.0;
        }
        fVar11 = 1.0;
        if (0.0 <= fVar7) {
          fVar11 = -1.0;
        }
        fVar10 = fVar12 * fVar8 + 1.0;
        fVar9 = fVar11 * fVar14 + 1.0;
        fVar7 = (float)((uint)fVar10 & 0x7fffff | 0x3f800000);
        fVar14 = fVar7 + 1.0;
        fVar8 = (float)((uint)fVar9 & 0x7fffff | 0x3f800000);
        fVar13 = fVar8 + 1.0;
        fVar10 = fVar12 * 20.0 *
                 ((float)((uint)fVar10 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
                 (fVar7 * 1.1581186 * fVar7 * fVar7 + -1.1581186) / (fVar14 * fVar14 * fVar14));
        fVar7 = fVar11 * 20.0 *
                ((float)((uint)fVar9 >> 0x17 & 0xff) * 0.30103 + -38.230812 +
                (fVar8 * 1.1581186 * fVar8 * fVar8 + -1.1581186) / (fVar13 * fVar13 * fVar13));
      }
      goto LAB__text__0046de34;
    }
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    if (-37.0 <= fVar10) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar10)) {
        bVar2 = fVar10 < 37.0;
        bVar3 = fVar10 == 37.0;
        bVar4 = false;
      }
    }
    fVar12 = 0.0;
    if (bVar3 || bVar2 != bVar4) {
      uVar6 = (uint)(fVar10 * 27866352.0 + 1.0653532e+09);
      fVar10 = (float)(uVar6 & 0x7fffff | 0x3f800000);
      fVar12 = (fVar10 * (fVar10 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar6 & 0xff800000);
    }
    fVar10 = fVar12;
    bVar2 = false;
    bVar3 = false;
    bVar4 = false;
    if (-37.0 <= fVar7) {
      bVar2 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar7)) {
        bVar2 = fVar7 < 37.0;
        bVar3 = fVar7 == 37.0;
        bVar4 = false;
      }
    }
    if (!bVar3 && bVar2 == bVar4) goto LAB__text__0046ddc4;
    fVar12 = 27866352.0;
  }
  uVar6 = (uint)(fVar12 * fVar7 + 1.0653532e+09);
  fVar7 = (float)(uVar6 & 0x7fffff | 0x3f800000);
  fVar7 = (fVar7 * (fVar7 * 0.32518977 + 0.020805772) + 0.65304345) * (float)(uVar6 & 0xff800000);
LAB__text__0046de34:
  fVar8 = fVar10 * 0.05;
  fVar12 = 0.0;
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  if (-37.0 <= fVar8) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar8)) {
      bVar2 = fVar8 < 37.0;
      bVar3 = fVar8 == 37.0;
      bVar4 = false;
    }
  }
  fVar8 = 0.0;
  if (bVar3 || bVar2 != bVar4) {
    uVar6 = (uint)(fVar10 * 1393317.6 + 1.0653532e+09);
    fVar10 = (float)(uVar6 & 0x7fffff | 0x3f800000);
    fVar8 = (fVar10 * (fVar10 * 0.32518977 + 0.020805772) + 0.65304345) *
            (float)(uVar6 & 0xff800000);
  }
  fVar10 = *(float *)(lVar5 + 0xc);
  fVar14 = fVar7 * 0.05;
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  if (-37.0 <= fVar14) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar14)) {
      bVar2 = fVar14 < 37.0;
      bVar3 = fVar14 == 37.0;
      bVar4 = false;
    }
  }
  if (bVar3 || bVar2 != bVar4) {
    uVar6 = (uint)(fVar7 * 1393317.6 + 1.0653532e+09);
    fVar7 = (float)(uVar6 & 0x7fffff | 0x3f800000);
    fVar12 = (fVar7 * (fVar7 * 0.32518977 + 0.020805772) + 0.65304345) * (float)(uVar6 & 0xff800000)
    ;
  }
  fVar12 = fVar12 - fVar8;
  fVar7 = *(float *)(lVar5 + 0x18) - fVar10;
  fVar14 = -(fVar10 * fVar12) / fVar7;
  *param_3 = fVar14 + fVar8;
  *param_2 = (fVar12 - fVar12 * fVar10) / fVar7 - fVar14;
  return;
}


