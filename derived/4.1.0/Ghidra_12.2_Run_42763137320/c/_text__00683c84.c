/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00683c84; name: FUN_.text__00683c84
 */


void FUN__text__00683c84(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    *param_1 = *(long *)(lVar1 + 0x88);
    *(undefined8 *)(lVar1 + 0x88) = 0;
    if (*param_1 == 0) {
      param_1[1] = 0;
    }
    param_1[2] = param_1[2] + -1;
  }
  return;
}


