/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0056e054; name: FUN_.text__0056e054
 */


void FUN__text__0056e054(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 5),true,0);
  DAT_00aec4a8 = param_1;
  return;
}


