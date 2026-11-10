/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f53d0; name: FUN_.text__005f53d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__005f53d0(void)

{
  bool bVar1;
  int iVar2;
  ThreadType *pTVar3;
  long lVar4;
  long lVar5;
  
  if (((DAT_00c153f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_00c153f8), iVar2 != 0)) {
    nn::os::InitializeMutex((MutexType *)&DAT_00c15400,false,0);
    FUN__text__001001d0(_DAT_008a5c80,&DAT_00c15400,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_00c153f8);
  }
  nn::os::LockMutex((MutexType *)&DAT_00c15400);
  if (*_DAT_008a5c88 == '\0') {
    bVar1 = *_DAT_008a5cc0 != '\0';
    if (*_DAT_008a5c90 == 0) goto LAB__text__005f5480;
  }
  else {
    if (*_DAT_008a5c90 == 0) {
      bVar1 = *_DAT_008a5cc0 != '\0';
      goto LAB__text__005f5480;
    }
    lVar5 = *_DAT_008a5c98;
    pTVar3 = (ThreadType *)nn::os::GetCurrentThread();
    lVar4 = nn::os::GetThreadId(pTVar3);
    bVar1 = *_DAT_008a5cc0 != '\0';
    if (lVar5 != lVar4) goto LAB__text__005f5480;
  }
  bVar1 = false;
LAB__text__005f5480:
  nn::os::UnlockMutex((MutexType *)&DAT_00c15400);
  return bVar1;
}


