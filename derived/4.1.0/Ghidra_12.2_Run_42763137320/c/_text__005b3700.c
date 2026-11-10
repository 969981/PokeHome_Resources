/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b3700; name: FUN_.text__005b3700
 */


void FUN__text__005b3700(LightEventType *param_1)

{
  LightEventType *pLVar1;
  char cVar2;
  bool bVar3;
  LightEventType LVar4;
  undefined8 uVar5;
  long *plVar6;
  LightEventType *pLVar7;
  LightEventType *pLVar8;
  LightEventType *pLVar9;
  
  uVar5 = tpidr_el0;
  LVar4 = (LightEventType)((byte)((uint)uVar5 >> 0xd) & 0x4f);
  pLVar1 = param_1 + 2;
  while (*pLVar1 == (LightEventType)0x4f) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
    if (bVar3) {
      *pLVar1 = LVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') goto LAB__text__005b37b4;
  }
  pLVar9 = param_1 + 3;
  ClearExclusiveLocal();
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pLVar9,0x10);
    if (bVar3) {
      *pLVar9 = (LightEventType)((char)*pLVar9 + '\x01');
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pLVar1 != (LightEventType)0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(param_1);
        while (*pLVar1 == (LightEventType)0x4f) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
          if (bVar3) {
            *pLVar1 = LVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB__text__005b37a4;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
    if (bVar3) {
      *pLVar1 = LVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB__text__005b37a4:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pLVar9,0x10);
    if (bVar3) {
      *pLVar9 = (LightEventType)((char)*pLVar9 + -1);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB__text__005b37b4:
  for (pLVar9 = *(LightEventType **)(param_1 + 0x70); pLVar9 != param_1 + 0x70;
      pLVar9 = *(LightEventType **)pLVar9) {
    if (-1 < *(int *)(pLVar9 + 0x40)) {
      plVar6 = (long *)FUN__text__005f53a0();
      (**(code **)(*plVar6 + 0x10))(plVar6,*(undefined4 *)(pLVar9 + 0x40));
    }
  }
  pLVar9 = *(LightEventType **)(param_1 + 0xa8);
  while (pLVar9 != param_1 + 0xa0) {
    pLVar7 = *(LightEventType **)(pLVar9 + 0x10);
    if (*(LightEventType **)(pLVar9 + 0x10) == (LightEventType *)0x0) {
      do {
        pLVar7 = pLVar9;
        pLVar8 = *(LightEventType **)pLVar7;
        pLVar9 = pLVar8;
      } while (pLVar7 == *(LightEventType **)(pLVar8 + 0x10));
      pLVar9 = pLVar7;
      if (*(LightEventType **)(pLVar7 + 0x10) != pLVar8) {
        pLVar9 = pLVar8;
      }
    }
    else {
      do {
        pLVar9 = pLVar7;
        pLVar7 = *(LightEventType **)(pLVar9 + 8);
      } while (*(LightEventType **)(pLVar9 + 8) != (LightEventType *)0x0);
    }
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
    if (bVar3) {
      *pLVar1 = (LightEventType)0x4f;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  DataMemoryBarrier(2,3);
  if (param_1[3] == (LightEventType)0x0) {
    return;
  }
  nn::os::SignalLightEvent(param_1);
  return;
}


