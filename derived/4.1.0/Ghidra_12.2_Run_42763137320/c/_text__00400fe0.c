/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00400fe0; name: FUN_.text__00400fe0
 */


void FUN__text__00400fe0(int *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  do {
    if (*param_1 != -1) {
      ClearExclusiveLocal();
      lVar7 = *(long *)(param_1 + 0xc);
      lVar5 = nn::os::GetCurrentThread();
      if (lVar7 == lVar5) {
        uVar6 = nn::os::GetCurrentThread();
        *(undefined8 *)(param_1 + 0xc) = uVar6;
        param_1[1] = param_1[1] + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar3) {
            *param_1 = *param_1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        return;
      }
      goto LAB__text__00401020;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  goto LAB__text__00401100;
  while( true ) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
LAB__text__00401020:
    if (*param_1 != -1) {
      ClearExclusiveLocal();
      lVar5 = nn::os::GetSystemTick();
      fVar4 = DAT_00ae9648 * 0.01;
      goto LAB__text__004010b8;
    }
  }
  goto LAB__text__00401100;
  while( true ) {
    ClearExclusiveLocal();
    Yield();
    lVar7 = nn::os::GetSystemTick();
    if (lVar5 + (long)fVar4 < lVar7) break;
LAB__text__004010b8:
    if (*param_1 == -1) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB__text__00401100;
      goto LAB__text__004010b8;
    }
  }
  do {
    iVar1 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = iVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 != -1) {
    nn::os::AcquireSemaphore((SemaphoreType *)(param_1 + 2));
  }
LAB__text__00401100:
  uVar6 = nn::os::GetCurrentThread();
  *(undefined8 *)(param_1 + 0xc) = uVar6;
  param_1[1] = param_1[1] + 1;
  return;
}


