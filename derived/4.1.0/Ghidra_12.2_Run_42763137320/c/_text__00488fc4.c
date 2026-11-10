/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00488fc4; name: FUN_.text__00488fc4
 */


void FUN__text__00488fc4(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 7),true,0);
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xb),true,0);
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}


