/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00150170; name: FUN_.text__00150170
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__00150170(undefined8 param_1,long *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar6 = tpidr_el0;
  uVar6 = uVar6 & 0xffffffffffffe000;
  if (*(long *)(uVar6 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar6 + 0x18 + *(long *)(uVar6 + 0x98) * 8) = param_2;
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x140,8);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  uVar1 = *param_3;
  uVar5 = *param_4;
  plVar3[7] = 0;
  *(undefined4 *)(plVar3 + 8) = 0;
  lVar4 = _DAT_0089f690;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  *(undefined4 *)(plVar3 + 6) = 0;
  *plVar3 = lVar4 + 0x10;
  if (uVar6 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(uVar6 + 0x98) != 0) {
      lVar4 = *(long *)(uVar6 + 0x18 + *(long *)(uVar6 + 0x98) * 8 + -8);
    }
  }
  *(undefined4 *)(plVar3 + 10) = 0;
  lVar2 = _DAT_008a0240;
  *plVar3 = _DAT_008a0240 + 0x10;
  plVar3[1] = lVar4;
  plVar3[9] = lVar2 + 0x50;
  FUN__text__005b4f04(plVar3 + 0xb);
  FUN__text__005b4f04(plVar3 + 0x19);
  *(undefined4 *)(plVar3 + 0x27) = 0xffffffff;
  FUN__text__005b4f8c(plVar3 + 0xb,8,2,uVar1,uVar5);
  FUN__text__005b4f8c(plVar3 + 0x19,8,2,uVar1,uVar5);
  lVar4 = _DAT_008a0248;
  plVar3[4] = 8;
  plVar3[9] = lVar4 + 0x50;
  *plVar3 = lVar4 + 0x10;
  plVar3[1] = (long)param_2;
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0x140;
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
  return plVar3;
}


