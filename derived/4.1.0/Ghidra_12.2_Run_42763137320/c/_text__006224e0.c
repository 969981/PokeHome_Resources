/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006224e0; name: FUN_.text__006224e0
 */


void FUN__text__006224e0(undefined4 param_1,long param_2,char param_3)

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
  
  uVar5 = tpidr_el0;
  bVar4 = (byte)((uint)uVar5 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_2 + 0x16);
  while (*pbVar1 == 0x4f) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar3) {
      *pbVar1 = bVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB__text__006225a4;
  }
  pcVar8 = (char *)(param_2 + 0x17);
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
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x14));
        while (*pbVar1 == 0x4f) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar3) {
            *pbVar1 = bVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB__text__00622594;
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
LAB__text__00622594:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar8,0x10);
    if (bVar3) {
      *pcVar8 = *pcVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB__text__006225a4:
  if (param_3 == '\x03') {
    if (*(char *)(param_2 + 0x10) != '\0') {
      FUN__text__0060e7c4(param_2);
      FUN__text__006306b4();
      *(undefined1 *)(param_2 + 0x10) = 0;
    }
    lVar6 = FUN__text__0060e7f8(param_2);
    if (*(char *)(lVar6 + 0xc) == '\0') {
      pcVar8 = (char *)(*(long *)(param_2 + 8) + 0xd8);
      uVar7 = FUN__text__0060e994(param_2,pcVar8);
      pcVar9 = (char *)0xc1615c;
      while ((uVar7 & 1) != 0) {
        if (*pcVar8 == '\x03') goto LAB__text__006226cc;
        pcVar8 = pcVar8 + (ulong)*(ushort *)(pcVar8 + 1) + 3;
        uVar7 = FUN__text__0060e994(param_2,pcVar8);
      }
    }
    else {
      pcVar9 = (char *)0xc1615c;
    }
  }
  else {
    if (param_3 != '\x01') goto LAB__text__00622710;
    if (*(char *)(param_2 + 0x10) != '\0') {
      FUN__text__0060e7c4(param_2);
      FUN__text__006306b4();
      *(undefined1 *)(param_2 + 0x10) = 0;
    }
    lVar6 = FUN__text__0060e7f8(param_2);
    if (*(char *)(lVar6 + 0xc) == '\0') {
      pcVar8 = (char *)(*(long *)(param_2 + 8) + 0xd8);
      uVar7 = FUN__text__0060e994(param_2,pcVar8);
      pcVar9 = (char *)0xc160d5;
      while ((uVar7 & 1) != 0) {
        if (*pcVar8 == '\x01') goto LAB__text__006226cc;
        pcVar8 = pcVar8 + (ulong)*(ushort *)(pcVar8 + 1) + 3;
        uVar7 = FUN__text__0060e994(param_2,pcVar8);
      }
    }
    else {
      pcVar9 = (char *)0xc160d5;
    }
  }
LAB__text__006226d0:
  *(undefined4 *)(pcVar9 + 0x23) = param_1;
  if (*(char *)(param_2 + 0x10) == '\0' && *(char *)(param_2 + 0x11) == '\0') {
    lVar6 = FUN__text__0060e7c4(param_2);
    if (lVar6 != 0) {
      FUN__text__0060e7c4(param_2);
      FUN__text__006305fc();
    }
    *(char *)(param_2 + 0x10) = '\x01';
  }
LAB__text__00622710:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar3) {
      *pbVar1 = 0x4f;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(param_2 + 0x17) == '\0') {
    return;
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x14));
  return;
LAB__text__006226cc:
  pcVar9 = pcVar8 + 3;
  goto LAB__text__006226d0;
}


