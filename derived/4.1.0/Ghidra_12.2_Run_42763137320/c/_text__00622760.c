/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00622760; name: FUN_.text__00622760
 */


void FUN__text__00622760(long param_1,uint param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  uint *puVar9;
  ulong uVar10;
  
  uVar6 = tpidr_el0;
  uVar10 = (ulong)param_2;
  bVar5 = (byte)((uint)uVar6 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0x16);
  while (*pbVar1 == 0x4f) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = bVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB__text__00622814;
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
          if (cVar3 == '\0') goto LAB__text__00622804;
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
LAB__text__00622804:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar4) {
      *pcVar2 = *pcVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB__text__00622814:
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN__text__0060e7c4(param_1);
    FUN__text__006306b4();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (param_2 < 0x20) {
    lVar7 = FUN__text__0060e7f8(param_1);
    if (*(char *)(lVar7 + 0xc) == '\0') {
      lVar7 = FUN__text__0060e7f8(param_1);
      puVar9 = (uint *)(lVar7 + 0x30);
    }
    else {
      puVar9 = &DAT_00c16041;
    }
  }
  else if (param_2 < 0x40) {
    uVar10 = (ulong)(param_2 - 0x20);
    lVar7 = FUN__text__0060e7f8(param_1);
    if (*(char *)(lVar7 + 0xc) == '\0') {
      lVar7 = FUN__text__0060e7f8(param_1);
      puVar9 = (uint *)(lVar7 + 0x34);
    }
    else {
      puVar9 = &DAT_00c16045;
    }
  }
  else if (param_2 < 0x60) {
    uVar10 = (ulong)(param_2 - 0x40);
    lVar7 = FUN__text__0060e7f8(param_1);
    if (*(char *)(lVar7 + 0xc) == '\0') {
      lVar7 = FUN__text__0060e7f8(param_1);
      puVar9 = (uint *)(lVar7 + 0x3a);
    }
    else {
      puVar9 = &DAT_00c1604b;
    }
  }
  else {
    if (0x7f < param_2) goto LAB__text__00622924;
    uVar10 = (ulong)(param_2 - 0x60);
    lVar7 = FUN__text__0060e7f8(param_1);
    if (*(char *)(lVar7 + 0xc) == '\0') {
      puVar8 = (undefined *)FUN__text__0060e7f8(param_1);
    }
    else {
      puVar8 = &DAT_00c16011;
    }
    puVar9 = (uint *)(puVar8 + 0x3e);
  }
  *puVar9 = *puVar9 | (uint)(1L << (uVar10 & 0x3f));
LAB__text__00622924:
  if (*(char *)(param_1 + 0x10) == '\0' && *(char *)(param_1 + 0x11) == '\0') {
    lVar7 = FUN__text__0060e7c4(param_1);
    if (lVar7 != 0) {
      FUN__text__0060e7c4(param_1);
      FUN__text__006305fc();
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
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


