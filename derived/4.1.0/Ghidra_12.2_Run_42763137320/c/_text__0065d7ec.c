/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065d7ec; name: FUN_.text__0065d7ec
 */


void FUN__text__0065d7ec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar1 + 0x658) != 0) {
    FUN__text__006783e4();
    *(undefined8 *)(lVar1 + 0x658) = 0;
  }
  return;
}


