/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a23fc; name: FUN_.text__004a23fc
 */


void FUN__text__004a23fc(long param_1)

{
  FUN__text__004a2480();
  FUN__text__004ad920(param_1 + 0xa8);
  FUN__text__004aac20(param_1 + 0x88);
  if (*(long *)(param_1 + 0x90) != 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  FUN__text__004a2660(param_1);
  FUN__text__004ae440(param_1 + 8);
  if (*(long *)(param_1 + 0xe0) != 0) {
    *(undefined4 *)(param_1 + 0xe8) = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  return;
}


