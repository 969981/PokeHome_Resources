/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a22ac; name: FUN_.text__004a22ac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004a22ac(long *param_1)

{
  *param_1 = _DAT_008a46d8 + 0x10;
  FUN__text__004ae358(param_1 + 1);
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xd),true,0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((long)param_1 + 0xf4) = 1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN__text__004adf84(param_1 + 0x1f);
  return;
}


