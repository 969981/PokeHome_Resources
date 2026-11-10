/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002bb5e4; name: FUN_.text__002bb5e4
 */


void FUN__text__002bb5e4(long param_1,long *param_2,uint param_3,uint param_4)

{
  long *plVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  if ((param_3 < 0x20) && (param_4 < 0x1e)) {
    plVar1 = (long *)(param_1 + 0x54f60);
    lVar8 = *plVar1;
    if (lVar8 == 0) {
      FUN__text__005fc278(0,param_1 + (ulong)param_3 * 0x2a30 + (ulong)param_4 * 0x168 + 0x60);
      lVar8 = *plVar1;
    }
    else {
      plVar10 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar10 + 0x10))(plVar10);
      FUN__text__005fc278(lVar8,param_1 + (ulong)param_3 * 0x2a30 + (ulong)param_4 * 0x168 + 0x60);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      lVar8 = *plVar1;
    }
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    uVar4 = FUN__text__00631008(lVar8);
    if (uVar4 != 0) {
      uVar5 = FUN__text__00633b34(lVar8,2);
      if ((uVar5 & 1) == 0) {
        sVar2 = *(short *)(param_1 + 0x54758 + (ulong)uVar4 * 2);
        if (sVar2 != 0) {
          *(short *)(param_1 + 0x54758 + (ulong)uVar4 * 2) = sVar2 + -1;
        }
      }
    }
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    FUN__text__005fc210(param_1 + (ulong)param_3 * 0x2a30 + (ulong)param_4 * 0x168 + 0x60,*param_2);
    lVar9 = *param_2;
    lVar8 = param_1 + 0x54668;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    uVar5 = FUN__text__00631174(lVar9);
    param_4 = param_4 + param_3 * 0x1e;
    uVar6 = (ulong)(param_4 >> 6);
    uVar7 = 1L << ((ulong)param_4 & 0x3f);
    if ((uVar5 & 1) == 0) {
      uVar7 = *(ulong *)(lVar8 + uVar6 * 8) | uVar7;
    }
    else {
      uVar7 = *(ulong *)(lVar8 + uVar6 * 8) & (uVar7 ^ 0xffffffffffffffff);
    }
    *(ulong *)(lVar8 + uVar6 * 8) = uVar7;
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    lVar8 = *param_2;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    uVar4 = FUN__text__00631008(lVar8);
    if (uVar4 != 0) {
      uVar5 = FUN__text__00633b34(lVar8,2);
      if ((uVar5 & 1) == 0) {
        uVar3 = *(ushort *)(param_1 + 0x54758 + (ulong)uVar4 * 2);
        if (uVar3 < 0x3c0) {
          *(ushort *)(param_1 + 0x54758 + (ulong)uVar4 * 2) = uVar3 + 1;
        }
      }
    }
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    if (*(code **)(param_1 + 0x54f70) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002bb7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x54f70))(param_1 + 0x54f90);
      return;
    }
  }
  return;
}


