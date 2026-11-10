/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004aa040; name: FUN_.text__004aa040
 */


void FUN__text__004aa040(long param_1,uint param_2,long *param_3)

{
  MutexType *pMVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  
  pMVar1 = (MutexType *)(param_1 + 0x68);
  nn::os::LockMutex(pMVar1);
  uVar3 = *(uint *)(param_1 + 0x98);
  if (uVar3 != 0) {
    uVar6 = 0;
    if (uVar3 != 0) {
      uVar6 = param_2 / uVar3;
    }
    plVar7 = (long *)(*(long *)(param_1 + 0x90) + (ulong)(param_2 - uVar6 * uVar3) * 8);
    while (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0) {
      if (*(uint *)(plVar7 + 1) == param_2) {
        FUN__text__004aa0f0(plVar7 + 2,param_3);
        if (*param_3 != 0) {
          piVar2 = (int *)(*param_3 + 0x60);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = *piVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        nn::os::UnlockMutex(pMVar1);
        return;
      }
    }
  }
  *(undefined4 *)(param_3 + 2) = 0;
  *param_3 = 0;
  param_3[1] = 0;
  nn::os::UnlockMutex(pMVar1);
  return;
}


