/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b510c; name: FUN_.text__005b510c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005b510c(long param_1)

{
  byte *pbVar1;
  char *pcVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long local_48 [3];
  
  (**(code **)(**(long **)(param_1 + 8) + 0x88))();
  lVar7 = *_DAT_0089f418;
  uVar9 = tpidr_el0;
  bVar6 = (byte)((uint)uVar9 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(lVar7 + 0xe6);
  while (local_48[0] = param_1, *pbVar1 == 0x4f) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = bVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB__text__005b5214;
  }
  pcVar2 = (char *)(lVar7 + 0xe7);
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
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0xe4));
        while (*pbVar1 == 0x4f) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar5) {
            *pbVar1 = bVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB__text__005b5204;
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
LAB__text__005b5204:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar5) {
      *pcVar2 = *pcVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__005b5214:
  lVar8 = lVar7 + (long)*(int *)(lVar7 + 0xe0) * 0x30;
  plVar3 = *(long **)(lVar8 + 0x58);
  if (plVar3 == *(long **)(lVar8 + 0x60)) {
    FUN__text__005b64c0(lVar8 + 0x50,local_48);
  }
  else {
    uVar9 = uVar9 & 0xffffffffffffe000;
    if (*(long *)(uVar9 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = *(undefined8 *)(lVar8 + 0x68);
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
    *plVar3 = local_48[0];
    *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
    *(long **)(lVar8 + 0x58) = plVar3 + 1;
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
  if (*(char *)(lVar7 + 0xe7) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0xe4));
  }
  return;
}


