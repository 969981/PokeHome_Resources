/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dc378; name: FUN_.text__004dc378
 */


void FUN__text__004dc378(long param_1)

{
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN__text__00400fc0(5);
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  FUN__text__004dcf24(param_1);
  return;
}


