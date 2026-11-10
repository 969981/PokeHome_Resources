/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f31f0; name: FUN_.text__004f31f0
 */


void FUN__text__004f31f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  FUN__text__004f3250(param_1,param_2,0x36,param_3);
  plVar1 = *(long **)(param_1 + 0x78);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004f323c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_2,param_3);
  return;
}


