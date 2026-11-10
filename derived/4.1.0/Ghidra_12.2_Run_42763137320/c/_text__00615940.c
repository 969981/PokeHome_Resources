/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00615940; name: FUN_.text__00615940
 */


undefined2 FUN__text__00615940(long param_1)

{
  byte *pbVar1;
  char *pcVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  short sVar11;
  
  uVar8 = tpidr_el0;
  bVar7 = (byte)((uint)uVar8 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0x16);
  while (*pbVar1 == 0x4f) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = bVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB__text__006159f4;
  }
  pcVar2 = (char *)(param_1 + 0x17);
  ClearExclusiveLocal();
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar6) {
      *pcVar2 = *pcVar2 + '\x01';
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar1 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x14));
        while (*pbVar1 == 0x4f) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar6) {
            *pbVar1 = bVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB__text__006159e4;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = bVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB__text__006159e4:
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar6) {
      *pcVar2 = *pcVar2 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB__text__006159f4:
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN__text__0060e7c4(param_1);
    FUN__text__006306b4();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  lVar9 = FUN__text__0060e7f8(param_1);
  if (*(char *)(lVar9 + 0xc) == '\0') {
    puVar10 = (undefined *)FUN__text__0060e7f8(param_1);
    cVar5 = *(char *)(param_1 + 0x10);
  }
  else {
    puVar10 = &DAT_00c15db2;
    cVar5 = *(char *)(param_1 + 0x10);
  }
  if (cVar5 != '\0') {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar4 = *(undefined2 *)(puVar10 + 0x22);
  lVar9 = FUN__text__0060e7f8(param_1);
  if (*(char *)(lVar9 + 0xc) == '\0') {
    lVar9 = FUN__text__0060e7f8(param_1);
    sVar11 = *(short *)(lVar9 + 0xd);
    if (*(char *)(param_1 + 0x10) != '\0' || *(char *)(param_1 + 0x11) != '\0')
    goto LAB__text__00615ab4;
  }
  else {
    sVar11 = DAT_00c15dbf;
    if (*(char *)(param_1 + 0x10) != '\0' || *(char *)(param_1 + 0x11) != '\0')
    goto LAB__text__00615ab4;
  }
  lVar9 = FUN__text__0060e7c4(param_1);
  if (lVar9 != 0) {
    FUN__text__0060e7c4(param_1);
    FUN__text__006305fc();
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
LAB__text__00615ab4:
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = 0x4f;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(param_1 + 0x17) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x14));
  }
  uVar3 = 0;
  if (sVar11 != 0x19e) {
    uVar3 = uVar4;
  }
  return uVar3;
}


