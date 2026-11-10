/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0061bd50; name: FUN_.text__0061bd50
 */


char FUN__text__0061bd50(long param_1,char param_2)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  char cVar8;
  char *pcVar9;
  char *pcVar10;
  
  uVar5 = tpidr_el0;
  bVar4 = (byte)((uint)uVar5 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0x16);
  while (*pbVar1 == 0x4f) {
    cVar8 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar3) {
      *pbVar1 = bVar4;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB__text__0061be04;
  }
  pcVar9 = (char *)(param_1 + 0x17);
  ClearExclusiveLocal();
  do {
    cVar8 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar9,0x10);
    if (bVar3) {
      *pcVar9 = *pcVar9 + '\x01';
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar1 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x14));
        while (*pbVar1 == 0x4f) {
          cVar8 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar3) {
            *pbVar1 = bVar4;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB__text__0061bdf4;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar3) {
      *pbVar1 = bVar4;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB__text__0061bdf4:
  do {
    cVar8 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar9,0x10);
    if (bVar3) {
      *pcVar9 = *pcVar9 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB__text__0061be04:
  if (param_2 != '\a') {
    if (param_2 == '\x05') {
      if (*(char *)(param_1 + 0x10) != '\0') {
        FUN__text__0060e7c4(param_1);
        FUN__text__006306b4();
        *(undefined1 *)(param_1 + 0x10) = 0;
      }
      lVar6 = FUN__text__0060e7f8(param_1);
      if (*(char *)(lVar6 + 0xc) == '\0') {
        pcVar9 = (char *)(*(long *)(param_1 + 8) + 0xd8);
        uVar7 = FUN__text__0060e994(param_1,pcVar9);
        pcVar10 = &DAT_00c15f6e;
        while ((uVar7 & 1) != 0) {
          if (*pcVar9 == '\x05') goto LAB__text__0061bffc;
          pcVar9 = pcVar9 + (ulong)*(ushort *)(pcVar9 + 1) + 3;
          uVar7 = FUN__text__0060e994(param_1,pcVar9);
        }
        goto LAB__text__0061c000;
      }
      cVar8 = DAT_00c15f6e;
      if (*(char *)(param_1 + 0x10) != '\0' || *(char *)(param_1 + 0x11) != '\0')
      goto LAB__text__0061c040;
    }
    else {
      if (param_2 != '\x03') {
        cVar8 = '\0';
        goto LAB__text__0061c040;
      }
      if (*(char *)(param_1 + 0x10) != '\0') {
        FUN__text__0060e7c4(param_1);
        FUN__text__006306b4();
        *(undefined1 *)(param_1 + 0x10) = 0;
      }
      lVar6 = FUN__text__0060e7f8(param_1);
      if (*(char *)(lVar6 + 0xc) == '\0') {
        pcVar9 = (char *)(*(long *)(param_1 + 8) + 0xd8);
        uVar7 = FUN__text__0060e994(param_1,pcVar9);
        pcVar10 = &DAT_00c15eff;
        while ((uVar7 & 1) != 0) {
          if (*pcVar9 == '\x03') {
            pcVar10 = pcVar9 + 3;
            break;
          }
          pcVar9 = pcVar9 + (ulong)*(ushort *)(pcVar9 + 1) + 3;
          uVar7 = FUN__text__0060e994(param_1,pcVar9);
        }
        cVar8 = pcVar10[4];
        if (*(char *)(param_1 + 0x10) != '\0' || *(char *)(param_1 + 0x11) != '\0')
        goto LAB__text__0061c040;
      }
      else {
        cVar8 = DAT_00c15f03;
        if (*(char *)(param_1 + 0x10) != '\0' || *(char *)(param_1 + 0x11) != '\0')
        goto LAB__text__0061c040;
      }
    }
    goto LAB__text__0061c014;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN__text__0060e7c4(param_1);
    FUN__text__006306b4();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  lVar6 = FUN__text__0060e7f8(param_1);
  if (*(char *)(lVar6 + 0xc) != '\0') {
    cVar8 = DAT_00c15fb8;
    if (*(char *)(param_1 + 0x10) != '\0' || *(char *)(param_1 + 0x11) != '\0')
    goto LAB__text__0061c040;
    goto LAB__text__0061c014;
  }
  pcVar9 = (char *)(*(long *)(param_1 + 8) + 0xd8);
  uVar7 = FUN__text__0060e994(param_1,pcVar9);
  pcVar10 = &DAT_00c15fb8;
  while ((uVar7 & 1) != 0) {
    if (*pcVar9 == '\a') goto LAB__text__0061bffc;
    pcVar9 = pcVar9 + (ulong)*(ushort *)(pcVar9 + 1) + 3;
    uVar7 = FUN__text__0060e994(param_1,pcVar9);
  }
LAB__text__0061c000:
  cVar8 = *pcVar10;
  if (*(char *)(param_1 + 0x10) != '\0' || *(char *)(param_1 + 0x11) != '\0')
  goto LAB__text__0061c040;
LAB__text__0061c014:
  lVar6 = FUN__text__0060e7c4(param_1);
  if (lVar6 != 0) {
    FUN__text__0060e7c4(param_1);
    FUN__text__006305fc();
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
LAB__text__0061c040:
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
  return cVar8;
LAB__text__0061bffc:
  pcVar10 = pcVar9 + 3;
  goto LAB__text__0061c000;
}


