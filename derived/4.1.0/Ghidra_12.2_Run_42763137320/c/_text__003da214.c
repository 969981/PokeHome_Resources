/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003da214; name: FUN_.text__003da214
 */


undefined8 FUN__text__003da214(int *param_1,void *param_2,ulong param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  byte bVar3;
  size_t sVar4;
  ushort uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  byte *pbVar13;
  ulong local_38;
  
  if (((*(byte *)(param_1 + 1) >> 3 & 1) == 0) &&
     ((iVar6 = FUN__text__003e3030(0,0,&local_38,param_2,param_3), iVar6 != 0 ||
      (local_38 != param_3)))) {
    if (*param_1 == 0) {
      *param_1 = 7;
      uVar11 = param_1[4];
      uVar7 = (ulong)(uint)param_1[5] - 1;
      if (uVar11 <= uVar7) goto LAB__text__003da3b0;
    }
    else {
      uVar11 = param_1[4];
      uVar7 = (ulong)(uint)param_1[5] - 1;
      if (uVar11 <= uVar7) {
LAB__text__003da3b0:
        iVar6 = (int)uVar7 - uVar11;
        lVar12 = LZCOUNT(iVar6 + 0x10);
        uVar7 = (ulong)(uint)(iVar6 - *(int *)((0x1c - lVar12) * 4 + 0x734874));
        plVar10 = (long *)(*(long *)(param_1 + 8) + (0x1b - lVar12) * 8 + 8);
        goto LAB__text__003da3e8;
      }
    }
    plVar10 = (long *)(param_1 + 6);
LAB__text__003da3e8:
    *(undefined4 *)(*plVar10 + uVar7 * 8) = 5;
    return 0;
  }
  lVar12 = *(long *)(param_1 + 2);
  pbVar9 = (byte *)(param_1 + 0x26);
  lVar8 = *(long *)(param_1 + 0x14);
  uVar11 = (uint)param_3;
  bVar3 = (byte)param_3;
  uVar5 = (ushort)(param_3 >> 8);
  if (0x40 < param_3 + 5) {
    if (pbVar9 < (byte *)(lVar8 + 5)) {
      piVar1 = param_1 + 0x16;
      sVar4 = lVar8 - (long)piVar1;
      *(int **)(param_1 + 0x14) = piVar1;
      if ((long)sVar4 < 0) goto LAB__text__003da6ac;
      if (*(ulong *)(lVar12 + 0x20) < *(long *)(lVar12 + 0x10) + sVar4) {
        uVar7 = FUN__text__003d6a74(lVar12,piVar1,sVar4);
        if ((uVar7 & 1) == 0) goto LAB__text__003da6bc;
        goto LAB__text__003da33c;
      }
      memcpy((void *)(*(long *)(lVar12 + 0x18) + *(long *)(lVar12 + 0x10)),piVar1,sVar4);
      *(size_t *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + sVar4;
      pbVar13 = *(byte **)(param_1 + 0x14);
      if (0x1f < uVar11) goto LAB__text__003da4c4;
LAB__text__003da348:
      if (pbVar9 < pbVar13 + 1) {
LAB__text__003da694:
        lVar12 = *(long *)(param_1 + 2);
        sVar4 = -(long)(param_1 + 0x16);
        *(int **)(param_1 + 0x14) = param_1 + 0x16;
      }
      else {
        *pbVar13 = bVar3 | 0xa0;
        lVar12 = *(long *)(param_1 + 2);
        sVar4 = (long)(pbVar13 + 1) - (long)(param_1 + 0x16);
        *(int **)(param_1 + 0x14) = param_1 + 0x16;
      }
    }
    else {
LAB__text__003da33c:
      pbVar13 = *(byte **)(param_1 + 0x14);
      if (uVar11 < 0x20) goto LAB__text__003da348;
LAB__text__003da4c4:
      if (0xff < uVar11) {
        if (uVar11 >> 0x10 == 0) {
          if (pbVar9 < pbVar13 + 3) goto LAB__text__003da694;
          *pbVar13 = 0xda;
          *(ushort *)(pbVar13 + 1) = uVar5 & 0xff | (ushort)((uVar11 & 0xff00ff) << 8);
          lVar12 = *(long *)(param_1 + 2);
          sVar4 = (long)(pbVar13 + 3) - (long)(param_1 + 0x16);
          *(int **)(param_1 + 0x14) = param_1 + 0x16;
          goto joined_r0x003da5bc;
        }
        if (pbVar13 + 5 <= pbVar9) {
          *pbVar13 = 0xdb;
          uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
          *(uint *)(pbVar13 + 1) = uVar11 >> 0x10 | uVar11 << 0x10;
          lVar12 = *(long *)(param_1 + 2);
          sVar4 = (long)(pbVar13 + 5) - (long)(param_1 + 0x16);
          *(int **)(param_1 + 0x14) = param_1 + 0x16;
          goto joined_r0x003da5bc;
        }
        goto LAB__text__003da694;
      }
      if (pbVar9 < pbVar13 + 2) goto LAB__text__003da694;
      pbVar13[1] = bVar3;
      *pbVar13 = 0xd9;
      lVar12 = *(long *)(param_1 + 2);
      sVar4 = (long)(pbVar13 + 2) - (long)(param_1 + 0x16);
      *(int **)(param_1 + 0x14) = param_1 + 0x16;
    }
joined_r0x003da5bc:
    if (-1 < (long)sVar4) {
      if (*(ulong *)(lVar12 + 0x20) < *(long *)(lVar12 + 0x10) + sVar4) {
        uVar7 = FUN__text__003d6a74(lVar12,param_1 + 0x16,sVar4);
        if ((uVar7 & 1) == 0) goto LAB__text__003da6bc;
        lVar12 = *(long *)(param_1 + 2);
      }
      else {
        memcpy((void *)(*(long *)(lVar12 + 0x18) + *(long *)(lVar12 + 0x10)),param_1 + 0x16,sVar4);
        *(size_t *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + sVar4;
        lVar12 = *(long *)(param_1 + 2);
      }
      if (-1 < (long)param_3) {
        if (*(long *)(lVar12 + 0x10) + param_3 <= *(ulong *)(lVar12 + 0x20)) {
          memcpy((void *)(*(long *)(lVar12 + 0x18) + *(long *)(lVar12 + 0x10)),param_2,param_3);
          *(ulong *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + param_3;
          return 1;
        }
        uVar7 = FUN__text__003d6a74(lVar12,param_2,param_3);
        if ((uVar7 & 1) != 0) {
          return 1;
        }
        goto LAB__text__003da6bc;
      }
    }
LAB__text__003da6ac:
    if (*(int *)(lVar12 + 0x28) == 0) {
      *(int *)(lVar12 + 0x28) = 0x16;
    }
LAB__text__003da6bc:
    uVar7 = (ulong)(uint)param_1[5] - 1;
    if (uVar7 < (uint)param_1[4]) {
      puVar2 = (undefined4 *)(*(long *)(param_1 + 6) + uVar7 * 8);
      iVar6 = *param_1;
    }
    else {
      iVar6 = (int)uVar7 - param_1[4];
      lVar12 = LZCOUNT(iVar6 + 0x10);
      puVar2 = (undefined4 *)
               (*(long *)(*(long *)(param_1 + 8) + (0x1b - lVar12) * 8 + 8) +
               (ulong)(uint)(iVar6 - *(int *)((0x1c - lVar12) * 4 + 0x734874)) * 8);
      iVar6 = *param_1;
    }
    if (iVar6 == 0) {
      *param_1 = 8;
    }
    *puVar2 = 5;
    return 0;
  }
  if (pbVar9 < (byte *)(lVar8 + param_3 + 5)) {
    piVar1 = param_1 + 0x16;
    sVar4 = lVar8 - (long)piVar1;
    *(int **)(param_1 + 0x14) = piVar1;
    if ((long)sVar4 < 0) goto LAB__text__003da6ac;
    if (*(ulong *)(lVar12 + 0x20) < *(long *)(lVar12 + 0x10) + sVar4) {
      uVar7 = FUN__text__003d6a74(lVar12,piVar1,sVar4);
      if ((uVar7 & 1) == 0) goto LAB__text__003da6bc;
      goto LAB__text__003da2b8;
    }
    memcpy((void *)(*(long *)(lVar12 + 0x18) + *(long *)(lVar12 + 0x10)),piVar1,sVar4);
    *(size_t *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + sVar4;
    pbVar13 = *(byte **)(param_1 + 0x14);
  }
  else {
LAB__text__003da2b8:
    pbVar13 = *(byte **)(param_1 + 0x14);
  }
  if (uVar11 < 0x20) {
    param_3 = param_3 & 0xffffffff;
    if (pbVar13 + param_3 + 1 <= pbVar9) {
      *pbVar13 = bVar3 | 0xa0;
      memcpy(pbVar13 + 1,param_2,param_3);
      pbVar9 = pbVar13 + 1 + param_3;
      goto LAB__text__003da574;
    }
  }
  else {
    param_3 = param_3 & 0xffffffff;
    if (uVar11 < 0x100) {
      if (pbVar13 + param_3 + 2 <= pbVar9) {
        pbVar13[1] = bVar3;
        pbVar9 = pbVar13 + 2;
        *pbVar13 = 0xd9;
        goto LAB__text__003da560;
      }
    }
    else if (uVar11 >> 0x10 == 0) {
      if (pbVar13 + param_3 + 3 <= pbVar9) {
        *pbVar13 = 0xda;
        pbVar9 = pbVar13 + 3;
        *(ushort *)(pbVar13 + 1) = uVar5 & 0xff | (ushort)((uVar11 & 0xff00ff) << 8);
LAB__text__003da560:
        memcpy(pbVar9,param_2,param_3);
        pbVar9 = pbVar9 + param_3;
        goto LAB__text__003da574;
      }
    }
    else if (pbVar13 + param_3 + 5 <= pbVar9) {
      *pbVar13 = 0xdb;
      uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
      pbVar9 = pbVar13 + 5;
      *(uint *)(pbVar13 + 1) = uVar11 >> 0x10 | uVar11 << 0x10;
      goto LAB__text__003da560;
    }
  }
  pbVar9 = (byte *)0x0;
LAB__text__003da574:
  *(byte **)(param_1 + 0x14) = pbVar9;
  return 1;
}


