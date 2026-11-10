/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00411760; name: FUN_.text__00411760
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00411760(int *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  
  nn::os::LockMutex((MutexType *)(param_1 + 4));
  pfVar5 = _DAT_008a46b8;
  piVar1 = param_1 + 0xc;
  do {
    while( true ) {
      iVar2 = *param_1;
      if (0 < iVar2) break;
      while (*param_1 == iVar2) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          uVar8 = nn::os::GetCurrentThread();
          *(undefined8 *)(param_1 + 2) = uVar8;
          return;
        }
      }
      ClearExclusiveLocal();
    }
    if (*param_1 != 0) {
      lVar6 = nn::os::GetSystemTick();
      fVar9 = *pfVar5;
      do {
        if (*param_1 == 0) break;
        Yield();
        lVar7 = nn::os::GetSystemTick();
      } while (lVar7 <= lVar6 + (long)(fVar9 * 0.01));
      while (*param_1 != 0) {
        FUN__text__00405bf0();
      }
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (*param_1 != 0) {
      nn::os::WaitEvent((EventType *)(param_1 + 0xe));
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  } while( true );
}


