/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fae34; name: FUN_.text__003fae34
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003fae34(long *param_1)

{
  long lVar1;
  
  FUN__text__003fdc1c();
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  lVar1 = _DAT_008a4370;
  *(undefined2 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = lVar1 + 0x10;
  nn::os::InitializeMutex((MutexType *)(param_1 + 5),true,0);
  param_1[0xb] = 0;
  lVar1 = _DAT_008a4378;
  *(undefined1 *)((long)param_1 + 100) = 0x32;
  *(undefined4 *)((long)param_1 + 0x67) = 0;
  *(undefined2 *)((long)param_1 + 0x6b) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined2 *)((long)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((long)param_1 + 0xac) = 1;
  *(undefined2 *)((long)param_1 + 0x65) = 0;
  *param_1 = lVar1 + 0x10;
  *(undefined4 *)(param_1 + 0x13) = 0xffffffff;
  param_1[0xe] = lVar1 + 0xe8;
  param_1[0xf] = 0;
  return;
}


