/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b0020; name: FUN_.text__004b0020
 */


undefined8 FUN__text__004b0020(long param_1,ulong param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar7 != lVar8) {
    FUN__text__004b0170(param_1,0,4);
    piVar1 = (int *)(param_1 + 0xd4);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (*piVar1 != 0) {
      lVar5 = nn::os::GetSystemTick();
      fVar4 = DAT_00ae9648 * 0.01;
      do {
        if (*piVar1 == 0) break;
        Yield();
        lVar6 = nn::os::GetSystemTick();
      } while (lVar6 <= lVar5 + (long)fVar4);
      while (*piVar1 != 0) {
        FUN__text__00405bf0();
      }
    }
    piVar1 = (int *)(param_1 + 0x8c);
    DataMemoryBarrier(2,3);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if ((DAT_00ae9a30 == '\0') && ((DAT_00ae9b1d != '\0' || ((param_2 & 1) == 0)))) {
    if (lVar7 != lVar8) {
      FUN__text__004b8644(param_1 + 0x90);
    }
  }
  else {
    FUN__text__004b0588(param_1,param_3 & 1);
  }
  return 1;
}


