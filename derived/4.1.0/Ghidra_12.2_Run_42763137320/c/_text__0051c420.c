/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051c420; name: FUN_.text__0051c420
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0051c420(long *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  
  param_1[2] = 0;
  piVar6 = _DAT_008a4048;
  while( true ) {
    while (iVar3 = *piVar6, -1 < iVar3) {
      while (*piVar6 == iVar3) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar5) {
          *piVar6 = iVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto LAB__text__0051c4a8;
      }
      ClearExclusiveLocal();
    }
    nn::os::LockMutex((MutexType *)(piVar6 + 4));
    if (*piVar6 < 0) break;
    nn::os::UnlockMutex((MutexType *)(piVar6 + 4));
  }
LAB__text__0051c4a8:
  lVar7 = FUN__text__0051e4e0(param_3,param_2);
  if (lVar7 != 0) {
    lVar1 = lVar7;
    if (param_4 != 0) {
      lVar1 = lVar7 + 0x18;
    }
    param_1[2] = lVar1;
    lVar2 = 0;
    if (param_4 != 0) {
      lVar2 = 0x18;
    }
    plVar8 = *(long **)(lVar7 + lVar2);
    *param_1 = (long)plVar8;
    if ((plVar8 != (long *)(*(long *)(lVar7 + lVar2) + (ulong)*(uint *)(lVar1 + 8) * 0x20)) &&
       (lVar7 = *plVar8, param_1[1] = lVar7, lVar7 == *plVar8 + (ulong)*(uint *)(plVar8 + 1) * 8)) {
      *param_1 = (long)(plVar8 + 4);
      return;
    }
  }
  return;
}


