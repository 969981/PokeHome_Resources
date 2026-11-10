/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f2e9c; name: FUN_.text__003f2e9c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003f2e9c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_008a53f8 + 0x10;
  lVar2 = _DAT_008a53f8 + 0xa0;
  *param_1 = _DAT_008a53f0 + 0x10;
  param_1[2] = lVar2;
  param_1[1] = lVar1;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 8));
  FUN__text__003f439c(param_1 + 1);
  return;
}


