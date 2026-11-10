/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042acac; name: FUN_.text__0042acac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0042acac(long *param_1)

{
  long lVar1;
  
  FUN__text__0042ce54();
  *param_1 = _DAT_008a47f8 + 0x10;
  FUN__text__0042d00c(param_1 + 3);
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  lVar1 = _DAT_008a4800;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xd] = 0;
  *param_1 = lVar1 + 0x10;
  param_1[3] = lVar1 + 0x58;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xe),true,0);
  param_1[0x12] = 0;
  *param_1 = 0x887e20;
  param_1[3] = 0x887e68;
  return;
}


