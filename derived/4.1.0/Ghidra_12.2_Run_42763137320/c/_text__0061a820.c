/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0061a820; name: FUN_.text__0061a820
 */


bool FUN__text__0061a820(long param_1,uint param_2)

{
  byte *pbVar1;
  char *pcVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  undefined8 uVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  
  uVar6 = tpidr_el0;
  bVar5 = (byte)((uint)uVar6 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0x16);
  while (*pbVar1 == 0x4f) {
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar7) {
      *pbVar1 = bVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB__text__0061a8e4;
  }
  pcVar2 = (char *)(param_1 + 0x17);
  ClearExclusiveLocal();
  do {
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar7) {
      *pcVar2 = *pcVar2 + '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar1 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x14));
        while (*pbVar1 == 0x4f) {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar7) {
            *pbVar1 = bVar5;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB__text__0061a8d4;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar7) {
      *pbVar1 = bVar5;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__0061a8d4:
  do {
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar7) {
      *pcVar2 = *pcVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__0061a8e4:
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN__text__0060e7c4(param_1);
    FUN__text__006306b4();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  lVar8 = FUN__text__0060e7f8(param_1);
  if (*(char *)(lVar8 + 0xc) == '\0') {
    pcVar2 = (char *)(*(long *)(param_1 + 8) + 0xd8);
    uVar9 = FUN__text__0060e994(param_1,pcVar2);
    while (((uVar9 & 1) != 0 && (*pcVar2 != '\x03'))) {
      pcVar2 = pcVar2 + (ulong)*(ushort *)(pcVar2 + 1) + 3;
      uVar9 = FUN__text__0060e994(param_1,pcVar2);
    }
  }
  if ((param_2 & 0xff) < 0x40) {
    if (*(char *)(param_1 + 0x10) != '\0') {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl();
    }
    lVar8 = FUN__text__0060e7f8(param_1);
    if (*(char *)(lVar8 + 0xc) == '\0') {
      pcVar2 = (char *)(*(long *)(param_1 + 8) + 0xd8);
      uVar9 = FUN__text__0060e994(param_1,pcVar2);
      pcVar10 = &DAT_00c15eff;
      while ((uVar9 & 1) != 0) {
        if (*pcVar2 == '\x03') {
          pcVar10 = pcVar2 + 3;
          break;
        }
        pcVar2 = pcVar2 + (ulong)*(ushort *)(pcVar2 + 1) + 3;
        uVar9 = FUN__text__0060e994(param_1,pcVar2);
      }
    }
    else {
      pcVar10 = &DAT_00c15eff;
    }
    bVar5 = pcVar10[(ulong)((param_2 & 0xff) >> 3) + 0x30];
    if (*(char *)(param_1 + 0x10) == '\0' && *(char *)(param_1 + 0x11) == '\0') {
      lVar8 = FUN__text__0060e7c4(param_1);
      if (lVar8 != 0) {
        FUN__text__0060e7c4(param_1);
        FUN__text__006305fc();
      }
      *(undefined1 *)(param_1 + 0x10) = 1;
    }
    bVar7 = ((uint)bVar5 & 1 << (ulong)(param_2 & 7)) != 0;
  }
  else {
    bVar7 = false;
  }
  do {
    cVar4 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar3) {
      *pbVar1 = 0x4f;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(param_1 + 0x17) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x14));
  }
  return bVar7;
}


