/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: 006f6970; name: wcsncmp
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int wcsncmp(wchar_t *__s1,wchar_t *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_wcsncmp_008a8420)((int)__s1);
  return iVar1;
}


