/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0031d370; name: FUN_.text__0031d370
 */


void FUN__text__0031d370(byte *param_1)

{
  if (*param_1 - 6 < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0031d39c */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0031d3ac + (ulong)*(byte *)((ulong)(*param_1 - 6) + 0x734863) * 4))();
    return;
  }
  return;
}


