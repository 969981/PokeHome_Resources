/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b6400; name: FUN_.text__006b6400
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006b6400(long *param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  lVar9 = *param_1;
  uVar2 = *(undefined8 *)(lVar9 + 0x80);
  uVar5 = *(undefined8 *)(lVar9 + 0x88);
  uVar3 = *(undefined8 *)(lVar9 + 0x90);
  uVar6 = *(undefined8 *)(lVar9 + 0x98);
  uVar4 = *(undefined8 *)(lVar9 + 0x70);
  uVar7 = *(undefined8 *)(lVar9 + 0x78);
  if ((param_1[1] == 0) && (lVar9 = FUN__text__006b253c(lVar9,3), lVar9 != 0)) {
    lVar9 = FUN__text__006b253c(*param_1,3);
    param_1[1] = lVar9;
  }
  if ((param_1[0xb] == 0) && (lVar9 = FUN__text__006b253c(*param_1,4), lVar9 != 0)) {
    lVar9 = FUN__text__006b253c(*param_1,4);
    param_1[0xb] = lVar9;
  }
  if (param_1[1] != 0) {
    *(undefined8 *)(param_2 + 0x90) = uVar2;
    *(undefined8 *)(param_2 + 0x98) = uVar5;
    *(undefined8 *)(param_2 + 0xa0) = uVar3;
    *(undefined8 *)(param_2 + 0xa8) = uVar6;
    *(undefined8 *)(param_2 + 0x80) = uVar4;
    *(undefined8 *)(param_2 + 0x88) = uVar7;
    *(byte *)(param_2 + 0x194) = *(byte *)(param_2 + 0x194) & 0xdf;
    FUN__text__006b6604(param_1,param_2);
    if ((long *)param_1[3] == (long *)0x0) {
      puVar10 = (undefined8 *)0x0;
      bVar1 = *_DAT_008a69f8;
    }
    else {
      puVar10 = (undefined8 *)(**(code **)(*(long *)param_1[3] + 0x48))();
      bVar1 = *_DAT_008a69f8;
    }
    if (((bVar1 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(_DAT_008a69f8), puVar11 = _DAT_008a68b0, iVar8 != 0)) {
      if (((*_DAT_008a68a8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(_DAT_008a68a8), iVar8 != 0)) {
        *puVar11 = 0;
        __cxa_guard_release(_DAT_008a68a8);
      }
      *_DAT_008a6a00 = puVar11;
      __cxa_guard_release(_DAT_008a69f8);
    }
    if (puVar10 != (undefined8 *)0x0) {
      puVar11 = (undefined8 *)(**(code **)*puVar10)(puVar10);
      if (puVar11 != _DAT_008a6a00) {
        do {
          puVar11 = (undefined8 *)*puVar11;
        } while (puVar11 != _DAT_008a6a00 && puVar11 != (undefined8 *)0x0);
        if (puVar11 == (undefined8 *)0x0) goto LAB__text__006b6540;
      }
      *(byte *)(puVar10 + 0x2b) = *(byte *)(puVar10 + 0x2b) | 2;
    }
  }
LAB__text__006b6540:
  if (param_1[0xb] == 0) {
    return;
  }
  *(undefined8 *)(param_2 + 0x90) = uVar2;
  *(undefined8 *)(param_2 + 0x98) = uVar5;
  *(undefined8 *)(param_2 + 0xa0) = uVar3;
  *(undefined8 *)(param_2 + 0xa8) = uVar6;
  *(undefined8 *)(param_2 + 0x80) = uVar4;
  *(undefined8 *)(param_2 + 0x88) = uVar7;
  *(byte *)(param_2 + 0x194) = *(byte *)(param_2 + 0x194) & 0xdf;
  FUN__text__006b67dc(param_1,param_2);
  return;
}


