/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f851c; name: FUN_.text__005f851c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__005f851c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  uVar8 = tpidr_el0;
  uVar8 = uVar8 & 0xffffffffffffe000;
  if (*(long *)(uVar8 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar8 + *(long *)(uVar8 + 0x98) * 8 + 0x18) = param_1;
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
  lVar6 = (**(code **)(*param_1 + 0x10))(param_1,0x78,8);
  if (lVar6 == 0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
    FUN__text__005df424(0);
    _DAT_00000010 = 0;
    _DAT_00000018 = 0x78;
    _DAT_00000020 = 8;
    _DAT_00000008 = param_1;
  }
  else {
    FUN__text__005df424(lVar6);
    *(long **)(lVar6 + 8) = param_1;
    *(long *)(lVar6 + 0x10) = lVar6;
    *(undefined8 *)(lVar6 + 0x18) = 0x78;
    *(undefined8 *)(lVar6 + 0x20) = 8;
  }
  plVar5 = _DAT_0089ff88;
  puVar7 = (undefined8 *)*_DAT_0089ff88;
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
  *plVar5 = lVar6;
  if (puVar7 != (undefined8 *)0x0) {
    plVar3 = (long *)puVar7[1];
    uVar9 = puVar7[4];
    uVar2 = puVar7[2];
    uVar4 = puVar7[3];
    (**(code **)*puVar7)();
    (**(code **)(*plVar3 + 0x18))(plVar3,uVar2,uVar4,uVar9);
    lVar6 = *plVar5;
  }
  lVar1 = 0;
  if (lVar6 != 0) {
    lVar1 = lVar6 + 0x48;
  }
  FUN__text__005e914c(lVar1);
  return *plVar5;
}


