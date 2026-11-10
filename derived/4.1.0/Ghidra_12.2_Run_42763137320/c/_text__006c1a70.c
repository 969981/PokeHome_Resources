/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c1a70; name: FUN_.text__006c1a70
 */


char * FUN__text__006c1a70(char *param_1)

{
  size_t sVar1;
  ulong uVar2;
  long lVar3;
  
  sVar1 = strlen(param_1);
  if ((int)sVar1 < 1) {
    return param_1;
  }
  uVar2 = sVar1 & 0xffffffff;
  lVar3 = sVar1 << 0x20;
  do {
    if (param_1[lVar3 + -0x100000000 >> 0x20] == '%') {
      return param_1 + (lVar3 >> 0x20);
    }
    uVar2 = uVar2 - 1;
    lVar3 = lVar3 + -0x100000000;
  } while (uVar2 != 0);
  return param_1;
}


