/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d84b0; name: FUN_.text__005d84b0
 */


undefined4 FUN__text__005d84b0(long param_1)

{
  if (*(long *)(param_1 + 0x108) == 0) {
    return 0;
  }
  return *(undefined4 *)
          (*(long *)(*(long *)(param_1 + 0x100) + *(long *)(param_1 + 0x108) * 8 + -8) + 0x68);
}


