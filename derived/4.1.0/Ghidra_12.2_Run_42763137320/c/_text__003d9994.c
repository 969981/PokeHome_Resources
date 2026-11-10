/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d9994; name: FUN_.text__003d9994
 */


long * FUN__text__003d9994(long *param_1,uint param_2)

{
  byte *pbVar1;
  void *pvVar2;
  uint uVar3;
  size_t sVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  
  puVar5 = (undefined4 *)FUN__text__003d8a50(*param_1);
  if (puVar5 == (undefined4 *)0x0) {
    return param_1;
  }
  *puVar5 = 2;
  puVar5[1] = param_2;
  lVar11 = *param_1;
  lVar10 = *(long *)(lVar11 + 8);
  lVar7 = *(long *)(lVar11 + 0x50);
  pbVar1 = (byte *)(lVar11 + 0x98);
  if ((*(byte *)(lVar11 + 4) >> 1 & 1) == 0) {
    if (pbVar1 < (byte *)(lVar7 + 1)) {
      pvVar2 = (void *)(lVar11 + 0x58);
      sVar4 = lVar7 - (long)pvVar2;
      *(void **)(lVar11 + 0x50) = pvVar2;
      if ((long)sVar4 < 0) goto LAB__text__003d9a88;
      if (*(ulong *)(lVar10 + 0x20) < *(long *)(lVar10 + 0x10) + sVar4) {
        uVar6 = FUN__text__003d6a74(lVar10,pvVar2,sVar4);
        if ((uVar6 & 1) == 0) goto LAB__text__003d9a98;
      }
      else {
        memcpy((void *)(*(long *)(lVar10 + 0x18) + *(long *)(lVar10 + 0x10)),pvVar2,sVar4);
        *(size_t *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + sVar4;
      }
    }
    **(undefined1 **)(lVar11 + 0x50) = 0x5b;
    pbVar8 = (byte *)(*(long *)(lVar11 + 0x50) + 1);
    goto LAB__text__003d9afc;
  }
  if (pbVar1 < (byte *)(lVar7 + 5)) {
    pvVar2 = (void *)(lVar11 + 0x58);
    sVar4 = lVar7 - (long)pvVar2;
    *(void **)(lVar11 + 0x50) = pvVar2;
    if ((long)sVar4 < 0) {
LAB__text__003d9a88:
      if (*(int *)(lVar10 + 0x28) == 0) {
        *(int *)(lVar10 + 0x28) = 0x16;
      }
LAB__text__003d9a98:
      if (*(int *)*param_1 == 0) {
        *(int *)*param_1 = 8;
      }
      *puVar5 = 5;
      return param_1;
    }
    if (*(ulong *)(lVar10 + 0x20) < *(long *)(lVar10 + 0x10) + sVar4) {
      uVar6 = FUN__text__003d6a74(lVar10,pvVar2,sVar4);
      if ((uVar6 & 1) == 0) goto LAB__text__003d9a98;
      goto LAB__text__003d9a60;
    }
    memcpy((void *)(*(long *)(lVar10 + 0x18) + *(long *)(lVar10 + 0x10)),pvVar2,sVar4);
    *(size_t *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + sVar4;
    pbVar9 = *(byte **)(lVar11 + 0x50);
    if (param_2 < 0x10) goto LAB__text__003d9a6c;
LAB__text__003d9b40:
    if (param_2 >> 0x10 == 0) {
      pbVar8 = pbVar9 + 3;
      if (pbVar8 <= pbVar1) {
        *pbVar9 = 0xdc;
        *(ushort *)(pbVar9 + 1) =
             (ushort)(param_2 >> 8) & 0xff | (ushort)((param_2 & 0xff00ff) << 8);
        goto LAB__text__003d9afc;
      }
    }
    else {
      pbVar8 = pbVar9 + 5;
      if (pbVar8 <= pbVar1) {
        *pbVar9 = 0xdd;
        uVar3 = (param_2 & 0xff00ff00) >> 8 | (param_2 & 0xff00ff) << 8;
        *(uint *)(pbVar9 + 1) = uVar3 >> 0x10 | uVar3 << 0x10;
        goto LAB__text__003d9afc;
      }
    }
  }
  else {
LAB__text__003d9a60:
    pbVar9 = *(byte **)(lVar11 + 0x50);
    if (0xf < param_2) goto LAB__text__003d9b40;
LAB__text__003d9a6c:
    pbVar8 = pbVar9 + 1;
    if (pbVar8 <= pbVar1) {
      *pbVar9 = (byte)param_2 | 0x90;
      goto LAB__text__003d9afc;
    }
  }
  pbVar8 = (byte *)0x0;
LAB__text__003d9afc:
  *(byte **)(lVar11 + 0x50) = pbVar8;
  return param_1;
}


