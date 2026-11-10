/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b22d0; name: FUN_.text__003b22d0
 */


undefined4 FUN__text__003b22d0(long param_1)

{
  long lVar1;
  
  lVar1 = FUN__text__003b8e30(param_1 + 0x788);
  if (lVar1 == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(lVar1 + 0x10);
}


