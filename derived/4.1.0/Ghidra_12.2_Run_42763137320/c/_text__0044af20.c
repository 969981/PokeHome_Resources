/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044af20; name: FUN_.text__0044af20
 */


void FUN__text__0044af20(long param_1,long param_2,uint param_3,byte param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *__s;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  
  uVar7 = (uint)*(ushort *)(param_1 + 0x38);
  if (*(ushort *)(param_1 + 0x38) == param_3) {
LAB__text__0044afa0:
    if (uVar7 == 0) goto LAB__text__0044aff8;
  }
  else {
    if (*(long *)(param_1 + 0x20) != 0) {
      *(undefined2 *)(param_1 + 0x38) = 0;
      FUN__text__00400fc0(5);
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    if (param_3 != 0) {
      __s = (void *)FUN__text__00400f80(5,(ulong)param_3 * 0x38);
      if (__s == (void *)0x0) goto LAB__text__0044aff8;
      memset(__s,0,(ulong)param_3 * 0x38);
      uVar7 = param_3 & 0xffff;
      *(void **)(param_1 + 0x20) = __s;
      *(short *)(param_1 + 0x38) = (short)param_3;
      goto LAB__text__0044afa0;
    }
    if (*(short *)(param_1 + 0x38) == 0) goto LAB__text__0044aff8;
  }
  lVar8 = 0;
  uVar9 = 0;
  do {
    puVar1 = (undefined8 *)(param_2 + lVar8);
    uVar9 = uVar9 + 1;
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + lVar8);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    uVar6 = puVar1[5];
    puVar2[4] = puVar1[4];
    puVar2[5] = uVar6;
    puVar2[2] = uVar4;
    puVar2[3] = uVar5;
    lVar3 = *(long *)(param_1 + 0x20) + lVar8;
    lVar8 = lVar8 + 0x38;
    *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(puVar1 + 6);
  } while (uVar9 < *(ushort *)(param_1 + 0x38));
LAB__text__0044aff8:
  *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) & 0xf8 | param_4 & 7;
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN__text__0044b040(param_1 + 0x50);
  }
  *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) | 1;
  return;
}


