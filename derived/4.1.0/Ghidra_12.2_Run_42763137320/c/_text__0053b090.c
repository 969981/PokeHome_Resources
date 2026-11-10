/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053b090; name: FUN_.text__0053b090
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__0053b090(long *param_1,undefined8 param_2,long *param_3,long *param_4,
                          undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  uint *puVar11;
  
  uVar10 = *(uint *)(param_1 + 1);
  uVar2 = *(uint *)((long)param_1 + 0xc);
  if (uVar2 <= uVar10) {
    iVar1 = uVar2 + (uVar2 >> 1);
    if (uVar2 == 0) {
      iVar1 = 1;
    }
    uVar4 = FUN__text__0053d990(param_1,iVar1);
    if ((uVar4 & 1) == 0) {
      return (long *)0x0;
    }
    if (*(uint *)((long)param_1 + 0xc) <= uVar10) {
      return (long *)0x0;
    }
    uVar10 = *(uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = uVar10 + 1;
  if (*param_1 == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = (long *)(*param_1 + (ulong)uVar10 * 0x50);
    plVar8[2] = 0;
    plVar8[3] = 0;
    lVar3 = _DAT_008a4288;
    plVar8[4] = 0;
    *(undefined4 *)(plVar8 + 5) = 0;
    plVar8[6] = 0;
    plVar8[9] = 0;
    plVar9 = plVar8 + 7;
    *plVar9 = 0;
    puVar11 = (uint *)(plVar8 + 8);
    puVar11[0] = 0;
    puVar11[1] = 0;
    *plVar8 = lVar3 + 0x10;
    plVar8[1] = 0;
    FUN__text__0053d740(plVar8,param_2);
    lVar3 = *param_3;
    lVar7 = param_3[2];
    plVar8[2] = param_3[1];
    plVar8[3] = lVar7;
    plVar8[1] = lVar3;
    uVar10 = *puVar11;
    lVar3 = param_4[1];
    plVar8[4] = *param_4;
    *(int *)(plVar8 + 5) = (int)lVar3;
    uVar2 = *(uint *)((long)plVar8 + 0x44);
    if (uVar2 <= uVar10) {
      iVar1 = uVar2 + (uVar2 >> 1);
      if (uVar2 == 0) {
        iVar1 = 1;
      }
      uVar4 = FUN__text__0051bfc0(plVar9,iVar1);
      if ((uVar4 & 1) == 0) {
        return plVar8;
      }
      if (*(uint *)((long)plVar8 + 0x44) <= uVar10) {
        return plVar8;
      }
      uVar10 = *puVar11;
    }
    *puVar11 = uVar10 + 1;
    if (*plVar9 != 0) {
      puVar5 = (undefined8 *)(*plVar9 + (ulong)uVar10 * 0x28);
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      puVar5[2] = param_5;
      puVar5[3] = 0;
      uVar6 = *param_7;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_7 + 1);
      *puVar5 = uVar6;
      puVar5[3] = 0;
      puVar5[4] = param_6;
    }
  }
  return plVar8;
}


