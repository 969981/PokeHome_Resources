/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0041b060; name: FUN_.text__0041b060
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__0041b060(undefined8 *param_1,undefined4 *param_2,uint param_3)

{
  code *pcVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 uVar6;
  long lVar7;
  byte bVar8;
  byte bVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  undefined4 uVar14;
  float fVar15;
  
  pbVar12 = (byte *)(param_2 + 1);
  bVar2 = *pbVar12;
  uVar13 = (ulong)bVar2;
  uVar3 = *(ushort *)(param_2 + 2);
  if (bVar2 < 9) {
    param_1[3] = 0;
    param_1[4] = param_1;
    param_1[10] = param_1 + 9;
    *(undefined1 *)(param_1 + 0xb) = 0;
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 0xb) = 1;
    param_1[10] = 0;
    if ((uVar3 & 0x3f) == 0x20) {
      lVar7 = FUN__text__00400f90(5,uVar13 << 2,0x10);
      param_1[4] = lVar7;
      if (lVar7 == 0) {
        return 0x34;
      }
      uVar10 = uVar13 & 3;
      if (bVar2 < 4) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        do {
          lVar7 = uVar11 * 4;
          uVar11 = uVar11 + 4;
          *(undefined4 *)(param_1[4] + lVar7) = 0;
          *(undefined4 *)(param_1[4] + lVar7 + 4) = 0;
          *(undefined4 *)(param_1[4] + lVar7 + 8) = 0;
          *(undefined4 *)(param_1[4] + lVar7 + 0xc) = 0;
        } while ((uVar13 & 0xfc) != uVar11);
      }
      if ((bVar2 & 3) != 0) {
        lVar7 = uVar11 << 2;
        do {
          uVar10 = uVar10 - 1;
          *(undefined4 *)(param_1[4] + lVar7) = 0;
          lVar7 = lVar7 + 4;
        } while (uVar10 != 0);
      }
    }
    else {
      lVar7 = FUN__text__00400f90(5,(ulong)bVar2 << 1,0x10);
      param_1[4] = lVar7;
      if (lVar7 == 0) {
        return 0x34;
      }
      uVar10 = uVar13 & 3;
      if (bVar2 < 4) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        do {
          lVar7 = uVar11 * 2;
          uVar11 = uVar11 + 4;
          *(undefined2 *)(param_1[4] + lVar7) = 0;
          *(undefined2 *)(param_1[4] + lVar7 + 2) = 0;
          *(undefined2 *)(param_1[4] + lVar7 + 4) = 0;
          *(undefined2 *)(param_1[4] + lVar7 + 6) = 0;
        } while ((uVar13 & 0xfc) != uVar11);
      }
      if ((bVar2 & 3) != 0) {
        lVar7 = uVar11 << 1;
        do {
          uVar10 = uVar10 - 1;
          *(undefined2 *)(param_1[4] + lVar7) = 0;
          lVar7 = lVar7 + 2;
        } while (uVar10 != 0);
      }
    }
    lVar7 = FUN__text__00400f80(5);
    param_1[10] = lVar7;
    if (lVar7 == 0) {
      return 0x34;
    }
  }
  uVar4 = 0;
  if (param_3 != 0) {
    uVar4 = *_DAT_008a4b68 / param_3;
  }
  *(uint *)(param_1 + 8) = uVar4;
  uVar14 = *param_2;
  *(byte *)((long)param_1 + 0x6d) = bVar2;
  fVar15 = (float)NEON_ucvtf(uVar14);
  *(float *)((long)param_1 + 100) = fVar15 / (float)param_3;
  pcVar5 = _DAT_008a4760;
  if ((*(ushort *)(param_2 + 2) & 0x3f) == 0x20) {
    bVar8 = 4;
    if (bVar2 != 2) {
      bVar8 = 5;
    }
    bVar9 = 3;
    if (bVar2 != 1) {
      bVar9 = bVar8;
    }
  }
  else if ((*(ushort *)(param_2 + 2) & 0x3f) == 0x10) {
    bVar8 = 1;
    if (bVar2 != 2) {
      bVar8 = 2;
    }
    bVar9 = 0;
    if (bVar2 != 1) {
      bVar9 = bVar8;
    }
  }
  else {
    bVar9 = 0xff;
  }
  *(byte *)((long)param_1 + 0x6c) = bVar9;
  pcVar1 = _DAT_008a4758;
  if ((uVar3 & 0x3f) != 0x20) {
    pcVar1 = pcVar5;
  }
  if (*pbVar12 != 0) {
    uVar13 = 0;
    do {
      uVar6 = (*pcVar1)(pbVar12,uVar13 & 0xffffffff);
      *(undefined1 *)(param_1[10] + uVar13) = uVar6;
      uVar13 = uVar13 + 1;
    } while (uVar13 < *pbVar12);
    bVar9 = *(byte *)((long)param_1 + 0x6c);
  }
  uVar14 = 1;
  if (5 < bVar9) {
    uVar14 = 2;
  }
  return uVar14;
}


