/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003db2b0; name: FUN_.text__003db2b0
 */


long * FUN__text__003db2b0(long *param_1,ulong param_2)

{
  void *pvVar1;
  undefined1 *puVar2;
  size_t sVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  
  uVar4 = FUN__text__003d91a4(*param_1);
  if ((uVar4 & 1) == 0) {
    return param_1;
  }
  lVar10 = *param_1;
  lVar8 = *(long *)(lVar10 + 8);
  lVar6 = *(long *)(lVar10 + 0x50);
  if ((*(byte *)(lVar10 + 4) >> 1 & 1) == 0) {
    if ((param_2 & 1) == 0) {
      if (lVar6 + 5U <= lVar10 + 0x98U) {
LAB__text__003db4c8:
        puVar5 = *(undefined4 **)(lVar10 + 0x50);
        *(undefined1 *)(puVar5 + 1) = 0x65;
        *puVar5 = 0x736c6166;
        *(long *)(lVar10 + 0x50) = *(long *)(lVar10 + 0x50) + 5;
        return param_1;
      }
      pvVar1 = (void *)(lVar10 + 0x58);
      sVar3 = lVar6 - (long)pvVar1;
      *(void **)(lVar10 + 0x50) = pvVar1;
      if (-1 < (long)sVar3) {
        if (*(ulong *)(lVar8 + 0x20) < *(long *)(lVar8 + 0x10) + sVar3) {
          uVar4 = FUN__text__003d6a74(lVar8,pvVar1,sVar3);
          if ((uVar4 & 1) == 0) goto LAB__text__003db3cc;
        }
        else {
          memcpy((void *)(*(long *)(lVar8 + 0x18) + *(long *)(lVar8 + 0x10)),pvVar1,sVar3);
          *(size_t *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + sVar3;
        }
        goto LAB__text__003db4c8;
      }
    }
    else {
      if (lVar6 + 4U <= lVar10 + 0x98U) goto LAB__text__003db47c;
      pvVar1 = (void *)(lVar10 + 0x58);
      sVar3 = lVar6 - (long)pvVar1;
      *(void **)(lVar10 + 0x50) = pvVar1;
      if (-1 < (long)sVar3) {
        if (*(long *)(lVar8 + 0x10) + sVar3 <= *(ulong *)(lVar8 + 0x20)) {
          memcpy((void *)(*(long *)(lVar8 + 0x18) + *(long *)(lVar8 + 0x10)),pvVar1,sVar3);
          *(size_t *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + sVar3;
LAB__text__003db47c:
          **(undefined4 **)(lVar10 + 0x50) = 0x65757274;
          *(long *)(lVar10 + 0x50) = *(long *)(lVar10 + 0x50) + 4;
          return param_1;
        }
        uVar4 = FUN__text__003d6a74(lVar8,pvVar1,sVar3);
        if ((uVar4 & 1) != 0) goto LAB__text__003db47c;
        goto LAB__text__003db3cc;
      }
    }
  }
  else {
    if (lVar6 + 1U <= lVar10 + 0x98U) {
LAB__text__003db420:
      lVar6 = *param_1;
      puVar2 = *(undefined1 **)(lVar6 + 0x50) + 1;
      if ((undefined1 *)(lVar6 + 0x98U) < puVar2) {
        *(undefined8 *)(lVar6 + 0x50) = 0;
        return param_1;
      }
      uVar7 = 0xc2;
      if ((param_2 & 1) != 0) {
        uVar7 = 0xc3;
      }
      **(undefined1 **)(lVar6 + 0x50) = uVar7;
      *(undefined1 **)(lVar6 + 0x50) = puVar2;
      return param_1;
    }
    pvVar1 = (void *)(lVar10 + 0x58);
    sVar3 = lVar6 - (long)pvVar1;
    *(void **)(lVar10 + 0x50) = pvVar1;
    if (-1 < (long)sVar3) {
      if (*(ulong *)(lVar8 + 0x20) < *(long *)(lVar8 + 0x10) + sVar3) {
        uVar4 = FUN__text__003d6a74(lVar8,pvVar1,sVar3);
        if ((uVar4 & 1) == 0) goto LAB__text__003db3cc;
      }
      else {
        memcpy((void *)(*(long *)(lVar8 + 0x18) + *(long *)(lVar8 + 0x10)),pvVar1,sVar3);
        *(size_t *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + sVar3;
      }
      goto LAB__text__003db420;
    }
  }
  if (*(int *)(lVar8 + 0x28) == 0) {
    *(int *)(lVar8 + 0x28) = 0x16;
  }
LAB__text__003db3cc:
  piVar9 = (int *)*param_1;
  puVar5 = (undefined4 *)FUN__text__003d9014(piVar9 + 4);
  if (*piVar9 == 0) {
    *piVar9 = 8;
  }
  *puVar5 = 5;
  return param_1;
}


