/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d8a40; name: FUN_.text__006d8a40
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006d8a40(float param_1,float param_2,undefined8 param_3,float *param_4,long param_5,
                        float *param_6,float *param_7)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  *param_4 = *param_6;
  param_4[1] = param_6[1];
  uVar9 = *(undefined8 *)param_4;
  fVar8 = param_6[2];
  *(ulong *)(param_4 + 2) = (ulong)(uint)fVar8;
  *(undefined8 *)param_4 = uVar9;
  lVar6 = *(long *)(param_5 + 0x18);
  if (lVar6 == 0) {
    return;
  }
  uVar1 = *(uint *)(lVar6 + 0x20);
  if ((int)uVar1 < 2) {
    *param_4 = *(float *)(lVar6 + 0x5b0) * (float)uVar9;
    param_4[1] = (float)((ulong)uVar9 >> 0x20) * *(float *)(*(long *)(param_5 + 0x18) + 0x5b4);
    fVar8 = fVar8 * *(float *)(*(long *)(param_5 + 0x18) + 0x5b8);
  }
  else {
    lVar4 = *(long *)(param_5 + 0x10);
    if (*(char *)(lVar4 + 0x8dc) == '\0') {
LAB__text__006d8b48:
      param_1 = param_2 / param_1;
      puVar5 = (undefined8 *)(lVar6 + 0x5b0 + (ulong)(uVar1 - 1) * 0x10);
      if (*(float *)((long)puVar5 + 0xc) <= param_1) goto LAB__text__006d8afc;
LAB__text__006d8b5c:
      if (*(float *)(lVar6 + 0x5bc) <= param_1) {
        uVar9 = 0;
        lVar4 = (ulong)uVar1 + 1;
        puVar5 = (undefined8 *)(lVar6 + 0x5b0);
        fVar8 = *(float *)(lVar6 + 0x5bc);
        do {
          do {
            fVar14 = fVar8;
            puVar7 = puVar5;
            lVar4 = lVar4 + -1;
            if (lVar4 == 0) {
              fVar8 = 0.0;
              goto LAB__text__006d8bf4;
            }
            fVar8 = *(float *)((long)puVar7 + 0x1c);
            puVar5 = puVar7 + 2;
          } while (param_1 < fVar14);
        } while (fVar8 <= param_1);
        fVar8 = (param_1 - fVar14) / (fVar8 - fVar14);
        fVar14 = (float)*puVar7;
        fVar11 = (float)((ulong)*puVar7 >> 0x20);
        uVar9 = CONCAT44(fVar11 + ((float)((ulong)*puVar5 >> 0x20) - fVar11) * fVar8,
                         fVar14 + ((float)*puVar5 - fVar14) * fVar8);
        fVar8 = *(float *)(puVar7 + 1) + (*(float *)(puVar7 + 3) - *(float *)(puVar7 + 1)) * fVar8;
      }
      else {
        fVar8 = *(float *)(lVar6 + 0x5b8);
        uVar9 = *(undefined8 *)(lVar6 + 0x5b0);
      }
    }
    else {
      if (*(int *)(lVar4 + 0x8f4) < 1) goto LAB__text__006d8b48;
      fVar14 = (float)*(int *)(lVar4 + 0x8f4);
      fVar8 = (float)NEON_ucvtf((uint)*(byte *)(lVar4 + 0x8e1));
      param_1 = fmodf(param_2 + fVar14 * *param_7 * fVar8,fVar14);
      param_1 = param_1 / fVar14;
      puVar5 = (undefined8 *)(lVar6 + 0x5b0 + (ulong)(uVar1 - 1) * 0x10);
      if (param_1 < *(float *)((long)puVar5 + 0xc)) goto LAB__text__006d8b5c;
LAB__text__006d8afc:
      fVar8 = *(float *)(puVar5 + 1);
      uVar9 = *puVar5;
    }
LAB__text__006d8bf4:
    uVar10 = *(undefined8 *)param_4;
    *param_4 = (float)uVar9 * (float)uVar10;
    param_4[1] = (float)((ulong)uVar9 >> 0x20) * (float)((ulong)uVar10 >> 0x20);
    fVar8 = fVar8 * (float)*(undefined8 *)(param_4 + 2);
  }
  uVar9 = *(undefined8 *)param_4;
  *(ulong *)(param_4 + 2) = (ulong)(uint)fVar8;
  *(undefined8 *)param_4 = uVar9;
  lVar6 = *(long *)(param_5 + 0x10);
  if (*(char *)(lVar6 + 0x9e5) == '\0') {
    return;
  }
  lVar4 = *(long *)(param_5 + 0x18);
  bVar3 = *(byte *)(lVar6 + 0x9e7) >> 4;
  fVar14 = *(float *)(lVar4 + 0x98);
  fVar8 = *(float *)(lVar4 + 0xa0);
  fVar11 = *(float *)(lVar4 + 0xa8);
  if (bVar3 == 2) {
    fVar8 = (fVar11 + param_2) / fVar14 + *param_7 * fVar8;
    fVar14 = 1.0;
    if (0.5 <= fVar8 - (float)(int)fVar8) {
      fVar14 = 0.0;
    }
LAB__text__006d8d28:
    fVar8 = ABS(1.0 - *(float *)(lVar4 + 0x90) * fVar14);
    cVar2 = *(char *)(lVar6 + 0x9e6);
  }
  else {
    if (bVar3 == 1) {
      fVar14 = (fVar11 + param_2) / fVar14 + *param_7 * fVar8;
      fVar14 = fVar14 - (float)(int)fVar14;
      goto LAB__text__006d8d28;
    }
    if (bVar3 == 0) {
      fVar8 = *_DAT_008a5840 * ((fVar11 + param_2) / fVar14 + *param_7 * fVar8);
      fVar8 = fVar8 + fVar8;
      fVar14 = 0.5;
      if (fVar8 < 0.0) {
        fVar14 = -0.5;
      }
      fVar8 = fVar8 - (float)(int)(fVar14 + *_DAT_008a51b0 * fVar8) * *_DAT_008a51b8;
      if (fVar8 <= *_DAT_008a51c0) {
        if (fVar8 < -*_DAT_008a51c0) {
          fVar14 = -*_DAT_008a02c8;
          goto LAB__text__006d8d78;
        }
        fVar14 = 1.0;
      }
      else {
        fVar14 = *_DAT_008a02c8;
LAB__text__006d8d78:
        fVar8 = fVar14 - fVar8;
        fVar14 = -1.0;
      }
      fVar8 = fVar8 * fVar8;
      fVar8 = *(float *)(lVar4 + 0x90) *
              (fVar14 * (fVar8 * ((_DAT_008a51d0[3] +
                                  fVar8 * ((_DAT_008a51d0[1] - fVar8 * *_DAT_008a51d0) * fVar8 -
                                          _DAT_008a51d0[2])) * fVar8 - _DAT_008a51d0[4]) + 1.0) +
              1.0) * -0.5 + 1.0;
      cVar2 = *(char *)(lVar6 + 0x9e6);
    }
    else {
      fVar8 = 1.0;
      cVar2 = *(char *)(lVar6 + 0x9e6);
    }
  }
  fVar14 = fVar8;
  if (cVar2 == '\0') goto LAB__text__006d8f44;
  fVar12 = *(float *)(lVar4 + 0x9c);
  fVar11 = *(float *)(lVar4 + 0xa4);
  fVar13 = *(float *)(lVar4 + 0xac);
  if (bVar3 == 2) {
    fVar14 = (fVar13 + param_2) / fVar12 + *param_7 * fVar11;
    fVar11 = 1.0;
    if (0.5 <= fVar14 - (float)(int)fVar14) {
      fVar11 = 0.0;
    }
  }
  else {
    if (bVar3 != 1) {
      if (bVar3 != 0) goto LAB__text__006d8f44;
      fVar11 = *_DAT_008a5840 * ((fVar13 + param_2) / fVar12 + *param_7 * fVar11);
      fVar11 = fVar11 + fVar11;
      fVar14 = 0.5;
      if (fVar11 < 0.0) {
        fVar14 = -0.5;
      }
      fVar11 = fVar11 - (float)(int)(fVar14 + *_DAT_008a51b0 * fVar11) * *_DAT_008a51b8;
      if (fVar11 <= *_DAT_008a51c0) {
        if (fVar11 < -*_DAT_008a51c0) {
          fVar14 = -*_DAT_008a02c8;
          goto LAB__text__006d8ef4;
        }
        fVar14 = 1.0;
      }
      else {
        fVar14 = *_DAT_008a02c8;
LAB__text__006d8ef4:
        fVar11 = fVar14 - fVar11;
        fVar14 = -1.0;
      }
      fVar11 = fVar11 * fVar11;
      fVar14 = *(float *)(lVar4 + 0x94) *
               (fVar14 * (fVar11 * ((_DAT_008a51d0[3] +
                                    fVar11 * ((_DAT_008a51d0[1] - fVar11 * *_DAT_008a51d0) * fVar11
                                             - _DAT_008a51d0[2])) * fVar11 - _DAT_008a51d0[4]) + 1.0
                         ) + 1.0) * -0.5 + 1.0;
      goto LAB__text__006d8f44;
    }
    fVar11 = (fVar13 + param_2) / fVar12 + *param_7 * fVar11;
    fVar11 = fVar11 - (float)(int)fVar11;
  }
  fVar14 = ABS(1.0 - *(float *)(lVar4 + 0x94) * fVar11);
LAB__text__006d8f44:
  *param_4 = fVar8 * (float)uVar9;
  param_4[1] = fVar14 * (float)((ulong)uVar9 >> 0x20);
  return;
}


