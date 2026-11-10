/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006104d0; name: FUN_.text__006104d0
 */


undefined1 FUN__text__006104d0(long param_1)

{
  byte *pbVar1;
  char *pcVar2;
  bool bVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  char cVar8;
  undefined1 uVar9;
  
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
    if (cVar8 == '\0') goto LAB__text__00610584;
  }
  pcVar2 = (char *)(param_1 + 0x17);
  ClearExclusiveLocal();
  do {
    cVar8 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar3) {
      *pcVar2 = *pcVar2 + '\x01';
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
          if (cVar8 == '\0') goto LAB__text__00610574;
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
LAB__text__00610574:
  do {
    cVar8 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar3) {
      *pcVar2 = *pcVar2 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB__text__00610584:
  if (*(char *)(param_1 + 0x10) != '\0') {
    FUN__text__0060e7c4(param_1);
    FUN__text__006306b4();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  lVar6 = FUN__text__0060e7f8(param_1);
  if (*(char *)(lVar6 + 0xc) == '\0') {
    lVar6 = FUN__text__0060e7f8(param_1);
    cVar8 = *(char *)(param_1 + 0x10);
    if (*(char *)(lVar6 + 0x88) != '\0') goto LAB__text__006105c0;
LAB__text__0061060c:
    if (cVar8 != '\0') {
LAB__text__006106cc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl();
    }
    lVar6 = FUN__text__0060e7f8(param_1);
    if (*(char *)(lVar6 + 0xc) == '\0') {
      puVar7 = (undefined *)FUN__text__0060e7f8(param_1);
    }
    else {
      puVar7 = &DAT_00c15db2;
    }
    uVar9 = puVar7[0xb3];
    if (*(char *)(param_1 + 0x10) != '\0' || *(char *)(param_1 + 0x11) != '\0')
    goto LAB__text__00610694;
  }
  else {
    cVar8 = *(char *)(param_1 + 0x10);
    if (DAT_00c15e3a == '\0') goto LAB__text__0061060c;
LAB__text__006105c0:
    if (cVar8 != '\0') goto LAB__text__006106cc;
    lVar6 = FUN__text__0060e7f8(param_1);
    if (*(char *)(lVar6 + 0xc) == '\0') {
      lVar6 = FUN__text__0060e7f8(param_1);
      uVar9 = *(undefined1 *)(lVar6 + 0x8b);
      if (*(char *)(param_1 + 0x10) != '\0' || *(char *)(param_1 + 0x11) != '\0')
      goto LAB__text__00610694;
    }
    else {
      uVar9 = DAT_00c15e3d;
      if (*(char *)(param_1 + 0x10) != '\0' || *(char *)(param_1 + 0x11) != '\0')
      goto LAB__text__00610694;
    }
  }
  lVar6 = FUN__text__0060e7c4(param_1);
  if (lVar6 != 0) {
    FUN__text__0060e7c4(param_1);
    FUN__text__006305fc();
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
LAB__text__00610694:
  do {
    cVar8 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar3) {
      *pbVar1 = 0x4f;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(param_1 + 0x17) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x14));
  }
  return uVar9;
}


