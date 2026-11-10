/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d0770; name: FUN_.text__005d0770
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005d0770(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  byte *pbVar2;
  char *pcVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  
  FUN__text__005cb950();
  lVar8 = _DAT_008a5990 + 0xa8;
  lVar1 = _DAT_008a5990 + 0xe8;
  *param_1 = _DAT_008a5990 + 0x10;
  param_1[10] = lVar1;
  param_1[9] = lVar8;
  FUN__text__005d09b0(param_1 + 0x42);
  nn::os::InitializeLightEvent(param_1 + 0x5a,0,1);
  *(undefined1 *)((long)param_1 + 0x2d2) = 0x4f;
  *(undefined1 *)((long)param_1 + 0x2d3) = 0;
  *(undefined4 *)(param_1 + 0x5b) = param_3;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 2;
  uVar7 = tpidr_el0;
  uVar11 = uVar7 & 0xffffffffffffe000;
  if (*(long *)(uVar11 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar10 = (long *)param_1[1];
  *(long **)(uVar11 + *(long *)(uVar11 + 0x98) * 8 + 0x18) = plVar10;
  *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + 1;
  lVar8 = (**(code **)(*plVar10 + 0x10))(plVar10,0x2b8,8);
  if (lVar8 == 0) {
    (**(code **)(*plVar10 + 0xb8))(plVar10);
  }
  FUN__text__005a56b8(lVar8,param_1 + 9,1);
  *(long **)(lVar8 + 8) = plVar10;
  *(long *)(lVar8 + 0x10) = lVar8;
  *(undefined8 *)(lVar8 + 0x18) = 0x2b8;
  *(undefined8 *)(lVar8 + 0x20) = 8;
  *(long *)(uVar11 + 0x98) = *(long *)(uVar11 + 0x98) + -1;
  FUN__text__005e706c(lVar8);
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  if (param_1[0x5c] != 0) {
    (**(code **)(*(long *)(param_1[0x5c] + 0x48) + 0x18))();
  }
  bVar6 = (byte)((uint)uVar7 >> 0xd) & 0x4f;
  pbVar2 = (byte *)(lVar8 + 0x146);
  param_1[0x5c] = lVar8;
  while (*pbVar2 == 0x4f) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
    if (bVar5) {
      *pbVar2 = bVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB__text__005d0934;
  }
  pcVar3 = (char *)(lVar8 + 0x147);
  ClearExclusiveLocal();
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
    if (bVar5) {
      *pcVar3 = *pcVar3 + '\x01';
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar2 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x144));
        while (*pbVar2 == 0x4f) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
          if (bVar5) {
            *pbVar2 = bVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB__text__005d0924;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
    if (bVar5) {
      *pbVar2 = bVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__005d0924:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pcVar3,0x10);
    if (bVar5) {
      *pcVar3 = *pcVar3 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__005d0934:
  lVar9 = param_1[0xe];
  lVar1 = lVar9;
  if (*(long *)(lVar9 + 0x120) != 0) {
    lVar1 = *(long *)(lVar9 + 0x120);
  }
  if (*(long *)(lVar9 + 0x128) != 0) {
    lVar9 = *(long *)(lVar9 + 0x128);
  }
  FUN__text__005e75a4(lVar8,lVar1,lVar9);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pbVar2,0x10);
    if (bVar5) {
      *pbVar2 = 0x4f;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(lVar8 + 0x147) == '\0') {
    return;
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x144));
  return;
}


