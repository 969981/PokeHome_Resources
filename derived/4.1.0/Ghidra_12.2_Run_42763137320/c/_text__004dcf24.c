/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dcf24; name: FUN_.text__004dcf24
 */


void FUN__text__004dcf24(long param_1)

{
  if (*(long **)(param_1 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x10))();
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  FUN__text__004dd8a0(param_1);
  return;
}


