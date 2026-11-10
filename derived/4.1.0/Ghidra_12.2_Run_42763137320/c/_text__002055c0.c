/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002055c0; name: FUN_.text__002055c0
 */


void FUN__text__002055c0(void)

{
  if (DAT_008e20a0 != 0) {
    (**(code **)(*(long *)(DAT_008e20a0 + 0x48) + 0x18))();
    DAT_008e20a0 = 0;
  }
  return;
}


