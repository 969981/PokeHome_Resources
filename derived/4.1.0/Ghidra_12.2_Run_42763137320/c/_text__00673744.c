/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00673744; name: FUN_.text__00673744
 */


void FUN__text__00673744(long param_1)

{
  size_t sVar1;
  char *__s;
  
  if ((((param_1 != 0) && (__s = *(char **)(param_1 + 0x10), __s != (char *)0x0)) &&
      (sVar1 = strlen(__s), sVar1 != 0)) && (__s[sVar1 - 1] == '.')) {
    __s[sVar1 - 1] = '\0';
  }
  return;
}


