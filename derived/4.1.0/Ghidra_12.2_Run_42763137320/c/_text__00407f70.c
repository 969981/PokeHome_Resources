/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00407f70; name: FUN_.text__00407f70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__00407f70(long param_1)

{
  int *piVar1;
  MutexType *pMVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  uint *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  code *pcVar18;
  long lVar19;
  uint uVar20;
  uint local_128;
  undefined2 uStack_124;
  undefined2 uStack_122;
  undefined4 local_120;
  undefined2 uStack_11c;
  undefined4 local_118;
  undefined1 local_110;
  undefined1 local_108;
  undefined8 local_100;
  long *local_f8;
  uint local_f0;
  uint local_ec;
  undefined1 local_e8;
  undefined1 uStack_e7;
  byte bStack_e6;
  undefined2 uStack_e5;
  undefined2 local_e3;
  long local_e0;
  long alStack_d8 [2];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  ulong local_60;
  long *local_58;
  
  uVar20 = *(uint *)(param_1 + 100);
  if (uVar20 == 0) {
    return 4;
  }
  lVar19 = *_DAT_008a45c8;
  piVar1 = (int *)(lVar19 + 0x5a0);
  pMVar2 = (MutexType *)(lVar19 + 0x5b0);
  while( true ) {
    while (iVar13 = *piVar1, -1 < iVar13) {
      while (*piVar1 == iVar13) {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar13 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 == '\0') goto LAB__text__00408008;
      }
      ClearExclusiveLocal();
    }
    nn::os::LockMutex(pMVar2);
    if (*piVar1 < 0) break;
    nn::os::UnlockMutex(pMVar2);
  }
