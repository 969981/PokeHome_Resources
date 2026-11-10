/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006576b8; name: FUN_.text__006576b8
 */


long FUN__text__006576b8(long param_1,long param_2,int param_3)

{
  int iVar1;
  FILE *__stream;
  
  __stream = *(FILE **)(param_1 + 0x48);
  if ((param_2 == 0) && (param_3 == 0)) {
    if (__stream == (FILE *)0x0) {
      return 0;
    }
  }
  else if (__stream == (FILE *)0x0) {
    __stream = fopen(*(char **)(param_1 + 0x20),(char *)0x7154b5);
    *(FILE **)(param_1 + 0x48) = __stream;
    if (__stream == (FILE *)0x0) {
      return 1;
    }
  }
  iVar1 = fseek(__stream,param_2,param_3);
  return (ulong)(iVar1 != 0) << 1;
}


