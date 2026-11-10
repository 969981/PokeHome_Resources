/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005dc014; name: FUN_.text__005dc014
 */


void FUN__text__005dc014(long param_1)

{
  if (*(char *)(param_1 + 0xa9) != '\0') {
    nn::fs::FlushFile(*(undefined8 *)(param_1 + 0x90));
    nn::fs::CloseFile(*(undefined8 *)(param_1 + 0x90));
    *(undefined1 *)(param_1 + 0xa9) = 0;
  }
  return;
}


