/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006d89f0; name: FUN_.text__006d89f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006d89f0(void)

{
  MutexType *pMVar1;
  
  pMVar1 = _DAT_008a6b50;
  nn::os::InitializeMutex(_DAT_008a6b50,false,0);
  FUN__text__001001d0(&LAB__text__006d8368,pMVar1,&__DT_FINI_ARRAY);
  return;
}


