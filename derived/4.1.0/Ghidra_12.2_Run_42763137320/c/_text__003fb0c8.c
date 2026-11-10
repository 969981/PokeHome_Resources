/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fb0c8; name: FUN_.text__003fb0c8
 */


undefined8 FUN__text__003fb0c8(long param_1,char *param_2)

{
  size_t __n;
  char *__dest;
  size_t sVar1;
  
  if (*(long *)(param_1 + -0x18) != 0) {
    FUN__text__00400fc0(7);
  }
  if (param_2 != (char *)0x0) {
    __n = strlen(param_2);
    __dest = (char *)FUN__text__00400f80(7,__n + 1);
    *(char **)(param_1 + -0x18) = __dest;
    if (__dest == (char *)0x0) {
      return 0x34;
    }
    sVar1 = strlen(param_2);
    if (sVar1 + 1 <= __n) {
      __n = sVar1 + 1;
    }
    strncpy(__dest,param_2,__n);
    __dest[__n] = '\0';
  }
  return 1;
}


