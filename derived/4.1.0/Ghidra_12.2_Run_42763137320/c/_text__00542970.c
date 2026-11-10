/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00542970; name: FUN_.text__00542970
 */


void FUN__text__00542970(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN__text__00400fc0(10);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN__text__0050cda0(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}


