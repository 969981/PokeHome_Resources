/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f559c; name: FUN_.text__005f559c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f559c(undefined8 param_1,undefined8 param_2,byte param_3,byte param_4)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  int iVar4;
  ThreadType *pTVar5;
  undefined8 uVar6;
  
  if ((DAT_00c153f8 & 1) == 0) {
    iVar4 = __cxa_guard_acquire(&DAT_00c153f8);
    if (iVar4 != 0) {
      nn::os::InitializeMutex((MutexType *)&DAT_00c15400,false,0);
      FUN__text__001001d0(_DAT_008a5c80,&DAT_00c15400,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_00c153f8);
    }
  }
  nn::os::LockMutex((MutexType *)&DAT_00c15400);
  pTVar5 = (ThreadType *)nn::os::GetCurrentThread();
  uVar6 = nn::os::GetThreadId(pTVar5);
  pbVar3 = _DAT_008a5cc8;
  puVar2 = _DAT_008a5c90;
  *_DAT_008a5c98 = uVar6;
  *puVar2 = param_2;
  pbVar1 = _DAT_008a5c88;
  *pbVar3 = param_3 & 1;
  *pbVar1 = param_4 & 1;
  nn::os::UnlockMutex((MutexType *)&DAT_00c15400);
  return;
}


