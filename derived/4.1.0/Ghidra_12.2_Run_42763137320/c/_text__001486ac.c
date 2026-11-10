/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001486ac; name: FUN_.text__001486ac
 */


void FUN__text__001486ac(long param_1)

{
  long *plVar1;
  
  FUN__text__005c5cac();
  plVar1 = *(long **)(*(long *)(param_1 + 0x138) + 0x208);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001486e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x70))(plVar1,0,0);
  return;
}


