/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0057e570; name: FUN_.text__0057e570
 */


void FUN__text__0057e570(undefined4 param_1,undefined4 param_2,long *param_3,uint param_4,
                        uint param_5,undefined8 *param_6)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar2 = *(uint *)(param_3 + 1);
  uVar8 = (ulong)param_4;
  if ((uVar2 & 0xf00) == 0x200) {
    memcpy(param_6,(void *)(*param_3 + (ulong)param_5 * 4),uVar8 << 2);
    return;
  }
  if ((uVar2 & 0xf00) == 0x100) {
    fVar13 = (float)NEON_fminnm(param_1,0x3f800000);
    fVar12 = (float)NEON_fminnm(param_2,0x3f800000);
    fVar9 = 0.0;
    if ((uVar2 & 0x1000) != 0) {
      fVar9 = 1.0;
    }
    if ((uVar2 & 0x2000) != 0) {
      fVar9 = fVar9 + 1.0;
    }
    if ((uVar2 & 0x200000) != 0) {
      fVar9 = fVar9 + 1.0;
    }
    if ((uVar2 & 0x400000) != 0) {
      fVar9 = fVar9 + 1.0;
    }
    if ((uVar2 & 0x10000) != 0) {
      fVar9 = fVar9 + 1.0;
    }
    if ((uVar2 & 0x20000) != 0) {
      fVar9 = fVar9 + 1.0;
    }
    fVar10 = 0.0;
    if ((uVar2 & 0x4000) != 0) {
      fVar10 = fVar13 * fVar13;
    }
    fVar14 = 0.0;
    if ((uVar2 & 0x8000) != 0) {
      fVar14 = fVar12 * fVar12;
    }
    memset(param_6,0,-(ulong)(param_4 >> 0x1f) & 0xfffffffc00000000 | uVar8 << 2);
    if (0xfff < uVar2) {
      uVar1 = 0;
      uVar2 = uVar2 >> 0xc;
      uVar4 = 1;
      fVar9 = SQRT(1.0 / (fVar14 + fVar10 + fVar9));
      do {
        if (uVar2 == 8) {
          uVar2 = 0;
          fVar10 = 1.0;
          if ((uVar4 & 4) != 0) {
            fVar10 = fVar13;
          }
          fVar10 = fVar10 * fVar9 * fVar12;
          if (0 < (int)param_4) {
LAB__text__0057e6c8:
            puVar3 = (undefined8 *)
                     (*param_3 + (ulong)*(ushort *)(param_3 + 2) * (ulong)uVar1 * 4 +
                     (ulong)param_5 * 4);
            puVar6 = param_6;
            uVar7 = param_4 + 4;
            do {
              uVar7 = uVar7 - 4;
              uVar11 = *puVar3;
              puVar6[1] = CONCAT44((float)((ulong)puVar6[1] >> 0x20) +
                                   (float)((ulong)puVar3[1] >> 0x20) * fVar10,
                                   (float)puVar6[1] + (float)puVar3[1] * fVar10);
              *puVar6 = CONCAT44((float)((ulong)*puVar6 >> 0x20) +
                                 (float)((ulong)uVar11 >> 0x20) * fVar10,
                                 (float)*puVar6 + (float)uVar11 * fVar10);
              puVar3 = puVar3 + 2;
              puVar6 = puVar6 + 2;
            } while (4 < uVar7);
          }
LAB__text__0057e664:
          uVar2 = uVar2 & (uVar4 ^ 0xffffffff);
          uVar1 = uVar1 + 1;
        }
        else {
          for (; (uVar4 & uVar2) != 0; uVar4 = uVar4 << 1) {
            if ((uVar4 >> 3 & 1) == 0) {
              fVar10 = 1.0;
              if ((uVar4 & 4) != 0) {
                fVar10 = fVar13;
              }
              fVar10 = fVar10 * fVar9;
              if ((int)param_4 < 1) goto LAB__text__0057e664;
              goto LAB__text__0057e6c8;
            }
          }
        }
        uVar4 = uVar4 << 1;
      } while (uVar2 != 0);
    }
  }
  else {
    memset(param_6,0,-(ulong)(param_4 >> 0x1f) & 0xfffffffc00000000 | uVar8 << 2);
    if (((char)param_3[1] != '\0') && (0 < (int)param_4)) {
      uVar8 = 0;
      fVar9 = 1.0 / SQRT((float)(uVar2 & 0xff));
      do {
        puVar3 = (undefined8 *)
                 (*param_3 + uVar8 * *(ushort *)(param_3 + 2) * 4 + (ulong)param_5 * 4);
        puVar6 = param_6;
        iVar5 = param_4 + 4;
        do {
          iVar5 = iVar5 + -4;
          uVar11 = *puVar3;
          puVar6[1] = CONCAT44((float)((ulong)puVar6[1] >> 0x20) +
                               (float)((ulong)puVar3[1] >> 0x20) * fVar9,
                               (float)puVar6[1] + (float)puVar3[1] * fVar9);
          *puVar6 = CONCAT44((float)((ulong)*puVar6 >> 0x20) +
                             (float)((ulong)uVar11 >> 0x20) * fVar9,
                             (float)*puVar6 + (float)uVar11 * fVar9);
          puVar3 = puVar3 + 2;
          puVar6 = puVar6 + 2;
        } while (4 < iVar5);
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(byte *)(param_3 + 1));
    }
  }
  return;
}


