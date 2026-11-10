/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003dc0d4; name: FUN_.text__003dc0d4
 */


undefined8 * FUN__text__003dc0d4(undefined8 *param_1,void *param_2,ulong param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  size_t sVar4;
  ushort uVar5;
  int *piVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  undefined1 *__dest;
  
  piVar6 = (int *)*param_1;
  if (param_3 >> 0x20 != 0) {
    if (*piVar6 == 0) {
      *piVar6 = 0xe;
    }
    puVar8 = (undefined4 *)FUN__text__003d9014(piVar6 + 4);
    *puVar8 = 5;
    return param_1;
  }
  uVar7 = FUN__text__003d91a4();
  if ((uVar7 & 1) == 0) {
    return param_1;
  }
  piVar6 = (int *)*param_1;
  if ((*(byte *)(piVar6 + 1) >> 1 & 1) == 0) {
    if (*piVar6 == 0) {
      *piVar6 = 0xc;
      uVar13 = piVar6[4];
      uVar7 = (ulong)(uint)piVar6[5] - 1;
      if (uVar13 <= uVar7) goto LAB__text__003dc268;
    }
    else {
      uVar13 = piVar6[4];
      uVar7 = (ulong)(uint)piVar6[5] - 1;
      if (uVar13 <= uVar7) {
LAB__text__003dc268:
        iVar3 = (int)uVar7 - uVar13;
        lVar11 = LZCOUNT(iVar3 + 0x10);
        uVar7 = (ulong)(uint)(iVar3 - *(int *)((0x1c - lVar11) * 4 + 0x734874));
        plVar12 = (long *)(*(long *)(piVar6 + 8) + (0x1b - lVar11) * 8 + 8);
        goto LAB__text__003dc2a0;
      }
    }
    plVar12 = (long *)(piVar6 + 6);
LAB__text__003dc2a0:
    *(undefined4 *)(*plVar12 + uVar7 * 8) = 5;
    return param_1;
  }
  lVar11 = *(long *)(piVar6 + 2);
  uVar13 = (uint)param_3;
  uVar5 = (ushort)(param_3 >> 8);
  if (0x3b < param_3) {
    piVar1 = piVar6 + 0x26;
    if (piVar1 < (int *)(*(long *)(piVar6 + 0x14) + 5)) {
      piVar2 = piVar6 + 0x16;
      sVar4 = *(long *)(piVar6 + 0x14) - (long)piVar2;
      *(int **)(piVar6 + 0x14) = piVar2;
      if ((long)sVar4 < 0) goto LAB__text__003dc53c;
      if (*(ulong *)(lVar11 + 0x20) < *(long *)(lVar11 + 0x10) + sVar4) {
        uVar7 = FUN__text__003d6a74(lVar11,piVar2,sVar4);
        if ((uVar7 & 1) == 0) goto LAB__text__003dc54c;
        goto LAB__text__003dc218;
      }
      memcpy((void *)(*(long *)(lVar11 + 0x18) + *(long *)(lVar11 + 0x10)),piVar2,sVar4);
      *(size_t *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + sVar4;
      puVar9 = *(undefined1 **)(piVar6 + 0x14);
      if (0xff < uVar13) goto LAB__text__003dc3a4;
LAB__text__003dc224:
      if (piVar1 < puVar9 + 2) {
LAB__text__003dc528:
        sVar4 = -(long)(piVar6 + 0x16);
        *(int **)(piVar6 + 0x14) = piVar6 + 0x16;
      }
      else {
        puVar9[1] = (char)param_3;
        *puVar9 = 0xc4;
        sVar4 = (long)(puVar9 + 2) - (long)(piVar6 + 0x16);
        *(int **)(piVar6 + 0x14) = piVar6 + 0x16;
      }
    }
    else {
LAB__text__003dc218:
      puVar9 = *(undefined1 **)(piVar6 + 0x14);
      if (uVar13 < 0x100) goto LAB__text__003dc224;
LAB__text__003dc3a4:
      if (uVar13 >> 0x10 == 0) {
        if (puVar9 + 3 <= piVar1) {
          *puVar9 = 0xc5;
          *(ushort *)(puVar9 + 1) = uVar5 & 0xff | (ushort)((uVar13 & 0xff00ff) << 8);
          sVar4 = (long)(puVar9 + 3) - (long)(piVar6 + 0x16);
          *(int **)(piVar6 + 0x14) = piVar6 + 0x16;
          goto joined_r0x003dc408;
        }
        goto LAB__text__003dc528;
      }
      if (piVar1 < puVar9 + 5) goto LAB__text__003dc528;
      *puVar9 = 0xc6;
      uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
      *(uint *)(puVar9 + 1) = uVar13 >> 0x10 | uVar13 << 0x10;
      sVar4 = (long)(puVar9 + 5) - (long)(piVar6 + 0x16);
      *(int **)(piVar6 + 0x14) = piVar6 + 0x16;
    }
joined_r0x003dc408:
    if (-1 < (long)sVar4) {
      if (*(ulong *)(lVar11 + 0x20) < *(long *)(lVar11 + 0x10) + sVar4) {
        uVar7 = FUN__text__003d6a74(lVar11,piVar6 + 0x16,sVar4);
        if ((uVar7 & 1) == 0) goto LAB__text__003dc54c;
        lVar10 = *(long *)(lVar11 + 0x10);
        if (lVar10 + param_3 <= *(ulong *)(lVar11 + 0x20)) goto LAB__text__003dc444;
      }
      else {
        memcpy((void *)(*(long *)(lVar11 + 0x18) + *(long *)(lVar11 + 0x10)),piVar6 + 0x16,sVar4);
        lVar10 = *(long *)(lVar11 + 0x10) + sVar4;
        *(long *)(lVar11 + 0x10) = lVar10;
        if (lVar10 + param_3 <= *(ulong *)(lVar11 + 0x20)) {
LAB__text__003dc444:
          memcpy((void *)(*(long *)(lVar11 + 0x18) + lVar10),param_2,param_3);
          *(ulong *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + param_3;
          return param_1;
        }
      }
      uVar7 = FUN__text__003d6a74(lVar11,param_2,param_3);
      if ((uVar7 & 1) != 0) {
        return param_1;
      }
      goto LAB__text__003dc54c;
    }
LAB__text__003dc53c:
    if (*(int *)(lVar11 + 0x28) == 0) {
      *(int *)(lVar11 + 0x28) = 0x16;
    }
LAB__text__003dc54c:
    piVar6 = (int *)*param_1;
    uVar7 = (ulong)(uint)piVar6[5] - 1;
    if (uVar7 < (uint)piVar6[4]) {
      puVar8 = (undefined4 *)(*(long *)(piVar6 + 6) + uVar7 * 8);
      iVar3 = *piVar6;
    }
    else {
      iVar3 = (int)uVar7 - piVar6[4];
      lVar11 = LZCOUNT(iVar3 + 0x10);
      puVar8 = (undefined4 *)
               (*(long *)(*(long *)(piVar6 + 8) + (0x1b - lVar11) * 8 + 8) +
               (ulong)(uint)(iVar3 - *(int *)((0x1c - lVar11) * 4 + 0x734874)) * 8);
      iVar3 = *piVar6;
    }
    if (iVar3 == 0) {
      *piVar6 = 8;
    }
    *puVar8 = 5;
    return param_1;
  }
  piVar1 = piVar6 + 0x26;
  if (piVar1 < (int *)(param_3 + *(long *)(piVar6 + 0x14) + 5)) {
    piVar2 = piVar6 + 0x16;
    sVar4 = *(long *)(piVar6 + 0x14) - (long)piVar2;
    *(int **)(piVar6 + 0x14) = piVar2;
    if ((long)sVar4 < 0) goto LAB__text__003dc53c;
    if (*(ulong *)(lVar11 + 0x20) < *(long *)(lVar11 + 0x10) + sVar4) {
      uVar7 = FUN__text__003d6a74(lVar11,piVar2,sVar4);
      if ((uVar7 & 1) == 0) goto LAB__text__003dc54c;
      goto LAB__text__003dc188;
    }
    memcpy((void *)(*(long *)(lVar11 + 0x18) + *(long *)(lVar11 + 0x10)),piVar2,sVar4);
    *(size_t *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + sVar4;
    puVar9 = *(undefined1 **)(piVar6 + 0x14);
  }
  else {
LAB__text__003dc188:
    puVar9 = *(undefined1 **)(piVar6 + 0x14);
  }
  if (uVar13 < 0x100) {
    if (puVar9 + param_3 + 2 <= piVar1) {
      puVar9[1] = (char)param_3;
      *puVar9 = 0xc4;
      memcpy(puVar9 + 2,param_2,param_3);
      *(undefined1 **)(piVar6 + 0x14) = puVar9 + 2 + param_3;
      return param_1;
    }
  }
  else {
    param_3 = param_3 & 0xffffffff;
    if (uVar13 >> 0x10 == 0) {
      if (puVar9 + param_3 + 3 <= piVar1) {
        *puVar9 = 0xc5;
        __dest = puVar9 + 3;
        *(ushort *)(puVar9 + 1) = uVar5 & 0xff | (ushort)((uVar13 & 0xff00ff) << 8);
LAB__text__003dc34c:
        memcpy(__dest,param_2,param_3);
        *(undefined1 **)(piVar6 + 0x14) = __dest + param_3;
        return param_1;
      }
    }
    else if (puVar9 + param_3 + 5 <= piVar1) {
      *puVar9 = 0xc6;
      uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
      __dest = puVar9 + 5;
      *(uint *)(puVar9 + 1) = uVar13 >> 0x10 | uVar13 << 0x10;
      goto LAB__text__003dc34c;
    }
  }
  piVar6[0x14] = 0;
  piVar6[0x15] = 0;
  return param_1;
}


