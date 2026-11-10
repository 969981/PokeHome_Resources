/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cb660; name: FUN_.text__005cb660
 */


long FUN__text__005cb660(long param_1)

{
  byte *pbVar1;
  char *pcVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  
  uVar7 = tpidr_el0;
  bVar6 = (byte)((uint)uVar7 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0xe2);
  while (*pbVar1 == 0x4f) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = bVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB__text__005cb714;
  }
  pcVar2 = (char *)(param_1 + 0xe3);
  ClearExclusiveLocal();
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar5) {
      *pcVar2 = *pcVar2 + '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar1 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe0));
        while (*pbVar1 == 0x4f) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar5) {
            *pbVar1 = bVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB__text__005cb704;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = bVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__005cb704:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar5) {
      *pcVar2 = *pcVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__005cb714:
  plVar11 = *(long **)(param_1 + 0x120);
  plVar3 = *(long **)(param_1 + 0x128);
  if (plVar11 == plVar3) {
LAB__text__005cb770:
    plVar11 = *(long **)(param_1 + 0xf0);
    plVar3 = *(long **)(param_1 + 0xf8);
    if (plVar11 != plVar3) {
      do {
        plVar8 = (long *)(*(code *)**(undefined8 **)(*plVar11 + 8))();
        plVar9 = (long *)FUN__text__005cb828();
        if (plVar9 == plVar8) goto LAB__text__005cb7c4;
        do {
          plVar8 = (long *)*plVar8;
        } while (plVar8 != plVar9 && plVar8 != (long *)0x0);
        if (plVar8 != (long *)0x0) goto LAB__text__005cb7c4;
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar3);
      plVar11 = plVar3;
LAB__text__005cb7c4:
      if (plVar11 != *(long **)(param_1 + 0xf8)) goto LAB__text__005cb7d0;
    }
    lVar10 = 0;
  }
  else {
    do {
      plVar8 = (long *)(*(code *)**(undefined8 **)(*plVar11 + 8))();
      plVar9 = (long *)FUN__text__005cb828();
      if (plVar9 == plVar8) goto LAB__text__005cb764;
      do {
        plVar8 = (long *)*plVar8;
      } while (plVar8 != plVar9 && plVar8 != (long *)0x0);
      if (plVar8 != (long *)0x0) goto LAB__text__005cb764;
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar3);
    plVar11 = plVar3;
LAB__text__005cb764:
    if (plVar11 == *(long **)(param_1 + 0x128)) goto LAB__text__005cb770;
LAB__text__005cb7d0:
    lVar10 = 0;
    if (*plVar11 != 0) {
      lVar10 = *plVar11 + -0x48;
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 0x4f;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(param_1 + 0xe3) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe0));
  }
  return lVar10;
}


