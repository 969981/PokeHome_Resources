/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b8644; name: FUN_.text__004b8644
 */


void FUN__text__004b8644(EventType *param_1)

{
  if (param_1[0x13] == (EventType)0x1) {
    nn::os::SignalEvent(param_1);
    return;
  }
  return;
}


