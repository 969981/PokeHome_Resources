/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002f8f00; name: FUN_.text__002f8f00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002f8f00(long *param_1)

{
  LightEventType *pLVar1;
  LightEventType *pLVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  LightEventType LVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  LightEventType *pLVar10;
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
  lVar12 = _DAT_008a2930;
  if (uVar3 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(uVar3 + 0x98) != 0) {
      lVar11 = *(long *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x10);
    }
  }
  *_DAT_008a2928 = 1;
  lVar8 = _DAT_0089f3c0;
  *param_1 = lVar12 + 0x10;
  param_1[1] = lVar11;
  param_1[9] = lVar12 + 0x40;
  plVar13 = param_1 + 10;
  *plVar13 = lVar8 + 0x10;
  pLVar10 = (LightEventType *)FUN__text__005f6af4();
  LVar6 = (LightEventType)((byte)((uint)uVar7 >> 0xd) & 0x4f);
  pLVar1 = pLVar10 + 2;
  while (*pLVar1 == (LightEventType)0x4f) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar1,0x10);
    if (bVar5) {
      *pLVar1 = LVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB__text__002f9044;
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
          if (cVar4 == '\0') goto LAB__text__002f9034;
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
LAB__text__002f9034:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10);
    if (bVar5) {
      *pLVar2 = (LightEventType)((char)*pLVar2 + -1);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__002f9044:
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
  if (pLVar10[3] != (LightEventType)0x0) {
    nn::os::SignalLightEvent(pLVar10);
  }
  lVar12 = _DAT_008a2938;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  puVar9 = _DAT_008a2940;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  *puVar9 = plVar13;
  param_1[10] = lVar12 + 0x10;
  param_1[0xb] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  nn::os::InitializeLightEvent(param_1 + 0x15,0,1);
  *(undefined1 *)((long)param_1 + 0xaa) = 0x4f;
  *(undefined1 *)((long)param_1 + 0xab) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN__text__005dd7d8(param_1 + 0x18);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  if (((uVar3 == 0) || (*(long *)(uVar3 + 0x98) == 0)) ||
     (lVar12 = *(long *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x10), lVar12 == 0)) {
    lVar12 = FUN__text__005f52b0();
    param_1[0x24] = lVar12;
    param_1[0x25] = 0;
    *(undefined4 *)(param_1 + 0x26) = 0;
    param_1[0x27] = 0;
    if (uVar3 != 0) goto LAB__text__002f912c;
  }
  else {
    param_1[0x24] = lVar12;
    param_1[0x25] = 0;
    *(undefined4 *)(param_1 + 0x26) = 0;
    param_1[0x27] = 0;
LAB__text__002f912c:
    if ((*(long *)(uVar3 + 0x98) != 0) &&
       (lVar12 = *(long *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x10), lVar12 != 0))
    goto LAB__text__002f9144;
  }
  lVar12 = FUN__text__005f52b0();
LAB__text__002f9144:
  param_1[0x28] = lVar12;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x31),false,0);
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x39),false,0);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3d] = 0;
  if (((uVar3 == 0) || (*(long *)(uVar3 + 0x98) == 0)) ||
     (lVar12 = *(long *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x10), lVar12 == 0)) {
    lVar12 = FUN__text__005f52b0();
  }
  param_1[0x40] = lVar12;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xa6] = _DAT_0089ff80 + 0x10;
  param_1[0x44] = (long)FUN__text__002fb01c;
  param_1[0x45] = (long)&DAT__text__002fb078;
  param_1[0x46] = (long)&LAB__text__002fb07c;
  param_1[0x47] = (long)&LAB__text__002fb088;
  param_1[0x54] = (long)FUN__text__002fb0a0;
  param_1[0x55] = (long)&DAT__text__002fb0e4;
  param_1[0x56] = (long)&LAB__text__002fb0e8;
  param_1[0x57] = (long)&LAB__text__002fb0f4;
  param_1[100] = (long)FUN__text__002fb100;
  param_1[0x65] = (long)&DAT__text__002fb4f4;
  param_1[0x66] = (long)&LAB__text__002fb4f8;
  param_1[0x67] = (long)&LAB__text__002fb504;
  param_1[0x74] = (long)&LAB__text__002fb510;
  param_1[0x75] = (long)&DAT__text__002fb6c0;
  param_1[0x76] = (long)&LAB__text__002fb6c4;
  param_1[0x77] = (long)&LAB__text__002fb6d0;
  param_1[0x84] = (long)&LAB__text__002fb6e0;
  param_1[0x85] = (long)&DAT__text__002fb89c;
  param_1[0x86] = (long)&LAB__text__002fb8a0;
  param_1[0x87] = (long)&LAB__text__002fb8ac;
  param_1[0x94] = (long)FUN__text__002fb8b8;
  param_1[0x95] = (long)&DAT__text__002fbc98;
  param_1[0x96] = (long)&LAB__text__002fbc9c;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0x48] = (long)param_1;
  param_1[0x58] = (long)param_1;
  param_1[0x68] = (long)param_1;
  param_1[0x78] = (long)param_1;
  param_1[0x88] = (long)param_1;
  param_1[0x98] = (long)param_1;
  param_1[0x97] = (long)&LAB__text__002fbca8;
  return;
}


