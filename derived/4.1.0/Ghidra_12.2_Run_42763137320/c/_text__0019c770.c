/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019c770; name: FUN_.text__0019c770
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0019c770(long *param_1)

{
  long lVar1;
  
  lVar1 = _DAT_008a06b8;
  *param_1 = _DAT_008a06b8 + 0x10;
  param_1[9] = lVar1 + 0x88;
  param_1[0xb] = lVar1 + 0xb8;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x8b));
  if (param_1[0x70] != 0) {
    (**(code **)(*(long *)(param_1[0x70] + 0x48) + 0x18))();
    param_1[0x70] = 0;
  }
  if (param_1[0x6f] != 0) {
    (**(code **)(*(long *)(param_1[0x6f] + 0x48) + 0x18))();
    param_1[0x6f] = 0;
  }
  if (param_1[0x6e] != 0) {
    (**(code **)(*(long *)(param_1[0x6e] + 0x48) + 0x18))();
    param_1[0x6e] = 0;
  }
  FUN__text__005e8798(param_1);
  return;
}


