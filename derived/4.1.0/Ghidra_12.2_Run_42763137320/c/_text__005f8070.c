/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f8070; name: FUN_.text__005f8070
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f8070(long *param_1,long *param_2)

{
  LightEventType *pLVar1;
  LightEventType *pLVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  char cVar7;
  bool bVar8;
  LightEventType LVar9;
  LightEventType *pLVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long local_60;
  undefined1 local_58;
  
  *param_1 = _DAT_008a5cf8 + 0x10;
  FUN__text__005e8c58(param_1 + 1,0);
  plVar11 = param_1 + 0x19;
  *plVar11 = _DAT_0089f3c0 + 0x10;
  pLVar10 = (LightEventType *)FUN__text__005f6af4();
  uVar3 = tpidr_el0;
  LVar9 = (LightEventType)((byte)((uint)uVar3 >> 0xd) & 0x4f);
  pLVar1 = pLVar10 + 2;
  while (*pLVar1 == (LightEventType)0x4f) {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
    if (bVar8) {
      *pLVar1 = LVar9;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB__text__005f8164;
  }
  pLVar2 = pLVar10 + 3;
  ClearExclusiveLocal();
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(pLVar2,0x10);
    if (bVar8) {
      *pLVar2 = (LightEventType)((char)*pLVar2 + '\x01');
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pLVar1 != (LightEventType)0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar10);
        while (*pLVar1 == (LightEventType)0x4f) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
          if (bVar8) {
            *pLVar1 = LVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB__text__005f8154;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
    if (bVar8) {
      *pLVar1 = LVar9;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB__text__005f8154:
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(pLVar2,0x10);
    if (bVar8) {
      *pLVar2 = (LightEventType)((char)*pLVar2 + -1);
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB__text__005f8164:
  lVar12 = _DAT_0089f3c8;
  if (*(long *)(_DAT_0089f3c8 + 0x800) == 0x100) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(_DAT_0089f3c8 + *(long *)(_DAT_0089f3c8 + 0x800) * 8) = plVar11;
  *(long *)(lVar12 + 0x800) = *(long *)(lVar12 + 0x800) + 1;
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
    if (bVar8) {
      *pLVar1 = (LightEventType)0x4f;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  DataMemoryBarrier(2,3);
  if (pLVar10[3] != (LightEventType)0x0) {
    nn::os::SignalLightEvent(pLVar10);
  }
  lVar12 = _DAT_008a5d00;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x19] = lVar12 + 0x10;
  param_1[0x1a] = 0;
  plVar5 = _DAT_0089f7d0;
  param_1[0x22] = *param_2;
  *plVar5 = (long)plVar11;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  lVar15 = param_2[2];
  lVar4 = param_2[3];
  param_1[0x29] = 0;
  param_1[0x2a] = 0x1fca056;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x1fca056;
  param_1[0x2d] = (long)(param_1 + 0x28);
  lVar12 = _DAT_008a5d08 + 0x10;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)((long)param_1 + 0x172) = 0;
  param_1[0x27] = lVar4 + lVar15;
  param_1[0x28] = lVar12;
  lVar12 = param_2[6];
  param_1[0x31] = 0;
  *(char *)((long)param_1 + 0x173) = (char)lVar12;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  FUN__text__005e9054(0);
  FUN__text__005ea1c0(*(undefined4 *)((long)param_2 + 0x34),param_2[7]);
  lVar15 = *plVar5;
  plVar11 = (long *)FUN__text__005f5290();
  *(long **)(lVar15 + 0x10) = plVar11;
  *(long *)(lVar15 + 0x20) = param_2[1];
  lVar12 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2[1],8);
  *(long *)(lVar15 + 0x18) = lVar12;
  if (lVar12 == 0) {
    (**(code **)(**(long **)(lVar15 + 0x10) + 0xb8))();
    lVar12 = *(long *)(lVar15 + 0x18);
  }
  FUN__text__005f6b94(lVar12,lVar12 + 0xa8,param_2[1] + -0xa8,0);
  *(long *)(lVar15 + 8) = lVar12;
  lVar15 = *plVar5;
  plVar11 = (long *)FUN__text__005f5290();
  *(long **)(lVar15 + 0x30) = plVar11;
  *(long *)(lVar15 + 0x40) = param_2[4];
  lVar12 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2[4],8);
  *(long *)(lVar15 + 0x38) = lVar12;
  if (lVar12 == 0) {
    (**(code **)(**(long **)(lVar15 + 0x30) + 0xb8))();
    lVar12 = *(long *)(lVar15 + 0x38);
  }
  FUN__text__005f6b94(lVar12,lVar12 + 0xa8,param_2[4] + -0xa8,0);
  *(long *)(lVar15 + 0x28) = lVar12;
  local_58 = 1;
  local_60 = param_2[5];
  FUN__text__005e3ff8(&local_60);
  FUN__text__005f83e8(param_1[0x22]);
  if ((char)param_2[6] != '\0') {
    nn::hid::InitializeNpad();
    local_60 = 0x2000000000;
    nn::hid::SetSupportedNpadIdType((uint *)&local_60,2);
    nn::hid::SetSupportedNpadStyleSet(7);
  }
  FUN__text__005f851c(param_1[0x22]);
  lVar12 = FUN__text__005f8fb4(&local_60,param_1[0x22]);
  plVar11 = _DAT_008a5ce8;
  puVar13 = (undefined8 *)*_DAT_008a5ce8;
  *_DAT_008a5ce8 = lVar12;
  if (puVar13 != (undefined8 *)0x0) {
    plVar5 = (long *)puVar13[1];
    uVar3 = puVar13[2];
    uVar6 = puVar13[3];
    uVar14 = puVar13[4];
    (**(code **)*puVar13)(puVar13);
    (**(code **)(*plVar5 + 0x18))(plVar5,uVar3,uVar6,uVar14);
    lVar12 = *plVar11;
  }
  lVar15 = 0;
  if (lVar12 != 0) {
    lVar15 = lVar12 + 0x48;
  }
  FUN__text__005e914c(lVar15);
  return;
}


