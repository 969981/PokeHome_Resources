/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00692580; name: FUN_.text__00692580
 */


void FUN__text__00692580(long param_1)

{
  do {
    *(byte *)(param_1 + 0x38) =
         *(byte *)(param_1 + 0x38) & 0x60 | ((*(byte *)(param_1 + 0x38) & 5) != 0) << 4;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN__text__00692580();
    }
    param_1 = *(long *)(param_1 + 0x28);
  } while (param_1 != 0);
  return;
}


