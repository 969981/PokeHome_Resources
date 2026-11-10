/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e2290; name: FUN_.text__004e2290
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004e2290(long *param_1)

{
  long lVar1;
  
  FUN__text__004a22ac();
  *(undefined1 *)(param_1 + 0x25) = 0;
  lVar1 = _DAT_008a4ca0;
  *(undefined2 *)(param_1 + 0x26) = 0;
  *(undefined8 *)((long)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *param_1 = lVar1 + 0x10;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x26),true,0);
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2a] = 0;
  param_1[0x24] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(_DAT_008a4ca8 + 0x40) = 0;
  return;
}


