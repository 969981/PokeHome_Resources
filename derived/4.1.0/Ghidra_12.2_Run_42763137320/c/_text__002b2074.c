/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b2074; name: FUN_.text__002b2074
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002b2074(long param_1)

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
  code *pcVar9;
  long lVar10;
  
  if (*(long *)(param_1 + 600) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 600) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 600) = 0;
  }
  if (*(long *)(param_1 + 0x250) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x250) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x250) = 0;
  }
  if (*(long *)(param_1 + 0x248) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x248) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x248) = 0;
  }
  if (*(long *)(param_1 + 0x240) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x240) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x240) = 0;
  }
  if (*(long *)(param_1 + 0x238) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x238) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x238) = 0;
  }
  if (*(long *)(param_1 + 0x230) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x230) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x230) = 0;
  }
  if (*(long *)(param_1 + 0x228) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x228) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x228) = 0;
  }
  if (*(long *)(param_1 + 0x220) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x220) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x220) = 0;
  }
  pcVar9 = *(code **)(param_1 + 0x1a8);
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    (*pcVar9)(param_1 + 0x1c0);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x178));
  lVar10 = *(long *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x158) = 0;
  if (lVar10 != 0) {
    if (*(long *)(lVar10 + 8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar10 + 8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar10 + 8) = 0;
    }
    (**(code **)(**(long **)(param_1 + 0x160) + 0x18))
              (*(long **)(param_1 + 0x160),lVar10,*(undefined8 *)(param_1 + 0x168),
               *(undefined8 *)(param_1 + 0x170));
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x138));
  lVar10 = *(long *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = 0;
  if (lVar10 != 0) {
    if (*(long *)(lVar10 + 8) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar10 + 8) + 0x48) + 0x18))();
      *(undefined8 *)(lVar10 + 8) = 0;
    }
    (**(code **)(**(long **)(param_1 + 0x120) + 0x18))
              (*(long **)(param_1 + 0x120),lVar10,*(undefined8 *)(param_1 + 0x128),
               *(undefined8 *)(param_1 + 0x130));
  }
  lVar10 = *(long *)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (lVar10 != 0) {
    FUN__text__002b31f0(lVar10);
    (**(code **)(**(long **)(param_1 + 0x100) + 0x18))
              (*(long **)(param_1 + 0x100),lVar10,*(undefined8 *)(param_1 + 0x108),
               *(undefined8 *)(param_1 + 0x110));
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xd8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  *_DAT_008a24c8 = 0;
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0xb8))();
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    (**(code **)(**(long **)(param_1 + 0x78) + 0xb8))();
  }
  *(undefined8 *)(param_1 + 0x50) = 0x8675f8;
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
    if (cVar4 == '\0') goto LAB__text__002b2414;
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
          if (cVar4 == '\0') goto LAB__text__002b2404;
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
LAB__text__002b2404:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10);
    if (bVar5) {
      *pLVar2 = (LightEventType)((char)*pLVar2 + -1);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__002b2414:
  if (DAT_00c15c20 == 0) {
    __dest = (undefined8 *)&DAT_00c15420;
  }
  else {
    lVar10 = DAT_00c15c20 << 3;
    __dest = _DAT_0089f3c8;
    while ((undefined8 *)*__dest != (undefined8 *)(param_1 + 0x50)) {
      __dest = __dest + 1;
      lVar10 = lVar10 + -8;
      if (lVar10 == 0) goto LAB__text__002b2480;
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
LAB__text__002b2480:
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


