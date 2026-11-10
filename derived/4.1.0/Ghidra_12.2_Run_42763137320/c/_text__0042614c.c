/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042614c; name: FUN_.text__0042614c
 */


void FUN__text__0042614c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN__text__00400fc0(5);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN__text__00400fc0(5);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


