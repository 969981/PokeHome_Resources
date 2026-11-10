/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a2c60; name: FUN_.text__006a2c60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006a2c60(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                        long *param_6)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int *piVar4;
  int iVar5;
  void *__s;
  long lVar6;
  undefined8 *puVar7;
  size_t __n;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *local_78;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_3 + 0x38);
  uVar8 = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x40) = uVar8;
  piVar4 = _DAT_008a6990;
  lVar13 = param_6[4];
  if (*(long *)(param_3 + 0x58) == 0) {
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
    if (lVar13 != 0) goto LAB__text__006a2d50;
  }
  else {
    if (lVar13 == 0) {
      __s = (void *)param_6[5];
      *param_6 = (long)__s;
      __n = (long)*piVar4 * 8;
      *(int *)((long)param_6 + 0xc) = *piVar4;
      pvVar1 = (void *)((long)__s + __n);
      memset(__s,0,__n);
      lVar13 = (long)pvVar1 + 0x10;
      *(void **)pvVar1 = pvVar1;
      *(void **)((long)pvVar1 + 8) = pvVar1;
      param_6[2] = (long)pvVar1;
      FUN__text__006a4430(lVar13,(long)pvVar1 + 0x40);
      param_6[4] = lVar13;
    }
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
LAB__text__006a2d50:
    plVar9 = (long *)(*(long *)(lVar13 + 0x20) + (long)*(int *)(lVar13 + 0x28) * 0x68);
    *(int *)(lVar13 + 0x28) = *(int *)(lVar13 + 0x28) + 1;
    *(int *)(param_6 + 3) = (int)param_6[3] + 1;
    lVar13 = param_6[4];
    *(undefined4 *)(plVar9 + 9) = 0;
    *(undefined4 *)(plVar9 + 0xc) = 0;
    plVar9[2] = param_1;
    lVar11 = *plVar9;
    plVar9[5] = 0;
    plVar9[6] = lVar13;
    plVar10 = (long *)param_6[2];
    *plVar9 = *plVar10;
    *(long **)(lVar11 + 8) = plVar10;
    *(long **)(*plVar10 + 8) = plVar9;
    *plVar10 = lVar11;
    *(long **)(*param_6 + (long)(int)param_6[1] * 8 + -8) = plVar9;
  }
  local_78 = param_6 + 4;
  plVar9 = param_6 + 1;
  lVar13 = 0;
  if (*(long *)(*(long *)(param_3 + 0x18) + 0x18) != 0) {
    lVar13 = param_1;
  }
  uVar8 = FUN__text__006c1d80(*(long *)(param_3 + 0x18),lVar13,param_2,param_1,param_6);
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  if (param_5 != 0) {
    FUN__text__006b2090(uVar8,param_5);
  }
  puVar3 = _DAT_008a6970;
  puVar7 = _DAT_008a6960;
  lVar13 = (*(code *)*_DAT_008a6960)(0x10,4,*_DAT_008a6970);
  if (lVar13 != 0) {
    *(long *)lVar13 = lVar13;
    *(long *)(lVar13 + 8) = lVar13;
  }
  *(long *)(param_1 + 0x20) = lVar13;
  lVar13 = *(long *)(param_3 + 0x20);
  for (lVar11 = *(long *)(lVar13 + 8); lVar11 != lVar13; lVar11 = *(long *)(lVar11 + 8)) {
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar6 = (*(code *)*puVar7)(0x38,4,*puVar3);
    if (lVar6 != 0) {
      FUN__text__0069e480(lVar6,lVar11 + -8,uVar8);
    }
    FUN__text__0069e6a0(uVar2,lVar6);
  }
  if (param_4 != 0) {
    plVar10 = *(long **)(param_1 + 0x18);
    if (((*_DAT_008a52b8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(_DAT_008a52b8), puVar7 = _DAT_0089f8a0, iVar5 != 0)) {
      if (((*_DAT_0089f898 & 1) == 0) && (iVar5 = __cxa_guard_acquire(_DAT_0089f898), iVar5 != 0)) {
        *puVar7 = 0;
        __cxa_guard_release(_DAT_0089f898);
      }
      *_DAT_008a52c0 = puVar7;
      __cxa_guard_release(_DAT_008a52b8);
    }
    if (plVar10 != (long *)0x0) {
      puVar7 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10);
      if (puVar7 != _DAT_008a52c0) {
        do {
          puVar7 = (undefined8 *)*puVar7;
        } while (puVar7 != _DAT_008a52c0 && puVar7 != (undefined8 *)0x0);
        if (puVar7 == (undefined8 *)0x0) goto LAB__text__006a2ef0;
      }
      plVar10 = plVar10 + 0x1b;
      lVar13 = *plVar10;
      plVar12 = (long *)(param_4 + 0x48);
      *plVar10 = *plVar12;
      *(long **)(lVar13 + 8) = plVar12;
      *(long **)(*plVar12 + 8) = plVar10;
      *plVar12 = lVar13;
    }
  }
LAB__text__006a2ef0:
  if (*local_78 != 0) {
    iVar5 = (int)*plVar9;
    uVar8 = 0;
    if ((0 < iVar5) && (iVar5 <= *_DAT_008a6990)) {
      uVar8 = *(undefined8 *)(*param_6 + (ulong)(iVar5 - 1) * 8);
    }
    FUN__text__006a2890(param_1,uVar8);
  }
  iVar5 = (int)*plVar9 + -1;
  if ((int)*plVar9 < 1) {
    iVar5 = 0;
  }
  *(int *)plVar9 = iVar5;
  return;
}


