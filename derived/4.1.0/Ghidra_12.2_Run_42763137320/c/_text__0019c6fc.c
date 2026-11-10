/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019c6fc; name: FUN_.text__0019c6fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0019c6fc(long *param_1)

{
  long lVar1;
  
  FUN__text__005e8634(param_1,0x10000);
  lVar1 = _DAT_008a06b8;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *param_1 = lVar1 + 0x10;
  param_1[9] = lVar1 + 0x88;
  param_1[0xb] = lVar1 + 0xb8;
  FUN__text__0019c35c(param_1 + 0x71);
  *(undefined1 *)((long)param_1 + 0x3ec) = 0;
  FUN__text__0019c35c(param_1 + 0x7e);
  *(undefined2 *)((long)param_1 + 0x454) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x8b),false,0);
  return;
}


