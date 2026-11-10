/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e4890; name: FUN_.text__005e4890
 */


void FUN__text__005e4890(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  ulong uVar7;
  undefined8 local_48;
  
  uVar7 = tpidr_el0;
  bVar6 = (byte)((uint)uVar7 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0x4a);
  while (local_48 = param_2, *pbVar1 == 0x4f) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = bVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB__text__005e4954;
  }
  pcVar2 = (char *)(param_1 + 0x4b);
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
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x48));
        while (*pbVar1 == 0x4f) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar5) {
            *pbVar1 = bVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB__text__005e4944;
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
LAB__text__005e4944:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar5) {
      *pcVar2 = *pcVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__005e4954:
  puVar3 = *(undefined8 **)(param_1 + 0xc0);
  if (puVar3 == *(undefined8 **)(param_1 + 200)) {
    FUN__text__005e5380(param_1 + 0xb8,&local_48);
  }
  else {
    uVar7 = uVar7 & 0xffffffffffffe000;
    if (*(long *)(uVar7 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0xd0);
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
    *puVar3 = local_48;
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0xc0) = puVar3 + 1;
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
  if (*(char *)(param_1 + 0x4b) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x48));
  }
  return;
}


