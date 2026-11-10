/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f9cb4; name: FUN_.text__003f9cb4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003f9cb4(long *param_1,long param_2)

{
  long lVar1;
  
  FUN__text__003fdc8c();
  lVar1 = _DAT_008a4368;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x28c) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined2 *)(param_1 + 0x51) = 0;
  *param_1 = lVar1 + 0x10;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x51),true,0);
  FUN__text__003fe24c(param_1 + 0x55);
  param_1[0xc2] = param_2;
  *(undefined8 *)((long)param_1 + 0x624) = 0xffffffff;
  return;
}


