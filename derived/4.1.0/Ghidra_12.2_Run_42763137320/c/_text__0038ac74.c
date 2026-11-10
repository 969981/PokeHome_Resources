/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0038ac74; name: FUN_.text__0038ac74
 */


void FUN__text__0038ac74(void)

{
  if (*(code **)(DAT_00ae8260 + 0xb0) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0038ac8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_00ae8260 + 0xb0))(DAT_00ae8260 + 0xd0);
  return;
}


