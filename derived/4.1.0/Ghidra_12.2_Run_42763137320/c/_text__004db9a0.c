/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004db9a0; name: FUN_.text__004db9a0
 */


void FUN__text__004db9a0(long param_1)

{
  *(undefined8 *)(param_1 + 0x124) = 0;
  if (*(long *)(param_1 + 0x110) != 0) {
    FUN__text__00400fc0(5);
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x11c) = 0x2b;
    *(undefined8 *)(param_1 + 0x124) = 0;
    *(undefined8 *)(param_1 + 300) = 0x3f800000ffffffff;
    *(undefined8 *)(param_1 + 0x134) = 0x1ffffffff;
  }
  return;
}


