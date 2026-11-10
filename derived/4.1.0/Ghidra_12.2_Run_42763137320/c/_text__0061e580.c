/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0061e580; name: FUN_.text__0061e580
 */


void FUN__text__0061e580(long param_1,byte param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar6 = tpidr_el0;
  bVar5 = (byte)((uint)uVar6 >> 0xd) & 0x4f;
  param_2 = param_2 & 1;
  pbVar1 = (byte *)(param_1 + 0x16);
  while (*pbVar1 == 0x4f) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = bVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB__text__0061e634;
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
          if (cVar3 == '\0') goto LAB__text__0061e624;
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
LAB__text__0061e624:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar4) {
      *pcVar2 = *pcVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB__text__0061e634:
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN__text__0060e7c4(param_1);
    FUN__text__006306b4();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  lVar7 = FUN__text__0060e7f8(param_1);
  if (*(char *)(lVar7 + 0xc) == '\0') {
    lVar7 = FUN__text__0060e7f8(param_1);
    *(byte *)(lVar7 + 0x67) = param_2;
    if (*(char *)(param_1 + 0x10) != '\0' || *(char *)(param_1 + 0x11) != '\0')
    goto LAB__text__0061e6c0;
  }
  else {
    DAT_00c16078 = param_2;
    if (*(char *)(param_1 + 0x10) != '\0' || *(char *)(param_1 + 0x11) != '\0')
    goto LAB__text__0061e6c0;
  }
  lVar7 = FUN__text__0060e7c4(param_1);
  if (lVar7 != 0) {
    FUN__text__0060e7c4(param_1);
    FUN__text__006305fc();
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
LAB__text__0061e6c0:
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


