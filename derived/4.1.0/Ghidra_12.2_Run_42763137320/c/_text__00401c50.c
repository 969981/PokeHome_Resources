/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00401c50; name: FUN_.text__00401c50
 */


void FUN__text__00401c50(void)

{
  if (DAT_00ae8960 == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00401c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_00ae8960)();
  return;
}


