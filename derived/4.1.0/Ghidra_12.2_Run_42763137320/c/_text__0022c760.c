/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0022c760; name: FUN_.text__0022c760
 */


void FUN__text__0022c760(undefined8 param_1,int *param_2,long param_3,int param_4)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  ushort uVar7;
  uint uVar8;
  int *piVar9;
  ushort *puVar10;
  int *piVar11;
  ushort *puVar12;
  byte *pbVar13;
  ulong uVar14;
  
  *param_2 = param_4;
  uVar5 = *(ushort *)(param_3 + 0xce82) - 0x18;
  if ((uVar5 < 0x22) && ((0x31ffc03cfU >> ((ulong)uVar5 & 0x3f) & 1) != 0)) {
    iVar4 = *(int *)(*(long *)((long)(short)uVar5 * 8 + 0x872468) + 4);
  }
  else {
    iVar4 = 0;
  }
  param_2[6] = iVar4;
  piVar9 = param_2 + 0x2f14;
  puVar10 = (ushort *)(param_3 + 0x6738);
  param_2[7] = (int)*(ulong *)(param_3 + 0xce60) +
               (int)(*(ulong *)(param_3 + 0xce60) / 1000000) * -1000000;
  *(undefined1 *)(param_2 + 8) = *(undefined1 *)(param_3 + 0xce58);
  FUN__text__005f3460(param_2 + 10,param_3 + 0xce68,0xd);
  param_2[9] = (uint)*(byte *)(param_3 + 0xce84);
  uVar1 = *(undefined1 *)(param_3 + 0xcea5);
  uVar3 = *(undefined8 *)(param_3 + 0xce9d);
  uVar6 = *(undefined8 *)(param_3 + 0xce95);
  *(undefined8 *)((long)param_2 + 0x4a) = *(undefined8 *)(param_3 + 0xce8d);
  *(undefined8 *)((long)param_2 + 0x52) = uVar6;
  *(undefined8 *)((long)param_2 + 0x5a) = uVar3;
  *(undefined1 *)((long)param_2 + 0x62) = uVar1;
  iVar4 = *param_2;
  uVar3 = *(undefined8 *)(param_3 + 0xce85);
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  *(undefined8 *)((long)param_2 + 0x42) = uVar3;
  if (iVar4 == 2) {
    uVar2 = *(ushort *)(param_3 + 0x10);
    param_2[0x1d] = (uint)uVar2;
    param_2[0x19] = (uint)uVar2;
    if (uVar2 < 0x12d) {
      uVar7 = *(ushort *)(param_3 + 0x12);
      uVar5 = (uint)uVar7;
      param_2[0x1e] = uVar5;
      param_2[0x1a] = (uint)uVar7;
    }
    else {
      uVar2 = 300;
      param_2[0x1d] = 300;
      uVar7 = *(ushort *)(param_3 + 0x12);
      uVar5 = (uint)uVar7;
      param_2[0x1e] = uVar5;
      param_2[0x1a] = (uint)uVar7;
    }
    if (300 < uVar5) {
      uVar5 = 300;
      param_2[0x1e] = 300;
      uVar7 = *(ushort *)(param_3 + 0x14);
      param_2[0x1f] = (uint)uVar7;
      param_2[0x1b] = (uint)uVar7;
      goto joined_r0x0022c8f4;
    }
    uVar5 = (uint)uVar7;
    uVar7 = *(ushort *)(param_3 + 0x14);
    param_2[0x1f] = (uint)uVar7;
    param_2[0x1b] = (uint)uVar7;
    if (300 < uVar7) goto LAB__text__0022c8c4;
LAB__text__0022c8f8:
    uVar8 = (uint)*(ushort *)(param_3 + 0xce82);
    if (iVar4 == 5) {
      if (uVar7 == 0) goto LAB__text__0022cc48;
LAB__text__0022c908:
      uVar14 = 0;
      uVar2 = (ushort)(uVar8 - 0x18);
      do {
        piVar9[-0x13] = (uint)*puVar10;
        *(ushort *)(piVar9 + -0x12) = puVar10[1];
        piVar9[-0x11] = (uint)(byte)puVar10[4];
        *(bool *)(piVar9 + -0x10) = (char)puVar10[0x12] != '\0';
        piVar9[-0xd] = *(int *)(puVar10 + 0x14);
        *(undefined1 *)(piVar9 + -0xc) = *(undefined1 *)((long)puVar10 + 9);
        piVar9[-3] = (uint)(byte)puVar10[2];
        piVar9[-0xb] = (uint)puVar10[3];
        FUN__text__005f3460(piVar9 + -10,puVar10 + 5,0xd);
        iVar4 = 0;
        piVar9[-2] = 0;
        piVar9[-1] = 0;
        *piVar9 = 0;
        if ((uVar2 < 0x22) && ((0x31ffc03cfU >> ((ulong)(uVar8 - 0x18) & 0x3f) & 1) != 0)) {
          iVar4 = *(int *)(*(long *)((long)(short)uVar2 * 8 + 0x872468) + 4);
        }
        piVar9[-1] = iVar4;
        *piVar9 = 0;
        uVar14 = uVar14 + 1;
        piVar9 = piVar9 + 0x14;
        puVar10 = puVar10 + 0x16;
      } while (uVar14 < (uint)param_2[0x1f]);
      goto LAB__text__0022cc48;
    }
  }
  else {
    uVar5 = 0;
    uVar2 = 0;
    uVar7 = *(ushort *)(param_3 + 0x14);
    param_2[0x1f] = (uint)uVar7;
    param_2[0x1b] = (uint)uVar7;
joined_r0x0022c8f4:
    if (uVar7 < 0x12d) goto LAB__text__0022c8f8;
LAB__text__0022c8c4:
    param_2[0x1f] = 300;
    uVar8 = (uint)*(ushort *)(param_3 + 0xce82);
    if (iVar4 == 5) goto LAB__text__0022c908;
  }
  if (uVar2 != 0) {
    uVar14 = 0;
    uVar2 = (ushort)(uVar8 - 0x18);
    piVar11 = param_2 + 0x34;
    pbVar13 = (byte *)(param_3 + 0x20);
    do {
      piVar11[-0x13] = (uint)*(ushort *)(pbVar13 + -8);
      *(undefined2 *)(piVar11 + -0x12) = *(undefined2 *)(pbVar13 + -6);
      piVar11[-0x11] = (uint)*pbVar13;
      *(bool *)(piVar11 + -0x10) = pbVar13[0x1c] != 0;
      piVar11[-0xd] = *(int *)(pbVar13 + 0x20);
      *(byte *)(piVar11 + -0xc) = pbVar13[1];
      piVar11[-3] = (uint)pbVar13[-4];
      piVar11[-0xb] = (uint)*(ushort *)(pbVar13 + -2);
      FUN__text__005f3460(piVar11 + -10,pbVar13 + 2,0xd);
      iVar4 = 0;
      piVar11[-2] = 0;
      piVar11[-1] = 0;
      *piVar11 = 0;
      if ((uVar2 < 0x22) && ((0x31ffc03cfU >> ((ulong)(uVar8 - 0x18) & 0x3f) & 1) != 0)) {
        iVar4 = *(int *)(*(long *)((long)(short)uVar2 * 8 + 0x872468) + 4);
      }
      piVar11[-1] = iVar4;
      *piVar11 = 0xf;
      uVar14 = uVar14 + 1;
      piVar11 = piVar11 + 0x14;
      pbVar13 = pbVar13 + 0x2c;
    } while (uVar14 < (uint)param_2[0x1d]);
    uVar5 = param_2[0x1e];
  }
  if (uVar5 != 0) {
    uVar14 = 0;
    puVar12 = (ushort *)(param_3 + 0x33a8);
    uVar2 = (ushort)(uVar8 - 0x18);
    piVar11 = param_2 + 0x17a4;
    do {
      piVar11[-0x13] = (uint)*puVar12;
      *(ushort *)(piVar11 + -0x12) = puVar12[1];
      piVar11[-0x11] = (uint)(byte)puVar12[4];
      *(bool *)(piVar11 + -0x10) = (char)puVar12[0x12] != '\0';
      piVar11[-0xd] = *(int *)(puVar12 + 0x14);
      *(undefined1 *)(piVar11 + -0xc) = *(undefined1 *)((long)puVar12 + 9);
      piVar11[-3] = (uint)(byte)puVar12[2];
      piVar11[-0xb] = (uint)puVar12[3];
      FUN__text__005f3460(piVar11 + -10,puVar12 + 5,0xd);
      iVar4 = 0;
      piVar11[-2] = 0;
      piVar11[-1] = 0xf;
      *piVar11 = 0;
      if ((uVar2 < 0x22) && ((0x31ffc03cfU >> ((ulong)(uVar8 - 0x18) & 0x3f) & 1) != 0)) {
        iVar4 = *(int *)(*(long *)((long)(short)uVar2 * 8 + 0x872468) + 4);
      }
      *piVar11 = iVar4;
      uVar14 = uVar14 + 1;
      puVar12 = puVar12 + 0x16;
      piVar11 = piVar11 + 0x14;
    } while (uVar14 < (uint)param_2[0x1e]);
  }
  if (param_2[0x1f] != 0) {
    uVar14 = 0;
    do {
      piVar9[-0x13] = (uint)*puVar10;
      *(ushort *)(piVar9 + -0x12) = puVar10[1];
      piVar9[-0x11] = (uint)(byte)puVar10[4];
      *(bool *)(piVar9 + -0x10) = (char)puVar10[0x12] != '\0';
      piVar9[-0xd] = *(int *)(puVar10 + 0x14);
      *(undefined1 *)(piVar9 + -0xc) = *(undefined1 *)((long)puVar10 + 9);
      piVar9[-3] = (uint)(byte)puVar10[2];
      piVar9[-0xb] = (uint)puVar10[3];
      FUN__text__005f3460(piVar9 + -10,puVar10 + 5,0xd);
      piVar9[-2] = 0;
      piVar9[-1] = 0xf;
      uVar14 = uVar14 + 1;
      puVar10 = puVar10 + 0x16;
      *piVar9 = 0;
      piVar9 = piVar9 + 0x14;
    } while (uVar14 < (uint)param_2[0x1f]);
  }
LAB__text__0022cc48:
  uVar2 = *(ushort *)(param_3 + 4);
  param_2[0x20] = (uint)uVar2;
  param_2[0x1c] = (uint)uVar2;
  return;
}


