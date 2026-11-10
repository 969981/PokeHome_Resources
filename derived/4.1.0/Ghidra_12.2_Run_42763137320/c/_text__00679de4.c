/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00679de4; name: FUN_.text__00679de4
 */


undefined8 FUN__text__00679de4(byte *param_1,long param_2)

{
  while( true ) {
    if (param_2 == 0) {
      return 1;
    }
    if (*(int *)((ulong)*param_1 * 4 + 0x761068) == 0) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  }
  return 0;
}


