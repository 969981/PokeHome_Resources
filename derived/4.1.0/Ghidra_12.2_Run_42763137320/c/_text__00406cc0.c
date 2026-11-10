/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00406cc0; name: FUN_.text__00406cc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__00406cc0(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  MutexType *pMVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  int iVar15;
  undefined4 uVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  undefined6 uStack_138;
  undefined2 local_132;
  undefined6 uStack_130;
  undefined1 auStack_128 [36];
  undefined1 auStack_104 [4];
  uint local_100;
  long local_f8;
  long lStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  ulong local_78;
  long *local_70;
  
  if (param_2 == 0 && *(int *)(param_1 + 0x550) == 0) {
    return 1;
  }
  plVar17 = (long *)FUN__text__00400f80(6,0x18);
  if (plVar17 == (long *)0x0) {
    return 0x34;
  }
  FUN__text__004e3078();
  lVar12 = _DAT_008a4828;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0xff;
  local_c8 = 0xff;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_100 = *(uint *)(param_1 + 0x70);
  lVar1 = _DAT_008a4828 + 0x10;
  lVar2 = _DAT_008a4828 + 0x58;
  local_f8 = lVar1;
  lStack_f0 = lVar2;
  local_70 = plVar17;
  FUN__text__004e41c8(auStack_128);
  *(undefined4 *)(param_1 + 0x424) = 0xb50007;
  uVar16 = *(undefined4 *)(param_1 + 0x2c);
  if (*(char *)(param_1 + 0x557) != '\0') {
    uVar16 = 0;
  }
  *(undefined4 *)(param_1 + 0x420) = uVar16;
  iVar15 = (**(code **)(*plVar17 + 0x38))(plVar17,0,0,auStack_128,auStack_104);
  if (iVar15 == 1) {
    (**(code **)(*(long *)(param_1 + 0x158) + 0x28))(param_1 + 0x158);
    (**(code **)(*(long *)(param_1 + 0x1e8) + 0x28))(param_1 + 0x1e8);
    (**(code **)(*(long *)(param_1 + 0x278) + 0x28))(param_1 + 0x278);
    (**(code **)(*(long *)(param_1 + 0x308) + 0x28))(param_1 + 0x308);
    FUN__text__0042c6f4(param_1 + 0x438);
    FUN__text__00406c10(param_1);
    *(undefined8 *)(param_1 + 0x90) = 0;
    plVar18 = *(long **)(param_1 + 0x430);
    *(undefined2 *)(param_1 + 0x558) = 0;
    *(undefined8 *)(param_1 + 0x96) = 0;
    if (plVar18 != (long *)0x0) {
      piVar3 = (int *)((long)plVar18 + 0x14);
      do {
        iVar15 = *piVar3;
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar10) {
          *piVar3 = iVar15 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if (iVar15 + -1 == 0) {
        (**(code **)(*plVar18 + 0x20))();
      }
      *(undefined8 *)(param_1 + 0x430) = 0;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
    puVar13 = _DAT_008a4b70;
    if ((local_100 & 0xf00) == 0x300) {
      uStack_130 = 0;
      uStack_138 = 0;
      local_132 = 0;
      (**(code **)(*plVar17 + 0x68))(plVar17,&uStack_138);
      iVar15 = FUN__text__00407da0(param_1,&uStack_138);
      uVar6 = local_100;
    }
    else {
      *(uint *)(param_1 + 0x4d8) = local_100;
      *(short *)(param_1 + 0x4e0) = (short)*puVar13;
      iVar15 = FUN__text__0041ec00(param_1 + 0x4d0);
      if (iVar15 != 1) goto LAB__text__00407104;
      iVar15 = FUN__text__004df2dc(param_1 + 0xa0,0);
      uVar6 = local_100;
    }
    local_100 = uVar6;
    if (iVar15 == 1) {
      *(undefined4 *)(param_1 + 0x30) = 0xb50007;
      FUN__text__0042c740(param_1 + 0x438,&local_f8);
      *(uint *)(param_1 + 0x60) = uVar6;
      *(bool *)(param_1 + 0x558) = (uVar6 & 0xf00) == 0x300;
      if (*(long **)(param_1 + 0x4c0) != (long *)0x0) {
        iVar15 = (**(code **)(**(long **)(param_1 + 0x4c0) + 0x60))();
        *(bool *)(param_1 + 0x559) = iVar15 == 1;
        if ((iVar15 == 1) && (*(char *)(param_1 + 0x558) != '\0')) {
          (**(code **)(**(long **)(param_1 + 0x4c0) + 0x68))
                    (*(long **)(param_1 + 0x4c0),(undefined8 *)(param_1 + 0x90));
        }
      }
      *(int *)(param_1 + 0x550) = param_2;
      lVar14 = DAT_00ae9a38;
      if (DAT_00ae9a30 == '\0') {
        iVar15 = 1;
      }
      else {
        uVar6 = *(uint *)(param_1 + 100);
        piVar3 = (int *)(DAT_00ae9a38 + 0x5a0);
        pMVar4 = (MutexType *)(DAT_00ae9a38 + 0x5b0);
        while( true ) {
          while (iVar15 = *piVar3, -1 < iVar15) {
            while (*piVar3 == iVar15) {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar10) {
                *piVar3 = iVar15 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
              if (cVar9 == '\0') goto LAB__text__00406fcc;
            }
            ClearExclusiveLocal();
          }
          nn::os::LockMutex(pMVar4);
          if (*piVar3 < 0) break;
          nn::os::UnlockMutex(pMVar4);
        }
LAB__text__00406fcc:
        uVar7 = *(uint *)(lVar14 + 0x608);
        if (uVar7 == 0) {
          lVar19 = 0;
        }
        else {
          uVar11 = 0;
          if (uVar7 != 0) {
            uVar11 = uVar6 / uVar7;
          }
          lVar19 = *(long *)(*(long *)(lVar14 + 0x600) + (ulong)(uVar6 - uVar11 * uVar7) * 8);
          if (lVar19 != 0) {
LAB__text__00406ff0:
            if (*(uint *)(lVar19 + 0x10) != uVar6) goto code_r0x00406ffc;
            piVar5 = (int *)(lVar19 + 0x14);
            do {
              cVar9 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar5,0x10);
              if (bVar10) {
                *piVar5 = *piVar5 + 1;
                cVar9 = ExclusiveMonitorsStatus();
              }
            } while (cVar9 != '\0');
          }
        }
LAB__text__00407038:
        while (iVar15 = *piVar3, -1 < iVar15) {
          while (*piVar3 == iVar15) {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar10) {
              *piVar3 = iVar15 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 == '\0') {
              if ((iVar15 + -1 == 0) && (0 < *(int *)(lVar14 + 0x5d0))) {
                nn::os::SignalEvent((EventType *)(lVar14 + 0x5d8));
              }
              goto LAB__text__00407080;
            }
          }
          ClearExclusiveLocal();
        }
        nn::os::UnlockMutex(pMVar4);
LAB__text__00407080:
        plVar17 = *(long **)(param_1 + 0x430);
        *(long *)(param_1 + 0x430) = lVar19;
        if (plVar17 != (long *)0x0) {
          piVar3 = (int *)((long)plVar17 + 0x14);
          do {
            iVar15 = *piVar3;
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar10) {
              *piVar3 = iVar15 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if (iVar15 + -1 == 0) {
            (**(code **)(*plVar17 + 0x20))();
          }
          lVar19 = *(long *)(param_1 + 0x430);
        }
        if (lVar19 == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = FUN__text__0042b068(lVar19);
        }
        uVar8 = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)(param_1 + 8) = uVar16;
        *(undefined4 *)(param_1 + 0xc) = uVar8;
        FUN__text__004087a0(param_1,0);
        iVar15 = 1;
        FUN__text__004087a0(param_1,1);
        FUN__text__004087a0(param_1,2);
        FUN__text__004087a0(param_1,3);
      }
    }
  }
LAB__text__00407104:
  local_f8 = lVar1;
  lStack_f0 = lVar2;
  (**(code **)(lVar12 + 0x38))(&local_f8);
  local_f8 = _DAT_008a4820 + 0x10;
  lStack_f0 = _DAT_008a4820 + 0x58;
  (**(code **)(_DAT_008a4820 + 0x38))(&local_f8);
  if (local_80 != 0) {
    local_78 = local_78 & 0xffffffff00000000;
    FUN__text__00400fc0(0);
    local_80 = 0;
    local_78 = local_78 & 0xffffffff;
  }
  FUN__text__004335d0(&lStack_f0);
  return iVar15;
code_r0x00406ffc:
  lVar19 = *(long *)(lVar19 + 8);
  if (lVar19 == 0) goto LAB__text__00407038;
  goto LAB__text__00406ff0;
}


