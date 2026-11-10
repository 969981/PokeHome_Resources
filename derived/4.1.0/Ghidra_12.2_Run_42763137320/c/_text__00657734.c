/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00657734; name: FUN_.text__00657734
 */


size_t FUN__text__00657734(void *param_1,size_t param_2,size_t param_3,long param_4)

{
  size_t sVar1;
  FILE *__stream;
  
  __stream = *(FILE **)(param_4 + 0x48);
  if (__stream == (FILE *)0x0) {
    __stream = fopen(*(char **)(param_4 + 0x20),(char *)0x7154b5);
    *(FILE **)(param_4 + 0x48) = __stream;
    if (__stream == (FILE *)0x0) {
      return 0xffffffffffffffff;
    }
  }
  sVar1 = fread(param_1,param_2,param_3,__stream);
  return sVar1;
}


