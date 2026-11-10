/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051d790; name: FUN_.text__0051d790
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0051d790(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int *piVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  char local_34 [3];
  undefined1 uStack_31;
  
  piVar8 = _DAT_008a4048;
  while( true ) {
    while (iVar11 = *piVar8, -1 < iVar11) {
      while (*piVar8 == iVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar5) {
          *piVar8 = iVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto LAB__text__0051d808;
      }
      ClearExclusiveLocal();
    }
    nn::os::LockMutex((MutexType *)(piVar8 + 4));
    if (*piVar8 < 0) break;
    nn::os::UnlockMutex((MutexType *)(piVar8 + 4));
  }
LAB__text__0051d808:
  uVar10 = *(uint *)(param_2 + 1);
  if (uVar10 == 0) {
    bVar5 = true;
  }
  else {
    iVar11 = 0;
    uVar12 = *(ulong *)param_3[1];
    do {
      iVar1 = iVar11 + (uVar10 >> 1);
      plVar2 = (long *)(*param_2 + (long)iVar1 * 0x20);
      uVar13 = plVar2[3];
      if (uVar13 == uVar12) {
        uVar10 = *(uint *)(plVar2 + 1);
        if (uVar10 != 0) {
          iVar11 = 0;
          uVar7 = *(uint *)*param_3;
          goto LAB__text__0051d880;
        }
        bVar5 = true;
        goto LAB__text__0051d8c4;
      }
      if (uVar13 < uVar12) {
        iVar11 = iVar1 + 1;
      }
      uVar7 = uVar10 - (uVar13 < uVar12);
      uVar10 = uVar7 >> 1;
    } while (1 < uVar7);
    bVar5 = true;
  }
  goto LAB__text__0051d8c4;
  while( true ) {
    if (uVar3 < uVar7) {
      iVar11 = iVar1 + 1;
    }
    uVar3 = uVar10 - (uVar3 < uVar7);
    uVar10 = uVar3 >> 1;
    if (uVar3 < 2) break;
LAB__text__0051d880:
    iVar1 = iVar11 + (uVar10 >> 1);
    uVar3 = **(uint **)(*plVar2 + (long)iVar1 * 8);
    bVar5 = uVar3 != uVar7;
    if (uVar3 == uVar7) break;
  }
LAB__text__0051d8c4:
  do {
    iVar11 = *piVar8;
    if (iVar11 < 0) {
      nn::os::UnlockMutex((MutexType *)(piVar8 + 4));
      if (bVar5) {
LAB__text__0051d904:
        FUN__text__00411760(&DAT_00aebbe8);
        uVar14 = *(undefined8 *)param_3[1];
        lVar9 = FUN__text__0051db90(param_2,uVar14,&uStack_31);
        if (lVar9 != 0) {
          *(undefined8 *)(lVar9 + 0x10) = param_3[1];
          lVar9 = FUN__text__0051c7a0(lVar9,*param_3,local_34);
          if (lVar9 == 0) {
            FUN__text__0051c980(param_2,uVar14);
          }
          else if (local_34[0] == '\0') {
            *(int *)(param_2 + 2) = (int)param_2[2] + 1;
          }
        }
        do {
          iVar11 = DAT_00aebbe8;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(0xaebbe8,0x10);
          if (bVar5) {
            cVar4 = ExclusiveMonitorsStatus();
            DAT_00aebbe8 = DAT_00aebbe8 + 1;
          }
        } while (cVar4 != '\0');
        if (iVar11 == -1) {
          DAT_00aebbf0 = 0;
        }
        nn::os::UnlockMutex((MutexType *)&DAT_00aebbf8);
      }
      return;
    }
    while (*piVar8 == iVar11) {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar8,0x10);
      if (bVar6) {
        *piVar8 = iVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        if ((iVar11 + -1 == 0) && (0 < piVar8[0xc])) {
          nn::os::SignalEvent((EventType *)(piVar8 + 0xe));
        }
        if (!bVar5) {
          return;
        }
        goto LAB__text__0051d904;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


