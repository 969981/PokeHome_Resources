/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e44b0; name: FUN_.text__005e44b0
 */


void FUN__text__005e44b0(MultiWaitType *param_1)

{
  ulong uVar1;
  MultiWaitHolderType *pMVar2;
  long lVar3;
  MultiWaitHolderType *pMVar4;
  int iVar5;
  
  if (*(long *)(param_1 + 0x60) != 0) {
    pMVar2 = *(MultiWaitHolderType **)(param_1 + 0x58);
    pMVar4 = pMVar2 + *(long *)(param_1 + 0x60) * 0x50;
    do {
      iVar5 = 0;
      do {
        if ((*(long **)(pMVar2 + 0x40) != (long *)0x0) &&
           (uVar1 = (**(code **)(**(long **)(pMVar2 + 0x40) + 0x30))(), (uVar1 & 1) == 0)) {
          if ((pMVar2[0x48] == (MultiWaitHolderType)0x0) && (*(long *)(pMVar2 + 0x40) != 0)) {
            nn::os::LinkMultiWaitHolder(param_1,pMVar2);
            pMVar2[0x48] = (MultiWaitHolderType)0x1;
          }
          iVar5 = iVar5 + 1;
        }
        pMVar2 = pMVar2 + 0x50;
      } while (pMVar2 != pMVar4);
      if (iVar5 == 0) {
        if (*(long *)(param_1 + 0x60) == 0) {
          return;
        }
        pMVar2 = *(MultiWaitHolderType **)(param_1 + 0x58);
        lVar3 = *(long *)(param_1 + 0x60) * 0x50;
        do {
          if (pMVar2[0x48] != (MultiWaitHolderType)0x0 && *(long *)(pMVar2 + 0x40) != 0) {
            nn::os::UnlinkMultiWaitHolder(pMVar2);
            pMVar2[0x48] = (MultiWaitHolderType)0x0;
          }
          pMVar2 = pMVar2 + 0x50;
          lVar3 = lVar3 + -0x50;
        } while (lVar3 != 0);
        return;
      }
      iVar5 = iVar5 + 1;
      do {
        pMVar2 = (MultiWaitHolderType *)nn::os::WaitAny(param_1);
        pMVar2 = (MultiWaitHolderType *)nn::os::GetMultiWaitHolderUserData(pMVar2);
        if (pMVar2[0x48] != (MultiWaitHolderType)0x0 && *(long *)(pMVar2 + 0x40) != 0) {
          nn::os::UnlinkMultiWaitHolder(pMVar2);
          pMVar2[0x48] = (MultiWaitHolderType)0x0;
        }
        iVar5 = iVar5 + -1;
      } while (1 < iVar5);
      pMVar2 = *(MultiWaitHolderType **)(param_1 + 0x58);
      pMVar4 = pMVar2 + *(long *)(param_1 + 0x60) * 0x50;
    } while (*(long *)(param_1 + 0x60) != 0);
  }
  return;
}


