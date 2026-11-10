/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e7d2c; name: FUN_.text__003e7d2c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__003e7d2c(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar6 = tpidr_el0;
  uVar6 = uVar6 & 0xffffffffffffe000;
  if (*(long *)(uVar6 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar6 + 0x18 + *(long *)(uVar6 + 0x98) * 8) = param_2;
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
  plVar1 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x68,8);
  if (plVar1 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  lVar2 = *param_3;
  lVar4 = *param_4;
  *param_4 = 0;
  plVar1[7] = 0;
  *(undefined4 *)(plVar1 + 8) = 0;
  lVar3 = _DAT_0089f690 + 0x10;
  *(undefined4 *)(plVar1 + 6) = 0;
  plVar1[2] = 0;
  plVar1[3] = 0;
  *plVar1 = lVar3;
  plVar1[4] = 0;
  plVar1[5] = 0;
  if (uVar6 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    if (*(long *)(uVar6 + 0x98) != 0) {
      lVar3 = *(long *)(uVar6 + 0x18 + *(long *)(uVar6 + 0x98) * 8 + -8);
    }
  }
  *(undefined4 *)(plVar1 + 10) = 0;
  plVar1[0xb] = lVar2;
  plVar1[0xc] = lVar4;
  *plVar1 = 0x885348;
  plVar1[1] = lVar3;
  plVar1[9] = 0x885380;
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  plVar1[1] = (long)param_2;
  plVar1[2] = (long)plVar1;
  plVar1[3] = 0x68;
  plVar1[4] = 8;
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
  return plVar1;
}


