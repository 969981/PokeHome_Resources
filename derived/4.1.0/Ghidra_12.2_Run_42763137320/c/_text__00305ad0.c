/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00305ad0; name: FUN_.text__00305ad0
 */


int FUN__text__00305ad0(long param_1,void *param_2)

{
  char *__dest;
  long lVar1;
  
  lVar1 = 0;
  __dest = (char *)(param_1 + 0x30);
  while ((*__dest == '\0' || (*(long *)(__dest + 8) != *(long *)((long)param_2 + 8)))) {
    lVar1 = lVar1 + -1;
    __dest = __dest + 0x3a0;
    if (lVar1 == -9000) {
      return 9000;
    }
  }
  memcpy(__dest,param_2,0x3a0);
  return -(int)lVar1;
}


