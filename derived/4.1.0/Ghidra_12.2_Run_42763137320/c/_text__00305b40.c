/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00305b40; name: FUN_.text__00305b40
 */


int FUN__text__00305b40(long param_1,long param_2)

{
  char *__s;
  long lVar1;
  
  lVar1 = 0;
  __s = (char *)(param_1 + 0x30);
  while ((*__s == '\0' || (*(long *)(__s + 8) != param_2))) {
    lVar1 = lVar1 + -1;
    __s = __s + 0x3a0;
    if (lVar1 == -9000) {
      return 9000;
    }
  }
  memset(__s,0,0x3a0);
  return -(int)lVar1;
}


