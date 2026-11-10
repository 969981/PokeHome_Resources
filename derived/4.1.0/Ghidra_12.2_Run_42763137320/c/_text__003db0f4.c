/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003db0f4; name: FUN_.text__003db0f4
 */


long * FUN__text__003db0f4(long *param_1)

{
  void *pvVar1;
  undefined1 *puVar2;
  size_t sVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  
  uVar4 = FUN__text__003d91a4(*param_1);
  if ((uVar4 & 1) == 0) {
    return param_1;
  }
  lVar9 = *param_1;
  lVar7 = *(long *)(lVar9 + 8);
  lVar6 = *(long *)(lVar9 + 0x50);
  if ((*(byte *)(lVar9 + 4) >> 1 & 1) == 0) {
    if (lVar6 + 4U <= lVar9 + 0x98U) goto LAB__text__003db214;
    pvVar1 = (void *)(lVar9 + 0x58);
    sVar3 = lVar6 - (long)pvVar1;
    *(void **)(lVar9 + 0x50) = pvVar1;
    if (-1 < (long)sVar3) {
      if (*(long *)(lVar7 + 0x10) + sVar3 <= *(ulong *)(lVar7 + 0x20)) {
        memcpy((void *)(*(long *)(lVar7 + 0x18) + *(long *)(lVar7 + 0x10)),pvVar1,sVar3);
        *(size_t *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + sVar3;
LAB__text__003db214:
        **(undefined4 **)(lVar9 + 0x50) = 0x6c6c756e;
        *(long *)(lVar9 + 0x50) = *(long *)(lVar9 + 0x50) + 4;
        return param_1;
      }
      uVar4 = FUN__text__003d6a74(lVar7,pvVar1,sVar3);
      if ((uVar4 & 1) != 0) goto LAB__text__003db214;
      goto LAB__text__003db1c0;
    }
  }
  else {
    if (lVar6 + 1U <= lVar9 + 0x98U) {
LAB__text__003db260:
      lVar6 = *param_1;
      puVar2 = *(undefined1 **)(lVar6 + 0x50) + 1;
      if ((undefined1 *)(lVar6 + 0x98) < puVar2) {
        *(undefined8 *)(lVar6 + 0x50) = 0;
        return param_1;
      }
      **(undefined1 **)(lVar6 + 0x50) = 0xc0;
      *(undefined1 **)(lVar6 + 0x50) = puVar2;
      return param_1;
    }
    pvVar1 = (void *)(lVar9 + 0x58);
    sVar3 = lVar6 - (long)pvVar1;
    *(void **)(lVar9 + 0x50) = pvVar1;
    if (-1 < (long)sVar3) {
      if (*(ulong *)(lVar7 + 0x20) < *(long *)(lVar7 + 0x10) + sVar3) {
        uVar4 = FUN__text__003d6a74(lVar7,pvVar1,sVar3);
        if ((uVar4 & 1) == 0) goto LAB__text__003db1c0;
      }
      else {
        memcpy((void *)(*(long *)(lVar7 + 0x18) + *(long *)(lVar7 + 0x10)),pvVar1,sVar3);
        *(size_t *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + sVar3;
      }
      goto LAB__text__003db260;
    }
  }
  if (*(int *)(lVar7 + 0x28) == 0) {
    *(int *)(lVar7 + 0x28) = 0x16;
  }
LAB__text__003db1c0:
  piVar8 = (int *)*param_1;
  puVar5 = (undefined4 *)FUN__text__003d9014(piVar8 + 4);
  if (*piVar8 == 0) {
    *piVar8 = 8;
  }
  *puVar5 = 5;
  return param_1;
}


