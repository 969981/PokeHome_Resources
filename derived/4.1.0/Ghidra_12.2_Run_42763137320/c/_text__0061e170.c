/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0061e170; name: FUN_.text__0061e170
 */


void FUN__text__0061e170(long param_1,byte param_2,undefined8 param_3,uint param_4)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar7 = tpidr_el0;
  bVar5 = (byte)((uint)uVar7 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0x16);
  while (*pbVar1 == 0x4f) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = bVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB__text__0061e234;
  }
  pcVar2 = (char *)(param_1 + 0x17);
  ClearExclusiveLocal();
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar4) {
      *pcVar2 = *pcVar2 + '\x01';
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar1 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x14));
        while (*pbVar1 == 0x4f) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar4) {
            *pbVar1 = bVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB__text__0061e224;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = bVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB__text__0061e224:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar4) {
      *pcVar2 = *pcVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB__text__0061e234:
  if ((param_2 < 4) && (uVar6 = (param_4 & 0xff) - 1, uVar6 < 5)) {
                    /* WARNING: Could not emulate address calculation at 0x0061e25c */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)*(int *)((ulong)uVar6 * 4 + 0x75a694) + 0x61e258))();
    return;
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 0x4f;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(param_1 + 0x17) == '\0') {
    return;
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x14));
  return;
}


