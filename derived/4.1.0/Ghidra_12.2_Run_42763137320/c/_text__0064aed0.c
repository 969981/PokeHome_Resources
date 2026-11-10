/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064aed0; name: FUN_.text__0064aed0
 */


undefined4 FUN__text__0064aed0(byte param_1)

{
  if ((byte)(param_1 + 0x1a) < 0x1b) {
    return 0;
  }
  return *(undefined4 *)((ulong)param_1 * 4 + 0x75fc10);
}


