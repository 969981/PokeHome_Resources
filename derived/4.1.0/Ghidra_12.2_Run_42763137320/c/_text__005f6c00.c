/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f6c00; name: FUN_.text__005f6c00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f6c00(long *param_1)

{
  LightEventType *pLVar1;
  byte *pbVar2;
  long lVar3;
  char *pcVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  uVar9 = tpidr_el0;
  pLVar1 = (LightEventType *)(param_1 + 0x14);
  pbVar2 = (byte *)((long)param_1 + 0xa2);
  lVar3 = _DAT_008a5ce0 + 0xe8;
  *param_1 = _DAT_008a5ce0 + 0x10;
  param_1[1] = lVar3;
  bVar8 = (byte)((uint)uVar9 >> 0xd) & 0x4f;
  while (*pbVar2 == 0x4f) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
    if (bVar7) {
      *pbVar2 = bVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB__text__005f6cc4;
  }
  pcVar4 = (char *)((long)param_1 + 0xa3);
  ClearExclusiveLocal();
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
    if (bVar7) {
      *pcVar4 = *pcVar4 + '\x01';
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar2 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar1);
        while (*pbVar2 == 0x4f) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
          if (bVar7) {
            *pbVar2 = bVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB__text__005f6cb4;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
    if (bVar7) {
      *pbVar2 = bVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB__text__005f6cb4:
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pcVar4,0x10);
    if (bVar7) {
      *pcVar4 = *pcVar4 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB__text__005f6cc4:
  plVar5 = param_1 + 5;
  uVar10 = FUN__text__005f6a58(plVar5);
  if ((uVar10 & 1) == 0) {
    FUN__text__005f6d90(param_1);
  }
  FUN__text__005f6850(plVar5);
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
    if (bVar7) {
      *pbVar2 = 0x4f;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)((long)param_1 + 0xa3) != '\0') {
    nn::os::SignalLightEvent(pLVar1);
  }
  nn::os::FinalizeLightEvent(pLVar1);
  FUN__text__005f683c(plVar5);
  return;
}


