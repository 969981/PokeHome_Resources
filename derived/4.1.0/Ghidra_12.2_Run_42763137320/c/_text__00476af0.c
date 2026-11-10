/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00476af0; name: FUN_.text__00476af0
 */


void FUN__text__00476af0(long *param_1)

{
  int *piVar1;
  MutexType *pMVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  float fVar16;
  
  lVar13 = param_1[0x37];
  *(undefined4 *)((long)param_1 + 0x18c) = 0x42ca0000;
  lVar9 = DAT_00ae9a38;
  if (lVar13 == 0) {
    uVar14 = *(uint *)((long)param_1 + 0x1a4);
    if (uVar14 == 0) goto LAB__text__00476c24;
    piVar1 = (int *)(DAT_00ae9a38 + 0x2d0);
    pMVar2 = (MutexType *)(DAT_00ae9a38 + 0x2e0);
    while( true ) {
      while (iVar4 = *piVar1, -1 < iVar4) {
        while (*piVar1 == iVar4) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar4 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB__text__00476ba8;
        }
        ClearExclusiveLocal();
      }
      nn::os::LockMutex(pMVar2);
      if (*piVar1 < 0) break;
      nn::os::UnlockMutex(pMVar2);
    }
LAB__text__00476ba8:
    uVar5 = *(uint *)(lVar9 + 0x338);
    if (uVar5 == 0) {
      lVar13 = 0;
    }
    else {
      uVar8 = 0;
      if (uVar5 != 0) {
        uVar8 = uVar14 / uVar5;
      }
      lVar13 = *(long *)(*(long *)(lVar9 + 0x330) + (ulong)(uVar14 - uVar8 * uVar5) * 8);
      if (lVar13 != 0) {
LAB__text__00476bc4:
        if (*(uint *)(lVar13 + 0x10) != uVar14) goto code_r0x00476bd0;
        piVar3 = (int *)(lVar13 + 0x14);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = *piVar3 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
    }
LAB__text__00476ca8:
    while (iVar4 = *piVar1, -1 < iVar4) {
      while (*piVar1 == iVar4) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') {
          if ((iVar4 + -1 == 0) && (0 < *(int *)(lVar9 + 0x300))) {
            nn::os::SignalEvent((EventType *)(lVar9 + 0x308));
          }
          param_1[0x37] = lVar13;
          goto joined_r0x00476ce8;
        }
      }
      ClearExclusiveLocal();
    }
    nn::os::UnlockMutex(pMVar2);
    param_1[0x37] = lVar13;
joined_r0x00476ce8:
    if (lVar13 == 0) goto LAB__text__00476c24;
  }
  if (((*(ushort *)((long)param_1 + 0x1b4) >> 7 & 1) == 0) ||
     ((*(ushort *)(param_1 + 0x44) >> 3 & 1) == 0)) {
    lVar9 = param_1[4];
    uVar14 = (uint)*(ushort *)(*(long *)(lVar9 + 8) + 0x38);
    plVar12 = (long *)(*(long *)(lVar9 + 8) + 0x20);
  }
  else {
    uVar14 = *(uint *)(param_1 + 0x3b);
    plVar12 = param_1 + 0x3a;
    lVar9 = param_1[4];
  }
  lVar15 = *plVar12;
  uVar10 = FUN__text__0044a594(lVar9);
  fVar16 = (float)FUN__text__004714a0(lVar15,uVar14,uVar10);
  (**(code **)(*param_1 + 0xc0))
            (fVar16 / *(float *)(*(long *)(param_1[4] + 8) + 0x78),param_1,lVar13);
LAB__text__00476c24:
  if ((((param_1[0x3c] == 0) || (param_1[0x2d] == 0)) ||
      (uVar14 = *(uint *)(param_1[0x3c] + 0x30), FUN__text__0047d158(param_1[0x2d],uVar14 >> 0x1f),
      -1 < (int)uVar14)) ||
     (((*(byte *)(param_1[0x2d] + 0x28) >> 1 & 1) == 0 ||
      (uVar11 = FUN__text__0047cd40(), (uVar11 & 1) == 0)))) {
    return;
  }
  FUN__text__004786dc(param_1 + 3);
  return;
code_r0x00476bd0:
  lVar13 = *(long *)(lVar13 + 8);
  if (lVar13 == 0) goto LAB__text__00476ca8;
  goto LAB__text__00476bc4;
}


