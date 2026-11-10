/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0021a470; name: FUN_.text__0021a470
 */


void FUN__text__0021a470(long param_1)

{
  FUN__text__0064dd40();
  FUN__text__0064db88(param_1,6);
  if (*(code **)(param_1 + 0x2a0) != (code *)0x0) {
    (**(code **)(param_1 + 0x2a0))(param_1 + 0x2c0);
  }
  if (*(code **)(param_1 + 0x1a0) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0021a4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x1a0))(param_1 + 0x1c0);
  return;
}


