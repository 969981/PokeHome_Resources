/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f52b0; name: FUN_.text__005f52b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__005f52b0(void)

{
  int iVar1;
  ThreadType *pTVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  if (((DAT_00c153f8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00c153f8), iVar1 != 0)) {
    nn::os::InitializeMutex((MutexType *)&DAT_00c15400,false,0);
    FUN__text__001001d0(_DAT_008a5c80,&DAT_00c15400,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_00c153f8);
  }
  nn::os::LockMutex((MutexType *)&DAT_00c15400);
  if (*_DAT_008a5c88 == '\0') {
    if (*_DAT_008a5c90 != 0) {
LAB__text__005f5324:
      plVar4 = _DAT_008a5c90;
      goto LAB__text__005f532c;
    }
  }
  else if (*_DAT_008a5c90 != 0) {
    lVar5 = *_DAT_008a5c98;
    pTVar2 = (ThreadType *)nn::os::GetCurrentThread();
    lVar3 = nn::os::GetThreadId(pTVar2);
    if (lVar5 == lVar3) goto LAB__text__005f5324;
  }
  plVar4 = _DAT_008a5ca8;
LAB__text__005f532c:
  lVar3 = *plVar4;
  nn::os::UnlockMutex((MutexType *)&DAT_00c15400);
  return lVar3;
}


