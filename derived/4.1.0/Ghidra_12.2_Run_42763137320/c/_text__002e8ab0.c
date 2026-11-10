/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002e8ab0; name: FUN_.text__002e8ab0
 */


void FUN__text__002e8ab0(long param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  long lVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  
  if ((param_3 < 0x20) && (param_4 < 0x1e)) {
    plVar8 = *(long **)(param_1 + 0x938);
    if (plVar8 != (long *)0x0) {
      plVar9 = plVar8 + 9;
      (**(code **)(*plVar9 + 0x10))(plVar9);
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    (**(code **)(*plVar8 + 0x80))
              (plVar8,*(long *)(param_1 + 0x9c0) + (ulong)param_3 * 0x2fd0 + (ulong)param_4 * 0x198)
    ;
    uVar5 = (**(code **)(*plVar8 + 0x40))(plVar8,2);
    if ((uVar5 & 1) == 0) {
      (**(code **)(*plVar8 + 0x90))(plVar8);
    }
    plVar8 = plVar8 + 9;
    (**(code **)(*plVar8 + 0x18))(plVar8);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    plVar8 = *(long **)(param_1 + 0x938);
    if (plVar8 != (long *)0x0) {
      (**(code **)(plVar8[9] + 0x10))();
    }
    uVar4 = (**(code **)(*plVar8 + 0x50))(plVar8);
    if ((uVar4 != 0) && (uVar5 = (**(code **)(*plVar8 + 0x40))(plVar8,2), (uVar5 & 1) == 0)) {
      sVar2 = *(short *)(param_1 + 0x150 + (ulong)uVar4 * 2);
      if (sVar2 != 0) {
        *(short *)(param_1 + 0x150 + (ulong)uVar4 * 2) = sVar2 + -1;
      }
    }
    (**(code **)(plVar8[9] + 0x18))(plVar8 + 9);
    (**(code **)(*(long *)*param_2 + 0x78))
              ((long *)*param_2,
               *(long *)(param_1 + 0x9c0) + (ulong)param_3 * 0x2fd0 + (ulong)param_4 * 0x198);
    plVar8 = (long *)*param_2;
    if (plVar8 != (long *)0x0) {
      (**(code **)(plVar8[9] + 0x10))();
    }
    lVar1 = param_1 + 0x60;
    uVar5 = (**(code **)(*plVar8 + 0xa0))(plVar8);
    param_4 = param_4 + param_3 * 0x1e;
    uVar6 = (ulong)(param_4 >> 6);
    uVar7 = 1L << ((ulong)param_4 & 0x3f);
    if ((uVar5 & 1) == 0) {
      uVar7 = *(ulong *)(lVar1 + uVar6 * 8) | uVar7;
    }
    else {
      uVar7 = *(ulong *)(lVar1 + uVar6 * 8) & (uVar7 ^ 0xffffffffffffffff);
    }
    *(ulong *)(lVar1 + uVar6 * 8) = uVar7;
    (**(code **)(plVar8[9] + 0x18))(plVar8 + 9);
    plVar8 = (long *)*param_2;
    if (plVar8 != (long *)0x0) {
      (**(code **)(plVar8[9] + 0x10))();
    }
    uVar4 = (**(code **)(*plVar8 + 0x50))(plVar8);
    if ((uVar4 != 0) && (uVar5 = (**(code **)(*plVar8 + 0x40))(plVar8,2), (uVar5 & 1) == 0)) {
      uVar3 = *(ushort *)(param_1 + 0x150 + (ulong)uVar4 * 2);
      if (uVar3 < 0x3c0) {
        *(ushort *)(param_1 + 0x150 + (ulong)uVar4 * 2) = uVar3 + 1;
      }
    }
    (**(code **)(plVar8[9] + 0x18))(plVar8 + 9);
    if (*(code **)(param_1 + 0x940) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002e8d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x940))(param_1 + 0x960);
      return;
    }
  }
  return;
}


