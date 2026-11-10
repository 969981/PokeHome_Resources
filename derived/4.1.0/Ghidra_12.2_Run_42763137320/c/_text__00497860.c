/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00497860; name: FUN_.text__00497860
 */


undefined8
FUN__text__00497860(long param_1,long param_2,undefined8 param_3,long *param_4,undefined8 param_5,
                   long param_6)

{
  MutexType *pMVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  int *piVar15;
  ulong uVar16;
  float fVar17;
  long local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 local_60;
  undefined4 local_5c;
  float local_58;
  undefined4 local_54;
  
  local_64 = 0;
  local_60 = 1;
  local_5c = *(undefined4 *)(param_1 + 0x10);
  FUN__text__00465cd0(param_5,param_1 + 0x20,&local_64,param_3);
  if (*(int *)(param_1 + 0x48) == 0) goto LAB__text__00497a68;
  piVar15 = *(int **)(param_1 + 0x30);
  uVar14 = *(uint *)(param_1 + 0x38);
  if (uVar14 != 0) {
    piVar2 = piVar15 + (ulong)uVar14 * 4;
    lVar9 = (ulong)uVar14 << 4;
    do {
      if (*piVar15 == *(int *)(param_2 + 0x20)) goto LAB__text__004978fc;
      piVar15 = piVar15 + 4;
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != 0);
    piVar15 = piVar2;
  }
LAB__text__004978fc:
  if (*(long *)(*(long *)(piVar15 + 2) + 0x10) == 0) goto LAB__text__00497a68;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0xff;
  local_78 = 0xff;
  local_70 = 0;
  FUN__text__00434be0(DAT_00ae9a70,*(undefined8 *)(param_1 + 0x48),param_5,&local_68,&local_98);
  lVar9 = local_98;
  lVar12 = *(long *)(piVar15 + 2);
  if (*(long *)(lVar12 + 0x10) == 0) {
    fVar17 = 0.0;
    plVar8 = (long *)*param_4;
    uVar13 = (ulong)(local_98 == 0);
    uVar16 = (ulong)*(uint *)(param_4 + 1);
    plVar10 = plVar8;
    if (*(uint *)(param_4 + 1) == 0) goto LAB__text__00497a08;
LAB__text__004979c4:
    lVar12 = uVar16 * 0x18;
    plVar10 = plVar8;
    do {
      if ((*plVar10 == param_1) && ((lVar9 == 0) != ((*(byte *)(plVar10 + 1) & 1) == 0)))
      goto LAB__text__00497a08;
      plVar10 = plVar10 + 3;
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != 0);
  }
  else {
    local_54 = *(undefined4 *)(lVar12 + 0x20);
    local_58 = 0.0;
    FUN__text__0041a060(local_68,(long *)(lVar12 + 0x10),&local_54,&local_58);
    *(undefined4 *)(lVar12 + 0x20) = local_54;
    if ((local_58 == 1.0) && (lVar9 == 0)) goto LAB__text__00497a68;
    plVar8 = (long *)*param_4;
    uVar13 = (ulong)(lVar9 == 0);
    uVar16 = (ulong)*(uint *)(param_4 + 1);
    plVar10 = plVar8;
    fVar17 = local_58;
    if (*(uint *)(param_4 + 1) != 0) goto LAB__text__004979c4;
LAB__text__00497a08:
    if (plVar10 != plVar8 + uVar16 * 3) {
      *(float *)(plVar10 + 2) = fVar17;
      goto LAB__text__00497a68;
    }
  }
  uVar14 = (uint)uVar16;
  if (*(uint *)((long)param_4 + 0xc) <= uVar14) {
    uVar16 = FUN__text__00462990(param_4);
    if (((uVar16 & 1) == 0) || (*(uint *)((long)param_4 + 0xc) <= uVar14)) goto LAB__text__00497a68;
    uVar14 = *(uint *)(param_4 + 1);
    plVar8 = (long *)*param_4;
  }
  *(uint *)(param_4 + 1) = uVar14 + 1;
  if (plVar8 != (long *)0x0) {
    plVar8 = plVar8 + (ulong)uVar14 * 3;
    *(float *)(plVar8 + 2) = fVar17;
    *plVar8 = param_1;
    plVar8[1] = uVar13;
  }
LAB__text__00497a68:
  if (param_6 != 0) {
    uVar14 = *(uint *)(param_6 + 0x148);
    uVar4 = *(uint *)(param_6 + 0x14c);
    if (uVar4 <= uVar14) {
      iVar3 = uVar4 + (uVar4 >> 1);
      if (uVar4 == 0) {
        iVar3 = 1;
      }
      uVar13 = FUN__text__00462e00(param_6,iVar3);
      if ((uVar13 & 1) == 0) {
        return 0x34;
      }
      if (*(uint *)(param_6 + 0x14c) <= uVar14) {
        return 0x34;
      }
      uVar14 = *(uint *)(param_6 + 0x148);
    }
    *(uint *)(param_6 + 0x148) = uVar14 + 1;
    if (*(long *)(param_6 + 0x140) == 0) {
      return 0x34;
    }
    puVar11 = (undefined8 *)(*(long *)(param_6 + 0x140) + (ulong)uVar14 * 0x28);
    *(undefined4 *)(puVar11 + 2) = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
    *puVar11 = 0;
    puVar11[1] = param_1 + 0x18;
    *puVar11 = *(undefined8 *)(param_1 + 0x40);
    FUN__text__0046d390(param_1 + 0x20,puVar11);
    lVar9 = DAT_00ae9a38;
    if (*(char *)(param_1 + 0x4c) == '\x04') {
      uVar14 = *(uint *)(param_1 + 0x48);
      piVar15 = (int *)(DAT_00ae9a38 + 0x348);
      pMVar1 = (MutexType *)(DAT_00ae9a38 + 0x358);
      while( true ) {
        while (iVar3 = *piVar15, -1 < iVar3) {
          while (*piVar15 == iVar3) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar6) {
              *piVar15 = iVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB__text__00497b64;
          }
          ClearExclusiveLocal();
        }
        nn::os::LockMutex(pMVar1);
        if (*piVar15 < 0) break;
        nn::os::UnlockMutex(pMVar1);
      }
LAB__text__00497b64:
      uVar4 = *(uint *)(lVar9 + 0x3b0);
      if (uVar4 == 0) {
        plVar10 = (long *)0x0;
      }
      else {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar14 / uVar4;
        }
        plVar10 = *(long **)(*(long *)(lVar9 + 0x3a8) + (ulong)(uVar14 - uVar7 * uVar4) * 8);
        if (plVar10 != (long *)0x0) {
LAB__text__00497b80:
          if (*(uint *)(plVar10 + 2) != uVar14) goto code_r0x00497b8c;
          piVar2 = (int *)((long)plVar10 + 0x14);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = *piVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
LAB__text__00497bbc:
      while (iVar3 = *piVar15, -1 < iVar3) {
        while (*piVar15 == iVar3) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar6) {
            *piVar15 = iVar3 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            if ((iVar3 + -1 == 0) && (0 < *(int *)(lVar9 + 0x378))) {
              nn::os::SignalEvent((EventType *)(lVar9 + 0x380));
            }
            goto LAB__text__00497c0c;
          }
        }
        ClearExclusiveLocal();
      }
      nn::os::UnlockMutex(pMVar1);
LAB__text__00497c0c:
      FUN__text__0046d570(puVar11,plVar10);
      piVar15 = (int *)((long)plVar10 + 0x14);
      do {
        iVar3 = *piVar15;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar6) {
          *piVar15 = iVar3 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
    }
  }
  return 1;
code_r0x00497b8c:
  plVar10 = (long *)plVar10[1];
  if (plVar10 == (long *)0x0) goto LAB__text__00497bbc;
  goto LAB__text__00497b80;
}


