/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ce0a0; name: FUN_.text__005ce0a0
 */


/* WARNING: Removing unreachable block (ram,0x005ce208) */

void FUN__text__005ce0a0(long param_1,long param_2)

{
  byte *pbVar1;
  char *pcVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 local_60;
  long lStack_58;
  long local_38;
  
  uVar10 = tpidr_el0;
  bVar6 = (byte)((uint)uVar10 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(param_1 + 0xe2);
  while (*pbVar1 == 0x4f) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar5) {
      *pbVar1 = bVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB__text__005ce164;
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
          if (cVar4 == '\0') goto LAB__text__005ce154;
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
LAB__text__005ce154:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar5) {
      *pcVar2 = *pcVar2 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__005ce164:
  local_38 = *(long *)(param_2 + 0xd8);
  if (local_38 == 0) {
    plVar8 = *(long **)(param_1 + 0x178);
    plVar7 = *(long **)(param_1 + 0x180);
    if (plVar8 != plVar7) {
      do {
        if (*plVar8 == param_2) goto LAB__text__005ce1ac;
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar7);
      plVar8 = plVar7;
    }
LAB__text__005ce1ac:
    if ((plVar8 != plVar7) && (plVar11 = plVar8 + 1, plVar9 = plVar8, plVar11 != plVar7)) {
      do {
        plVar8 = plVar9;
        if (*plVar11 != param_2) {
          plVar8 = plVar9 + 1;
          *plVar9 = *plVar11;
        }
        plVar11 = plVar11 + 1;
        plVar9 = plVar8;
      } while (plVar11 != plVar7);
      plVar7 = *(long **)(param_1 + 0x180);
    }
    if (plVar8 != plVar7) {
      *(long **)(param_1 + 0x180) = plVar8;
    }
  }
  else {
    FUN__text__005ced60(param_1 + 0x120,&local_38);
  }
  puVar3 = *(undefined8 **)(param_1 + 0xf0);
  local_60 = 0;
  lStack_58 = param_2;
  if (puVar3 < *(undefined8 **)(param_1 + 0xf8)) {
    uVar10 = uVar10 & 0xffffffffffffe000;
    if (*(long *)(uVar10 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar10 + *(long *)(uVar10 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x100)
    ;
    *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
    *puVar3 = 0;
    puVar3[1] = param_2;
    *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + -1;
    *(undefined8 **)(param_1 + 0xf0) = puVar3 + 2;
  }
  else {
    FUN__text__005cf020(param_1 + 0xe8,&local_60);
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
  return;
}


