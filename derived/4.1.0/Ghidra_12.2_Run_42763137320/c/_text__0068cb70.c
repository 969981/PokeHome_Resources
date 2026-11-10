/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068cb70; name: FUN_.text__0068cb70
 */


void FUN__text__0068cb70(long param_1,long *param_2,uint param_3)

{
  short *psVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  short sVar9;
  byte *pbVar10;
  short sVar11;
  uint uVar12;
  long lVar13;
  ushort *puVar14;
  short sVar15;
  
  param_3 = param_3 & 0xffff;
  lVar13 = *(long *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x104) == '\0') {
    pbVar10 = (byte *)(lVar13 + (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0xc));
    uVar7 = 0;
    if ((uint)*(ushort *)(pbVar10 + 0xe) * (uint)*(ushort *)(pbVar10 + 0xc) != 0) {
      uVar7 = param_3 / ((uint)*(ushort *)(pbVar10 + 0xe) * (uint)*(ushort *)(pbVar10 + 0xc));
    }
    if (*(uint *)(pbVar10 + 0x14) == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = lVar13 + (ulong)*(uint *)(pbVar10 + 0x14) + (ulong)(*(int *)(pbVar10 + 4) * uVar7);
    }
    *param_2 = lVar13;
    *(undefined1 *)(param_2 + 5) = 0;
    param_2[4] = param_1 + 0x28;
    *(undefined2 *)((long)param_2 + 0x2c) = 0;
    *(ushort *)((long)param_2 + 0x2a) = (ushort)uVar7 & 0xff;
    lVar13 = *(long *)(param_1 + 0x20);
    uVar7 = *(uint *)(lVar13 + 0x10);
    if (uVar7 != 0) {
      do {
        puVar14 = (ushort *)(*(long *)(param_1 + 0x18) + (ulong)uVar7);
        if ((*puVar14 <= param_3) && (param_3 <= puVar14[1])) {
          lVar13 = (long)puVar14 + ((ulong)param_3 - (ulong)*puVar14) * 3;
          break;
        }
        uVar7 = *(uint *)(puVar14 + 2);
      } while (uVar7 != 0);
    }
    *(short *)(param_2 + 1) = (short)*(char *)(lVar13 + 8);
    *(ushort *)((long)param_2 + 10) = (ushort)*(byte *)(lVar13 + 9);
    *(ushort *)((long)param_2 + 0xc) = (ushort)*(byte *)(lVar13 + 10);
    *(ushort *)((long)param_2 + 0xe) = (ushort)*(byte *)(lVar13 + 9);
    uVar4 = *(ushort *)(pbVar10 + 0xc);
    bVar2 = *pbVar10;
    uVar12 = (uint)uVar4;
    uVar7 = *(ushort *)(pbVar10 + 0xe) * uVar12;
    uVar8 = 0;
    if (uVar7 != 0) {
      uVar8 = param_3 / uVar7;
    }
    param_3 = param_3 - uVar8 * uVar7;
    sVar9 = 0;
    if (uVar12 != 0) {
      sVar9 = (short)((param_3 & 0xffff) / uVar12);
    }
    bVar3 = pbVar10[1];
    *(ushort *)(param_2 + 2) = (ushort)bVar3;
    sVar11 = (short)param_3 - sVar9 * uVar4;
    sVar9 = sVar9 + sVar9 * (ushort)bVar3;
    sVar11 = sVar11 + sVar11 * (ushort)bVar2;
    *(ushort *)((long)param_2 + 0x12) = (ushort)pbVar10[1];
    *(ushort *)((long)param_2 + 0x1c) = *(ushort *)(pbVar10 + 10) & 0x3fff;
    sVar15 = *(short *)(pbVar10 + 0x10);
    pbVar10 = pbVar10 + 0x12;
  }
  else {
    psVar1 = (short *)(lVar13 + (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x10));
    uVar7 = 0;
    if ((uint)(ushort)psVar1[9] * (uint)(ushort)psVar1[8] != 0) {
      uVar7 = param_3 / ((uint)(ushort)psVar1[9] * (uint)(ushort)psVar1[8]);
    }
    if (*(uint *)(psVar1 + 0xc) == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = lVar13 + (ulong)*(uint *)(psVar1 + 0xc) + (ulong)(*(int *)(psVar1 + 4) * uVar7);
    }
    *param_2 = lVar13;
    *(short *)((long)param_2 + 0x2a) = (short)uVar7;
    param_2[4] = param_1 + 0x28;
    *(undefined1 *)(param_2 + 5) = 0;
    *(undefined2 *)((long)param_2 + 0x2c) = 0;
    uVar7 = *(uint *)(*(long *)(param_1 + 0x20) + 0x14);
    if (uVar7 != 0) {
      do {
        puVar14 = (ushort *)(*(long *)(param_1 + 0x18) + (ulong)uVar7);
        if ((*puVar14 <= param_3) && (param_3 <= puVar14[1])) {
          puVar14 = puVar14 + (long)(int)(param_3 - *puVar14) * 3 + 4;
          goto LAB__text__0068cc5c;
        }
        uVar7 = *(uint *)(puVar14 + 2);
      } while (uVar7 != 0);
    }
    puVar14 = (ushort *)(*(long *)(param_1 + 0x20) + 10);
LAB__text__0068cc5c:
    *(ushort *)(param_2 + 1) = *puVar14;
    *(ushort *)((long)param_2 + 10) = puVar14[1];
    *(ushort *)((long)param_2 + 0xc) = puVar14[2];
    *(ushort *)((long)param_2 + 0xe) = puVar14[1];
    uVar4 = psVar1[8];
    sVar15 = *psVar1;
    uVar12 = (uint)uVar4;
    uVar7 = (ushort)psVar1[9] * uVar12;
    uVar8 = 0;
    if (uVar7 != 0) {
      uVar8 = param_3 / uVar7;
    }
    param_3 = param_3 - uVar8 * uVar7;
    sVar9 = 0;
    if (uVar12 != 0) {
      sVar9 = (short)((param_3 & 0xffff) / uVar12);
    }
    sVar5 = psVar1[1];
    *(short *)(param_2 + 2) = sVar5;
    sVar11 = (short)param_3 - sVar9 * uVar4;
    sVar9 = sVar9 + sVar9 * sVar5;
    sVar11 = sVar11 + sVar11 * sVar15;
    *(short *)((long)param_2 + 0x12) = psVar1[1];
    *(ushort *)((long)param_2 + 0x1c) = psVar1[7] & 0x3fff;
    sVar15 = psVar1[10];
    pbVar10 = (byte *)(psVar1 + 0xb);
  }
  *(short *)((long)param_2 + 0x14) = sVar15;
  uVar6 = *(undefined2 *)pbVar10;
  *(short *)((long)param_2 + 0x1a) = sVar9 + 1;
  *(undefined2 *)((long)param_2 + 0x16) = uVar6;
  *(short *)(param_2 + 3) = sVar11 + 1;
  return;
}


