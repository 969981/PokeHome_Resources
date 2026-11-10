/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00168940; name: FUN_.text__00168940
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00168940(long param_1)

{
  LightEventType *pLVar1;
  LightEventType *pLVar2;
  undefined8 *__src;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  LightEventType LVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  LightEventType *pLVar10;
  undefined8 *__dest;
  long lVar11;
  
  FUN__text__00602850();
  lVar11 = DAT_008e1d50;
  (**(code **)**(undefined8 **)(DAT_008e1d50 + 0x28))();
  *(undefined8 *)(lVar11 + 0x28) = 0;
  (**(code **)(**(long **)(lVar11 + 0x30) + 0x18))
            (*(long **)(lVar11 + 0x30),*(undefined8 *)(lVar11 + 0x38),*(undefined8 *)(lVar11 + 0x40)
             ,8);
  lVar9 = DAT_008e1d50;
  *(undefined8 *)(lVar11 + 0x38) = 0;
  *(undefined8 *)(lVar11 + 0x40) = 0;
  *(undefined8 *)(lVar11 + 0x30) = 0;
  (**(code **)**(undefined8 **)(lVar9 + 8))();
  *(undefined8 *)(lVar9 + 8) = 0;
  (**(code **)(**(long **)(lVar9 + 0x10) + 0x18))
            (*(long **)(lVar9 + 0x10),*(undefined8 *)(lVar9 + 0x18),*(undefined8 *)(lVar9 + 0x20),8)
  ;
  *(undefined8 *)(lVar9 + 0x18) = 0;
  *(undefined8 *)(lVar9 + 0x20) = 0;
  *(undefined8 *)(lVar9 + 0x10) = 0;
  plVar8 = (long *)*(long *)(param_1 + 0xd0);
  while (plVar8 != (long *)0x0) {
    lVar11 = *plVar8;
    (**(code **)(**(long **)(param_1 + 0xd8) + 0x18))(*(long **)(param_1 + 0xd8),plVar8,0x20,8);
    plVar8 = (long *)lVar11;
  }
  lVar11 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (lVar11 != 0) {
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))
              (*(long **)(param_1 + 0xb8),lVar11,*(long *)(param_1 + 0xb0) << 3,8);
  }
  *_DAT_008a0480 = 0;
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0xb8))();
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0xb8))();
  }
  *(undefined8 *)(param_1 + 0x50) = 0x8675f8;
  pLVar10 = (LightEventType *)FUN__text__005f6af4();
  uVar7 = tpidr_el0;
  LVar6 = (LightEventType)((byte)((uint)uVar7 >> 0xd) & 0x4f);
  pLVar1 = pLVar10 + 2;
  while (*pLVar1 == (LightEventType)0x4f) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
    if (bVar5) {
      *pLVar1 = LVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB__text__00168b44;
  }
  pLVar2 = pLVar10 + 3;
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
        nn::os::WaitLightEvent(pLVar10);
        while (*pLVar1 == (LightEventType)0x4f) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
          if (bVar5) {
            *pLVar1 = LVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB__text__00168b34;
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
LAB__text__00168b34:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10);
    if (bVar5) {
      *pLVar2 = (LightEventType)((char)*pLVar2 + -1);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__00168b44:
  if (DAT_00c15c20 == 0) {
    __dest = (undefined8 *)&DAT_00c15420;
  }
  else {
    lVar11 = DAT_00c15c20 << 3;
    __dest = _DAT_0089f3c8;
    while ((undefined8 *)*__dest != (undefined8 *)(param_1 + 0x50)) {
      __dest = __dest + 1;
      lVar11 = lVar11 + -8;
      if (lVar11 == 0) goto LAB__text__00168bb0;
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
LAB__text__00168bb0:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
    if (bVar5) {
      *pLVar1 = (LightEventType)0x4f;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  if (pLVar10[3] == (LightEventType)0x0) {
    return;
  }
  nn::os::SignalLightEvent(pLVar10);
  return;
}


