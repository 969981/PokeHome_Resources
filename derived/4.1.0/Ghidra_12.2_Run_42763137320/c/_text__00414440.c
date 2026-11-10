/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00414440; name: FUN_.text__00414440
 */


long * FUN__text__00414440(long *param_1)

{
  MutexType *pMVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  pMVar1 = (MutexType *)(param_1 + 1);
  nn::os::LockMutex(pMVar1);
  plVar6 = (long *)*param_1;
  nn::os::UnlockMutex(pMVar1);
  do {
    if (plVar6 == (long *)0x0) {
      lVar5 = FUN__text__00400f90(0x12,*(undefined4 *)((long)param_1 + 0x2c),
                                  *(undefined4 *)((long)param_1 + 0x2c));
      if (lVar5 == 0) {
        return (long *)0x0;
      }
      *(int *)((long)param_1 + 0x44) = *(int *)((long)param_1 + 0x44) + 1;
      plVar6 = (long *)(lVar5 + (ulong)*(uint *)(param_1 + 6));
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      *(int *)(plVar6 + 1) = (int)param_1[6];
      *(undefined4 *)((long)plVar6 + 0x14) = 1;
      nn::os::LockMutex(pMVar1);
      if (*param_1 == 0) {
        *param_1 = (long)plVar6;
        *plVar6 = 0;
      }
      else {
        *plVar6 = *param_1;
        *param_1 = (long)plVar6;
      }
      nn::os::UnlockMutex(pMVar1);
      return plVar6;
    }
    piVar2 = (int *)((long)plVar6 + 0x14);
    do {
      if (*piVar2 != 0) {
        ClearExclusiveLocal();
        goto LAB__text__00414484;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (-1 < (int)*(uint *)(plVar6 + 2)) {
      return plVar6;
    }
    if (*(uint *)((long)plVar6 + 0xc) == (*(uint *)(plVar6 + 2) & 0x7fffffff)) {
      *(int *)(plVar6 + 1) = (int)param_1[6];
      *(undefined4 *)((long)plVar6 + 0xc) = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      return plVar6;
    }
LAB__text__00414484:
    plVar6 = (long *)*plVar6;
  } while( true );
}


