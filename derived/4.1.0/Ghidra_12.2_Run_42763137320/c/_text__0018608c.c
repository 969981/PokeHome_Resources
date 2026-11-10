/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0018608c; name: FUN_.text__0018608c
 */


void FUN__text__0018608c(long param_1,uint param_2)

{
  FUN__text__0012cbe0(param_1 + 0x110,0x71e3b1);
  if (param_2 < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x001860c4 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__001860d0 + (ulong)*(byte *)((ulong)param_2 + 0x7257dd) * 4))();
    return;
  }
  return;
}


