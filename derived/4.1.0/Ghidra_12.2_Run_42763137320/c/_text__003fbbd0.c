/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fbbd0; name: FUN_.text__003fbbd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003fbbd0(long *param_1)

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
  lVar1 = _DAT_008a4380;
  *(undefined1 *)((long)param_1 + 100) = 0x32;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x67) = 0;
  *(undefined2 *)((long)param_1 + 0x6b) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined2 *)((long)param_1 + 0xc2) = 0;
  *(undefined1 *)((long)param_1 + 0xc4) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined2 *)((long)param_1 + 0x65) = 1;
  *param_1 = lVar1 + 0x10;
  param_1[0xe] = lVar1 + 0x138;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return;
}


