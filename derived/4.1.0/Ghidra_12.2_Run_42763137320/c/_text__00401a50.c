/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00401a50; name: FUN_.text__00401a50
 */


void FUN__text__00401a50(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = FUN__text__00404880(0);
  if (lVar4 != DAT_00ae89b8) {
    FUN__text__00404120(0,lVar4,param_2);
    return;
  }
  FUN__text__00400fe0(&DAT_00ae8978);
  FUN__text__00404120(0,lVar4,param_2);
  DAT_00ae897c = DAT_00ae897c + -1;
  if (DAT_00ae897c == 0) {
    DAT_00ae89a8 = 0;
    do {
      iVar3 = DAT_00ae8978 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xae8978,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_00ae8978 = iVar3;
      }
    } while (cVar1 != '\0');
    if (-1 < iVar3) {
      nn::os::ReleaseSemaphore((SemaphoreType *)&DAT_00ae8980,1);
      return;
    }
  }
  else {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xae8978,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_00ae8978 = DAT_00ae8978 + -1;
      }
    } while (cVar1 != '\0');
  }
  return;
}


