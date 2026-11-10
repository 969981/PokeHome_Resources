/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0039f060; name: FUN_.text__0039f060
 */


undefined8 FUN__text__0039f060(long *param_1)

{
  MutexType *pMVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (*(long *)(lVar5 + 400) == 0) {
    return 0;
  }
  uVar3 = FUN__text__003a07b0();
  if ((uVar3 & 1) == 0) {
    return 1;
  }
  pMVar1 = (MutexType *)(lVar5 + 0x1b0);
  nn::os::LockMutex(pMVar1);
  if ((*(long *)(lVar5 + 400) != 0) &&
     (plVar4 = (long *)FUN__text__003a0754(), *plVar4 == param_1[1])) {
    iVar2 = FUN__text__003a07d0(*(undefined8 *)(lVar5 + 400));
    nn::os::UnlockMutex(pMVar1);
    if (iVar2 != 2) goto LAB__text__0039f100;
    nn::os::LockMutex(pMVar1);
    if ((*(long *)(lVar5 + 400) != 0) &&
       (plVar4 = (long *)FUN__text__003a0754(), *plVar4 == param_1[1])) {
      FUN__text__005dd758(lVar5 + 0xa8);
    }
  }
  nn::os::UnlockMutex(pMVar1);
LAB__text__0039f100:
  FUN__text__0039c858(lVar5);
  return 0;
}


