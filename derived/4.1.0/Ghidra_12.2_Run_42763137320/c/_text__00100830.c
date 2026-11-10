/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00100830; name: nnMain
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nnMain(void)

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
  undefined8 *puVar9;
  long *plVar10;
  LightEventType *pLVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *__dest;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_14c0 [400];
  long local_1330;
  undefined1 auStack_1320 [3808];
  SystemEventType aSStack_440 [40];
  char cStack_418;
  undefined1 auStack_408 [8];
  undefined8 local_400;
  long local_3e8;
  undefined1 local_3d8;
  long local_3c8;
  long local_3c0 [108];
  
  lVar15 = _DAT_0089f3c0;
  local_3c8 = _DAT_0089f3c0 + 0x10;
  pLVar11 = (LightEventType *)FUN__text__005f6af4();
  uVar7 = tpidr_el0;
  LVar6 = (LightEventType)((byte)((uint)uVar7 >> 0xd) & 0x4f);
  pLVar1 = pLVar11 + 2;
  while (*pLVar1 == (LightEventType)0x4f) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
    if (bVar5) {
      *pLVar1 = LVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB__text__00100904;
  }
  pLVar2 = pLVar11 + 3;
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
        nn::os::WaitLightEvent(pLVar11);
        while (*pLVar1 == (LightEventType)0x4f) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
          if (bVar5) {
            *pLVar1 = LVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB__text__001008f4;
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
LAB__text__001008f4:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10);
    if (bVar5) {
      *pLVar2 = (LightEventType)((char)*pLVar2 + -1);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__00100904:
  puVar9 = _DAT_0089f3c8;
  if (_DAT_0089f3c8[0x100] == 0x100) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  _DAT_0089f3c8[_DAT_0089f3c8[0x100]] = &local_3c8;
  puVar9[0x100] = puVar9[0x100] + 1;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
    if (bVar5) {
      *pLVar1 = (LightEventType)0x4f;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  if (pLVar11[3] != (LightEventType)0x0) {
    nn::os::SignalLightEvent(pLVar11);
  }
  local_3c8 = _DAT_0089f3d0 + 0x10;
  memset(local_3c0,0,0x360);
  plVar10 = _DAT_0089f3d8;
  *_DAT_0089f3d8 = (long)&local_3c8;
  plVar12 = (long *)FUN__text__005f5290();
  lVar16 = *plVar10;
  *(long **)(lVar16 + 0x10) = plVar12;
  plVar8 = _DAT_0089f378;
  lVar14 = *_DAT_0089f378;
  *(long *)(lVar16 + 0x20) = lVar14;
  plVar13 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,lVar14,8);
  *(long **)(lVar16 + 0x18) = plVar13;
  if (plVar13 == (long *)0x0) {
    (**(code **)(**(long **)(lVar16 + 0x10) + 0xb8))();
    plVar13 = *(long **)(lVar16 + 0x18);
  }
  FUN__text__005f6b94(plVar13,plVar13 + 0x15,*plVar8 + -0xa8,0);
  lVar17 = *plVar10;
  *(long **)(lVar16 + 8) = plVar13;
  *(long **)(lVar17 + 0x30) = plVar12;
  plVar8 = _DAT_0089f380;
  lVar14 = *_DAT_0089f380;
  *(long *)(lVar17 + 0x40) = lVar14;
  lVar14 = (**(code **)(*plVar12 + 0x10))(plVar12,lVar14,8);
  *(long *)(lVar17 + 0x38) = lVar14;
  if (lVar14 == 0) {
    (**(code **)(**(long **)(lVar17 + 0x30) + 0xb8))();
    lVar14 = *(long *)(lVar17 + 0x38);
  }
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0);
  *(long *)(lVar17 + 0x28) = lVar14;
  lVar16 = *plVar10;
  *(long **)(lVar16 + 0x50) = plVar12;
  plVar8 = _DAT_0089f388;
  lVar14 = *_DAT_0089f388;
  *(long *)(lVar16 + 0x60) = lVar14;
  lVar14 = (**(code **)(*plVar12 + 0x10))(plVar12,lVar14,8);
  *(long *)(lVar16 + 0x58) = lVar14;
  if (lVar14 == 0) {
    (**(code **)(**(long **)(lVar16 + 0x50) + 0xb8))();
    lVar14 = *(long *)(lVar16 + 0x58);
  }
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0);
  *(long *)(lVar16 + 0x48) = lVar14;
  lVar16 = *plVar10;
  *(long **)(lVar16 + 0x70) = plVar12;
  plVar8 = _DAT_0089f390;
  lVar14 = *_DAT_0089f390;
  *(long *)(lVar16 + 0x80) = lVar14;
  lVar14 = (**(code **)(*plVar12 + 0x10))(plVar12,lVar14,8);
  *(long *)(lVar16 + 0x78) = lVar14;
  if (lVar14 == 0) {
    (**(code **)(**(long **)(lVar16 + 0x70) + 0xb8))();
    lVar14 = *(long *)(lVar16 + 0x78);
  }
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0);
  *(long *)(lVar16 + 0x68) = lVar14;
  lVar16 = *plVar10;
  *(long **)(lVar16 + 0x90) = plVar12;
  plVar8 = _DAT_0089f398;
  lVar14 = *_DAT_0089f398;
  *(long *)(lVar16 + 0xa0) = lVar14;
  lVar14 = (**(code **)(*plVar12 + 0x10))(plVar12,lVar14,8);
  *(long *)(lVar16 + 0x98) = lVar14;
  if (lVar14 == 0) {
    (**(code **)(**(long **)(lVar16 + 0x90) + 0xb8))();
    lVar14 = *(long *)(lVar16 + 0x98);
  }
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0);
  *(long *)(lVar16 + 0x88) = lVar14;
  lVar16 = *plVar10;
  *(long **)(lVar16 + 0xb0) = plVar12;
  plVar8 = _DAT_0089f3a0;
  lVar14 = *_DAT_0089f3a0;
  *(long *)(lVar16 + 0xc0) = lVar14;
  lVar14 = (**(code **)(*plVar12 + 0x10))(plVar12,lVar14,8);
  *(long *)(lVar16 + 0xb8) = lVar14;
  if (lVar14 == 0) {
    (**(code **)(**(long **)(lVar16 + 0xb0) + 0xb8))();
    lVar14 = *(long *)(lVar16 + 0xb8);
  }
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0);
  lVar17 = *plVar10;
  *(long *)(lVar16 + 0xa8) = lVar14;
  *(long **)(lVar17 + 0xd0) = plVar13;
  plVar8 = _DAT_0089f2d0;
  lVar14 = *_DAT_0089f2d0;
  *(long *)(lVar17 + 0xe0) = lVar14;
  plVar12 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,lVar14,8);
  *(long **)(lVar17 + 0xd8) = plVar12;
  if (plVar12 == (long *)0x0) {
    (**(code **)(**(long **)(lVar17 + 0xd0) + 0xb8))();
    plVar12 = *(long **)(lVar17 + 0xd8);
  }
  FUN__text__005f6b94(plVar12,plVar12 + 0x16,*plVar8 + -0xb0,0);
  lVar14 = _DAT_0089f3b0;
  *(undefined1 *)(plVar12 + 0x15) = 0;
  *plVar12 = lVar14 + 0x10;
  plVar12[1] = lVar14 + 0xe8;
  *(long **)(lVar17 + 200) = plVar12;
  lVar17 = *plVar10;
  *(long **)(lVar17 + 0xf0) = plVar13;
  plVar8 = _DAT_0089f2d8;
  lVar16 = *_DAT_0089f2d8;
  *(long *)(lVar17 + 0x100) = lVar16;
  lVar16 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar16,8);
  *(long *)(lVar17 + 0xf8) = lVar16;
  if (lVar16 == 0) {
    (**(code **)(**(long **)(lVar17 + 0xf0) + 0xb8))();
    lVar16 = *(long *)(lVar17 + 0xf8);
  }
  FUN__text__005f6b94(lVar16,lVar16 + 0xa8,*plVar8 + -0xa8,0);
  *(long *)(lVar17 + 0xe8) = lVar16;
  lVar17 = *plVar10;
  *(long **)(lVar17 + 0x110) = plVar13;
  plVar8 = _DAT_0089f2e8;
  lVar16 = *_DAT_0089f2e8;
  *(long *)(lVar17 + 0x120) = lVar16;
  lVar16 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar16,8);
  *(long *)(lVar17 + 0x118) = lVar16;
  if (lVar16 == 0) {
    (**(code **)(**(long **)(lVar17 + 0x110) + 0xb8))();
    lVar16 = *(long *)(lVar17 + 0x118);
  }
  FUN__text__005f6b94(lVar16,lVar16 + 0xa8,*plVar8 + -0xa8,0);
  *(long *)(lVar17 + 0x108) = lVar16;
  lVar17 = *plVar10;
  *(long **)(lVar17 + 0x130) = plVar13;
  plVar8 = _DAT_0089f2f0;
  lVar16 = *_DAT_0089f2f0;
  *(long *)(lVar17 + 0x140) = lVar16;
  lVar16 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar16,8);
  *(long *)(lVar17 + 0x138) = lVar16;
  if (lVar16 == 0) {
    (**(code **)(**(long **)(lVar17 + 0x130) + 0xb8))();
    lVar16 = *(long *)(lVar17 + 0x138);
  }
  FUN__text__005f6b94(lVar16,lVar16 + 0xa8,*plVar8 + -0xa8,0);
  *(long *)(lVar17 + 0x128) = lVar16;
  lVar17 = *plVar10;
  *(long **)(lVar17 + 0x150) = plVar13;
  plVar8 = _DAT_0089f2e0;
  lVar16 = *_DAT_0089f2e0;
  *(long *)(lVar17 + 0x160) = lVar16;
  plVar12 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,lVar16,8);
  *(long **)(lVar17 + 0x158) = plVar12;
  if (plVar12 == (long *)0x0) {
    (**(code **)(**(long **)(lVar17 + 0x150) + 0xb8))();
    plVar12 = *(long **)(lVar17 + 0x158);
  }
  FUN__text__005f6b94(plVar12,plVar12 + 0x16,*plVar8 + -0xb0,0);
  *(undefined1 *)(plVar12 + 0x15) = 0;
  *plVar12 = lVar14 + 0x10;
  plVar12[1] = lVar14 + 0xe8;
  lVar16 = *plVar10;
  *(long **)(lVar17 + 0x148) = plVar12;
  *(long **)(lVar16 + 0x170) = plVar13;
  plVar8 = _DAT_0089f2f8;
  lVar14 = *_DAT_0089f2f8;
  *(long *)(lVar16 + 0x180) = lVar14;
  lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar14,8);
  *(long *)(lVar16 + 0x178) = lVar14;
  if (lVar14 == 0) {
    (**(code **)(**(long **)(lVar16 + 0x170) + 0xb8))();
    lVar14 = *(long *)(lVar16 + 0x178);
  }
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0);
  *(long *)(lVar16 + 0x168) = lVar14;
  lVar16 = *plVar10;
  *(long **)(lVar16 + 400) = plVar13;
  plVar8 = _DAT_0089f300;
  lVar14 = *_DAT_0089f300;
  *(long *)(lVar16 + 0x1a0) = lVar14;
  lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar14,8);
  *(long *)(lVar16 + 0x198) = lVar14;
  if (lVar14 == 0) {
    (**(code **)(**(long **)(lVar16 + 400) + 0xb8))();
    lVar14 = *(long *)(lVar16 + 0x198);
  }
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0);
  *(long *)(lVar16 + 0x188) = lVar14;
  lVar16 = *plVar10;
  *(long **)(lVar16 + 0x1b0) = plVar13;
  plVar8 = _DAT_0089f308;
  lVar14 = *_DAT_0089f308;
  *(long *)(lVar16 + 0x1c0) = lVar14;
  lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar14,8);
  *(long *)(lVar16 + 0x1b8) = lVar14;
  if (lVar14 == 0) {
    (**(code **)(**(long **)(lVar16 + 0x1b0) + 0xb8))();
    lVar14 = *(long *)(lVar16 + 0x1b8);
  }
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0);
  *(long *)(lVar16 + 0x1a8) = lVar14;
  lVar16 = *plVar10;
  *(long **)(lVar16 + 0x1d0) = plVar13;
  plVar8 = _DAT_0089f310;
  lVar14 = *_DAT_0089f310;
  *(long *)(lVar16 + 0x1e0) = lVar14;
  lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar14,8);
  *(long *)(lVar16 + 0x1d8) = lVar14;
  if (lVar14 == 0) {
    (**(code **)(**(long **)(lVar16 + 0x1d0) + 0xb8))();
    lVar14 = *(long *)(lVar16 + 0x1d8);
  }
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0);
  *(long *)(lVar16 + 0x1c8) = lVar14;
  lVar16 = *plVar10;
  *(long **)(lVar16 + 0x1f0) = plVar13;
  plVar8 = _DAT_0089f318;
  lVar14 = *_DAT_0089f318;
  *(long *)(lVar16 + 0x200) = lVar14;
  lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar14,8);
  *(long *)(lVar16 + 0x1f8) = lVar14;
  if (lVar14 == 0) {
    (**(code **)(**(long **)(lVar16 + 0x1f0) + 0xb8))();
    lVar14 = *(long *)(lVar16 + 0x1f8);
  }
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0);
  *(long *)(lVar16 + 0x1e8) = lVar14;
  lVar16 = *plVar10;
  *(long **)(lVar16 + 0x210) = plVar13;
  plVar8 = _DAT_0089f320;
  lVar14 = *_DAT_0089f320;
  *(long *)(lVar16 + 0x220) = lVar14;
  lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar14,8);
  *(long *)(lVar16 + 0x218) = lVar14;
  if (lVar14 == 0) {
    (**(code **)(**(long **)(lVar16 + 0x210) + 0xb8))();
    lVar14 = *(long *)(lVar16 + 0x218);
  }
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0);
  *(long *)(lVar16 + 0x208) = lVar14;
  lVar16 = *plVar10;
  *(long **)(lVar16 + 0x230) = plVar13;
  plVar8 = _DAT_0089f328;
  lVar14 = *_DAT_0089f328;
  *(long *)(lVar16 + 0x240) = lVar14;
  lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar14,8);
  *(long *)(lVar16 + 0x238) = lVar14;
  if (lVar14 == 0) {
    (**(code **)(**(long **)(lVar16 + 0x230) + 0xb8))();
    lVar14 = *(long *)(lVar16 + 0x238);
  }
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0);
  *(long *)(lVar16 + 0x228) = lVar14;
  lVar16 = *plVar10;
  *(long **)(lVar16 + 0x250) = plVar13;
  plVar8 = _DAT_0089f330;
  lVar14 = *_DAT_0089f330;
  *(long *)(lVar16 + 0x260) = lVar14;
  lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar14,8);
  *(long *)(lVar16 + 600) = lVar14;
  if (lVar14 == 0) {
    (**(code **)(**(long **)(lVar16 + 0x250) + 0xb8))();
    lVar14 = *(long *)(lVar16 + 600);
  }
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0);
  *(long *)(lVar16 + 0x248) = lVar14;
  lVar16 = *plVar10;
  *(long **)(lVar16 + 0x270) = plVar13;
  plVar8 = _DAT_0089f338;
  lVar14 = *_DAT_0089f338;
  *(long *)(lVar16 + 0x280) = lVar14;
  lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar14,8);
  *(long *)(lVar16 + 0x278) = lVar14;
  if (lVar14 == 0) {
    (**(code **)(**(long **)(lVar16 + 0x270) + 0xb8))();
    lVar14 = *(long *)(lVar16 + 0x278);
  }
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0);
  *(long *)(lVar16 + 0x268) = lVar14;
  lVar16 = *plVar10;
  *(long **)(lVar16 + 0x290) = plVar13;
  plVar8 = _DAT_0089f340;
  lVar14 = *_DAT_0089f340;
  *(long *)(lVar16 + 0x2a0) = lVar14;
  lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar14,8);
  *(long *)(lVar16 + 0x298) = lVar14;
  if (lVar14 == 0) {
    (**(code **)(**(long **)(lVar16 + 0x290) + 0xb8))();
    lVar14 = *(long *)(lVar16 + 0x298);
  }
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0);
  *(long *)(lVar16 + 0x288) = lVar14;
  lVar16 = *plVar10;
  *(long **)(lVar16 + 0x2b0) = plVar13;
  plVar8 = _DAT_0089f348;
  lVar14 = *_DAT_0089f348;
  *(long *)(lVar16 + 0x2c0) = lVar14;
  lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13,lVar14,8);
  *(long *)(lVar16 + 0x2b8) = lVar14;
  if (lVar14 == 0) {
    (**(code **)(**(long **)(lVar16 + 0x2b0) + 0xb8))();
    lVar14 = *(long *)(lVar16 + 0x2b8);
  }
  FUN__text__005f6b94(lVar14,lVar14 + 0xa8,*plVar8 + -0xa8,0);
  *(long *)(lVar16 + 0x2a8) = lVar14;
  FUN__text__005f54f0(0);
  FUN__text__005f8018(auStack_408,*(undefined8 *)(*plVar10 + 0x28));
  local_400 = 0x4c2c00;
  local_3e8 = *_DAT_0089f2c0 + 0x400000;
  local_3d8 = 0;
  FUN__text__00102c1c(auStack_14c0,auStack_408);
  FUN__text__005f54f0(1);
  FUN__text__005f8c90(auStack_14c0);
  lVar14 = *plVar10;
  (**(code **)**(undefined8 **)(lVar14 + 0x168))();
  *(undefined8 *)(lVar14 + 0x168) = 0;
  (**(code **)(**(long **)(lVar14 + 0x170) + 0x18))
            (*(long **)(lVar14 + 0x170),*(undefined8 *)(lVar14 + 0x178),
             *(undefined8 *)(lVar14 + 0x180),8);
  *(undefined8 *)(lVar14 + 0x178) = 0;
  *(undefined8 *)(lVar14 + 0x180) = 0;
  *(undefined8 *)(lVar14 + 0x170) = 0;
  lVar14 = *plVar10;
  (**(code **)**(undefined8 **)(lVar14 + 0x188))();
  *(undefined8 *)(lVar14 + 0x188) = 0;
  (**(code **)(**(long **)(lVar14 + 400) + 0x18))
            (*(long **)(lVar14 + 400),*(undefined8 *)(lVar14 + 0x198),
             *(undefined8 *)(lVar14 + 0x1a0),8);
  *(undefined8 *)(lVar14 + 0x198) = 0;
  *(undefined8 *)(lVar14 + 0x1a0) = 0;
  *(undefined8 *)(lVar14 + 400) = 0;
  lVar14 = *plVar10;
  (**(code **)**(undefined8 **)(lVar14 + 0x1a8))();
  *(undefined8 *)(lVar14 + 0x1a8) = 0;
  (**(code **)(**(long **)(lVar14 + 0x1b0) + 0x18))
            (*(long **)(lVar14 + 0x1b0),*(undefined8 *)(lVar14 + 0x1b8),
             *(undefined8 *)(lVar14 + 0x1c0),8);
  *(undefined8 *)(lVar14 + 0x1b8) = 0;
  *(undefined8 *)(lVar14 + 0x1c0) = 0;
  *(undefined8 *)(lVar14 + 0x1b0) = 0;
  lVar14 = *plVar10;
  (**(code **)**(undefined8 **)(lVar14 + 0x1c8))();
  *(undefined8 *)(lVar14 + 0x1c8) = 0;
  (**(code **)(**(long **)(lVar14 + 0x1d0) + 0x18))
            (*(long **)(lVar14 + 0x1d0),*(undefined8 *)(lVar14 + 0x1d8),
             *(undefined8 *)(lVar14 + 0x1e0),8);
  *(undefined8 *)(lVar14 + 0x1d8) = 0;
  *(undefined8 *)(lVar14 + 0x1e0) = 0;
  *(undefined8 *)(lVar14 + 0x1d0) = 0;
  lVar14 = *plVar10;
  (**(code **)**(undefined8 **)(lVar14 + 0x1e8))();
  *(undefined8 *)(lVar14 + 0x1e8) = 0;
  (**(code **)(**(long **)(lVar14 + 0x1f0) + 0x18))
            (*(long **)(lVar14 + 0x1f0),*(undefined8 *)(lVar14 + 0x1f8),
             *(undefined8 *)(lVar14 + 0x200),8);
  *(undefined8 *)(lVar14 + 0x1f8) = 0;
  *(undefined8 *)(lVar14 + 0x200) = 0;
  *(undefined8 *)(lVar14 + 0x1f0) = 0;
  lVar14 = *plVar10;
  (**(code **)**(undefined8 **)(lVar14 + 0x208))();
  *(undefined8 *)(lVar14 + 0x208) = 0;
  (**(code **)(**(long **)(lVar14 + 0x210) + 0x18))
            (*(long **)(lVar14 + 0x210),*(undefined8 *)(lVar14 + 0x218),
             *(undefined8 *)(lVar14 + 0x220),8);
  *(undefined8 *)(lVar14 + 0x220) = 0;
  *(undefined8 *)(lVar14 + 0x218) = 0;
  *(undefined8 *)(lVar14 + 0x210) = 0;
  lVar14 = *plVar10;
  (**(code **)**(undefined8 **)(lVar14 + 0x228))();
  *(undefined8 *)(lVar14 + 0x228) = 0;
  (**(code **)(**(long **)(lVar14 + 0x230) + 0x18))
            (*(long **)(lVar14 + 0x230),*(undefined8 *)(lVar14 + 0x238),
             *(undefined8 *)(lVar14 + 0x240),8);
  *(undefined8 *)(lVar14 + 0x240) = 0;
  *(undefined8 *)(lVar14 + 0x238) = 0;
  *(undefined8 *)(lVar14 + 0x230) = 0;
  lVar14 = *plVar10;
  (**(code **)**(undefined8 **)(lVar14 + 0x148))();
  *(undefined8 *)(lVar14 + 0x148) = 0;
  (**(code **)(**(long **)(lVar14 + 0x150) + 0x18))
            (*(long **)(lVar14 + 0x150),*(undefined8 *)(lVar14 + 0x158),
             *(undefined8 *)(lVar14 + 0x160),8);
  *(undefined8 *)(lVar14 + 0x158) = 0;
  *(undefined8 *)(lVar14 + 0x160) = 0;
  *(undefined8 *)(lVar14 + 0x150) = 0;
  lVar14 = *plVar10;
  (**(code **)**(undefined8 **)(lVar14 + 0x128))();
  *(undefined8 *)(lVar14 + 0x128) = 0;
  (**(code **)(**(long **)(lVar14 + 0x130) + 0x18))
            (*(long **)(lVar14 + 0x130),*(undefined8 *)(lVar14 + 0x138),
             *(undefined8 *)(lVar14 + 0x140),8);
  *(undefined8 *)(lVar14 + 0x138) = 0;
  *(undefined8 *)(lVar14 + 0x140) = 0;
  *(undefined8 *)(lVar14 + 0x130) = 0;
  lVar14 = *plVar10;
  (**(code **)**(undefined8 **)(lVar14 + 0x108))();
  *(undefined8 *)(lVar14 + 0x108) = 0;
  (**(code **)(**(long **)(lVar14 + 0x110) + 0x18))
            (*(long **)(lVar14 + 0x110),*(undefined8 *)(lVar14 + 0x118),
             *(undefined8 *)(lVar14 + 0x120),8);
  *(undefined8 *)(lVar14 + 0x118) = 0;
  *(undefined8 *)(lVar14 + 0x120) = 0;
  *(undefined8 *)(lVar14 + 0x110) = 0;
  lVar14 = *plVar10;
  (**(code **)**(undefined8 **)(lVar14 + 0xe8))();
  *(undefined8 *)(lVar14 + 0xe8) = 0;
  (**(code **)(**(long **)(lVar14 + 0xf0) + 0x18))
            (*(long **)(lVar14 + 0xf0),*(undefined8 *)(lVar14 + 0xf8),
             *(undefined8 *)(lVar14 + 0x100),8);
  *(undefined8 *)(lVar14 + 0xf8) = 0;
  *(undefined8 *)(lVar14 + 0x100) = 0;
  *(undefined8 *)(lVar14 + 0xf0) = 0;
  lVar14 = *plVar10;
  (**(code **)**(undefined8 **)(lVar14 + 200))();
  *(undefined8 *)(lVar14 + 200) = 0;
  (**(code **)(**(long **)(lVar14 + 0xd0) + 0x18))
            (*(long **)(lVar14 + 0xd0),*(undefined8 *)(lVar14 + 0xd8),*(undefined8 *)(lVar14 + 0xe0)
             ,8);
  *(undefined8 *)(lVar14 + 0xd8) = 0;
  *(undefined8 *)(lVar14 + 0xe0) = 0;
  *(undefined8 *)(lVar14 + 0xd0) = 0;
  lVar14 = *plVar10;
  (**(code **)**(undefined8 **)(lVar14 + 0x248))();
  *(undefined8 *)(lVar14 + 0x248) = 0;
  (**(code **)(**(long **)(lVar14 + 0x250) + 0x18))
            (*(long **)(lVar14 + 0x250),*(undefined8 *)(lVar14 + 600),
             *(undefined8 *)(lVar14 + 0x260),8);
  *(undefined8 *)(lVar14 + 0x260) = 0;
  *(undefined8 *)(lVar14 + 600) = 0;
  *(undefined8 *)(lVar14 + 0x250) = 0;
  lVar14 = *plVar10;
  (**(code **)**(undefined8 **)(lVar14 + 0x268))();
  *(undefined8 *)(lVar14 + 0x268) = 0;
  (**(code **)(**(long **)(lVar14 + 0x270) + 0x18))
            (*(long **)(lVar14 + 0x270),*(undefined8 *)(lVar14 + 0x278),
             *(undefined8 *)(lVar14 + 0x280),8);
  *(undefined8 *)(lVar14 + 0x280) = 0;
  *(undefined8 *)(lVar14 + 0x278) = 0;
  *(undefined8 *)(lVar14 + 0x270) = 0;
  lVar14 = *plVar10;
  (**(code **)**(undefined8 **)(lVar14 + 0x288))();
  *(undefined8 *)(lVar14 + 0x288) = 0;
  (**(code **)(**(long **)(lVar14 + 0x290) + 0x18))
            (*(long **)(lVar14 + 0x290),*(undefined8 *)(lVar14 + 0x298),
             *(undefined8 *)(lVar14 + 0x2a0),8);
  *(undefined8 *)(lVar14 + 0x2a0) = 0;
  *(undefined8 *)(lVar14 + 0x298) = 0;
  *(undefined8 *)(lVar14 + 0x290) = 0;
  lVar14 = *plVar10;
  (**(code **)**(undefined8 **)(lVar14 + 0x2a8))();
  *(undefined8 *)(lVar14 + 0x2a8) = 0;
  (**(code **)(**(long **)(lVar14 + 0x2b0) + 0x18))
            (*(long **)(lVar14 + 0x2b0),*(undefined8 *)(lVar14 + 0x2b8),
             *(undefined8 *)(lVar14 + 0x2c0),8);
  *(undefined8 *)(lVar14 + 0x2c0) = 0;
  *(undefined8 *)(lVar14 + 0x2b8) = 0;
  *(undefined8 *)(lVar14 + 0x2b0) = 0;
  lVar14 = *plVar10;
  (**(code **)**(undefined8 **)(lVar14 + 0xa8))();
  *(undefined8 *)(lVar14 + 0xa8) = 0;
  (**(code **)(**(long **)(lVar14 + 0xb0) + 0x18))
            (*(long **)(lVar14 + 0xb0),*(undefined8 *)(lVar14 + 0xb8),*(undefined8 *)(lVar14 + 0xc0)
             ,8);
  *(undefined8 *)(lVar14 + 0xb8) = 0;
  *(undefined8 *)(lVar14 + 0xc0) = 0;
  *(undefined8 *)(lVar14 + 0xb0) = 0;
  lVar14 = *plVar10;
  (**(code **)**(undefined8 **)(lVar14 + 0x88))();
  *(undefined8 *)(lVar14 + 0x88) = 0;
  (**(code **)(**(long **)(lVar14 + 0x90) + 0x18))
            (*(long **)(lVar14 + 0x90),*(undefined8 *)(lVar14 + 0x98),*(undefined8 *)(lVar14 + 0xa0)
             ,8);
  *(undefined8 *)(lVar14 + 0x98) = 0;
  *(undefined8 *)(lVar14 + 0xa0) = 0;
  *(undefined8 *)(lVar14 + 0x90) = 0;
  lVar14 = *plVar10;
  (**(code **)**(undefined8 **)(lVar14 + 0x48))();
  *(undefined8 *)(lVar14 + 0x48) = 0;
  (**(code **)(**(long **)(lVar14 + 0x50) + 0x18))
            (*(long **)(lVar14 + 0x50),*(undefined8 *)(lVar14 + 0x58),*(undefined8 *)(lVar14 + 0x60)
             ,8);
  *(undefined8 *)(lVar14 + 0x58) = 0;
  *(undefined8 *)(lVar14 + 0x60) = 0;
  *(undefined8 *)(lVar14 + 0x50) = 0;
  lVar14 = *plVar10;
  (**(code **)**(undefined8 **)(lVar14 + 0x28))();
  *(undefined8 *)(lVar14 + 0x28) = 0;
  (**(code **)(**(long **)(lVar14 + 0x30) + 0x18))
            (*(long **)(lVar14 + 0x30),*(undefined8 *)(lVar14 + 0x38),*(undefined8 *)(lVar14 + 0x40)
             ,8);
  *(undefined8 *)(lVar14 + 0x38) = 0;
  *(undefined8 *)(lVar14 + 0x40) = 0;
  *(undefined8 *)(lVar14 + 0x30) = 0;
  lVar14 = *plVar10;
  (**(code **)**(undefined8 **)(lVar14 + 8))();
  *(undefined8 *)(lVar14 + 8) = 0;
  (**(code **)(**(long **)(lVar14 + 0x10) + 0x18))
            (*(long **)(lVar14 + 0x10),*(undefined8 *)(lVar14 + 0x18),*(undefined8 *)(lVar14 + 0x20)
             ,8);
  *(undefined8 *)(lVar14 + 0x18) = 0;
  *(undefined8 *)(lVar14 + 0x20) = 0;
  *(undefined8 *)(lVar14 + 0x10) = 0;
  if (cStack_418 != '\0') {
    nn::os::DestroySystemEvent(aSStack_440);
  }
  FUN__text__00102314(auStack_1320);
  if (local_1330 != 0) {
    (**(code **)(*(long *)(local_1330 + 0x48) + 0x18))();
    local_1330 = 0;
  }
  FUN__text__005f8650(auStack_14c0);
  lVar14 = 0;
  *plVar10 = 0;
  do {
    if (*(long *)((long)local_3c0 + lVar14 + 0x10) != 0) {
      (**(code **)(**(long **)((long)local_3c0 + lVar14) + 0xb8))();
    }
    lVar14 = lVar14 + 0x20;
  } while (lVar14 != 0x360);
  local_3c8 = lVar15 + 0x10;
  pLVar11 = (LightEventType *)FUN__text__005f6af4();
  pLVar1 = pLVar11 + 2;
  while (*pLVar1 == (LightEventType)0x4f) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
    if (bVar5) {
      *pLVar1 = LVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB__text__001018f4;
  }
  pLVar2 = pLVar11 + 3;
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
        nn::os::WaitLightEvent(pLVar11);
        while (*pLVar1 == (LightEventType)0x4f) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
          if (bVar5) {
            *pLVar1 = LVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB__text__001018e4;
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
LAB__text__001018e4:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10);
    if (bVar5) {
      *pLVar2 = (LightEventType)((char)*pLVar2 + -1);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__001018f4:
  lVar15 = puVar9[0x100];
  if (lVar15 == 0) {
    __dest = puVar9;
  }
  else {
    lVar14 = lVar15 << 3;
    __dest = _DAT_0089f3c8;
    while ((long *)*__dest != &local_3c8) {
      __dest = __dest + 1;
      lVar14 = lVar14 + -8;
      if (lVar14 == 0) goto LAB__text__00101960;
    }
  }
  puVar3 = puVar9 + lVar15;
  if (__dest != puVar3) {
    __src = __dest + 1;
    if (__src != puVar3) {
      memmove(__dest,__src,(long)puVar3 - (long)__src);
      lVar15 = puVar9[0x100];
    }
    puVar9[0x100] = lVar15 + -1;
  }
LAB__text__00101960:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
    if (bVar5) {
      *pLVar1 = (LightEventType)0x4f;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  if (pLVar11[3] != (LightEventType)0x0) {
    nn::os::SignalLightEvent(pLVar11);
  }
  return;
}


