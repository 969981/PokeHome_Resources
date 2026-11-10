/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00413c20; name: FUN_.text__00413c20
 */


void FUN__text__00413c20(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    if (*(char *)(param_1 + 0x18) != '\0') {
      FUN__text__00414580(&DAT_00ae9fb8);
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}


