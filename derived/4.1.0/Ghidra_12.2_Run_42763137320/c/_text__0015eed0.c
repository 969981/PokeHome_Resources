/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015eed0; name: FUN_.text__0015eed0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0015eed0(long *param_1)

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
  long lVar10;
  long *plVar11;
  
  param_1[7] = 0;
  lVar10 = _DAT_0089f690;
  *(undefined4 *)(param_1 + 8) = 0;
  uVar7 = tpidr_el0;
  uVar3 = uVar7 & 0xffffffffffffe000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar10 + 0x10;
  lVar10 = 0;
  if (uVar3 != 0) {
    if (*(long *)(uVar3 + 0x98) == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *(long *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x10);
    }
  }
  *_DAT_008a03f8 = 1;
  lVar8 = _DAT_0089f3c0;
  *param_1 = 0x86b408;
  param_1[1] = lVar10;
  param_1[9] = 0x86b438;
  plVar11 = param_1 + 10;
  *plVar11 = lVar8 + 0x10;
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
    if (cVar4 == '\0') goto LAB__text__0015f004;
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
          if (cVar4 == '\0') goto LAB__text__0015eff4;
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
LAB__text__0015eff4:
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(pLVar2,0x10);
    if (bVar5) {
      *pLVar2 = (LightEventType)((char)*pLVar2 + -1);
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB__text__0015f004:
  if (DAT_00c15c20 == 0x100) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(&DAT_00c15420 + DAT_00c15c20 * 8) = plVar11;
  DAT_00c15c20 = DAT_00c15c20 + 1;
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
  lVar10 = _DAT_008a0408;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[10] = lVar10 + 0x10;
  param_1[0xb] = 0;
  param_1[0x12] = 0;
  DAT_008e1d28 = plVar11;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  lVar10 = _DAT_0089f6e0 + 0x10;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x50] = lVar10;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined4 *)((long)param_1 + 0x394) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x76] = lVar10;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined4 *)((long)param_1 + 0x4c4) = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xa1] = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = lVar10;
  *(undefined1 *)(param_1 + 0xbe) = 0;
  *(undefined4 *)((long)param_1 + 0x5f4) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[0xc2] = lVar10;
  *(undefined1 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)((long)param_1 + 0x724) = 0;
  *(undefined4 *)(param_1 + 0xe6) = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xed] = 0;
  param_1[0xec] = 0;
  param_1[0xeb] = 0;
  param_1[0xea] = 0;
  param_1[0xe9] = 0;
  param_1[0xe8] = lVar10;
  *(undefined1 *)(param_1 + 0x10a) = 0;
  *(undefined4 *)((long)param_1 + 0x854) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  param_1[0x123] = 0;
  param_1[0x122] = 0;
  param_1[0x121] = 0;
  param_1[0x120] = 0;
  param_1[0x113] = 0;
  param_1[0x112] = 0;
  param_1[0x111] = 0;
  param_1[0x110] = 0;
  param_1[0x10f] = 0;
  param_1[0x10e] = lVar10;
  *(undefined1 *)(param_1 + 0x130) = 0;
  *(undefined4 *)((long)param_1 + 0x984) = 0;
  *(undefined4 *)(param_1 + 0x132) = 0;
  param_1[0x149] = 0;
  param_1[0x148] = 0;
  param_1[0x147] = 0;
  param_1[0x146] = 0;
  param_1[0x139] = 0;
  param_1[0x138] = 0;
  param_1[0x137] = 0;
  param_1[0x136] = 0;
  param_1[0x135] = 0;
  param_1[0x134] = lVar10;
  *(undefined1 *)(param_1 + 0x156) = 0;
  *(undefined4 *)((long)param_1 + 0xab4) = 0;
  param_1[0x158] = 0;
  param_1[0x177] = 0;
  param_1[0x176] = 0;
  param_1[0x175] = 0;
  param_1[0x174] = 0;
  param_1[0x167] = 0;
  param_1[0x166] = 0;
  param_1[0x165] = 0;
  param_1[0x164] = 0;
  param_1[0x163] = 0;
  *(undefined4 *)((long)param_1 + 0xb0c) = 0;
  param_1[0x162] = lVar10;
  *(undefined1 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x159) = 0;
  param_1[0x14] = lVar10;
  param_1[0x15] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined8 *)((long)param_1 + 0xafc) = 0;
  *(undefined8 *)((long)param_1 + 0xb04) = 0;
  *(undefined8 *)((long)param_1 + 0xaec) = 0;
  *(undefined8 *)((long)param_1 + 0xaf4) = 0;
  *(undefined8 *)((long)param_1 + 0xadc) = 0;
  *(undefined8 *)((long)param_1 + 0xae4) = 0;
  *(undefined8 *)((long)param_1 + 0xacc) = 0;
  *(undefined8 *)((long)param_1 + 0xad4) = 0;
  return;
}


