/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004483c0; name: FUN_.text__004483c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004483c0(long param_1,long param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  uVar4 = *(uint *)(param_1 + 0x38);
  if (uVar4 == 0) {
    return;
  }
  uVar5 = 0;
  if (uVar4 != 0) {
    uVar5 = (uint)param_2 / uVar4;
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x30) + (ulong)((uint)param_2 - uVar5 * uVar4) * 8);
  do {
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) {
      return;
    }
  } while (plVar9[1] != param_2);
  lVar10 = plVar9[2];
  if (lVar10 == 0) {
    return;
  }
  plVar8 = *(long **)(lVar10 + 0x10);
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)FUN__text__00400f80(4,0xf0);
    piVar6 = _DAT_008a3828;
    if (plVar8 == (long *)0x0) {
      return;
    }
    plVar8[1] = 0;
    plVar8[2] = 0;
    piVar2 = *(int **)(piVar6 + 2);
    lVar3 = *(long *)(piVar6 + 4);
    *(long **)(piVar6 + 2) = plVar8;
    plVar8[3] = (long)piVar2;
    piVar1 = piVar6;
    if (lVar3 != 0) {
      piVar1 = piVar2;
    }
    *(long **)(piVar1 + 4) = plVar8;
    *piVar6 = *piVar6 + 1;
    plVar8[8] = 0;
    plVar8[9] = 0;
    *(undefined2 *)(plVar8 + 0x1c) = 0;
    plVar8[0xc] = 0;
    plVar8[0xd] = 0;
    plVar8[0x12] = 0;
    plVar8[0x13] = 0;
    *plVar8 = (long)&DAT_008874b8;
    plVar8[0x16] = 0;
    plVar8[0x17] = 0;
    plVar8[0x1a] = 0;
    plVar8[0x1b] = 0;
    *(long **)(lVar10 + 0x10) = plVar8;
    plVar8[1] = lVar10;
    iVar7 = (**(code **)(*plVar8 + 0x10))(plVar8,*(undefined8 *)(lVar10 + 0x58));
    if (iVar7 != 1) {
      (**(code **)*plVar8)(plVar8);
      FUN__text__00400fc0(4,plVar8);
      *(undefined8 *)(lVar10 + 0x10) = 0;
      return;
    }
  }
  if (param_4 == 2) {
    FUN__text__0044d5f0(plVar8,param_3);
LAB__text__00448534:
    FUN__text__0041595c(0);
    lVar10 = *(long *)(plVar9[2] + 8);
  }
  else {
    if (param_4 == 1) {
      FUN__text__004485b0(param_1,param_3);
      FUN__text__0044d400(plVar8,param_3);
      FUN__text__0041595c(0);
      lVar10 = *(long *)(plVar9[2] + 8);
      if (lVar10 == 0) {
        return;
      }
      goto LAB__text__00448548;
    }
    if (param_4 != 0) goto LAB__text__00448534;
    FUN__text__004485b0(param_1,param_3);
    FUN__text__0044d3b8(plVar8,param_3);
    FUN__text__0041595c(0);
    lVar10 = *(long *)(plVar9[2] + 8);
  }
  if (lVar10 == 0) {
    return;
  }
LAB__text__00448548:
  *(byte *)(lVar10 + 0x7c) = *(byte *)(lVar10 + 0x7c) | 1;
  FUN__text__004486c0(lVar10 + 0x20,plVar8 + 0x18);
  return;
}


