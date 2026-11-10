/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064af00; name: FUN_.text__0064af00
 */


uint FUN__text__0064af00(int param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(int *)(lVar1 * 4 + 0x75fc10) == param_1) {
LAB__text__0064af44:
      return ~(uint)lVar1 >> 0x1f;
    }
    if (*(int *)(lVar1 * 4 + 0x75fc14) == param_1) {
      lVar1 = lVar1 + 1;
      goto LAB__text__0064af44;
    }
    lVar1 = lVar1 + 2;
    if (lVar1 == 0xe6) {
      return 0;
    }
  } while( true );
}


