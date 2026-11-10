/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0061b1f0; name: FUN_.text__0061b1f0
 */


char FUN__text__0061b1f0(long param_1)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  char cVar9;
  
  uVar6 = tpidr_el0;
  bVar5 = (byte)((uint)uVar6 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0x16);
  while (*pbVar1 == 0x4f) {
    cVar9 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = bVar5;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 == '\0') goto LAB__text__0061b2a4;
  }
  pcVar2 = (char *)(param_1 + 0x17);
  ClearExclusiveLocal();
  do {
    cVar9 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar4) {
      *pcVar2 = *pcVar2 + '\x01';
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar1 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x14));
        while (*pbVar1 == 0x4f) {
          cVar9 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar4) {
            *pbVar1 = bVar5;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 == '\0') goto LAB__text__0061b294;
        }
      } while( true );
    }
    cVar9 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = bVar5;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
LAB__text__0061b294:
  do {
    cVar9 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar4) {
      *pcVar2 = *pcVar2 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
LAB__text__0061b2a4:
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN__text__0060e7c4(param_1);
    FUN__text__006306b4();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  lVar7 = FUN__text__0060e7f8(param_1);
  if (*(char *)(lVar7 + 0xc) == '\0') {
    pcVar2 = (char *)(*(long *)(param_1 + 8) + 0xd8);
    uVar8 = FUN__text__0060e994(param_1,pcVar2);
    while ((uVar8 & 1) != 0) {
      if (*pcVar2 == '\x06') {
        cVar9 = pcVar2[3];
        if (*(char *)(param_1 + 0x10) != '\0' || *(char *)(param_1 + 0x11) != '\0')
        goto LAB__text__0061b370;
        goto LAB__text__0061b34c;
      }
      pcVar2 = pcVar2 + (ulong)*(ushort *)(pcVar2 + 1) + 3;
      uVar8 = FUN__text__0060e994(param_1,pcVar2);
    }
    cVar9 = DAT_00c15ff8;
    if (*(char *)(param_1 + 0x10) != '\0' || *(char *)(param_1 + 0x11) != '\0')
    goto LAB__text__0061b370;
  }
  else {
    cVar9 = DAT_00c15ff8;
    if (*(char *)(param_1 + 0x10) != '\0' || *(char *)(param_1 + 0x11) != '\0')
    goto LAB__text__0061b370;
  }
LAB__text__0061b34c:
  lVar7 = FUN__text__0060e7c4(param_1);
  if (lVar7 != 0) {
    FUN__text__0060e7c4(param_1);
    FUN__text__006305fc();
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
LAB__text__0061b370:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 0x4f;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(param_1 + 0x17) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x14));
  }
  return cVar9;
}


