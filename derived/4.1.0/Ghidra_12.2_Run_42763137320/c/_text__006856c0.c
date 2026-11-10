/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006856c0; name: FUN_.text__006856c0
 */


long FUN__text__006856c0(byte *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    lVar1 = -1;
  }
  else {
    lVar1 = 0;
    do {
      if (*param_1 - 0x3a < 0xfffffff6 || 0xccccccccccccccc < lVar1) {
        return -1;
      }
      uVar2 = (ulong)(*param_1 - 0x30);
      if ((long)(uVar2 ^ 0x7fffffffffffffff) < lVar1 * 10) {
        return -1;
      }
      lVar1 = uVar2 + lVar1 * 10;
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return lVar1;
}


