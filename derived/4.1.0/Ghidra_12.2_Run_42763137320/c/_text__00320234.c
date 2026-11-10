/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00320234; name: FUN_.text__00320234
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__00320234(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  uVar9 = tpidr_el0;
  uVar9 = uVar9 & 0xffffffffffffe000;
  if (*(long *)(uVar9 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = param_1;
  *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
  plVar6 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x58,8);
  if (plVar6 != (long *)0x0) {
    *_DAT_008a2c28 = 1;
    lVar7 = _DAT_008a2c30;
    plVar6[6] = 0;
    plVar6[7] = 0;
    plVar6[10] = 0;
    plVar6[8] = 0;
    plVar6[9] = lVar7 + 0x40;
    *plVar6 = lVar7 + 0x10;
    plVar6[1] = (long)param_1;
    plVar6[2] = (long)plVar6;
    plVar6[3] = 0x58;
    plVar6[4] = 8;
    plVar6[5] = 0;
    plVar5 = _DAT_008a1470;
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
    puVar8 = (undefined8 *)*plVar5;
    *plVar5 = (long)plVar6;
    if (puVar8 != (undefined8 *)0x0) {
      plVar6 = (long *)puVar8[1];
      uVar3 = puVar8[2];
      uVar4 = puVar8[3];
      uVar10 = puVar8[4];
      (**(code **)*puVar8)(puVar8);
      (**(code **)(*plVar6 + 0x18))(plVar6,uVar3,uVar4,uVar10);
      plVar6 = (long *)*plVar5;
    }
    plVar1 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 9;
    }
    FUN__text__005e914c(plVar1);
    return *plVar5;
  }
  plVar6 = (long *)(**(code **)(*param_1 + 0xb8))(param_1);
  uVar9 = tpidr_el0;
  uVar9 = uVar9 & 0xffffffffffffe000;
  if (*(long *)(uVar9 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = plVar6;
  *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
  lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,0x70,8);
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0xb8))(plVar6);
    FUN__text__0030a5c0(0);
    _DAT_00000010 = 0;
    _DAT_00000018 = 0x70;
    _DAT_00000020 = 8;
    _DAT_00000008 = plVar6;
  }
  else {
    FUN__text__0030a5c0(lVar7);
    *(long **)(lVar7 + 8) = plVar6;
    *(long *)(lVar7 + 0x10) = lVar7;
    *(undefined8 *)(lVar7 + 0x18) = 0x70;
    *(undefined8 *)(lVar7 + 0x20) = 8;
  }
  plVar6 = _DAT_008a2a00;
  puVar8 = (undefined8 *)*_DAT_008a2a00;
  *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
  *plVar6 = lVar7;
  if (puVar8 != (undefined8 *)0x0) {
    plVar5 = (long *)puVar8[1];
    uVar10 = puVar8[4];
    uVar3 = puVar8[2];
    uVar4 = puVar8[3];
    (**(code **)*puVar8)();
    (**(code **)(*plVar5 + 0x18))(plVar5,uVar3,uVar4,uVar10);
    lVar7 = *plVar6;
  }
  lVar2 = 0;
  if (lVar7 != 0) {
    lVar2 = lVar7 + 0x48;
  }
  FUN__text__005e914c(lVar2);
  return *plVar6;
}


