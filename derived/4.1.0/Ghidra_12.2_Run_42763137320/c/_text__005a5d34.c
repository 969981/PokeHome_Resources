/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a5d34; name: FUN_.text__005a5d34
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a5d34(undefined8 *param_1,long *param_2,undefined8 *param_3,long *param_4,
                        undefined4 *param_5,long param_6)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  
  uVar5 = tpidr_el0;
  uVar5 = uVar5 & 0xffffffffffffe000;
  if (*(long *)(uVar5 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x280,8);
  if (plVar2 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  uVar1 = *param_5;
  lVar3 = 0;
  if (*param_4 != 0) {
    lVar3 = *param_4 + 0x48;
  }
  FUN__text__005e2600(plVar2,*param_3,lVar3,1);
  lVar3 = _DAT_008a55e0;
  *(undefined4 *)(plVar2 + 0x4e) = uVar1;
  plVar2[0x4f] = param_6;
  plVar4 = plVar2 + 9;
  *plVar4 = lVar3 + 0x68;
  plVar2[10] = lVar3 + 0xa8;
  *plVar2 = lVar3 + 0x10;
  plVar2[1] = (long)param_2;
  plVar2[2] = (long)plVar2;
  plVar2[3] = 0x280;
  plVar2[4] = 8;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
  FUN__text__005e706c(plVar2);
  lVar3 = *plVar4;
  *param_1 = plVar2;
                    /* WARNING: Could not recover jumptable at 0x005a5e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(plVar4);
  return;
}


