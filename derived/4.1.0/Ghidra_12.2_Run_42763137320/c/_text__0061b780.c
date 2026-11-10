/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0061b780; name: FUN_.text__0061b780
 */


byte FUN__text__0061b780(long param_1,uint param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  byte bVar9;
  ulong uVar10;
  int iVar12;
  int iVar11;
  char *pcVar13;
  
  uVar5 = tpidr_el0;
  bVar9 = (byte)((uint)uVar5 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0x16);
  while (*pbVar1 == 0x4f) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = bVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB__text__0061b844;
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
            *pbVar1 = bVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB__text__0061b834;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = bVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB__text__0061b834:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar4) {
      *pcVar2 = *pcVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB__text__0061b844:
  if (param_2 < 0x108) {
    iVar12 = 1;
    iVar11 = 1;
    uVar10 = (ulong)(param_2 >> 3);
    param_2 = param_2 & 7;
    cVar3 = *(char *)(param_1 + 0x10);
  }
  else {
    param_2 = param_2 - 0x108;
    if (param_2 < 0x60) {
      iVar12 = 2;
      iVar11 = 2;
      uVar10 = (ulong)(param_2 >> 3);
      param_2 = param_2 & 7;
      cVar3 = *(char *)(param_1 + 0x10);
    }
    else {
      iVar12 = 0;
      iVar11 = 0;
      uVar10 = 0;
      param_2 = 0;
      cVar3 = *(char *)(param_1 + 0x10);
    }
  }
  if (cVar3 != '\0') {
    FUN__text__0060e7c4(param_1);
    FUN__text__006306b4();
    *(undefined1 *)(param_1 + 0x10) = 0;
    iVar11 = iVar12;
  }
  if (iVar11 == 2) {
    lVar6 = FUN__text__0060e7f8(param_1);
    if (*(char *)(lVar6 + 0xc) == '\0') {
      pcVar2 = (char *)(*(long *)(param_1 + 8) + 0xd8);
      uVar7 = FUN__text__0060e994(param_1,pcVar2);
      pcVar13 = &DAT_00c15fb8;
      while ((uVar7 & 1) != 0) {
        if (*pcVar2 == '\a') {
          pcVar13 = pcVar2 + 3;
          break;
        }
        pcVar2 = pcVar2 + (ulong)*(ushort *)(pcVar2 + 1) + 3;
        uVar7 = FUN__text__0060e994(param_1,pcVar2);
      }
    }
    else {
      pcVar13 = &DAT_00c15fb8;
    }
    pbVar8 = (byte *)(pcVar13 + uVar10 + 10);
LAB__text__0061b9c8:
    bVar9 = *pbVar8 >> (ulong)param_2 & 1;
    if (*(char *)(param_1 + 0x10) != '\0' || *(char *)(param_1 + 0x11) != '\0')
    goto LAB__text__0061ba10;
  }
  else {
    if (iVar11 == 1) {
      lVar6 = FUN__text__0060e7f8(param_1);
      if (*(char *)(lVar6 + 0xc) == '\0') {
        pcVar2 = (char *)(*(long *)(param_1 + 8) + 0xd8);
        uVar7 = FUN__text__0060e994(param_1,pcVar2);
        pcVar13 = &DAT_00c15fb8;
        while ((uVar7 & 1) != 0) {
          if (*pcVar2 == '\a') {
            pcVar13 = pcVar2 + 3;
            break;
          }
          pcVar2 = pcVar2 + (ulong)*(ushort *)(pcVar2 + 1) + 3;
          uVar7 = FUN__text__0060e994(param_1,pcVar2);
        }
      }
      else {
        pcVar13 = &DAT_00c15fb8;
      }
      pbVar8 = (byte *)(pcVar13 + uVar10 + 0x16);
      goto LAB__text__0061b9c8;
    }
    bVar9 = 0;
    if (*(char *)(param_1 + 0x10) != '\0' || *(char *)(param_1 + 0x11) != '\0')
    goto LAB__text__0061ba10;
  }
  lVar6 = FUN__text__0060e7c4(param_1);
  if (lVar6 != 0) {
    FUN__text__0060e7c4(param_1);
    FUN__text__006305fc();
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
LAB__text__0061ba10:
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
  return bVar9;
}


