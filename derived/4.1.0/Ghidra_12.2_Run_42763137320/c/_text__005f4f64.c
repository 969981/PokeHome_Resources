/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f4f64; name: FUN_.text__005f4f64
 */


void FUN__text__005f4f64(long param_1,int param_2,undefined1 param_3)

{
  if (param_2 < 4) {
    *(int *)(param_1 + 0x90) = param_2;
    *(undefined1 *)(param_1 + 0xa2) = param_3;
    *(undefined1 *)(param_1 + 0xa3) = 0;
  }
  return;
}


