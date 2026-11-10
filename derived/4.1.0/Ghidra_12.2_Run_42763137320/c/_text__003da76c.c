/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003da76c; name: FUN_.text__003da76c
 */


void FUN__text__003da76c(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  ulong uVar7;
  long lVar8;
  undefined2 *puVar9;
  long lVar10;
  
  uVar7 = (ulong)(uint)param_1[5] - 1;
  if (uVar7 < (uint)param_1[4]) {
    puVar2 = (uint *)(*(long *)(param_1 + 6) + uVar7 * 8);
    uVar3 = param_1[1];
    uVar4 = *puVar2;
  }
  else {
    iVar5 = (int)uVar7 - param_1[4];
    lVar10 = LZCOUNT(iVar5 + 0x10);
    puVar2 = (uint *)(*(long *)(*(long *)(param_1 + 8) + (0x1b - lVar10) * 8 + 8) +
                     (ulong)(uint)(iVar5 - *(int *)((0x1c - lVar10) * 4 + 0x734874)) * 8);
    uVar3 = param_1[1];
    uVar4 = *puVar2;
  }
  if ((uVar3 >> 1 & 1) != 0) {
    if ((uVar4 | 4) == 7) {
      uVar3 = puVar2[1];
      if (uVar3 != 0) {
        *puVar2 = 4;
        puVar2[1] = uVar3 - 1;
        FUN__text__003da214(param_1,param_2,param_3);
        return;
      }
      if (*param_1 == 0) {
        *param_1 = 5;
      }
      *puVar2 = 5;
      return;
    }
LAB__text__003da8c0:
    *puVar2 = 5;
    if (*param_1 == 0) {
      *param_1 = 2;
      return;
    }
    return;
  }
  if (uVar4 == 3) {
    if ((uVar3 >> 2 & 1) != 0) {
      lVar8 = *(long *)(param_1 + 0x14);
      if (param_1 + 0x26 < (int *)(lVar8 + 1)) {
LAB__text__003daa70:
        lVar10 = *(long *)(param_1 + 2);
        piVar1 = param_1 + 0x16;
        sVar6 = lVar8 - (long)piVar1;
        *(int **)(param_1 + 0x14) = piVar1;
        if ((long)sVar6 < 0) goto LAB__text__003daaac;
        if (*(ulong *)(lVar10 + 0x20) < *(long *)(lVar10 + 0x10) + sVar6) {
          uVar7 = FUN__text__003d6a74(lVar10,piVar1,sVar6);
          if ((uVar7 & 1) == 0) goto LAB__text__003daabc;
        }
        else {
          memcpy((void *)(*(long *)(lVar10 + 0x18) + *(long *)(lVar10 + 0x10)),piVar1,sVar6);
          *(size_t *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + sVar6;
        }
      }
LAB__text__003dab54:
      **(undefined1 **)(param_1 + 0x14) = 10;
      *(long *)(param_1 + 0x14) = *(long *)(param_1 + 0x14) + 1;
      uVar7 = FUN__text__003d9080(param_1,param_1[5]);
      if ((uVar7 & 1) == 0) {
        return;
      }
    }
LAB__text__003da93c:
    *puVar2 = 4;
    uVar7 = FUN__text__003d9d90(param_1,param_2,param_3);
    if ((uVar7 & 1) == 0) {
      return;
    }
    lVar10 = *(long *)(param_1 + 2);
    lVar8 = *(long *)(param_1 + 0x14);
    if ((*(byte *)(param_1 + 1) >> 2 & 1) == 0) {
      if ((int *)(lVar8 + 1) <= param_1 + 0x26) goto LAB__text__003da9cc;
      piVar1 = param_1 + 0x16;
      sVar6 = lVar8 - (long)piVar1;
      *(int **)(param_1 + 0x14) = piVar1;
      if (-1 < (long)sVar6) {
        if (*(long *)(lVar10 + 0x10) + sVar6 <= *(ulong *)(lVar10 + 0x20)) {
          memcpy((void *)(*(long *)(lVar10 + 0x18) + *(long *)(lVar10 + 0x10)),piVar1,sVar6);
          *(size_t *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + sVar6;
LAB__text__003da9cc:
          **(undefined1 **)(param_1 + 0x14) = 0x3a;
          *(long *)(param_1 + 0x14) = *(long *)(param_1 + 0x14) + 1;
          return;
        }
        uVar7 = FUN__text__003d6a74(lVar10,piVar1,sVar6);
        if ((uVar7 & 1) != 0) goto LAB__text__003da9cc;
        goto LAB__text__003daabc;
      }
    }
    else {
      if ((int *)(lVar8 + 3) <= param_1 + 0x26) {
LAB__text__003dab04:
        puVar9 = *(undefined2 **)(param_1 + 0x14);
        *(undefined1 *)(puVar9 + 1) = 0x20;
        *puVar9 = 0x3a20;
        *(long *)(param_1 + 0x14) = *(long *)(param_1 + 0x14) + 3;
        return;
      }
      piVar1 = param_1 + 0x16;
      sVar6 = lVar8 - (long)piVar1;
      *(int **)(param_1 + 0x14) = piVar1;
      if (-1 < (long)sVar6) {
        if (*(ulong *)(lVar10 + 0x20) < *(long *)(lVar10 + 0x10) + sVar6) {
          uVar7 = FUN__text__003d6a74(lVar10,piVar1,sVar6);
          if ((uVar7 & 1) == 0) goto LAB__text__003daabc;
        }
        else {
          memcpy((void *)(*(long *)(lVar10 + 0x18) + *(long *)(lVar10 + 0x10)),piVar1,sVar6);
          *(size_t *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + sVar6;
        }
        goto LAB__text__003dab04;
      }
    }
  }
  else {
    if (uVar4 != 7) goto LAB__text__003da8c0;
    if ((int *)(*(long *)(param_1 + 0x14) + 1) <= param_1 + 0x26) {
LAB__text__003da91c:
      **(undefined1 **)(param_1 + 0x14) = 0x2c;
      lVar10 = *(long *)(param_1 + 0x14);
      lVar8 = lVar10 + 1;
      *(long *)(param_1 + 0x14) = lVar8;
      if ((*(byte *)(param_1 + 1) >> 2 & 1) != 0) {
        if (param_1 + 0x26 < (int *)(lVar10 + 2)) goto LAB__text__003daa70;
        goto LAB__text__003dab54;
      }
      goto LAB__text__003da93c;
    }
    lVar10 = *(long *)(param_1 + 2);
    piVar1 = param_1 + 0x16;
    sVar6 = *(long *)(param_1 + 0x14) - (long)piVar1;
    *(int **)(param_1 + 0x14) = piVar1;
    if (-1 < (long)sVar6) {
      if (*(ulong *)(lVar10 + 0x20) < *(long *)(lVar10 + 0x10) + sVar6) {
        uVar7 = FUN__text__003d6a74(lVar10,piVar1,sVar6);
        if ((uVar7 & 1) == 0) goto LAB__text__003daabc;
      }
      else {
        memcpy((void *)(*(long *)(lVar10 + 0x18) + *(long *)(lVar10 + 0x10)),piVar1,sVar6);
        *(size_t *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + sVar6;
      }
      goto LAB__text__003da91c;
    }
  }
LAB__text__003daaac:
  if (*(int *)(lVar10 + 0x28) == 0) {
    *(int *)(lVar10 + 0x28) = 0x16;
  }
LAB__text__003daabc:
  *puVar2 = 5;
  if (*param_1 == 0) {
    *param_1 = 8;
    return;
  }
  return;
}


