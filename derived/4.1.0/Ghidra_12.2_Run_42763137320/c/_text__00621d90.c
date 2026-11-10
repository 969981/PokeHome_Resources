/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00621d90; name: FUN_.text__00621d90
 */


/* WARNING: Removing unreachable block (ram,0x00621f0c) */

void FUN__text__00621d90(long param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  undefined8 uVar6;
  byte bVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  int iVar13;
  int iVar12;
  char *pcVar14;
  
  uVar6 = tpidr_el0;
  bVar5 = (byte)((uint)uVar6 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0x16);
  while (*pbVar1 == 0x4f) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = bVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB__text__00621e54;
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
          if (cVar3 == '\0') goto LAB__text__00621e44;
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
LAB__text__00621e44:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar4) {
      *pcVar2 = *pcVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB__text__00621e54:
  if (param_2 < 0x108) {
    iVar13 = 1;
    iVar12 = 1;
    uVar11 = (ulong)(param_2 >> 3);
    param_2 = param_2 & 7;
    cVar3 = *(char *)(param_1 + 0x10);
  }
  else {
    param_2 = param_2 - 0x108;
    if (param_2 < 0x60) {
      iVar13 = 2;
      iVar12 = 2;
      uVar11 = (ulong)(param_2 >> 3);
      param_2 = param_2 & 7;
      cVar3 = *(char *)(param_1 + 0x10);
    }
    else {
      iVar13 = 0;
      iVar12 = 0;
      uVar11 = 0;
      param_2 = 0;
      cVar3 = *(char *)(param_1 + 0x10);
    }
  }
  if (cVar3 != '\0') {
    FUN__text__0060e7c4(param_1);
    FUN__text__006306b4();
    *(undefined1 *)(param_1 + 0x10) = 0;
    iVar12 = iVar13;
  }
  if (iVar12 == 2) {
    lVar8 = FUN__text__0060e7f8(param_1);
    if (*(char *)(lVar8 + 0xc) == '\0') {
      pcVar2 = (char *)(*(long *)(param_1 + 8) + 0xd8);
      uVar9 = FUN__text__0060e994(param_1,pcVar2);
      pcVar14 = &DAT_00c15fb8;
      while ((uVar9 & 1) != 0) {
        if (*pcVar2 == '\a') {
          pcVar14 = pcVar2 + 3;
          break;
        }
        pcVar2 = pcVar2 + (ulong)*(ushort *)(pcVar2 + 1) + 3;
        uVar9 = FUN__text__0060e994(param_1,pcVar2);
      }
    }
    else {
      pcVar14 = &DAT_00c15fb8;
    }
    pbVar10 = (byte *)(pcVar14 + uVar11 + 10);
LAB__text__00621fc8:
    bVar7 = (byte)(1 << (ulong)param_2);
    bVar5 = bVar7 | *pbVar10;
    if ((param_3 & 1) == 0) {
      bVar5 = *pbVar10 & (bVar7 ^ 0xff);
    }
    *pbVar10 = bVar5;
    if (*(char *)(param_1 + 0x10) != '\0') goto LAB__text__00622024;
  }
  else if (iVar12 == 1) {
    lVar8 = FUN__text__0060e7f8(param_1);
    if (*(char *)(lVar8 + 0xc) == '\0') {
      pcVar2 = (char *)(*(long *)(param_1 + 8) + 0xd8);
      uVar9 = FUN__text__0060e994(param_1,pcVar2);
      pcVar14 = &DAT_00c15fb8;
      while ((uVar9 & 1) != 0) {
        if (*pcVar2 == '\a') {
          pcVar14 = pcVar2 + 3;
          break;
        }
        pcVar2 = pcVar2 + (ulong)*(ushort *)(pcVar2 + 1) + 3;
        uVar9 = FUN__text__0060e994(param_1,pcVar2);
      }
    }
    else {
      pcVar14 = &DAT_00c15fb8;
    }
    pbVar10 = (byte *)(pcVar14 + uVar11 + 0x16);
    goto LAB__text__00621fc8;
  }
  if (*(char *)(param_1 + 0x11) == '\0') {
    lVar8 = FUN__text__0060e7c4(param_1);
    if (lVar8 != 0) {
      FUN__text__0060e7c4(param_1);
      FUN__text__006305fc();
    }
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
LAB__text__00622024:
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


