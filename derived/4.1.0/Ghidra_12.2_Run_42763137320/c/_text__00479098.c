/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00479098; name: FUN_.text__00479098
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00479098(long param_1,uint param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_1 + 8);
  plVar10 = *(long **)(lVar11 + 0x18);
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)FUN__text__00400f80(4,0x50);
    if (plVar10 == (long *)0x0) {
      return 2;
    }
    plVar10[1] = 0;
    plVar10[2] = 0;
    *plVar10 = 0;
    plVar10[5] = 0;
    plVar10[8] = 0;
    plVar10[9] = 0;
    plVar10[6] = 0;
    plVar10[7] = 0;
    piVar6 = _DAT_008a3fa0;
    piVar3 = *(int **)(_DAT_008a3fa0 + 2);
    lVar5 = *(long *)(_DAT_008a3fa0 + 4);
    plVar10[3] = (long)piVar3;
    plVar10[4] = 0;
    piVar1 = piVar6;
    if (lVar5 != 0) {
      piVar1 = piVar3;
    }
    *(long **)(piVar6 + 2) = plVar10;
    *(long **)(piVar1 + 4) = plVar10;
    *piVar6 = *piVar6 + 1;
    plVar10[4] = 0;
    plVar10[5] = 0;
    plVar10[6] = 0;
    plVar10[7] = 0;
    plVar10[8] = 0;
    *(undefined2 *)(plVar10 + 9) = 0;
    *plVar10 = (long)&DAT_00889e18;
    *(undefined1 *)((long)plVar10 + 0x4a) = 1;
    *(long **)(lVar11 + 0x18) = plVar10;
    plVar10[1] = lVar11;
    iVar7 = (**(code **)(*plVar10 + 0x10))(plVar10,*(undefined8 *)(lVar11 + 0x58));
    if (iVar7 != 1) {
      (**(code **)*plVar10)(plVar10);
      FUN__text__00400fc0(4,plVar10);
      *(undefined8 *)(lVar11 + 0x18) = 0;
      return 2;
    }
  }
  if (param_2 < *(uint *)(plVar10 + 5)) {
    puVar8 = (undefined8 *)(plVar10[4] + (ulong)param_2 * 0x88);
    uVar2 = *puVar8;
    uVar9 = puVar8[2];
    param_3[1] = puVar8[1];
    param_3[2] = uVar9;
    *param_3 = uVar2;
    uVar2 = puVar8[3];
    uVar9 = puVar8[4];
    uVar4 = puVar8[6];
    param_3[5] = puVar8[5];
    param_3[6] = uVar4;
    param_3[3] = uVar2;
    param_3[4] = uVar9;
    uVar2 = puVar8[7];
    uVar9 = puVar8[8];
    uVar4 = puVar8[10];
    param_3[9] = puVar8[9];
    param_3[10] = uVar4;
    param_3[7] = uVar2;
    param_3[8] = uVar9;
    uVar2 = puVar8[0xb];
    uVar9 = puVar8[0xc];
    uVar4 = puVar8[0xe];
    param_3[0xd] = puVar8[0xd];
    param_3[0xe] = uVar4;
    param_3[0xb] = uVar2;
    param_3[0xc] = uVar9;
    return 1;
  }
  return 2;
}


