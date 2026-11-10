/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00303bec; name: FUN_.text__00303bec
 */


void FUN__text__00303bec(long param_1,uint param_2,uint param_3,undefined1 param_4)

{
  if ((param_3 < 0x1e) && (param_2 < *(uint *)(param_1 + 0x700fdc))) {
    *(undefined1 *)(param_1 + (ulong)param_2 * 0x5fa0 + (ulong)param_3 * 0x330 + 0x387) = param_4;
  }
  return;
}


