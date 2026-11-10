/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030e1a4; name: FUN_.text__0030e1a4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__0030e1a4(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *extraout_x8;
  ulong uVar4;
  undefined1 auVar5 [16];
  long local_48;
  undefined8 local_28;
  
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar4 + 0x18 + *(long *)(uVar4 + 0x98) * 8) = param_2;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  plVar1 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x58,8);
  if (plVar1 != (long *)0x0) {
    local_28 = *param_3;
    plVar1[7] = 0;
    lVar3 = _DAT_0089f690;
    *(undefined4 *)(plVar1 + 8) = 0;
    plVar1[2] = 0;
    plVar1[3] = 0;
    plVar1[4] = 0;
    plVar1[5] = 0;
    *(undefined4 *)(plVar1 + 6) = 0;
    *plVar1 = lVar3 + 0x10;
    if (uVar4 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      if (*(long *)(uVar4 + 0x98) != 0) {
        lVar3 = *(long *)(uVar4 + 0x18 + *(long *)(uVar4 + 0x98) * 8 + -8);
      }
    }
    *_DAT_008a2ba0 = 1;
    *plVar1 = 0x87cc40;
    plVar1[1] = lVar3;
    plVar1[9] = 0x87cc70;
    plVar1[10] = 0;
    FUN__text__0030e2f0(&local_48,local_28,&local_28);
    if (plVar1[10] != 0) {
      (**(code **)(*(long *)(plVar1[10] + 0x50) + 0x18))();
    }
    plVar1[1] = (long)param_2;
    plVar1[2] = (long)plVar1;
    plVar1[10] = local_48;
    plVar1[3] = 0x58;
    plVar1[4] = 8;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    return plVar1;
  }
  auVar5 = (**(code **)(*param_2 + 0xb8))(param_2);
  plVar1 = auVar5._0_8_;
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = plVar1;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  lVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,0x1b8,8);
  if (lVar3 == 0) {
    (**(code **)(*plVar1 + 0xb8))(plVar1);
    plVar2 = (long *)FUN__text__0030e61c(0,*auVar5._8_8_);
    _DAT_00000018 = 0;
    _DAT_00000020 = 0x1b8;
    _DAT_00000028 = 8;
    _DAT_00000010 = plVar1;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    *extraout_x8 = 0;
    return plVar2;
  }
  FUN__text__0030e61c(lVar3,*auVar5._8_8_);
  *(long **)(lVar3 + 0x10) = plVar1;
  *(long *)(lVar3 + 0x18) = lVar3;
  *(undefined8 *)(lVar3 + 0x20) = 0x1b8;
  *(undefined8 *)(lVar3 + 0x28) = 8;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  plVar1 = (long *)(**(code **)(*(long *)(lVar3 + 0x50) + 0x10))();
  *extraout_x8 = lVar3;
  return plVar1;
}


