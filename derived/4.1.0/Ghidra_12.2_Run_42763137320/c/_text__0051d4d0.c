/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051d4d0; name: FUN_.text__0051d4d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0051d4d0(undefined8 *param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  
  piVar4 = _DAT_008a4048;
  FUN__text__00411760(_DAT_008a4048);
  lVar6 = FUN__text__0051e540(param_1[1],*param_1);
  piVar5 = _DAT_008a4048;
  if (lVar6 == 0) goto LAB__text__0051d584;
  uVar7 = FUN__text__00411760(_DAT_008a4048);
  if ((param_3 == 0) || (param_4 == 0)) {
    uVar7 = FUN__text__0051d790(uVar7,lVar6,param_2);
    if (param_3 != 1) goto LAB__text__0051d54c;
LAB__text__0051d554:
    FUN__text__0051d790(uVar7,lVar6 + 0x18,param_2);
  }
  else {
    if (param_3 == 1) goto LAB__text__0051d554;
LAB__text__0051d54c:
    if (param_4 == 1) goto LAB__text__0051d554;
  }
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 == -1) {
    piVar5[2] = 0;
    piVar5[3] = 0;
  }
  nn::os::UnlockMutex((MutexType *)(piVar5 + 4));
LAB__text__0051d584:
  do {
    iVar1 = *piVar4;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar4,0x10);
    if (bVar3) {
      *piVar4 = iVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 == -1) {
    piVar4[2] = 0;
    piVar4[3] = 0;
    nn::os::UnlockMutex((MutexType *)(piVar4 + 4));
    return;
  }
  nn::os::UnlockMutex((MutexType *)(piVar4 + 4));
  return;
}


