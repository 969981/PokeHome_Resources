/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f5500; name: FUN_.text__005f5500
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN__text__005f5500(void)

{
  undefined1 uVar1;
  int iVar2;
  
  if (((DAT_00c153f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_00c153f8), iVar2 != 0)) {
    nn::os::InitializeMutex((MutexType *)&DAT_00c15400,false,0);
    FUN__text__001001d0(_DAT_008a5c80,&DAT_00c15400,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_00c153f8);
  }
  nn::os::LockMutex((MutexType *)&DAT_00c15400);
  uVar1 = *_DAT_008a5cc8;
  nn::os::UnlockMutex((MutexType *)&DAT_00c15400);
  return uVar1;
}


