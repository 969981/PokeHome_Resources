/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d9ff0; name: FUN_.text__006d9ff0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006d9ff0(float param_1,float param_2,undefined8 param_3,undefined8 *param_4,
                        long param_5,float *param_6)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  float *pfVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  *(undefined4 *)param_4 = *(undefined4 *)(*(long *)(param_5 + 0x10) + 0x9b0);
  *(undefined4 *)((long)param_4 + 4) = *(undefined4 *)(*(long *)(param_5 + 0x10) + 0x9b4);
  *(undefined4 *)(param_4 + 1) = *(undefined4 *)(*(long *)(param_5 + 0x10) + 0x9b8);
  *(undefined4 *)((long)param_4 + 0xc) = *(undefined4 *)(*(long *)(param_5 + 0x10) + 0x9bc);
  lVar8 = *(long *)(param_5 + 0x18);
  if (lVar8 == 0) {
    return;
  }
  lVar4 = *(long *)(param_5 + 0x10);
  cVar1 = *(char *)(lVar4 + 0x99d);
  if (cVar1 == '\x03') {
    uVar3 = (uint)(*param_6 * (float)*(int *)(lVar8 + 0x18));
    uVar5 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4;
    *(undefined4 *)param_4 = *(undefined4 *)(lVar8 + uVar5 + 0x470);
    *(undefined4 *)((long)param_4 + 4) = *(undefined4 *)(*(long *)(param_5 + 0x18) + uVar5 + 0x474);
    *(undefined4 *)(param_4 + 1) = *(undefined4 *)(*(long *)(param_5 + 0x18) + uVar5 + 0x478);
    lVar4 = *(long *)(param_5 + 0x10);
    cVar1 = *(char *)(lVar4 + 0x99d);
  }
  if (cVar1 == '\x02') {
    lVar8 = *(long *)(param_5 + 0x18);
    uVar3 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar3) {
      if (*(char *)(lVar4 + 0x8da) == '\0') {
        fVar14 = 0.0;
        if (uVar3 != 1) goto LAB__text__006da0f8;
LAB__text__006da168:
        fVar14 = *(float *)(lVar8 + 0x478);
        uVar11 = *(undefined8 *)(lVar8 + 0x470);
      }
      else {
        fVar14 = (float)*(int *)(lVar4 + 0x8ec);
        if (uVar3 == 1) goto LAB__text__006da168;
LAB__text__006da0f8:
        if (fVar14 <= 0.0) {
          fVar12 = param_2 / param_1;
          puVar6 = (undefined8 *)(lVar8 + 0x470 + (ulong)(uVar3 - 1) * 0x10);
          if (*(float *)((long)puVar6 + 0xc) <= fVar12) goto LAB__text__006da134;
LAB__text__006da15c:
          if (fVar12 < *(float *)(lVar8 + 0x47c)) goto LAB__text__006da168;
          uVar11 = 0;
          lVar4 = (ulong)uVar3 + 1;
          puVar6 = (undefined8 *)(lVar8 + 0x460);
          fVar14 = *(float *)(lVar8 + 0x47c);
          do {
            do {
              fVar13 = fVar14;
              puVar9 = puVar6;
              lVar4 = lVar4 + -1;
              if (lVar4 == 0) {
                fVar14 = 0.0;
                goto LAB__text__006da178;
              }
              fVar14 = *(float *)((long)puVar9 + 0x2c);
              puVar6 = puVar9 + 2;
            } while (fVar12 < fVar13);
          } while (fVar14 <= fVar12);
          fVar13 = (fVar12 - fVar13) / (fVar14 - fVar13);
          fVar14 = (float)*puVar6;
          fVar12 = (float)((ulong)*puVar6 >> 0x20);
          uVar11 = CONCAT44(fVar12 + ((float)((ulong)puVar9[4] >> 0x20) - fVar12) * fVar13,
                            fVar14 + ((float)puVar9[4] - fVar14) * fVar13);
          fVar14 = *(float *)(puVar9 + 3) +
                   (*(float *)(puVar9 + 5) - *(float *)(puVar9 + 3)) * fVar13;
        }
        else {
          fVar12 = (float)NEON_ucvtf((uint)*(byte *)(lVar4 + 0x8df));
          fVar12 = fmodf(param_2 + fVar14 * *param_6 * fVar12,fVar14);
          fVar12 = fVar12 / fVar14;
          puVar6 = (undefined8 *)(lVar8 + 0x470 + (ulong)(uVar3 - 1) * 0x10);
          if (fVar12 < *(float *)((long)puVar6 + 0xc)) goto LAB__text__006da15c;
LAB__text__006da134:
          fVar14 = *(float *)(puVar6 + 1);
          uVar11 = *puVar6;
        }
      }
LAB__text__006da178:
      *param_4 = uVar11;
      *(float *)(param_4 + 1) = fVar14;
      lVar4 = *(long *)(param_5 + 0x10);
    }
  }
  if (*(char *)(lVar4 + 0x99f) == '\x02') {
    lVar8 = *(long *)(param_5 + 0x18);
    uVar3 = *(uint *)(lVar8 + 0x1c);
    if (0 < (int)uVar3) {
      if (*(char *)(lVar4 + 0x8db) == '\0') {
        fVar14 = 0.0;
        if (uVar3 != 1) goto LAB__text__006da1c8;
LAB__text__006da22c:
        fVar14 = *(float *)(lVar8 + 0x4f0);
      }
      else {
        fVar14 = (float)*(int *)(lVar4 + 0x8f0);
        if (uVar3 == 1) goto LAB__text__006da22c;
LAB__text__006da1c8:
        if (fVar14 <= 0.0) {
          param_1 = param_2 / param_1;
          pfVar7 = (float *)(lVar8 + 0x4f0 + (ulong)(uVar3 - 1) * 0x10);
          if (pfVar7[3] <= param_1) goto LAB__text__006da204;
LAB__text__006da220:
          if (param_1 < *(float *)(lVar8 + 0x4fc)) goto LAB__text__006da22c;
          fVar14 = 0.0;
          lVar4 = (ulong)uVar3 + 1;
          puVar6 = (undefined8 *)(lVar8 + 0x4e0);
          fVar12 = *(float *)(lVar8 + 0x4fc);
          do {
            do {
              fVar13 = fVar12;
              puVar9 = puVar6;
              lVar4 = lVar4 + -1;
              if (lVar4 == 0) goto LAB__text__006da238;
              fVar12 = *(float *)((long)puVar9 + 0x2c);
              puVar6 = puVar9 + 2;
            } while (param_1 < fVar13);
          } while (fVar12 <= param_1);
          fVar14 = (float)*puVar6 +
                   ((float)puVar9[4] - (float)*puVar6) * ((param_1 - fVar13) / (fVar12 - fVar13));
        }
        else {
          fVar12 = (float)NEON_ucvtf((uint)*(byte *)(lVar4 + 0x8e0));
          param_1 = fmodf(param_2 + fVar14 * *param_6 * fVar12,fVar14);
          param_1 = param_1 / fVar14;
          pfVar7 = (float *)(lVar8 + 0x4f0 + (ulong)(uVar3 - 1) * 0x10);
          if (param_1 < pfVar7[3]) goto LAB__text__006da220;
LAB__text__006da204:
          fVar14 = *pfVar7;
        }
      }
LAB__text__006da238:
      *(float *)((long)param_4 + 0xc) = fVar14;
      lVar4 = *(long *)(param_5 + 0x10);
    }
  }
  if (*(char *)(lVar4 + 0x9e4) == '\0') {
    return;
  }
  lVar8 = *(long *)(param_5 + 0x18);
  bVar2 = *(byte *)(lVar4 + 0x9e7) >> 4;
  fVar12 = *(float *)(lVar8 + 0x98);
  fVar14 = *(float *)(lVar8 + 0xa0);
  fVar13 = *(float *)(lVar8 + 0xa8);
  if (bVar2 == 2) {
    fVar14 = (fVar13 + param_2) / fVar12 + *param_6 * fVar14;
    fVar12 = 1.0;
    if (0.5 <= fVar14 - (float)(int)fVar14) {
      fVar12 = 0.0;
    }
  }
  else {
    if (bVar2 != 1) {
      if (bVar2 != 0) {
        fVar14 = *(float *)((long)param_4 + 0xc) * 1.0;
        *(float *)((long)param_4 + 0xc) = fVar14;
        goto joined_r0x006da4e8;
      }
      fVar12 = *_DAT_008a5840 * ((fVar13 + param_2) / fVar12 + *param_6 * fVar14);
      fVar12 = fVar12 + fVar12;
      fVar14 = 0.5;
      if (fVar12 < 0.0) {
        fVar14 = -0.5;
      }
      fVar12 = fVar12 - (float)(int)(fVar14 + *_DAT_008a51b0 * fVar12) * *_DAT_008a51b8;
      if (fVar12 <= *_DAT_008a51c0) {
        if (fVar12 < -*_DAT_008a51c0) {
          fVar14 = -*_DAT_008a02c8;
          goto LAB__text__006da3a4;
        }
        fVar14 = 1.0;
      }
      else {
        fVar14 = *_DAT_008a02c8;
LAB__text__006da3a4:
        fVar12 = fVar14 - fVar12;
        fVar14 = -1.0;
      }
      fVar12 = fVar12 * fVar12;
      fVar14 = (*(float *)(lVar8 + 0x90) *
                (fVar14 * (fVar12 * ((_DAT_008a51d0[3] +
                                     fVar12 * ((_DAT_008a51d0[1] - fVar12 * *_DAT_008a51d0) * fVar12
                                              - _DAT_008a51d0[2])) * fVar12 - _DAT_008a51d0[4]) +
                          1.0) + 1.0) * -0.5 + 1.0) * *(float *)((long)param_4 + 0xc);
      *(float *)((long)param_4 + 0xc) = fVar14;
      goto joined_r0x006da4e8;
    }
    fVar12 = (fVar13 + param_2) / fVar12 + *param_6 * fVar14;
    fVar12 = fVar12 - (float)(int)fVar12;
  }
  fVar14 = ABS(1.0 - *(float *)(lVar8 + 0x90) * fVar12) * *(float *)((long)param_4 + 0xc);
  *(float *)((long)param_4 + 0xc) = fVar14;
joined_r0x006da4e8:
  uVar10 = 0;
  if ((fVar14 < 0.0) || (uVar10 = 0x3f800000, 1.0 < fVar14)) {
    *(undefined4 *)((long)param_4 + 0xc) = uVar10;
  }
  return;
}


