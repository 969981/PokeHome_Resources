/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042b3f0; name: FUN_.text__0042b3f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__0042b3f0(long *param_1,long param_2,long param_3,undefined8 param_4,
                        undefined8 param_5,uint param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  
  if (param_2 == 0) {
    return 0;
  }
  plVar7 = *(long **)(param_2 + 0x38);
  if (plVar7 == (long *)0x0) goto LAB__text__0042b680;
  lVar8 = (**(code **)(*plVar7 + 0x18))(plVar7,_DAT_008a47f0);
  param_1[10] = lVar8;
  param_1[0xb] = param_2;
  nn::os::LockMutex((MutexType *)(param_2 + 0x70));
  if (*(long *)(param_2 + 0x90) == 0) {
    *(long **)(param_2 + 0x90) = param_1;
    param_1[0xe] = 0;
  }
  else {
    param_1[0xe] = *(long *)(param_2 + 0x90);
    *(long **)(param_2 + 0x90) = param_1;
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x70));
  piVar1 = (int *)(param_2 + 0x14);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = *piVar1 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN__text__00432aa0(param_1 + 0xf,param_1[0xb] + 0x50);
  lVar8 = param_1[0xb];
  *(undefined4 *)(param_1 + 0xd) = 0;
  uVar16 = *(uint *)(lVar8 + 0x68);
  uVar4 = *(uint *)(lVar8 + 0x58);
  if (uVar4 != 0) {
    plVar14 = *(long **)(lVar8 + 0x50);
    plVar7 = plVar14;
    if (((uVar4 & 1) != 0) && (plVar7 = plVar14 + 1, *(char *)(*plVar14 + 0xc) != '\x01')) {
      uVar16 = uVar16 + 1;
    }
    if (((ulong)uVar4 - 1 & 0x1fffffffffffffff) != 0) {
      do {
        plVar10 = plVar7 + 2;
        if (*(char *)(*plVar7 + 0xc) != '\x01') {
          uVar16 = uVar16 + 1;
        }
        if (*(char *)(plVar7[1] + 0xc) != '\x01') {
          uVar16 = uVar16 + 1;
        }
        plVar7 = plVar10;
      } while (plVar10 != plVar14 + uVar4);
    }
  }
  lVar8 = (**(code **)(*(long *)(lVar8 + 0x18) + 0x38))();
  plVar7 = (long *)(**(code **)(*(long *)(param_1[0xb] + 0x18) + 0x80))();
  if (lVar8 != 0 && plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    if (lVar11 == 0) {
      iVar13 = 0;
    }
    else {
      iVar13 = 0;
      do {
        lVar11 = *(long *)(lVar11 + 0x10);
        iVar13 = iVar13 + 1;
      } while (lVar11 != 0);
    }
    uVar16 = uVar16 + *(int *)(lVar8 + 8) * iVar13;
  }
  if (uVar16 == 0) {
LAB__text__0042b5dc:
    if (param_1[10] != 0) {
      lVar8 = param_1[0xb];
      if (*(int *)(lVar8 + 0x68) != 0) {
        lVar11 = 0;
        uVar9 = 0;
        lVar12 = 0xc;
        do {
          uVar9 = uVar9 + 1;
          puVar3 = (undefined2 *)(*(long *)(lVar8 + 0x60) + lVar11);
          lVar15 = param_1[0xc];
          lVar8 = lVar11 * 2;
          lVar11 = lVar11 + 8;
          *(undefined2 *)(lVar15 + lVar8 + 8) = *puVar3;
          *(undefined4 *)(lVar15 + lVar12) = *(undefined4 *)(puVar3 + 2);
          lVar12 = lVar12 + 0x10;
          lVar8 = param_1[0xb];
        } while (uVar9 < *(uint *)(lVar8 + 0x68));
      }
      if (param_3 == 0) {
        if ((param_6 & 1) != 0) {
          FUN__text__0042b810(param_1,param_4,param_5);
        }
      }
      else {
        FUN__text__0042b6b0(param_1,param_3);
      }
      FUN__text__0042b940(param_1);
      goto LAB__text__0042b680;
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0xd);
    if (uVar16 < uVar4) {
LAB__text__0042b5d8:
      *(uint *)(param_1 + 0xd) = uVar16;
      goto LAB__text__0042b5dc;
    }
    plVar7 = param_1 + 0xc;
    iVar13 = uVar16 - *(uint *)((long)param_1 + 0x6c);
    if ((uVar16 < *(uint *)((long)param_1 + 0x6c) || iVar13 == 0) ||
       (uVar9 = FUN__text__0042cd80(plVar7,iVar13), (uVar9 & 1) != 0)) {
      if ((uVar4 < uVar16) && (lVar8 = *plVar7, lVar8 != 0)) {
        lVar12 = ~(ulong)uVar4 + (ulong)uVar16;
        lVar11 = (ulong)uVar4 << 4;
        while( true ) {
          if (lVar8 != 0) {
            puVar2 = (undefined8 *)(lVar8 + lVar11);
            *puVar2 = 0;
            *(undefined2 *)(puVar2 + 1) = 0;
            *(undefined4 *)((long)puVar2 + 0xc) = 0;
          }
          if (lVar12 == 0) break;
          lVar8 = *plVar7;
          lVar12 = lVar12 + -1;
          lVar11 = lVar11 + 0x10;
        }
      }
      goto LAB__text__0042b5d8;
    }
  }
  (**(code **)(*param_1 + 0x28))(param_1);
LAB__text__0042b680:
  return param_1[10];
}


