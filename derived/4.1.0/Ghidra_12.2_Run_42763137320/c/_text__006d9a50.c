/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d9a50; name: FUN_.text__006d9a50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006d9a50(float param_1,float param_2,float param_3,undefined8 param_4,float *param_5
                        ,long param_6,float *param_7,float *param_8,float *param_9)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  *param_5 = *(float *)(*(long *)(param_6 + 0x10) + 0x9b0);
  param_5[1] = *(float *)(*(long *)(param_6 + 0x10) + 0x9b4);
  param_5[2] = *(float *)(*(long *)(param_6 + 0x10) + 0x9b8);
  param_5[3] = *(float *)(*(long *)(param_6 + 0x10) + 0x9bc);
  lVar9 = *(long *)(param_6 + 0x18);
  if (lVar9 == 0) {
    return;
  }
  lVar4 = *(long *)(param_6 + 0x10);
  cVar1 = *(char *)(lVar4 + 0x99d);
  if (cVar1 == '\x03') {
    uVar3 = (uint)(*param_7 * (float)*(int *)(lVar9 + 0x18));
    uVar5 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4;
    *param_5 = *(float *)(lVar9 + uVar5 + 0x470);
    param_5[1] = *(float *)(*(long *)(param_6 + 0x18) + uVar5 + 0x474);
    param_5[2] = *(float *)(*(long *)(param_6 + 0x18) + uVar5 + 0x478);
    lVar4 = *(long *)(param_6 + 0x10);
    lVar9 = *(long *)(param_6 + 0x18);
    cVar1 = *(char *)(lVar4 + 0x99d);
  }
  if (cVar1 == '\x02') {
    uVar3 = *(uint *)(lVar9 + 0x18);
    if (0 < (int)uVar3) {
      if (*(char *)(lVar4 + 0x8da) == '\0') {
        fVar15 = 0.0;
        if (uVar3 != 1) goto LAB__text__006d9b64;
LAB__text__006d9bd4:
        fVar15 = *(float *)(lVar9 + 0x478);
        uVar10 = *(undefined8 *)(lVar9 + 0x470);
      }
      else {
        fVar15 = (float)*(int *)(lVar4 + 0x8ec);
        if (uVar3 == 1) goto LAB__text__006d9bd4;
LAB__text__006d9b64:
        if (fVar15 <= 0.0) {
          fVar12 = param_3 / param_2;
          puVar6 = (undefined8 *)(lVar9 + 0x470 + (ulong)(uVar3 - 1) * 0x10);
          if (*(float *)((long)puVar6 + 0xc) <= fVar12) goto LAB__text__006d9ba0;
LAB__text__006d9bc8:
          if (fVar12 < *(float *)(lVar9 + 0x47c)) goto LAB__text__006d9bd4;
          uVar10 = 0;
          lVar4 = (ulong)uVar3 + 1;
          puVar6 = (undefined8 *)(lVar9 + 0x460);
          fVar15 = *(float *)(lVar9 + 0x47c);
          do {
            do {
              fVar13 = fVar15;
              puVar8 = puVar6;
              lVar4 = lVar4 + -1;
              if (lVar4 == 0) {
                fVar15 = 0.0;
                goto LAB__text__006d9be4;
              }
              fVar15 = *(float *)((long)puVar8 + 0x2c);
              puVar6 = puVar8 + 2;
            } while (fVar12 < fVar13);
          } while (fVar15 <= fVar12);
          fVar13 = (fVar12 - fVar13) / (fVar15 - fVar13);
          fVar15 = (float)*puVar6;
          fVar12 = (float)((ulong)*puVar6 >> 0x20);
          uVar10 = CONCAT44(fVar12 + ((float)((ulong)puVar8[4] >> 0x20) - fVar12) * fVar13,
                            fVar15 + ((float)puVar8[4] - fVar15) * fVar13);
          fVar15 = *(float *)(puVar8 + 3) +
                   (*(float *)(puVar8 + 5) - *(float *)(puVar8 + 3)) * fVar13;
        }
        else {
          fVar12 = (float)NEON_ucvtf((uint)*(byte *)(lVar4 + 0x8df));
          fVar12 = fmodf(param_3 + fVar15 * *param_7 * fVar12,fVar15);
          fVar12 = fVar12 / fVar15;
          puVar6 = (undefined8 *)(lVar9 + 0x470 + (ulong)(uVar3 - 1) * 0x10);
          if (fVar12 < *(float *)((long)puVar6 + 0xc)) goto LAB__text__006d9bc8;
LAB__text__006d9ba0:
          fVar15 = *(float *)(puVar6 + 1);
          uVar10 = *puVar6;
        }
      }
LAB__text__006d9be4:
      *(undefined8 *)param_5 = uVar10;
      param_5[2] = fVar15;
      lVar4 = *(long *)(param_6 + 0x10);
      lVar9 = *(long *)(param_6 + 0x18);
    }
  }
  if (*(char *)(lVar4 + 0x99f) == '\x02') {
    uVar3 = *(uint *)(lVar9 + 0x1c);
    if (0 < (int)uVar3) {
      if (*(char *)(lVar4 + 0x8db) == '\0') {
        fVar15 = 0.0;
        if (uVar3 != 1) goto LAB__text__006d9c30;
LAB__text__006d9c94:
        fVar15 = *(float *)(lVar9 + 0x4f0);
      }
      else {
        fVar15 = (float)*(int *)(lVar4 + 0x8f0);
        if (uVar3 == 1) goto LAB__text__006d9c94;
LAB__text__006d9c30:
        if (fVar15 <= 0.0) {
          param_2 = param_3 / param_2;
          pfVar7 = (float *)(lVar9 + 0x4f0 + (ulong)(uVar3 - 1) * 0x10);
          if (pfVar7[3] <= param_2) goto LAB__text__006d9c6c;
LAB__text__006d9c88:
          if (param_2 < *(float *)(lVar9 + 0x4fc)) goto LAB__text__006d9c94;
          fVar15 = 0.0;
          lVar4 = (ulong)uVar3 + 1;
          puVar6 = (undefined8 *)(lVar9 + 0x4e0);
          fVar12 = *(float *)(lVar9 + 0x4fc);
          do {
            do {
              fVar13 = fVar12;
              puVar8 = puVar6;
              lVar4 = lVar4 + -1;
              if (lVar4 == 0) goto LAB__text__006d9ca0;
              fVar12 = *(float *)((long)puVar8 + 0x2c);
              puVar6 = puVar8 + 2;
            } while (param_2 < fVar13);
          } while (fVar12 <= param_2);
          fVar15 = (float)*puVar6 +
                   ((float)puVar8[4] - (float)*puVar6) * ((param_2 - fVar13) / (fVar12 - fVar13));
        }
        else {
          fVar12 = (float)NEON_ucvtf((uint)*(byte *)(lVar4 + 0x8e0));
          param_2 = fmodf(param_3 + fVar15 * *param_7 * fVar12,fVar15);
          param_2 = param_2 / fVar15;
          pfVar7 = (float *)(lVar9 + 0x4f0 + (ulong)(uVar3 - 1) * 0x10);
          if (param_2 < pfVar7[3]) goto LAB__text__006d9c88;
LAB__text__006d9c6c:
          fVar15 = *pfVar7;
        }
      }
LAB__text__006d9ca0:
      param_5[3] = fVar15;
      lVar9 = *(long *)(param_6 + 0x18);
    }
  }
  fVar15 = *(float *)(lVar9 + 0x360);
  uVar11 = *(undefined8 *)(param_5 + 2);
  uVar10 = *(undefined8 *)param_5;
  *param_5 = fVar15 * *param_8 * *param_9 * (float)uVar10;
  param_5[1] = fVar15 * param_8[1] * param_9[1] * (float)((ulong)uVar10 >> 0x20);
  param_5[2] = fVar15 * param_8[2] * param_9[2] * (float)uVar11;
  fVar15 = param_8[3] * param_1 * (float)((ulong)uVar11 >> 0x20);
  param_5[3] = fVar15;
  if (*(char *)(*(long *)(param_6 + 0x10) + 0x9e4) == '\0') {
    return;
  }
  lVar9 = *(long *)(param_6 + 0x18);
  bVar2 = *(byte *)(*(long *)(param_6 + 0x10) + 0x9e7) >> 4;
  fVar13 = *(float *)(lVar9 + 0x98);
  fVar12 = *(float *)(lVar9 + 0xa0);
  fVar14 = *(float *)(lVar9 + 0xa8);
  if (bVar2 == 2) {
    fVar12 = (fVar14 + param_3) / fVar13 + *param_7 * fVar12;
    fVar13 = 1.0;
    if (0.5 <= fVar12 - (float)(int)fVar12) {
      fVar13 = 0.0;
    }
  }
  else {
    if (bVar2 != 1) {
      if (bVar2 != 0) {
        fVar15 = fVar15 * 1.0;
        param_5[3] = fVar15;
        goto joined_r0x006d9fa4;
      }
      fVar12 = *_DAT_008a5840 * ((fVar14 + param_3) / fVar13 + *param_7 * fVar12);
      fVar12 = fVar12 + fVar12;
      fVar13 = 0.5;
      if (fVar12 < 0.0) {
        fVar13 = -0.5;
      }
      fVar12 = fVar12 - (float)(int)(fVar13 + *_DAT_008a51b0 * fVar12) * *_DAT_008a51b8;
      if (fVar12 <= *_DAT_008a51c0) {
        if (fVar12 < -*_DAT_008a51c0) {
          fVar13 = -*_DAT_008a02c8;
          goto LAB__text__006d9e68;
        }
        fVar13 = 1.0;
      }
      else {
        fVar13 = *_DAT_008a02c8;
LAB__text__006d9e68:
        fVar12 = fVar13 - fVar12;
        fVar13 = -1.0;
      }
      fVar12 = fVar12 * fVar12;
      fVar15 = fVar15 * (*(float *)(lVar9 + 0x90) *
                         (fVar13 * (fVar12 * ((_DAT_008a51d0[3] +
                                              fVar12 * ((_DAT_008a51d0[1] - fVar12 * *_DAT_008a51d0)
                                                        * fVar12 - _DAT_008a51d0[2])) * fVar12 -
                                             _DAT_008a51d0[4]) + 1.0) + 1.0) * -0.5 + 1.0);
      param_5[3] = fVar15;
      goto joined_r0x006d9fa4;
    }
    fVar13 = (fVar14 + param_3) / fVar13 + *param_7 * fVar12;
    fVar13 = fVar13 - (float)(int)fVar13;
  }
  fVar15 = fVar15 * ABS(1.0 - *(float *)(lVar9 + 0x90) * fVar13);
  param_5[3] = fVar15;
joined_r0x006d9fa4:
  fVar12 = 0.0;
  if ((fVar15 < 0.0) || (fVar12 = 1.0, 1.0 < fVar15)) {
    param_5[3] = fVar12;
  }
  return;
}


