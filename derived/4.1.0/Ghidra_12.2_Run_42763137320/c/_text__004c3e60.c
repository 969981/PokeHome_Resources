/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c3e60; name: FUN_.text__004c3e60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004c3e60(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined4 *param_5)

{
  MutexType *pMVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  
  pMVar1 = _DAT_008a4c68;
  nn::os::LockMutex(_DAT_008a4c68);
  local_40 = 0;
  uStack_38 = 0;
  FUN__text__004c3b10(param_1,param_2,*param_5,&local_40);
  FUN__text__004c3ed0(param_1,&local_40);
  nn::os::UnlockMutex(pMVar1);
  return;
}


