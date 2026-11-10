/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047a020; name: FUN_.text__0047a020
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0047a020(long *param_1)

{
  int *piVar1;
  MutexType *pMVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  char local_44 [4];
  
  if ((*(ushort *)(param_1 + 0x41) >> 5 & 1) == 0) {
    return;
  }
  FUN__text__00477aa0();
  uVar6 = *(ushort *)(param_1 + 0x41);
  *(ushort *)(param_1 + 0x41) = uVar6 & 0xffdf;
  if ((uVar6 >> 6 & 1) == 0) {
    FUN__text__0046ab40(param_1[0x3a],param_1 + 1,param_1 + 0x2c,param_1 + 0x31);
    if ((((*(byte *)(param_1 + 0x2e) >> 3 & 1) != 0) &&
        ((*(ushort *)((long)param_1 + 0x19c) & 7) - 1 < 2)) && (param_1[0x39] == 0)) {
      FUN__text__0046adf0(param_1[0x3a],param_1 + 0x39);
    }
  }
  else {
    param_1[0x2c] = 0x3f8000003f000000;
    param_1[0x2d] = 0x42c8000000000000;
    *(byte *)(param_1 + 0x2e) = *(byte *)(param_1 + 0x2e) & 0xf0;
  }
  if (((param_1[0x39] != 0) && (param_1[0x2a] == 0)) &&
     ((iVar10 = FUN__text__004785a8(param_1,0), puVar15 = _DAT_008a4650, iVar10 == 1 &&
      (param_1[0x2a] != 0)))) {
    iVar10 = FUN__text__0047bc40(*_DAT_008a4650,param_1[0x2a],param_1);
    if (iVar10 == 2) {
      param_1[0x2a] = 0;
    }
    else {
      (**(code **)(*param_1 + 0x88))(param_1,param_1[0x2a]);
      if ((iVar10 == 1) && (lVar12 = param_1[0x2a], lVar12 != 0)) {
        uVar14 = *puVar15;
        uVar11 = FUN__text__0046ab20(param_1[0x3a]);
        FUN__text__0047c20c(uVar14,lVar12,uVar11);
      }
    }
  }
  lVar12 = DAT_00ae9a38;
  lVar13 = param_1[0x34];
  if (lVar13 == 0) {
    uVar4 = *(uint *)((long)param_1 + 0x18c);
    if (uVar4 == 0) {
      return;
    }
    piVar1 = (int *)(DAT_00ae9a38 + 0x2d0);
    pMVar2 = (MutexType *)(DAT_00ae9a38 + 0x2e0);
    while( true ) {
      while (iVar10 = *piVar1, -1 < iVar10) {
        while (*piVar1 == iVar10) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar10 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB__text__0047a25c;
        }
        ClearExclusiveLocal();
      }
      nn::os::LockMutex(pMVar2);
      if (*piVar1 < 0) break;
      nn::os::UnlockMutex(pMVar2);
    }
LAB__text__0047a25c:
    uVar5 = *(uint *)(lVar12 + 0x338);
    if (uVar5 == 0) {
      lVar13 = 0;
    }
    else {
      uVar9 = 0;
      if (uVar5 != 0) {
        uVar9 = uVar4 / uVar5;
      }
      lVar13 = *(long *)(*(long *)(lVar12 + 0x330) + (ulong)(uVar4 - uVar9 * uVar5) * 8);
      if (lVar13 != 0) {
LAB__text__0047a280:
        if (*(uint *)(lVar13 + 0x10) != uVar4) goto code_r0x0047a28c;
        piVar3 = (int *)(lVar13 + 0x14);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = *piVar3 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
    }
LAB__text__0047a2bc:
    while (iVar10 = *piVar1, -1 < iVar10) {
      while (*piVar1 == iVar10) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar10 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 == '\0') {
          if ((iVar10 + -1 == 0) && (0 < *(int *)(lVar12 + 0x300))) {
            nn::os::SignalEvent((EventType *)(lVar12 + 0x308));
          }
          param_1[0x34] = lVar13;
          goto joined_r0x0047a304;
        }
      }
      ClearExclusiveLocal();
    }
    nn::os::UnlockMutex(pMVar2);
    param_1[0x34] = lVar13;
joined_r0x0047a304:
    if (lVar13 == 0) {
      return;
    }
  }
  local_44[0] = '\x01';
  *(undefined4 *)(param_1 + 0x32) = *(undefined4 *)(lVar13 + 0x20);
  *(undefined4 *)((long)param_1 + 0x194) = *(undefined4 *)(lVar13 + 0x24);
  *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)(lVar13 + 0x28);
  if ((int)param_1[0x3d] != 0) {
    puVar15 = (undefined8 *)param_1[0x3c];
    do {
      FUN__text__00432ba0(param_1 + 0xb,puVar15[2],local_44);
      if (local_44[0] == '\0') {
        FUN__text__00433930(param_1,*puVar15);
      }
      puVar15 = puVar15 + 3;
    } while (puVar15 != (undefined8 *)(param_1[0x3c] + (ulong)*(uint *)(param_1 + 0x3d) * 0x18));
  }
  *(undefined4 *)(param_1 + 0x3d) = 0;
  FUN__text__0047acd0(param_1,lVar13);
  return;
code_r0x0047a28c:
  lVar13 = *(long *)(lVar13 + 8);
  if (lVar13 == 0) goto LAB__text__0047a2bc;
  goto LAB__text__0047a280;
}


