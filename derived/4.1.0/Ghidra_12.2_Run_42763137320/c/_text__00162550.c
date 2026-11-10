/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00162550; name: FUN_.text__00162550
 */


void FUN__text__00162550(long param_1,short param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    return;
  }
  FUN__text__00162d30(*(undefined8 *)(param_1 + 0x58));
  FUN__text__006901b0(*(undefined8 *)(param_1 + 0x70),param_2,*(undefined4 *)(param_1 + 0x78),
                      *(undefined2 *)(param_1 + 0x92),param_3,*(undefined1 *)(param_1 + 0x90));
  return;
}


