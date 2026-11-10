/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053bc54; name: FUN_.text__0053bc54
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__0053bc54(long *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  uint *puVar9;
  
  uVar8 = *(uint *)(param_1 + 1);
  uVar2 = *(uint *)((long)param_1 + 0xc);
  if (uVar2 <= uVar8) {
    iVar1 = uVar2 + (uVar2 >> 1);
    if (uVar2 == 0) {
      iVar1 = 1;
    }
    uVar4 = FUN__text__0053e0d0(param_1,iVar1);
    if ((uVar4 & 1) == 0) {
      return (long *)0x0;
    }
    if (*(uint *)((long)param_1 + 0xc) <= uVar8) {
      return (long *)0x0;
    }
    uVar8 = *(uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = uVar8 + 1;
  if (*param_1 == 0) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = (long *)(*param_1 + (ulong)uVar8 * 0x40);
    plVar5 = plVar7 + 6;
    *plVar5 = 0;
    puVar9 = (uint *)(plVar7 + 7);
    puVar9[0] = 0;
    lVar3 = _DAT_008a4290;
    puVar9[1] = 0;
    plVar7[2] = 0;
    plVar7[3] = 0;
    plVar7[4] = 0;
    *(undefined4 *)(plVar7 + 5) = 0;
    *plVar7 = lVar3 + 0x10;
    plVar7[1] = 0;
    FUN__text__0053df80(plVar7,param_4);
    lVar3 = *param_2;
    lVar6 = param_2[2];
    plVar7[2] = param_2[1];
    plVar7[3] = lVar6;
    plVar7[1] = lVar3;
    uVar8 = *puVar9;
    lVar3 = param_3[1];
    plVar7[4] = *param_3;
    *(int *)(plVar7 + 5) = (int)lVar3;
    if (*(uint *)((long)plVar7 + 0x3c) <= uVar8) {
      uVar4 = FUN__text__0053e340(plVar5);
      if ((uVar4 & 1) == 0) {
        return plVar7;
      }
      if (*(uint *)((long)plVar7 + 0x3c) <= uVar8) {
        return plVar7;
      }
      uVar8 = *puVar9;
    }
    *puVar9 = uVar8 + 1;
    if (*plVar5 != 0) {
      plVar5 = (long *)(*plVar5 + (ulong)uVar8 * 0x18);
      *plVar5 = 0;
      plVar5[1] = 0;
      plVar5[2] = 0;
      lVar6 = param_2[2];
      lVar3 = param_2[1];
      *plVar5 = *param_2;
      plVar5[1] = lVar3;
      plVar5[2] = lVar6;
    }
  }
  return plVar7;
}


