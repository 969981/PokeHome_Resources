/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004602fc; name: FUN_.text__004602fc
 */


void FUN__text__004602fc(long param_1)

{
  long *plVar1;
  
  FUN__text__0046990c(param_1,1);
  plVar1 = *(long **)(param_1 + 0x80);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00460330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x130))(plVar1,1);
  return;
}


