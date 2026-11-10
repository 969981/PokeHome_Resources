/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0061a140; name: FUN_.text__0061a140
 */


bool FUN__text__0061a140(long param_1,uint param_2)

{
  byte *pbVar1;
  char *pcVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  char cVar10;
  uint uVar11;
  char *pcVar12;
  
  uVar6 = tpidr_el0;
  bVar4 = (byte)((uint)uVar6 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0x16);
  while (*pbVar1 == 0x4f) {
    cVar10 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar7) {
      *pbVar1 = bVar4;
      cVar10 = ExclusiveMonitorsStatus();
    }
    if (cVar10 == '\0') goto LAB__text__0061a204;
  }
  pcVar2 = (char *)(param_1 + 0x17);
  ClearExclusiveLocal();
  do {
    cVar10 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar7) {
      *pcVar2 = *pcVar2 + '\x01';
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar1 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x14));
        while (*pbVar1 == 0x4f) {
          cVar10 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar7) {
            *pbVar1 = bVar4;
            cVar10 = ExclusiveMonitorsStatus();
          }
          if (cVar10 == '\0') goto LAB__text__0061a1f4;
        }
      } while( true );
    }
    cVar10 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar7) {
      *pbVar1 = bVar4;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
LAB__text__0061a1f4:
  do {
    cVar10 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar7) {
      *pcVar2 = *pcVar2 + -1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
LAB__text__0061a204:
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN__text__0060e7c4(param_1);
    FUN__text__006306b4();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  lVar8 = FUN__text__0060e7f8(param_1);
  if (*(char *)(lVar8 + 0xc) == '\0') {
    pcVar2 = (char *)(*(long *)(param_1 + 8) + 0xd8);
    uVar9 = FUN__text__0060e994(param_1,pcVar2);
    while (((uVar9 & 1) != 0 && (*pcVar2 != '\x05'))) {
      pcVar2 = pcVar2 + (ulong)*(ushort *)(pcVar2 + 1) + 3;
      uVar9 = FUN__text__0060e994(param_1,pcVar2);
    }
  }
  cVar10 = *(char *)(param_1 + 0x10);
  if ((cVar10 == '\0') && (*(char *)(param_1 + 0x11) == '\0')) {
    lVar8 = FUN__text__0060e7c4(param_1);
    if (lVar8 != 0) {
      FUN__text__0060e7c4(param_1);
      FUN__text__006305fc();
    }
    cVar10 = '\x01';
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  uVar11 = param_2 >> 3 & 0x1fff;
  uVar5 = uVar11 / 0x19 & 0xff;
  param_2 = param_2 + (uVar11 / 0x19) * -200;
  uVar11 = param_2 >> 3 & 0x1f;
  if (uVar5 == 1) {
    if (cVar10 != '\0') {
      FUN__text__0060e7c4(param_1);
      FUN__text__006306b4();
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
    lVar8 = FUN__text__0060e7f8(param_1);
    if (*(char *)(lVar8 + 0xc) == '\0') {
      pcVar2 = (char *)(*(long *)(param_1 + 8) + 0xd8);
      uVar9 = FUN__text__0060e994(param_1,pcVar2);
      while (((uVar9 & 1) != 0 && (*pcVar2 != '\x05'))) {
        pcVar2 = pcVar2 + (ulong)*(ushort *)(pcVar2 + 1) + 3;
        uVar9 = FUN__text__0060e994(param_1,pcVar2);
      }
    }
    if ((*(char *)(param_1 + 0x10) == '\0') && (*(char *)(param_1 + 0x11) == '\0')) {
      lVar8 = FUN__text__0060e7c4(param_1);
      if (lVar8 != 0) {
        FUN__text__0060e7c4(param_1);
        FUN__text__006305fc();
      }
      *(undefined1 *)(param_1 + 0x10) = 1;
      if ((param_2 & 0xff) < 0x68) {
LAB__text__0061a454:
        FUN__text__0060e7c4(param_1);
        FUN__text__006306b4();
        *(undefined1 *)(param_1 + 0x10) = 0;
LAB__text__0061a464:
        lVar8 = FUN__text__0060e7f8(param_1);
        if (*(char *)(lVar8 + 0xc) == '\0') {
          pcVar2 = (char *)(*(long *)(param_1 + 8) + 0xd8);
          uVar9 = FUN__text__0060e994(param_1,pcVar2);
          pcVar12 = &DAT_00c15f6e;
          while ((uVar9 & 1) != 0) {
            if (*pcVar2 == '\x05') {
              pcVar12 = pcVar2 + 3;
              break;
            }
            pcVar2 = pcVar2 + (ulong)*(ushort *)(pcVar2 + 1) + 3;
            uVar9 = FUN__text__0060e994(param_1,pcVar2);
          }
        }
        else {
          pcVar12 = &DAT_00c15f6e;
        }
        bVar4 = pcVar12[(ulong)uVar11 + 0x3d];
        uVar11 = (uint)bVar4;
        if (*(char *)(param_1 + 0x10) == '\0' && *(char *)(param_1 + 0x11) == '\0')
        goto LAB__text__0061a568;
        goto LAB__text__0061a588;
      }
    }
    else if ((param_2 & 0xff) < 0x68) {
      if (*(char *)(param_1 + 0x10) != '\0') goto LAB__text__0061a454;
      goto LAB__text__0061a464;
    }
LAB__text__0061a480:
    bVar7 = false;
  }
  else {
    if (uVar5 != 0) goto LAB__text__0061a480;
    if (cVar10 != '\0') {
      FUN__text__0060e7c4(param_1);
      FUN__text__006306b4();
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
    lVar8 = FUN__text__0060e7f8(param_1);
    if (*(char *)(lVar8 + 0xc) == '\0') {
      pcVar2 = (char *)(*(long *)(param_1 + 8) + 0xd8);
      uVar9 = FUN__text__0060e994(param_1,pcVar2);
      while (((uVar9 & 1) != 0 && (*pcVar2 != '\x05'))) {
        pcVar2 = pcVar2 + (ulong)*(ushort *)(pcVar2 + 1) + 3;
        uVar9 = FUN__text__0060e994(param_1,pcVar2);
      }
    }
    if ((*(char *)(param_1 + 0x10) == '\0') && (*(char *)(param_1 + 0x11) == '\0')) {
      lVar8 = FUN__text__0060e7c4(param_1);
      if (lVar8 != 0) {
        FUN__text__0060e7c4(param_1);
        FUN__text__006305fc();
      }
      *(undefined1 *)(param_1 + 0x10) = 1;
LAB__text__0061a41c:
      FUN__text__0060e7c4(param_1);
      FUN__text__006306b4();
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
    else if (*(char *)(param_1 + 0x10) != '\0') goto LAB__text__0061a41c;
    lVar8 = FUN__text__0060e7f8(param_1);
    if (*(char *)(lVar8 + 0xc) == '\0') {
      pcVar2 = (char *)(*(long *)(param_1 + 8) + 0xd8);
      uVar9 = FUN__text__0060e994(param_1,pcVar2);
      pcVar12 = &DAT_00c15f6e;
      while ((uVar9 & 1) != 0) {
        if (*pcVar2 == '\x05') {
          pcVar12 = pcVar2 + 3;
          break;
        }
        pcVar2 = pcVar2 + (ulong)*(ushort *)(pcVar2 + 1) + 3;
        uVar9 = FUN__text__0060e994(param_1,pcVar2);
      }
    }
    else {
      pcVar12 = &DAT_00c15f6e;
    }
    bVar4 = pcVar12[(ulong)uVar11 + 0x20];
    uVar11 = (uint)bVar4;
    if (*(char *)(param_1 + 0x10) == '\0' && *(char *)(param_1 + 0x11) == '\0') {
LAB__text__0061a568:
      uVar11 = (uint)bVar4;
      lVar8 = FUN__text__0060e7c4(param_1);
      if (lVar8 != 0) {
        FUN__text__0060e7c4(param_1);
        FUN__text__006305fc();
      }
      *(undefined1 *)(param_1 + 0x10) = 1;
    }
LAB__text__0061a588:
    bVar7 = (uVar11 & 1 << (ulong)(param_2 & 7)) != 0;
  }
  do {
    cVar10 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar3) {
      *pbVar1 = 0x4f;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(param_1 + 0x17) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x14));
  }
  return bVar7;
}


