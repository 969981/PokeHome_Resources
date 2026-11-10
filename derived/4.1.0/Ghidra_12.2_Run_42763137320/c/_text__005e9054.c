/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e9054; name: FUN_.text__005e9054
 */


void FUN__text__005e9054(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN__text__005e8ea0();
  if (*(long *)(lVar1 + 0xa8) == 0) {
    *(undefined8 *)(lVar1 + 0xa8) = param_1;
    return;
  }
  return;
}


