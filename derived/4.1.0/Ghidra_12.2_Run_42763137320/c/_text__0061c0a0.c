/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0061c0a0; name: FUN_.text__0061c0a0
 */


undefined4 FUN__text__0061c0a0(long param_1,char param_2)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 uVar10;
  
  uVar5 = tpidr_el0;
  bVar4 = (byte)((uint)uVar5 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0x16);
  while (*pbVar1 == 0x4f) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar3) {
      *pbVar1 = bVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB__text__0061c164;
  }
  pcVar8 = (char *)(param_1 + 0x17);
  ClearExclusiveLocal();
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
    if (bVar3) {
      *pcVar8 = *pcVar8 + '\x01';
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar1 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x14));
        while (*pbVar1 == 0x4f) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar3) {
            *pbVar1 = bVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB__text__0061c154;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar3) {
      *pbVar1 = bVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB__text__0061c154:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
    if (bVar3) {
      *pcVar8 = *pcVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB__text__0061c164:
  if (param_2 == '\x03') {
    if (*(char *)(param_1 + 0x10) != '\0') {
      FUN__text__0060e7c4(param_1);
      FUN__text__006306b4();
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
    lVar6 = FUN__text__0060e7f8(param_1);
    if (*(char *)(lVar6 + 0xc) == '\0') {
      pcVar8 = (char *)(*(long *)(param_1 + 8) + 0xd8);
      uVar7 = FUN__text__0060e994(param_1,pcVar8);
      pcVar9 = &DAT_00c15eff;
      while ((uVar7 & 1) != 0) {
        if (*pcVar8 == '\x03') goto LAB__text__0061c28c;
        pcVar8 = pcVar8 + (ulong)*(ushort *)(pcVar8 + 1) + 3;
        uVar7 = FUN__text__0060e994(param_1,pcVar8);
      }
    }
    else {
      pcVar9 = &DAT_00c15eff;
    }
  }
  else {
    uVar10 = 0;
    if (param_2 != '\x01') goto LAB__text__0061c2d0;
    if (*(char *)(param_1 + 0x10) != '\0') {
      FUN__text__0060e7c4(param_1);
      FUN__text__006306b4();
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
    lVar6 = FUN__text__0060e7f8(param_1);
    if (*(char *)(lVar6 + 0xc) == '\0') {
      pcVar8 = (char *)(*(long *)(param_1 + 8) + 0xd8);
      uVar7 = FUN__text__0060e994(param_1,pcVar8);
      pcVar9 = &DAT_00c15e78;
      while ((uVar7 & 1) != 0) {
        if (*pcVar8 == '\x01') goto LAB__text__0061c28c;
        pcVar8 = pcVar8 + (ulong)*(ushort *)(pcVar8 + 1) + 3;
        uVar7 = FUN__text__0060e994(param_1,pcVar8);
      }
    }
    else {
      pcVar9 = &DAT_00c15e78;
    }
  }
LAB__text__0061c290:
  uVar10 = *(undefined4 *)(pcVar9 + 0x1f);
  if (*(char *)(param_1 + 0x10) == '\0' && *(char *)(param_1 + 0x11) == '\0') {
    lVar6 = FUN__text__0060e7c4(param_1);
    if (lVar6 != 0) {
      FUN__text__0060e7c4(param_1);
      FUN__text__006305fc();
    }
    *(char *)(param_1 + 0x10) = '\x01';
  }
LAB__text__0061c2d0:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar3) {
      *pbVar1 = 0x4f;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(param_1 + 0x17) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x14));
  }
  return uVar10;
LAB__text__0061c28c:
  pcVar9 = pcVar8 + 3;
  goto LAB__text__0061c290;
}


