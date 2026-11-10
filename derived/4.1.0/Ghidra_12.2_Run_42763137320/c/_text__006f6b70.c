/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f6b70; name: strnlen
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

size_t strnlen(char *__string,size_t __maxlen)

{
  size_t sVar1;
  
  sVar1 = (*(code *)PTR_strnlen_008a8520)();
  return sVar1;
}


