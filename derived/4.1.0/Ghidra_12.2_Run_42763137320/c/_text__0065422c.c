/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0065422c; name: FUN_.text__0065422c
 */


undefined8 FUN__text__0065422c(void *param_1,size_t param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = memcmp(param_1,param_3,param_2);
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}


