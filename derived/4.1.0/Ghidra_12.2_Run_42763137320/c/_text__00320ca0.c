/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00320ca0; name: FUN_.text__00320ca0
 */


void FUN__text__00320ca0(void)

{
  if (DAT_008ef050 - 2U < 5) {
                    /* WARNING: Could not emulate address calculation at 0x00320cd4 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__00320ce4 + (ulong)*(byte *)((ulong)(DAT_008ef050 - 2U) + 0x734be7) * 4))
              ();
    return;
  }
  return;
}


