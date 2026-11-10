/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c0968; name: FUN_.text__002c0968
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002c0968(long *param_1)

{
  long lVar1;
  
  lVar1 = _DAT_008a2488;
  *param_1 = _DAT_008a2488 + 0x10;
  param_1[9] = lVar1 + 0x70;
  param_1[10] = lVar1 + 0xb0;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x3e83));
  *param_1 = 0x867b90;
  param_1[9] = 0x867bd0;
  param_1[10] = 0x867c10;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


