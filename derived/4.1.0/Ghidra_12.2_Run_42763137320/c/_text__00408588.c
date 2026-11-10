/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00408588; name: FUN_.text__00408588
 */


void FUN__text__00408588(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x4c0);
  if (plVar1 == (long *)0x0 || *(char *)(param_1 + 0x559) == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004085b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x68))(plVar1,param_1 + 0x90);
  return;
}


