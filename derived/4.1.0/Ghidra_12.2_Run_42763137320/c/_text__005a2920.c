/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a2920; name: FUN_.text__005a2920
 */


void FUN__text__005a2920(long param_1,long *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long local_58;
  long local_38;
  
  uVar8 = tpidr_el0;
  bVar5 = (byte)((uint)uVar8 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0x242);
  while (*pbVar1 == 0x4f) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = bVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB__text__005a29e4;
  }
  pcVar2 = (char *)(param_1 + 0x243);
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
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x240));
        while (*pbVar1 == 0x4f) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar4) {
            *pbVar1 = bVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB__text__005a29d4;
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
LAB__text__005a29d4:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar4) {
      *pcVar2 = *pcVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB__text__005a29e4:
  (**(code **)(*param_2 + 0x10))(&local_58,param_2);
  lVar6 = local_58;
  local_58 = 0;
  local_38 = lVar6;
  plVar7 = *(long **)(param_1 + 0x218);
  if (plVar7 < *(long **)(param_1 + 0x220)) {
    uVar8 = uVar8 & 0xffffffffffffe000;
    if (*(long *)(uVar8 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar8 + *(long *)(uVar8 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x228);
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
    local_38 = 0;
    *plVar7 = lVar6;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
    *(long **)(param_1 + 0x218) = plVar7 + 1;
  }
  else {
    FUN__text__005a3fe0(param_1 + 0x210,&local_38);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 0x4f;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(param_1 + 0x243) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x240));
  }
  return;
}


