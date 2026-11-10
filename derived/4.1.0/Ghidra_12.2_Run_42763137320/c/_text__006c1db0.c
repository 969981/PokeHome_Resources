/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c1db0; name: FUN_.text__006c1db0
 */


void FUN__text__006c1db0(char *param_1)

{
  size_t sVar1;
  char *__dest;
  
  sVar1 = strlen(param_1);
  __dest = (char *)FUN__text__006a0f04(sVar1 + 1);
  strncpy(__dest,param_1,sVar1 + 1);
  return;
}


