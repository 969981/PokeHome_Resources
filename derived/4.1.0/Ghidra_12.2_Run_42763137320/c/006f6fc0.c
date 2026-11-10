/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: 006f6fc0; name: at_quick_exit
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int at_quick_exit(__func *__func)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_at_quick_exit_008a8748)((int)__func);
  return iVar1;
}


