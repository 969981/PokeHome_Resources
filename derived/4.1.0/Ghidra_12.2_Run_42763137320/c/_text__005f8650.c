/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f8650; name: FUN_.text__005f8650
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f8650(long *param_1)

{
  LightEventType *pLVar1;
  LightEventType *pLVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  LightEventType LVar6;
  undefined8 uVar7;
  long lVar8;
  LightEventType *pLVar9;
  undefined8 *__dest;
  long lVar10;
  
  *param_1 = _DAT_008a5cf8 + 0x10;
  FUN__text__005e40ec();
  lVar10 = DAT_008e1788;
  (**(code **)**(undefined8 **)(DAT_008e1788 + 0x28))();
  *(undefined8 *)(lVar10 + 0x28) = 0;
  (**(code **)(**(long **)(lVar10 + 0x30) + 0x18))
            (*(long **)(lVar10 + 0x30),*(undefined8 *)(lVar10 + 0x38),*(undefined8 *)(lVar10 + 0x40)
             ,8);
  lVar8 = DAT_008e1788;
  *(undefined8 *)(lVar10 + 0x38) = 0;
  *(undefined8 *)(lVar10 + 0x40) = 0;
  *(undefined8 *)(lVar10 + 0x30) = 0;
  (**(code **)**(undefined8 **)(lVar8 + 8))();
  *(undefined8 *)(lVar8 + 8) = 0;
  (**(code **)(**(long **)(lVar8 + 0x10) + 0x18))
            (*(long **)(lVar8 + 0x10),*(undefined8 *)(lVar8 + 0x18),*(undefined8 *)(lVar8 + 0x20),8)
  ;
  *(undefined8 *)(lVar8 + 0x18) = 0;
  *(undefined8 *)(lVar8 + 0x20) = 0;
  *(undefined8 *)(lVar8 + 0x10) = 0;
  if (param_1[0x31] != 0) {
    (**(code **)(*(long *)(param_1[0x31] + 0x48) + 0x18))();
    param_1[0x31] = 0;
  }
  if (param_1[0x30] != 0) {
    (**(code **)(*(long *)(param_1[0x30] + 0x48) + 0x18))();
    param_1[0x30] = 0;
  }
  if (param_1[0x2f] != 0) {
    (**(code **)(*(long *)(param_1[0x2f] + 0x48) + 0x18))();
    param_1[0x2f] = 0;
  }
  lVar10 = param_1[0x23];
  param_1[0x23] = 0;
  if (lVar10 != 0) {
    (**(code **)(*(long *)param_1[0x24] + 0x18))
              ((long *)param_1[0x24],lVar10,param_1[0x25],param_1[0x26]);
  }
  *_DAT_0089f7d0 = 0;
  if (param_1[0x1c] != 0) {
    (**(code **)(*(long *)param_1[0x1a] + 0xb8))();
  }
  if (param_1[0x20] != 0) {
    (**(code **)(*(long *)param_1[0x1e] + 0xb8))();
  }
  param_1[0x19] = 0x8675f8;
  pLVar9 = (LightEventType *)FUN__text__005f6af4();
  uVar7 = tpidr_el0;
  LVar6 = (LightEventType)((byte)((uint)uVar7 >> 0xd) & 0x4f);
  pLVar1 = pLVar9 + 2;
  while (*pLVar1 == (LightEventType)0x4f) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
    if (bVar5) {
      *pLVar1 = LVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB__text__005f8874;
  }
  pLVar2 = pLVar9 + 3;
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
        nn::os::WaitLightEvent(pLVar9);
        while (*pLVar1 == (LightEventType)0x4f) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
          if (bVar5) {
            *pLVar1 = LVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB__text__005f8864;
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
LAB__text__005f8864:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10);
    if (bVar5) {
      *pLVar2 = (LightEventType)((char)*pLVar2 + -1);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__005f8874:
  if (DAT_00c15c20 == 0) {
    __dest = (undefined8 *)&DAT_00c15420;
  }
  else {
    lVar10 = DAT_00c15c20 << 3;
    __dest = _DAT_0089f3c8;
    while ((long *)*__dest != param_1 + 0x19) {
      __dest = __dest + 1;
      lVar10 = lVar10 + -8;
      if (lVar10 == 0) goto LAB__text__005f88e0;
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
LAB__text__005f88e0:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
    if (bVar5) {
      *pLVar1 = (LightEventType)0x4f;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  if (pLVar9[3] == (LightEventType)0x0) {
    return;
  }
  nn::os::SignalLightEvent(pLVar9);
  return;
}


