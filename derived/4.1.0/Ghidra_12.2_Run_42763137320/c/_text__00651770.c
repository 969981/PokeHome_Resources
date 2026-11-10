/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00651770; name: FUN_.text__00651770
 */


void FUN__text__00651770(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    do {
      FUN__text__006783e4(*(undefined8 *)(param_1 + 0x20));
      FUN__text__006783e4(*(undefined8 *)(param_1 + 0x18));
      lVar1 = *(long *)(param_1 + 0x28);
      FUN__text__006783e4(param_1);
      param_1 = lVar1;
    } while (lVar1 != 0);
  }
  return;
}


