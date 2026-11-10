/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00240ddc; name: FUN_.text__00240ddc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00240ddc(undefined8 *param_1,long *param_2,int *param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  plVar3 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x3f0,0x10);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
    FUN__text__005e8634(0,(long)*param_3);
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x240ed8);
    (*pcVar1)();
  }
  FUN__text__005e8634(plVar3,(long)*param_3);
  lVar2 = _DAT_0089f840;
  plVar3[0x6e] = 0;
  plVar3[0x6f] = 0;
  plVar3[0x70] = 0;
  plVar3[0x71] = 0;
  *param_1 = plVar3;
  plVar3[9] = lVar2 + 0x88;
  plVar3[0xb] = lVar2 + 0xb8;
  *plVar3 = lVar2 + 0x10;
  plVar3[1] = (long)param_2;
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0x3f0;
  plVar3[4] = 0x10;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
                    /* WARNING: Could not recover jumptable at 0x00240eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(plVar3[9] + 0x10))();
  return;
}


