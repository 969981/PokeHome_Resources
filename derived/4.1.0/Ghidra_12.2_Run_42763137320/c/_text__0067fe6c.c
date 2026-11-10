/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067fe6c; name: FUN_.text__0067fe6c
 */


void FUN__text__0067fe6c(undefined8 param_1,int param_2)

{
  if (7 < param_2 - 1U) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* WARNING: Could not emulate address calculation at 0x0067fe84 */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK__text__0067fe90 + (ulong)*(byte *)((ulong)(param_2 - 1U) + 0x76192a) * 4))();
  return;
}


