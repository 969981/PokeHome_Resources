/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00175020; name: FUN_.text__00175020
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00175020(undefined8 *param_1)

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
  
  *_DAT_008a0510 = 0;
  if (param_1[3] != 0) {
    (**(code **)(*(long *)param_1[1] + 0xb8))();
  }
  if (param_1[7] != 0) {
    (**(code **)(*(long *)param_1[5] + 0xb8))();
  }
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)param_1[9] + 0xb8))();
  }
  if (param_1[0xf] != 0) {
    (**(code **)(*(long *)param_1[0xd] + 0xb8))();
  }
  if (param_1[0x13] != 0) {
    (**(code **)(*(long *)param_1[0x11] + 0xb8))();
  }
  if (param_1[0x17] != 0) {
    (**(code **)(*(long *)param_1[0x15] + 0xb8))();
  }
  if (param_1[0x1b] != 0) {
    (**(code **)(*(long *)param_1[0x19] + 0xb8))();
  }
  if (param_1[0x1f] != 0) {
    (**(code **)(*(long *)param_1[0x1d] + 0xb8))();
  }
  if (param_1[0x23] != 0) {
    (**(code **)(*(long *)param_1[0x21] + 0xb8))();
  }
  if (param_1[0x27] != 0) {
    (**(code **)(*(long *)param_1[0x25] + 0xb8))();
  }
  if (param_1[0x2b] != 0) {
    (**(code **)(*(long *)param_1[0x29] + 0xb8))();
  }
  if (param_1[0x2f] != 0) {
    (**(code **)(*(long *)param_1[0x2d] + 0xb8))();
  }
  if (param_1[0x33] != 0) {
    (**(code **)(*(long *)param_1[0x31] + 0xb8))();
  }
  if (param_1[0x37] != 0) {
    (**(code **)(*(long *)param_1[0x35] + 0xb8))();
  }
  if (param_1[0x3b] != 0) {
    (**(code **)(*(long *)param_1[0x39] + 0xb8))();
  }
  if (param_1[0x3f] != 0) {
    (**(code **)(*(long *)param_1[0x3d] + 0xb8))();
  }
  if (param_1[0x43] != 0) {
    (**(code **)(*(long *)param_1[0x41] + 0xb8))();
  }
  if (param_1[0x47] != 0) {
    (**(code **)(*(long *)param_1[0x45] + 0xb8))();
  }
  if (param_1[0x4b] != 0) {
    (**(code **)(*(long *)param_1[0x49] + 0xb8))();
  }
  if (param_1[0x4f] != 0) {
    (**(code **)(*(long *)param_1[0x4d] + 0xb8))();
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
    if (cVar4 == '\0') goto LAB__text__001752d4;
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
          if (cVar4 == '\0') goto LAB__text__001752c4;
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
LAB__text__001752c4:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10);
    if (bVar5) {
      *pLVar2 = (LightEventType)((char)*pLVar2 + -1);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__001752d4:
  if (DAT_00c15c20 == 0) {
    __dest = (undefined8 *)&DAT_00c15420;
  }
  else {
    lVar9 = DAT_00c15c20 << 3;
    __dest = _DAT_0089f3c8;
    while ((undefined8 *)*__dest != param_1) {
      __dest = __dest + 1;
      lVar9 = lVar9 + -8;
      if (lVar9 == 0) goto LAB__text__00175340;
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
LAB__text__00175340:
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


