/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001451ec; name: FUN_.text__001451ec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__001451ec(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  uVar9 = tpidr_el0;
  uVar9 = uVar9 & 0xffffffffffffe000;
  if (*(long *)(uVar9 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = param_1;
  *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
  lVar5 = (**(code **)(*param_1 + 0x10))(param_1,0x50,8);
  if (lVar5 == 0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
  }
  FUN__text__005f154c(lVar5,*param_2,param_3);
  *(long **)(lVar5 + 8) = param_1;
  *(long *)(lVar5 + 0x10) = lVar5;
  *(undefined8 *)(lVar5 + 0x18) = 0x50;
  *(undefined8 *)(lVar5 + 0x20) = 8;
  plVar4 = _DAT_008a02b8;
  lVar7 = *(long *)(uVar9 + 0x98);
  puVar6 = (undefined8 *)*_DAT_008a02b8;
  *_DAT_008a02b8 = lVar5;
  *(long *)(uVar9 + 0x98) = lVar7 + -1;
  if (puVar6 != (undefined8 *)0x0) {
    plVar2 = (long *)puVar6[1];
    uVar8 = puVar6[4];
    uVar1 = puVar6[2];
    uVar3 = puVar6[3];
    (**(code **)*puVar6)();
    (**(code **)(*plVar2 + 0x18))(plVar2,uVar1,uVar3,uVar8);
    lVar5 = *plVar4;
  }
  lVar7 = 0;
  if (lVar5 != 0) {
    lVar7 = lVar5 + 0x48;
  }
  FUN__text__005e914c(lVar7);
  return *plVar4;
}


