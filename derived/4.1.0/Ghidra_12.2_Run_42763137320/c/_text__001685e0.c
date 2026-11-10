/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001685e0; name: FUN_.text__001685e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001685e0(long *param_1)

{
  LightEventType *pLVar1;
  LightEventType *pLVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  LightEventType LVar6;
  ulong uVar7;
  long lVar8;
  LightEventType *pLVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  
  param_1[7] = 0;
  lVar12 = _DAT_0089f690;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar7 = tpidr_el0;
  uVar3 = uVar7 & 0xffffffffffffe000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar12 + 0x10;
  lVar12 = _DAT_008a0470;
  if (uVar3 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(uVar3 + 0x98) != 0) {
      lVar11 = *(long *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x10);
    }
  }
  *_DAT_008a0468 = 1;
  lVar8 = _DAT_0089f3c0;
  *param_1 = lVar12 + 0x10;
  param_1[1] = lVar11;
  param_1[9] = lVar12 + 0x40;
  plVar13 = param_1 + 10;
  *plVar13 = lVar8 + 0x10;
  pLVar9 = (LightEventType *)FUN__text__005f6af4();
  LVar6 = (LightEventType)((byte)((uint)uVar7 >> 0xd) & 0x4f);
  pLVar1 = pLVar9 + 2;
  while (*pLVar1 == (LightEventType)0x4f) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
    if (bVar5) {
      *pLVar1 = LVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB__text__00168724;
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
          if (cVar4 == '\0') goto LAB__text__00168714;
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
LAB__text__00168714:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10);
    if (bVar5) {
      *pLVar2 = (LightEventType)((char)*pLVar2 + -1);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__00168724:
  lVar12 = _DAT_0089f3c8;
  if (*(long *)(_DAT_0089f3c8 + 0x800) == 0x100) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(_DAT_0089f3c8 + *(long *)(_DAT_0089f3c8 + 0x800) * 8) = plVar13;
  *(long *)(lVar12 + 0x800) = *(long *)(lVar12 + 0x800) + 1;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
    if (bVar5) {
      *pLVar1 = (LightEventType)0x4f;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  if (pLVar9[3] != (LightEventType)0x0) {
    nn::os::SignalLightEvent(pLVar9);
  }
  lVar12 = _DAT_008a0478;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  plVar10 = _DAT_008a0480;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *plVar10 = (long)plVar13;
  param_1[10] = lVar12 + 0x10;
  param_1[0xb] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  if (((uVar3 == 0) || (*(long *)(uVar3 + 0x98) == 0)) ||
     (lVar12 = *(long *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x10), lVar12 == 0)) {
    lVar12 = FUN__text__005f52b0();
    param_1[0x1a] = 0;
    param_1[0x17] = lVar12;
    param_1[0x18] = 0;
    *(undefined4 *)(param_1 + 0x19) = 0;
    if (uVar3 != 0) goto LAB__text__001687e4;
  }
  else {
    param_1[0x1a] = 0;
    param_1[0x17] = lVar12;
    param_1[0x18] = 0;
    *(undefined4 *)(param_1 + 0x19) = 0;
LAB__text__001687e4:
    if ((*(long *)(uVar3 + 0x98) != 0) &&
       (lVar12 = *(long *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x10), lVar12 != 0))
    goto LAB__text__001687fc;
  }
  lVar12 = FUN__text__005f52b0();
LAB__text__001687fc:
  param_1[0x1b] = lVar12;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0x3f800000;
  plVar13 = _DAT_008a0480;
  plVar10 = *(long **)(*_DAT_0089f3d8 + 8);
  lVar12 = *_DAT_008a0480;
  *(long **)(lVar12 + 0x10) = plVar10;
  *(undefined8 *)(lVar12 + 0x20) = 0x464000;
  plVar10 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x464000,8);
  *(long **)(lVar12 + 0x18) = plVar10;
  if (plVar10 == (long *)0x0) {
    (**(code **)(**(long **)(lVar12 + 0x10) + 0xb8))();
    plVar10 = *(long **)(lVar12 + 0x18);
  }
  FUN__text__005f6b94(plVar10,plVar10 + 0x15,0x463f58,0);
  lVar11 = *plVar13;
  *(long **)(lVar12 + 8) = plVar10;
  param_1[0x13] = (long)plVar10;
  *(long **)(lVar11 + 0x30) = plVar10;
  *(undefined8 *)(lVar11 + 0x40) = 0x64000;
  lVar12 = (**(code **)(*plVar10 + 0x10))(plVar10,0x64000,8);
  *(long *)(lVar11 + 0x38) = lVar12;
  if (lVar12 == 0) {
    (**(code **)(**(long **)(lVar11 + 0x30) + 0xb8))();
    lVar12 = *(long *)(lVar11 + 0x38);
  }
  FUN__text__005f6b94(lVar12,lVar12 + 0xa8,0x63f58,0);
  *(long *)(lVar11 + 0x28) = lVar12;
  return;
}


