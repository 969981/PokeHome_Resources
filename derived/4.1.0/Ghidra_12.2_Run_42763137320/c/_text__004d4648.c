/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004d4648; name: FUN_.text__004d4648
 */


void FUN__text__004d4648(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if (((*(uint *)(param_1 + 0x160) & 0xf00) != 0x300) && (*(long *)(param_1 + 400) != 0)) {
    plVar1 = *(long **)(*(long *)(param_1 + 400) + 0x88);
    if (plVar1 == (long *)0x0 && *(long *)(param_1 + 8) != 0) {
      FUN__text__004d1070(param_1);
      plVar1 = *(long **)(*(long *)(param_1 + 400) + 0x88);
    }
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004d46b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
      return;
    }
  }
  return;
}


