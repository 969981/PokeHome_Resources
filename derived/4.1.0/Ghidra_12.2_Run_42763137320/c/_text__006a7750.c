/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a7750; name: FUN_.text__006a7750
 */


void FUN__text__006a7750(void)

{
  long in_x3;
  
  if (*(uint *)(in_x3 + 0x88) < 9) {
                    /* WARNING: Could not emulate address calculation at 0x006a7778 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__006a7790 +
              (ulong)*(byte *)((ulong)*(uint *)(in_x3 + 0x88) + 0x7660cb) * 4))();
    return;
  }
  return;
}


