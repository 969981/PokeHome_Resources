/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ae440; name: FUN_.text__004ae440
 */


undefined8 FUN__text__004ae440(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_1[5] != 0) {
    FUN__text__00400fc0(0);
    param_1[5] = 0;
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  return 1;
}


