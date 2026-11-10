/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f1710; name: FUN_.text__005f1710
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f1710(long param_1,long *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  
  *(ulong *)(*(long *)(param_1 + 0x70) + 0x130) = *(ulong *)(*(long *)(param_1 + 0x70) + 0x130) | 2;
  uVar7 = tpidr_el0;
  uVar12 = uVar7 & 0xffffffffffffe000;
  if (*(long *)(uVar12 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar10 = *(long **)(param_1 + 8);
  *(long **)(uVar12 + *(long *)(uVar12 + 0x98) * 8 + 0x18) = plVar10;
  *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + 1;
  lVar6 = (**(code **)(*plVar10 + 0x10))(plVar10,0x2f0,0x10);
  if (lVar6 == 0) {
    (**(code **)(*plVar10 + 0xb8))(plVar10);
  }
  FUN__text__005e217c(lVar6,param_1 + 0x48,1);
  *(long **)(lVar6 + 8) = plVar10;
  *(long *)(lVar6 + 0x10) = lVar6;
  *(undefined8 *)(lVar6 + 0x18) = 0x2f0;
  *(undefined8 *)(lVar6 + 0x20) = 0x10;
  *(long *)(uVar12 + 0x98) = *(long *)(uVar12 + 0x98) + -1;
  FUN__text__005e706c(lVar6);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))((long *)(lVar6 + 0x48));
  pcVar9 = *(code **)(lVar6 + 0x278);
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0x280) = 0;
    *(undefined8 *)(lVar6 + 0x288) = 0;
    *(undefined8 *)(lVar6 + 0x270) = 0;
    *(undefined8 *)(lVar6 + 0x278) = 0;
    (*pcVar9)(lVar6 + 0x290);
  }
  *(long *)(lVar6 + 0x290) = param_1;
  *(code **)(lVar6 + 0x270) = FUN__text__005f22ec;
  *(undefined1 **)(lVar6 + 0x280) = &LAB__text__005f2340;
  *(undefined1 **)(lVar6 + 0x288) = &LAB__text__005f234c;
  bVar5 = (byte)((uint)uVar7 >> 0xd) & 0x4f;
  pbVar1 = (byte *)(lVar6 + 0x146);
  *(undefined **)(lVar6 + 0x278) = &DAT__text__005f233c;
  *(undefined4 *)(lVar6 + 0x268) = 0;
  while (*pbVar1 == 0x4f) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = bVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB__text__005f18d4;
  }
  pcVar2 = (char *)(lVar6 + 0x147);
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
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x144));
        while (*pbVar1 == 0x4f) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar4) {
            *pbVar1 = bVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB__text__005f18c4;
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
LAB__text__005f18c4:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar4) {
      *pcVar2 = *pcVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB__text__005f18d4:
  FUN__text__005e75f8(lVar6,0,*(undefined8 *)(param_1 + 0x70));
  if (*(long *)(param_1 + 0x8e0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x8e0) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x8e0) = lVar6;
  lVar11 = *param_2;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0xb0) = lVar11;
  uVar7 = FUN__text__005f15c8(DAT_008e1b58);
  if ((uVar7 & 1) == 0) {
    uVar8 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x38))(*(long **)(param_1 + 0xb0),0,0);
    FUN__text__005f15c0(DAT_008e1b58,uVar8);
    pcVar9 = *(code **)(param_1 + 0x858);
    if (pcVar9 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x860) = 0;
      *(undefined8 *)(param_1 + 0x868) = 0;
      *(undefined8 *)(param_1 + 0x850) = 0;
      *(undefined8 *)(param_1 + 0x858) = 0;
      (*pcVar9)(param_1 + 0x870);
    }
    *(long *)(param_1 + 0x870) = param_1;
    *(code **)(param_1 + 0x850) = FUN__text__005f2358;
    *(undefined **)(param_1 + 0x858) = &DAT__text__005f23a4;
    *(undefined1 **)(param_1 + 0x860) = &LAB__text__005f23a8;
    *(undefined1 **)(param_1 + 0x868) = &LAB__text__005f23b4;
    FUN__text__005ac300(*(undefined8 *)(*_DAT_0089f5b8 + 0x8590),param_1 + 0x840);
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
  if (*(char *)(lVar6 + 0x147) == '\0') {
    return;
  }
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x144));
  return;
}


