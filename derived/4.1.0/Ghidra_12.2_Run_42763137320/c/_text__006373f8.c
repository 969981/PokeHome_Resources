/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006373f8; name: thunk_FUN_.text__00638b78
 */


undefined1 thunk_FUN__text__00638b78(ushort param_1,int param_2)

{
  if (param_2 - 6U < 0xfffffffb) {
    return 0;
  }
  return *(undefined1 *)((ulong)param_1 + (ulong)param_1 * 4 + 0x75accc + (ulong)(param_2 - 1));
}


