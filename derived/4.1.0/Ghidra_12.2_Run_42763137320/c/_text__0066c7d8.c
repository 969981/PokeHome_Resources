/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066c7d8; name: FUN_.text__0066c7d8
 */


undefined8 FUN__text__0066c7d8(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x1138) == 0) {
    lVar1 = FUN__text__006783d4(*(undefined8 *)(param_1 + 0xc18));
    *(long *)(param_1 + 0x1138) = lVar1;
    if (lVar1 == 0) {
      return 0x1b;
    }
  }
  return 0;
}


