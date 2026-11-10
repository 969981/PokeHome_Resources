/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fce00; name: FUN_.text__002fce00
 */


undefined8 FUN__text__002fce00(long *param_1)

{
  MutexType *pMVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (*(long *)(lVar5 + 0x1a8) == 0) {
    return 0;
  }
  uVar3 = FUN__text__002ff090();
  if ((uVar3 & 1) == 0) {
    return 1;
  }
  pMVar1 = (MutexType *)(lVar5 + 0x1c8);
  nn::os::LockMutex(pMVar1);
  if ((*(long *)(lVar5 + 0x1a8) != 0) &&
     (plVar4 = (long *)FUN__text__002ff034(), *plVar4 == param_1[1])) {
    iVar2 = FUN__text__002ff0b0(*(undefined8 *)(lVar5 + 0x1a8));
    nn::os::UnlockMutex(pMVar1);
    if (iVar2 != 2) goto LAB__text__002fcea0;
    nn::os::LockMutex(pMVar1);
    if ((*(long *)(lVar5 + 0x1a8) != 0) &&
       (plVar4 = (long *)FUN__text__002ff034(), *plVar4 == param_1[1])) {
      FUN__text__005dd758(lVar5 + 0xc0);
    }
  }
  nn::os::UnlockMutex(pMVar1);
LAB__text__002fcea0:
  FUN__text__002fa6b8(lVar5);
  return 0;
}


