/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003da210; name: FUN_.text__003da210
 */


undefined8 FUN__text__003da210(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  byte bVar3;
  size_t sVar4;
  ushort uVar5;
  int iVar6;
  int *piVar7;
  ulong uVar8;
  void *__src;
  long lVar9;
  byte *pbVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  byte *pbVar14;
  undefined1 auVar15 [16];
  ulong uStack_38;
  
  auVar15 = FUN__text__003da760();
  __src = auVar15._8_8_;
  piVar7 = auVar15._0_8_;
  if (((*(byte *)(piVar7 + 1) >> 3 & 1) == 0) &&
     ((iVar6 = FUN__text__003e3030(0,0,&uStack_38,__src,param_3), iVar6 != 0 ||
      (uStack_38 != param_3)))) {
    if (*piVar7 == 0) {
      *piVar7 = 7;
      uVar12 = piVar7[4];
      uVar8 = (ulong)(uint)piVar7[5] - 1;
      if (uVar12 <= uVar8) goto LAB__text__003da3b0;
    }
    else {
      uVar12 = piVar7[4];
      uVar8 = (ulong)(uint)piVar7[5] - 1;
      if (uVar12 <= uVar8) {
LAB__text__003da3b0:
        iVar6 = (int)uVar8 - uVar12;
        lVar13 = LZCOUNT(iVar6 + 0x10);
        uVar8 = (ulong)(uint)(iVar6 - *(int *)((0x1c - lVar13) * 4 + 0x734874));
        plVar11 = (long *)(*(long *)(piVar7 + 8) + (0x1b - lVar13) * 8 + 8);
        goto LAB__text__003da3e8;
      }
    }
    plVar11 = (long *)(piVar7 + 6);
LAB__text__003da3e8:
    *(undefined4 *)(*plVar11 + uVar8 * 8) = 5;
    return 0;
  }
  lVar13 = *(long *)(piVar7 + 2);
  pbVar10 = (byte *)(piVar7 + 0x26);
  lVar9 = *(long *)(piVar7 + 0x14);
  uVar12 = (uint)param_3;
  bVar3 = (byte)param_3;
  uVar5 = (ushort)(param_3 >> 8);
  if (0x40 < param_3 + 5) {
    if (pbVar10 < (byte *)(lVar9 + 5)) {
      piVar1 = piVar7 + 0x16;
      sVar4 = lVar9 - (long)piVar1;
      *(int **)(piVar7 + 0x14) = piVar1;
      if ((long)sVar4 < 0) goto LAB__text__003da6ac;
      if (*(ulong *)(lVar13 + 0x20) < *(long *)(lVar13 + 0x10) + sVar4) {
        uVar8 = FUN__text__003d6a74(lVar13,piVar1,sVar4);
        if ((uVar8 & 1) == 0) goto LAB__text__003da6bc;
        goto LAB__text__003da33c;
      }
      memcpy((void *)(*(long *)(lVar13 + 0x18) + *(long *)(lVar13 + 0x10)),piVar1,sVar4);
      *(size_t *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + sVar4;
      pbVar14 = *(byte **)(piVar7 + 0x14);
      if (0x1f < uVar12) goto LAB__text__003da4c4;
LAB__text__003da348:
      if (pbVar10 < pbVar14 + 1) {
LAB__text__003da694:
        lVar13 = *(long *)(piVar7 + 2);
        sVar4 = -(long)(piVar7 + 0x16);
        *(int **)(piVar7 + 0x14) = piVar7 + 0x16;
      }
      else {
        *pbVar14 = bVar3 | 0xa0;
        lVar13 = *(long *)(piVar7 + 2);
        sVar4 = (long)(pbVar14 + 1) - (long)(piVar7 + 0x16);
        *(int **)(piVar7 + 0x14) = piVar7 + 0x16;
      }
    }
    else {
LAB__text__003da33c:
      pbVar14 = *(byte **)(piVar7 + 0x14);
      if (uVar12 < 0x20) goto LAB__text__003da348;
LAB__text__003da4c4:
      if (0xff < uVar12) {
        if (uVar12 >> 0x10 == 0) {
          if (pbVar10 < pbVar14 + 3) goto LAB__text__003da694;
          *pbVar14 = 0xda;
          *(ushort *)(pbVar14 + 1) = uVar5 & 0xff | (ushort)((uVar12 & 0xff00ff) << 8);
          lVar13 = *(long *)(piVar7 + 2);
          sVar4 = (long)(pbVar14 + 3) - (long)(piVar7 + 0x16);
          *(int **)(piVar7 + 0x14) = piVar7 + 0x16;
          goto joined_r0x003da5bc;
        }
        if (pbVar14 + 5 <= pbVar10) {
          *pbVar14 = 0xdb;
          uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
          *(uint *)(pbVar14 + 1) = uVar12 >> 0x10 | uVar12 << 0x10;
          lVar13 = *(long *)(piVar7 + 2);
          sVar4 = (long)(pbVar14 + 5) - (long)(piVar7 + 0x16);
          *(int **)(piVar7 + 0x14) = piVar7 + 0x16;
          goto joined_r0x003da5bc;
        }
        goto LAB__text__003da694;
      }
      if (pbVar10 < pbVar14 + 2) goto LAB__text__003da694;
      pbVar14[1] = bVar3;
      *pbVar14 = 0xd9;
      lVar13 = *(long *)(piVar7 + 2);
      sVar4 = (long)(pbVar14 + 2) - (long)(piVar7 + 0x16);
      *(int **)(piVar7 + 0x14) = piVar7 + 0x16;
    }
joined_r0x003da5bc:
    if (-1 < (long)sVar4) {
      if (*(ulong *)(lVar13 + 0x20) < *(long *)(lVar13 + 0x10) + sVar4) {
        uVar8 = FUN__text__003d6a74(lVar13,piVar7 + 0x16,sVar4);
        if ((uVar8 & 1) == 0) goto LAB__text__003da6bc;
        lVar13 = *(long *)(piVar7 + 2);
      }
      else {
        memcpy((void *)(*(long *)(lVar13 + 0x18) + *(long *)(lVar13 + 0x10)),piVar7 + 0x16,sVar4);
        *(size_t *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + sVar4;
        lVar13 = *(long *)(piVar7 + 2);
      }
      if (-1 < (long)param_3) {
        if (*(long *)(lVar13 + 0x10) + param_3 <= *(ulong *)(lVar13 + 0x20)) {
          memcpy((void *)(*(long *)(lVar13 + 0x18) + *(long *)(lVar13 + 0x10)),__src,param_3);
          *(ulong *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + param_3;
          return 1;
        }
        uVar8 = FUN__text__003d6a74(lVar13,__src,param_3);
        if ((uVar8 & 1) != 0) {
          return 1;
        }
        goto LAB__text__003da6bc;
      }
    }
LAB__text__003da6ac:
    if (*(int *)(lVar13 + 0x28) == 0) {
      *(int *)(lVar13 + 0x28) = 0x16;
    }
LAB__text__003da6bc:
    uVar8 = (ulong)(uint)piVar7[5] - 1;
    if (uVar8 < (uint)piVar7[4]) {
      puVar2 = (undefined4 *)(*(long *)(piVar7 + 6) + uVar8 * 8);
      iVar6 = *piVar7;
    }
    else {
      iVar6 = (int)uVar8 - piVar7[4];
      lVar13 = LZCOUNT(iVar6 + 0x10);
      puVar2 = (undefined4 *)
               (*(long *)(*(long *)(piVar7 + 8) + (0x1b - lVar13) * 8 + 8) +
               (ulong)(uint)(iVar6 - *(int *)((0x1c - lVar13) * 4 + 0x734874)) * 8);
      iVar6 = *piVar7;
    }
    if (iVar6 == 0) {
      *piVar7 = 8;
    }
    *puVar2 = 5;
    return 0;
  }
  if (pbVar10 < (byte *)(lVar9 + param_3 + 5)) {
    piVar1 = piVar7 + 0x16;
    sVar4 = lVar9 - (long)piVar1;
    *(int **)(piVar7 + 0x14) = piVar1;
    if ((long)sVar4 < 0) goto LAB__text__003da6ac;
    if (*(ulong *)(lVar13 + 0x20) < *(long *)(lVar13 + 0x10) + sVar4) {
      uVar8 = FUN__text__003d6a74(lVar13,piVar1,sVar4);
      if ((uVar8 & 1) == 0) goto LAB__text__003da6bc;
      goto LAB__text__003da2b8;
    }
    memcpy((void *)(*(long *)(lVar13 + 0x18) + *(long *)(lVar13 + 0x10)),piVar1,sVar4);
    *(size_t *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + sVar4;
    pbVar14 = *(byte **)(piVar7 + 0x14);
  }
  else {
LAB__text__003da2b8:
    pbVar14 = *(byte **)(piVar7 + 0x14);
  }
  if (uVar12 < 0x20) {
    param_3 = param_3 & 0xffffffff;
    if (pbVar14 + param_3 + 1 <= pbVar10) {
      *pbVar14 = bVar3 | 0xa0;
      memcpy(pbVar14 + 1,__src,param_3);
      pbVar10 = pbVar14 + 1 + param_3;
      goto LAB__text__003da574;
    }
  }
  else {
    param_3 = param_3 & 0xffffffff;
    if (uVar12 < 0x100) {
      if (pbVar14 + param_3 + 2 <= pbVar10) {
        pbVar14[1] = bVar3;
        pbVar10 = pbVar14 + 2;
        *pbVar14 = 0xd9;
        goto LAB__text__003da560;
      }
    }
    else if (uVar12 >> 0x10 == 0) {
      if (pbVar14 + param_3 + 3 <= pbVar10) {
        *pbVar14 = 0xda;
        pbVar10 = pbVar14 + 3;
        *(ushort *)(pbVar14 + 1) = uVar5 & 0xff | (ushort)((uVar12 & 0xff00ff) << 8);
LAB__text__003da560:
        memcpy(pbVar10,__src,param_3);
        pbVar10 = pbVar10 + param_3;
        goto LAB__text__003da574;
      }
    }
    else if (pbVar14 + param_3 + 5 <= pbVar10) {
      *pbVar14 = 0xdb;
      uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
      pbVar10 = pbVar14 + 5;
      *(uint *)(pbVar14 + 1) = uVar12 >> 0x10 | uVar12 << 0x10;
      goto LAB__text__003da560;
    }
  }
  pbVar10 = (byte *)0x0;
LAB__text__003da574:
  *(byte **)(piVar7 + 0x14) = pbVar10;
  return 1;
}


