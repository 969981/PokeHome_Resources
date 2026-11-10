/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005888c0; name: FUN_.text__005888c0
 */


undefined8
FUN__text__005888c0(long param_1,long param_2,undefined4 param_3,undefined8 param_4,int *param_5,
                   long param_6,int param_7)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  byte bVar11;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  
  *(uint *)(param_6 + 0x58) =
       *(int *)(param_6 + 0x58) +
       ((uint)*(ushort *)((long)param_5 + 10) +
        (uint)*(ushort *)((long)param_5 + 10) * (uint)*(byte *)(param_1 + 0x1b) + -2) * param_5[10];
  uVar4 = *(ushort *)((long)param_5 + 10);
  if (uVar4 == 0) {
    iVar14 = 0x100;
  }
  else {
    if (uVar4 == 1) {
      uVar10 = 0;
      uVar7 = 0xff;
    }
    else {
      uVar10 = 0;
      uVar7 = 0xff;
      do {
        pbVar1 = (byte *)(param_2 + uVar10);
        uVar10 = uVar10 + 2;
        bVar11 = *pbVar1;
        bVar3 = pbVar1[1];
        uVar9 = (uint)bVar11;
        if (uVar7 <= bVar11 || bVar11 == 0) {
          uVar9 = uVar7;
        }
        uVar7 = (uint)bVar3;
        if (uVar9 <= bVar3 || bVar3 == 0) {
          uVar7 = uVar9;
        }
      } while (((ulong)uVar4 & 0xfffe) != uVar10);
    }
    uVar9 = uVar7;
    if (((uVar4 & 1) != 0) &&
       (bVar11 = *(byte *)(param_2 + uVar10), uVar9 = (uint)bVar11, uVar7 <= bVar11 || bVar11 == 0))
    {
      uVar9 = uVar7;
    }
    iVar14 = uVar9 + 1;
  }
  do {
    iVar14 = iVar14 + 1;
    iVar6 = FUN__text__005874b0(param_1,param_2,param_3,param_4,param_5,param_6,iVar14);
  } while (iVar6 == 1);
  if (iVar6 == 2) {
    return 0xffffff75;
  }
  if ((param_5[9] == 1) && (*(char *)(*(long *)(param_1 + 0x10) + 0x50) != '\0')) {
    iVar6 = param_5[1];
    iVar2 = param_5[3];
    lVar8 = 0;
    iVar14 = *param_5 >> (-iVar6 - 8U & 0x1f);
    if (-9 < iVar6) {
      iVar14 = *param_5 << (ulong)(iVar6 + 8U & 0x1f);
    }
    *(int *)(*(long *)(param_1 + 0x10) + 0x34) = iVar14;
    *(int *)(*(long *)(param_1 + 0x10) + 0x38) =
         ~(-1 << (ulong)(*(byte *)(*(long *)(param_1 + 0x10) + 0x50) & 0x1f));
    iVar6 = *(int *)(*(long *)(param_1 + 0x10) + 0x40);
    iVar14 = iVar6 >> (-iVar2 - 8U & 0x1f);
    if (-9 < iVar2) {
      iVar14 = iVar6 << (ulong)(iVar2 + 8U & 0x1f);
    }
    *(int *)(*(long *)(param_1 + 0x10) + 0x3c) = iVar14;
    do {
      uVar7 = (uint)lVar8;
      lVar8 = lVar8 + 1;
    } while (1 << (ulong)(uVar7 & 0x1f) != (uint)*(byte *)(param_1 + 0x1a));
    *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x48) =
         *(undefined8 *)
          ((long)(param_7 + -1) * 0x20 + (ulong)*(byte *)(param_1 + 0x1b) * 0x40 + lVar8 * 8 +
          0x8934a0);
    bVar11 = *(byte *)(param_1 + 0x1a);
    if ((bVar11 < 9) && ((1 << (ulong)(bVar11 & 0x1f) & 0x114U) != 0)) {
      puVar12 = *(undefined8 **)(param_1 + 0x10);
      uVar5 = *(undefined4 *)((long)puVar12 + 0x34);
      puVar12[1] = CONCAT44(uVar5,uVar5);
      *puVar12 = CONCAT44(uVar5,uVar5);
      *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x10) =
           *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x38);
      lVar13 = *(long *)(param_1 + 0x10);
      *(int *)(lVar13 + 0x14) = *(int *)(lVar13 + 0x38) << (ulong)(*(byte *)(lVar13 + 0x50) & 0x1f);
      lVar13 = *(long *)(param_1 + 0x10);
      *(int *)(lVar13 + 0x18) =
           *(int *)(lVar13 + 0x38) << (ulong)((*(byte *)(lVar13 + 0x50) & 0xf) << 1);
      lVar13 = *(long *)(param_1 + 0x10);
      *(int *)(lVar13 + 0x1c) =
           *(int *)(lVar13 + 0x38) << (ulong)((uint)*(byte *)(lVar13 + 0x50) * 3 & 0x1f);
      bVar11 = *(byte *)(param_1 + 0x1a);
    }
    if (bVar11 == 8) {
      *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x20) =
           *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x3c);
      lVar13 = *(long *)(param_1 + 0x10);
      *(int *)(lVar13 + 0x24) = *(int *)(lVar13 + 0x3c) >> (*(byte *)(lVar13 + 0x50) & 0x1f);
      lVar13 = *(long *)(param_1 + 0x10);
      *(int *)(lVar13 + 0x28) = *(int *)(lVar13 + 0x3c) >> ((*(byte *)(lVar13 + 0x50) & 0xf) << 1);
      lVar13 = *(long *)(param_1 + 0x10);
      *(int *)(lVar13 + 0x2c) =
           *(int *)(lVar13 + 0x3c) >> ((uint)*(byte *)(lVar13 + 0x50) * 3 & 0x1f);
      bVar11 = *(byte *)(param_1 + 0x1a);
    }
    if ((bVar11 == 4) || (bVar11 == 2)) {
      lVar13 = *(long *)(param_1 + 0x10);
      uVar7 = (uint)*(byte *)(lVar13 + 0x50) * -3 - param_5[3];
      iVar14 = (-iVar2 - 8U) - uVar7;
      if (iVar14 < 1) {
        *(undefined4 *)(lVar13 + 0x30) = 0;
        uVar7 = *(uint *)(lVar13 + 0x3c);
        lVar13 = *(long *)(param_1 + 0x10);
      }
      else {
        *(int *)(lVar13 + 0x30) = iVar14;
        lVar13 = *(long *)(param_1 + 0x10);
        uVar7 = *(int *)(lVar13 + 0x40) >> (uVar7 & 0x1f);
      }
      *(uint *)(lVar13 + 0x20) = uVar7;
      *(uint *)(*(long *)(param_1 + 0x10) + 0x24) =
           uVar7 >> (ulong)(*(byte *)(*(long *)(param_1 + 0x10) + 0x50) & 0x1f);
      *(uint *)(*(long *)(param_1 + 0x10) + 0x28) =
           uVar7 >> (ulong)((*(byte *)(*(long *)(param_1 + 0x10) + 0x50) & 0xf) << 1);
      *(uint *)(*(long *)(param_1 + 0x10) + 0x2c) =
           uVar7 >> (ulong)((uint)*(byte *)(*(long *)(param_1 + 0x10) + 0x50) * 3 & 0x1f);
      if (0xffff < (uVar7 << (ulong)(*(byte *)(*(long *)(param_1 + 0x10) + 0x50) & 0x1f)) - uVar7) {
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x48) =
             *(undefined8 *)
              ((long)(param_7 + -1) * 0x20 + (ulong)*(byte *)(param_1 + 0x1b) * 0x40 + lVar8 * 8 +
              0x893520);
        return 0;
      }
    }
  }
  return 0;
}