LAB__text__00408008:
  uVar5 = *(uint *)(lVar19 + 0x608);
  if (uVar5 == 0) {
    plVar17 = (long *)0x0;
  }
  else {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar20 / uVar5;
    }
    plVar17 = *(long **)(*(long *)(lVar19 + 0x600) + (ulong)(uVar20 - uVar9 * uVar5) * 8);
    if (plVar17 != (long *)0x0) {
LAB__text__00408024:
      if (*(uint *)(plVar17 + 2) != uVar20) goto code_r0x00408030;
      piVar3 = (int *)((long)plVar17 + 0x14);
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
LAB__text__00408068:
  while (iVar13 = *piVar1, -1 < iVar13) {
    while (*piVar1 == iVar13) {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
      if (cVar7 == '\0') {
        lVar10 = _DAT_008a4828;
        if ((iVar13 + -1 == 0) && (0 < *(int *)(lVar19 + 0x5d0))) {
          nn::os::SignalEvent((EventType *)(lVar19 + 0x5d8));
          lVar10 = _DAT_008a4828;
        }
        goto joined_r0x004080b8;
      }
    }
    ClearExclusiveLocal();
  }
  nn::os::UnlockMutex(pMVar2);
  lVar10 = _DAT_008a4828;
joined_r0x004080b8:
  if (plVar17 == (long *)0x0) {
    if (uVar20 != 0xe611314a) {
      _DAT_008a4828 = lVar10;
      return 0xf;
    }
    uVar14 = 0xae0007;
  }
  else {
    uVar14 = (undefined4)plVar17[6];
  }
  alStack_d8[1] = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0xff;
  local_b0 = 0xff;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_e0 = lVar10 + 0x10;
  alStack_d8[0] = lVar10 + 0x58;
  local_58 = (long *)0x0;
  local_f0 = local_f0 & 0xffffff00;
  local_ec = 0;
  uStack_e7 = 0;
  bStack_e6 = 0;
  uStack_e5 = 0;
  local_f8 = (long *)0x0;
  local_e8 = 1;
  local_e3 = 1;
  _DAT_008a4828 = lVar10;
  iVar13 = FUN__text__00425bc0(uVar14,&local_f8,&local_f0);
  if (iVar13 == 0x58) {
    iVar13 = 0x58;
    goto LAB__text__004082a0;
  }
  if (local_f8 != (long *)0x0) {
    local_58 = local_f8;
    local_128 = 0;
    uStack_124 = 0;
    uStack_122 = 0;
    local_120 = 0;
    local_118 = 0;
    local_110 = 0xff;
    local_108 = 0xff;
    local_100 = 0;
    FUN__text__0042b69c(&local_e0,plVar17,&local_128,0,0);
    if (local_58 != (long *)0x0) {
      local_ec = *(uint *)(param_1 + 0x70);
      if ((local_ec & 0xf00) == 0x300) {
        local_ec = 0;
        *(undefined4 *)(param_1 + 0x70) = 0;
      }
      puVar11 = _DAT_008a4b68;
      *(undefined4 *)(param_1 + 0x424) = uVar14;
      local_f0 = *puVar11;
      uStack_e7 = (undefined1)local_ec;
      bStack_e6 = bStack_e6 & 0xf8 | 5;
      uVar6 = *(undefined4 *)(param_1 + 0x2c);
      local_e8 = 0x20;
      if (*(char *)(param_1 + 0x557) != '\0') {
        uVar6 = 0;
      }
      *(undefined4 *)(param_1 + 0x420) = uVar6;
      iVar13 = (**(code **)(*local_58 + 0x38))
                         (local_58,_DAT_008a47f0,param_1 + 0x418,local_90,&local_f0);
      uVar20 = local_ec;
      if (iVar13 == 1) {
        FUN__text__00406c10(param_1);
        puVar12 = _DAT_008a4b70;
        uVar5 = uVar20 >> 8 & 0xf;
        if ((uVar5 < 4) && (((uVar20 & 0xff) != 0 || (uVar5 == 3)))) {
          if (uVar5 == 1) {
            uVar5 = uVar20 >> 0xc;
            if (((uVar20 >> 0x10 ^ uVar20 >> 0x15) & 1) != 0) {
              uVar5 = uVar20 >> 0xc & 0xffffffcf | 0x600;
            }
            uVar20 = uVar5 - (uVar5 >> 1 & 0x55555555);
            uVar20 = (uVar20 & 0x33333333) + (uVar20 >> 2 & 0x33333333);
            uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | uVar5 << 0xc | 0x100
            ;
LAB__text__004083f8:
            *(uint *)(param_1 + 0x4d8) = uVar20;
            *(short *)(param_1 + 0x4e0) = (short)*puVar12;
            iVar13 = FUN__text__0041ec00(param_1 + 0x4d0);
            if (iVar13 != 1) goto LAB__text__00408264;
            iVar13 = FUN__text__004df2dc(param_1 + 0xa0,0);
          }
          else {
            if (uVar5 != 3) goto LAB__text__004083f8;
            local_120 = 0;
            uStack_11c = 0;
            local_128 = 0;
            uStack_124 = 0;
            uStack_122 = 0;
            (**(code **)(*local_58 + 0x68))(local_58,&local_128);
            uVar5 = local_128 >> 8 & 0xf;
            if ((uVar5 < 4) && (((local_128 & 0xff) != 0 || (uVar5 == 3)))) {
              iVar13 = FUN__text__00407da0(param_1,&local_128);
            }
            else {
              iVar13 = 4;
            }
          }
          if ((iVar13 == 1) && (iVar13 = (**(code **)(*local_58 + 0x18))(), iVar13 == 1)) {
            *(undefined4 *)(param_1 + 0x30) = uVar14;
            FUN__text__0042c740(param_1 + 0x438,&local_e0);
            *(uint *)(param_1 + 0x60) = uVar20;
            *(bool *)(param_1 + 0x558) = (uVar20 & 0xf00) == 0x300;
            if (*(long **)(param_1 + 0x4c0) != (long *)0x0) {
              iVar13 = (**(code **)(**(long **)(param_1 + 0x4c0) + 0x60))();
              *(bool *)(param_1 + 0x559) = iVar13 == 1;
              if ((iVar13 == 1) && (*(char *)(param_1 + 0x558) != '\0')) {
                (**(code **)(**(long **)(param_1 + 0x4c0) + 0x68))
                          (*(long **)(param_1 + 0x4c0),param_1 + 0x90);
              }
            }
            plVar16 = *(long **)(param_1 + 0x430);
            *(long **)(param_1 + 0x430) = plVar17;
            if (plVar16 != (long *)0x0) {
              piVar1 = (int *)((long)plVar16 + 0x14);
              do {
                iVar13 = *piVar1;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar8) {
                  *piVar1 = iVar13 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar13 + -1 == 0) {
                (**(code **)(*plVar16 + 0x20))();
              }
              plVar17 = *(long **)(param_1 + 0x430);
            }
            if (plVar17 == (long *)0x0) {
              uVar14 = 0;
            }
            else {
              uVar14 = FUN__text__0042b068(plVar17);
            }
            uVar6 = *(undefined4 *)(param_1 + 8);
            *(undefined4 *)(param_1 + 8) = uVar14;
            *(undefined4 *)(param_1 + 0xc) = uVar6;
            FUN__text__004087a0(param_1,0);
            iVar13 = 1;
            FUN__text__004087a0(param_1,1);
            FUN__text__004087a0(param_1,2);
            FUN__text__004087a0(param_1,3);
            local_128 = 0;
            uStack_124 = 0;
            uStack_122 = 0;
            local_120 = 0;
            local_118 = 0;
            local_110 = 0xff;
            local_108 = 0xff;
            local_100 = 0;
            FUN__text__0042b810(param_1 + 0x438,&local_128,0);
            plVar17 = (long *)0x0;
            *(undefined4 *)(param_1 + 0x550) = 1;
            goto LAB__text__004082a0;
          }
        }
        else {
          iVar13 = 4;
        }
      }
LAB__text__00408264:
      FUN__text__00406c10(param_1);
      FUN__text__0042c6f4(&local_e0);
      pcVar18 = (code *)*_DAT_008a49b0;
      if (pcVar18 != (code *)0x0) {
        uVar15 = FUN__text__0040dc30();
        (*pcVar18)(uVar15,*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),0,iVar13);
      }
      goto LAB__text__004082a0;
    }
  }
  iVar13 = 0x34;
LAB__text__004082a0:
  local_e0 = lVar10 + 0x10;
  alStack_d8[0] = lVar10 + 0x58;
  (**(code **)(lVar10 + 0x38))(&local_e0);
  local_e0 = _DAT_008a4820 + 0x10;
  alStack_d8[0] = _DAT_008a4820 + 0x58;
  (**(code **)(_DAT_008a4820 + 0x38))(&local_e0);
  if (local_68 != 0) {
    local_60 = local_60 & 0xffffffff00000000;
    FUN__text__00400fc0(0);
    local_68 = 0;
    local_60 = local_60 & 0xffffffff;
  }
  FUN__text__004335d0(alStack_d8);
  if (plVar17 != (long *)0x0) {
    piVar1 = (int *)((long)plVar17 + 0x14);
    do {
      iVar4 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar4 + -1 == 0) {
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
  return iVar13;
code_r0x00408030:
  plVar17 = (long *)plVar17[1];
  if (plVar17 == (long *)0x0) goto LAB__text__00408068;
  goto LAB__text__00408024;
}


