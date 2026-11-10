/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a2540; name: FUN_.text__005a2540
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a2540(long *param_1,undefined8 param_2,undefined4 param_3)

{
  byte *pbVar1;
  char *pcVar2;
  ulong uVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  FUN__text__005cb950();
  param_1[0x42] = 0;
  lVar9 = _DAT_008a02f8;
  *param_1 = _DAT_008a02f8 + 0x10;
  param_1[10] = lVar9 + 0xf0;
  param_1[9] = lVar9 + 0xb0;
  uVar8 = tpidr_el0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  uVar3 = uVar8 & 0xffffffffffffe000;
  if (((uVar3 == 0) || (*(long *)(uVar3 + 0x98) == 0)) ||
     (lVar9 = *(long *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x10), lVar9 == 0)) {
    lVar9 = FUN__text__005f52b0();
  }
  param_1[0x45] = lVar9;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  nn::os::InitializeLightEvent(param_1 + 0x48,0,1);
  *(undefined1 *)((long)param_1 + 0x242) = 0x4f;
  *(undefined1 *)((long)param_1 + 0x243) = 0;
  *(undefined4 *)(param_1 + 0x49) = param_3;
  param_1[0x4a] = 0;
  if (*(long *)(uVar3 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar11 = (long *)param_1[1];
  *(long **)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = plVar11;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  lVar9 = (**(code **)(*plVar11 + 0x10))(plVar11,0x2b8,8);
  if (lVar9 == 0) {
    (**(code **)(*plVar11 + 0xb8))(plVar11);
  }
  FUN__text__005a56b8(lVar9,param_1 + 9,1);
  *(long **)(lVar9 + 8) = plVar11;
  *(long *)(lVar9 + 0x10) = lVar9;
  *(undefined8 *)(lVar9 + 0x18) = 0x2b8;
  *(undefined8 *)(lVar9 + 0x20) = 8;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  FUN__text__005e706c(lVar9);
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  if (param_1[0x4a] != 0) {
    (**(code **)(*(long *)(param_1[0x4a] + 0x48) + 0x18))();
  }
  bVar7 = (byte)((uint)uVar8 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(lVar9 + 0x146);
  param_1[0x4a] = lVar9;
  while (*pbVar1 == 0x4f) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = bVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB__text__005a2734;
  }
  pcVar2 = (char *)(lVar9 + 0x147);
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
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x144));
        while (*pbVar1 == 0x4f) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar6) {
            *pbVar1 = bVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB__text__005a2724;
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
LAB__text__005a2724:
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar6) {
      *pcVar2 = *pcVar2 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB__text__005a2734:
  lVar10 = param_1[0xe];
  lVar4 = lVar10;
  if (*(long *)(lVar10 + 0x120) != 0) {
    lVar4 = *(long *)(lVar10 + 0x120);
  }
  if (*(long *)(lVar10 + 0x128) != 0) {
    lVar10 = *(long *)(lVar10 + 0x128);
  }
  FUN__text__005e75a4(lVar9,lVar4,lVar10);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar6) {
      *pbVar1 = 0x4f;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(lVar9 + 0x147) == '\0') {
    return;
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x144));
  return;
}


