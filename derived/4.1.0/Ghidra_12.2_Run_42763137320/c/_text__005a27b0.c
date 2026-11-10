/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a27b0; name: FUN_.text__005a27b0
 */


void FUN__text__005a27b0(long param_1,long *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  FUN__text__005a2920();
  (**(code **)(*param_2 + 0x40))(param_2,*(undefined8 *)(param_1 + 0x68));
  lVar9 = param_2[0xe];
  if (lVar9 == 0) {
    FUN__text__005a5c7c(*(undefined8 *)(param_1 + 0x250),param_2);
LAB__text__005a28f4:
                    /* WARNING: Could not recover jumptable at 0x005a2918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x50))(param_2,param_1);
    return;
  }
  uVar7 = tpidr_el0;
  bVar6 = (byte)((uint)uVar7 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(lVar9 + 0x146);
  while (*pbVar1 == 0x4f) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = bVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB__text__005a28a4;
  }
  pcVar2 = (char *)(lVar9 + 0x147);
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
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x144));
        while (*pbVar1 == 0x4f) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar5) {
            *pbVar1 = bVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB__text__005a2894;
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
LAB__text__005a2894:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar5) {
      *pcVar2 = *pcVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__005a28a4:
  lVar8 = *(long *)(param_1 + 0x70);
  lVar3 = lVar8;
  if (*(long *)(lVar8 + 0x120) != 0) {
    lVar3 = *(long *)(lVar8 + 0x120);
  }
  if (*(long *)(lVar8 + 0x128) != 0) {
    lVar8 = *(long *)(lVar8 + 0x128);
  }
  FUN__text__005e75a4(lVar9,lVar3,lVar8);
  *(ulong *)(lVar9 + 0x138) = *(ulong *)(lVar9 + 0x138) & 0xfffffffffffffffe;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = 0x4f;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(lVar9 + 0x147) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x144));
  }
  goto LAB__text__005a28f4;
}


