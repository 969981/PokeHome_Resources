/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00178b10; name: FUN_.text__00178b10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00178b10(undefined8 *param_1)

{
  LightEventType *pLVar1;
  LightEventType *pLVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  LightEventType LVar6;
  undefined8 uVar7;
  LightEventType *pLVar8;
  undefined8 *__dest;
  long lVar9;
  
  *_DAT_008a1640 = 0;
  if (param_1[3] != 0) {
    (**(code **)(*(long *)param_1[1] + 0xb8))();
  }
  if (param_1[7] != 0) {
    (**(code **)(*(long *)param_1[5] + 0xb8))();
  }
  *param_1 = 0x8675f8;
  pLVar8 = (LightEventType *)FUN__text__005f6af4();
  uVar7 = tpidr_el0;
  LVar6 = (LightEventType)((byte)((uint)uVar7 >> 0xd) & 0x4f);
  pLVar1 = pLVar8 + 2;
  while (*pLVar1 == (LightEventType)0x4f) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
    if (bVar5) {
      *pLVar1 = LVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB__text__00178c14;
  }
  pLVar2 = pLVar8 + 3;
  ClearExclusiveLocal();
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10);
    if (bVar5) {
      *pLVar2 = (LightEventType)((char)*pLVar2 + '\x01');
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pLVar1 != (LightEventType)0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar8);
        while (*pLVar1 == (LightEventType)0x4f) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
          if (bVar5) {
            *pLVar1 = LVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB__text__00178c04;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
    if (bVar5) {
      *pLVar1 = LVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__00178c04:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10);
    if (bVar5) {
      *pLVar2 = (LightEventType)((char)*pLVar2 + -1);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__00178c14:
  if (DAT_00c15c20 == 0) {
    __dest = (undefined8 *)&DAT_00c15420;
  }
  else {
    lVar9 = DAT_00c15c20 << 3;
    __dest = _DAT_0089f3c8;
    while ((undefined8 *)*__dest != param_1) {
      __dest = __dest + 1;
      lVar9 = lVar9 + -8;
      if (lVar9 == 0) goto LAB__text__00178c80;
    }
  }
  puVar3 = (undefined8 *)(&DAT_00c15420 + DAT_00c15c20 * 8);
  if (__dest != puVar3) {
    __src = __dest + 1;
    if (__src != puVar3) {
      memmove(__dest,__src,(long)puVar3 - (long)__src);
    }
    DAT_00c15c20 = DAT_00c15c20 + -1;
  }
LAB__text__00178c80:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
    if (bVar5) {
      *pLVar1 = (LightEventType)0x4f;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  if (pLVar8[3] == (LightEventType)0x0) {
    return;
  }
  nn::os::SignalLightEvent(pLVar8);
  return;
}


