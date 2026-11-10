/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e35c0; name: FUN_.text__004e35c0
 */


void FUN__text__004e35c0(undefined8 *param_1)

{
  *param_1 = 0x88ef98;
  if (*(char *)(param_1 + 0x7d) == '\0') {
    return;
  }
  nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x78));
  return;
}


