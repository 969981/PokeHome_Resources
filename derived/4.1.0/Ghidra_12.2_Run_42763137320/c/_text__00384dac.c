/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00384dac; name: FUN_.text__00384dac
 */


void FUN__text__00384dac(long param_1,long *param_2,uint param_3,uint param_4)

{
  long lVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  if ((param_3 < 0x21) && (param_4 < 0x1e)) {
    lVar8 = *(long *)(param_1 + 0x968);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    FUN__text__005fc564(lVar8,*(long *)(param_1 + 0x9f0) + (ulong)param_3 * 0x2850 +
                              (ulong)param_4 * 0x158);
    FUN__text__00633bc0(lVar8);
    plVar9 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    lVar8 = *(long *)(param_1 + 0x968);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    uVar5 = FUN__text__00635dd4(lVar8);
    if (((uVar5 & 1) == 0) && (uVar4 = FUN__text__00631008(lVar8), uVar4 != 0)) {
      uVar5 = FUN__text__00633b34(lVar8,2);
      if ((uVar5 & 1) == 0) {
        sVar2 = *(short *)(param_1 + 0x160 + (ulong)uVar4 * 2);
        if (sVar2 != 0) {
          *(short *)(param_1 + 0x160 + (ulong)uVar4 * 2) = sVar2 + -1;
        }
      }
    }
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    FUN__text__005fc460(*(long *)(param_1 + 0x9f0) + (ulong)param_3 * 0x2850 +
                        (ulong)param_4 * 0x158,*param_2);
    lVar8 = *param_2;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    lVar1 = param_1 + 0x60;
    uVar5 = FUN__text__00631174(lVar8);
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
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    lVar8 = *param_2;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    uVar5 = FUN__text__00635dd4(lVar8);
    if (((uVar5 & 1) == 0) && (uVar4 = FUN__text__00631008(lVar8), uVar4 != 0)) {
      uVar5 = FUN__text__00633b34(lVar8,2);
      if ((uVar5 & 1) == 0) {
        uVar3 = *(ushort *)(param_1 + 0x160 + (ulong)uVar4 * 2);
        if (uVar3 < 0x3de) {
          *(ushort *)(param_1 + 0x160 + (ulong)uVar4 * 2) = uVar3 + 1;
        }
      }
    }
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    if (*(code **)(param_1 + 0x970) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00384fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x970))(param_1 + 0x990);
      return;
    }
  }
  return;
}


