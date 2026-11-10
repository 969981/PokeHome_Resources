/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001436d0; name: FUN_.text__001436d0
 */


void FUN__text__001436d0(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
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
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x370,0x10);
  if (puVar2 == (undefined8 *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
    FUN__text__005e8634(0,0x100000);
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x1437d4);
    (*pcVar1)();
  }
  FUN__text__005e8634(puVar2,0x100000);
  *puVar2 = 0x86a1d0;
  puVar2[0xb] = 0x86a278;
  plVar3 = puVar2 + 9;
  *plVar3 = 0x86a248;
  FUN__text__005e896c(puVar2,0x70acb1,0xffffffff,0x10);
  puVar2[1] = param_2;
  puVar2[2] = puVar2;
  *param_1 = puVar2;
  puVar2[3] = 0x370;
  puVar2[4] = 0x10;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
                    /* WARNING: Could not recover jumptable at 0x001437b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x10))(plVar3);
  return;
}


