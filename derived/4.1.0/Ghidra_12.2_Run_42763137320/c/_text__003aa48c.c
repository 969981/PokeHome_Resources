/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003aa48c; name: FUN_.text__003aa48c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__003aa48c(undefined8 param_1,long *param_2,long *param_3,long *param_4,
                          long *param_5,undefined4 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar7 = tpidr_el0;
  uVar7 = uVar7 & 0xffffffffffffe000;
  if (*(long *)(uVar7 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xc0,0x10);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  lVar6 = *param_3;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  uVar1 = *param_6;
  uVar2 = *param_7;
  FUN__text__003c2ea4(plVar4);
  plVar4[0x10] = lVar6;
  *plVar4 = 0x882100;
  plVar4[9] = 0x882158;
  plVar4[10] = 0x882198;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  plVar4[0x13] = param_4[1];
  plVar4[0x12] = *param_4;
  lVar3 = _DAT_008a3540;
  plVar4[0x15] = param_5[1];
  lVar5 = *param_5;
  *(undefined4 *)(plVar4 + 0x16) = uVar2;
  *(undefined4 *)((long)plVar4 + 0xb4) = uVar1;
  *(undefined4 *)(plVar4 + 0x17) = 0;
  *plVar4 = lVar3 + 0x10;
  plVar4[0x14] = lVar5;
  plVar4[9] = lVar3 + 0x68;
  plVar4[10] = lVar3 + 0xa8;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  plVar4[1] = (long)param_2;
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0xc0;
  plVar4[4] = 0x10;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
  return plVar4;
}


