/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c7b00; name: FUN_.text__006c7b00
 */


void FUN__text__006c7b00(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_88;
  ulong local_80;
  long local_78;
  
  puVar8 = *(undefined8 **)(param_1 + 0x28);
  puVar1 = (undefined8 *)(param_1 + 0x20);
  if (puVar8 == puVar1) {
    fVar13 = 0.0;
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    fVar13 = 0.0;
    bVar9 = false;
    lVar6 = 0;
    lVar7 = 0;
    puVar10 = puVar8;
    fVar14 = 0.0;
    if (*(int *)(param_1 + 0xd4) != 1) {
      fVar14 = *(float *)(param_1 + 0x54) * 0.5;
    }
    do {
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      uVar4 = FUN__text__006c7db0(puVar10 + -1,&local_88);
      if ((uVar4 & 1) != 0) {
        if ((*(char *)(param_1 + 0xdc) != '\0') &&
           (puVar5 = *(undefined8 **)(param_1 + 0x28), puVar5 != puVar1)) {
          iVar2 = *(int *)(param_1 + 0xd4);
          if (iVar2 == 2) {
LAB__text__006c7c30:
            if (puVar5 != puVar10) goto LAB__text__006c7b80;
          }
          else {
            if (iVar2 != 1) {
              if (iVar2 != 0) goto LAB__text__006c7b80;
LAB__text__006c7c2c:
              puVar5 = (undefined8 *)*puVar1;
              goto LAB__text__006c7c30;
            }
            if (puVar5 != puVar10) goto LAB__text__006c7c2c;
          }
          local_88 = local_88 & 0xffffffff00000000;
          local_80 = local_80 & 0xffffffff00000000;
        }
LAB__text__006c7b80:
        fVar11 = local_88._4_4_;
        if (!bVar9) {
          fVar11 = 0.0;
        }
        fVar12 = 0.0;
        if (!bVar9) {
          fVar12 = local_88._4_4_;
        }
        if (!bVar9) {
          lVar6 = local_78;
        }
        *(byte *)(puVar10 + 10) = *(byte *)(puVar10 + 10) | 0x10;
        fVar11 = fVar14 - fVar11;
        fVar13 = (fVar13 - fVar12) + (float)local_88 + local_88._4_4_;
        fVar14 = fVar11 - (float)local_88;
        *(float *)((long)puVar10 + 0x2c) = (fVar11 + (float)local_88 * -0.5) - (float)local_80;
        lVar7 = local_78;
        bVar9 = true;
      }
      puVar5 = puVar10 + 1;
      puVar10 = (undefined8 *)*puVar5;
    } while ((undefined8 *)*puVar5 != puVar1);
    if ((*(int *)(param_1 + 0xd4) == 1) && (puVar8 != puVar1)) {
      do {
        if (((*(byte *)(puVar8 + 10) & 1) != 0) &&
           (uVar4 = FUN__text__006b4efc(puVar8 + -1), (uVar4 & 1) == 0)) {
          *(byte *)(puVar8 + 10) = *(byte *)(puVar8 + 10) | 0x10;
          *(float *)((long)puVar8 + 0x2c) = fVar13 * 0.5 + *(float *)((long)puVar8 + 0x2c);
        }
        puVar8 = (undefined8 *)puVar8[1];
      } while (puVar8 != puVar1);
    }
  }
  if (*(char *)(param_1 + 0xdc) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0xd4) != 1) {
    if (*(int *)(param_1 + 0xd4) != 0) {
      return;
    }
    fVar13 = *(float *)(param_1 + 0x54) - fVar13;
    bVar3 = *(byte *)(lVar7 + 0x5b) >> 2 & 3;
    *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 0x10;
    *(float *)(lVar7 + 0x54) = fVar13;
    if (bVar3 != 2) {
      if (bVar3 != 0) {
        return;
      }
      fVar13 = fVar13 * 0.5;
    }
    *(float *)(lVar7 + 0x34) = *(float *)(lVar7 + 0x34) - fVar13;
    return;
  }
  fVar14 = *(float *)(param_1 + 0x54);
  bVar3 = *(byte *)(lVar7 + 0x5b) >> 2 & 3;
  *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) | 0x10;
  fVar14 = (fVar14 - fVar13) * 0.5;
  *(float *)(lVar7 + 0x54) = fVar14;
  fVar13 = fVar14;
  if (bVar3 != 2) {
    if (bVar3 != 0) goto LAB__text__006c7d4c;
    fVar13 = fVar14 * 0.5;
  }
  *(float *)(lVar7 + 0x34) = *(float *)(lVar7 + 0x34) - fVar13;
LAB__text__006c7d4c:
  *(float *)(lVar6 + 0x54) = fVar14;
  *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
  bVar3 = *(byte *)(lVar6 + 0x5b) >> 2 & 3;
  if (bVar3 != 1) {
    if (bVar3 != 0) {
      return;
    }
    fVar14 = fVar14 * 0.5;
  }
  *(float *)(lVar6 + 0x34) = fVar14 + *(float *)(lVar6 + 0x34);
  return;
}


