/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014cd04; name: FUN_.text__0014cd04
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0014cd04(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *extraout_x8;
  long *plVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = tpidr_el0;
  uVar5 = uVar5 & 0xffffffffffffe000;
  if (*(long *)(uVar5 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar5 + 0x18 + *(long *)(uVar5 + 0x98) * 8) = param_2;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
  plVar1 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x330,0x10);
  if (plVar1 != (long *)0x0) {
    memset(plVar1,0,0x330);
    *(undefined4 *)(plVar1 + 6) = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[5] = 0;
    *plVar1 = 0x8677a8;
    lVar2 = _DAT_008a0178;
    if (uVar5 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      if (*(long *)(uVar5 + 0x98) != 0) {
        lVar3 = *(long *)(uVar5 + 0x18 + *(long *)(uVar5 + 0x98) * 8 + -8);
      }
    }
    *(undefined4 *)(plVar1 + 10) = 0;
    *plVar1 = lVar2 + 0x10;
    plVar1[1] = lVar3;
    plVar4 = plVar1 + 9;
    *plVar4 = lVar2 + 0x48;
    FUN__text__0014a430(plVar1 + 0xc);
    plVar1[100] = 0;
    plVar1[1] = (long)param_2;
    plVar1[2] = (long)plVar1;
    *param_1 = plVar1;
    plVar1[3] = 0x330;
    plVar1[4] = 0x10;
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
                    /* WARNING: Could not recover jumptable at 0x0014ce10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
  }
  auVar6 = (**(code **)(*param_2 + 0xb8))(param_2);
  plVar1 = auVar6._0_8_;
  uVar5 = tpidr_el0;
  uVar5 = uVar5 & 0xffffffffffffe000;
  if (*(long *)(uVar5 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = plVar1;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
  lVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,0x180,0x10);
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0xb8))(plVar1);
    FUN__text__005bceac(0,*auVar6._8_8_);
    _DAT_00000010 = 0;
    _DAT_00000018 = 0x180;
    _DAT_00000020 = 0x10;
    _DAT_00000008 = plVar1;
    *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
    *extraout_x8 = 0;
    return;
  }
  FUN__text__005bceac(lVar2,*auVar6._8_8_);
  *(long **)(lVar2 + 8) = plVar1;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x180;
  *(undefined8 *)(lVar2 + 0x20) = 0x10;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  *extraout_x8 = lVar2;
  return;
}


