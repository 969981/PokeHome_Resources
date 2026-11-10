/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00113bb0; name: FUN_.text__00113bb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00113bb0(undefined8 *param_1,long param_2,uint param_3,ulong *param_4,
                        undefined4 param_5,long param_6,undefined8 param_7)

{
  byte *pbVar1;
  char *pcVar2;
  int *piVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int iVar9;
  char cVar10;
  byte bVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  bool bVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  int iVar24;
  long local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  undefined4 local_90;
  long local_88;
  long local_80;
  undefined8 local_78 [3];
  
  uVar23 = tpidr_el0;
  pbVar1 = (byte *)(param_2 + 0x122);
  lVar4 = *(long *)(param_2 + 8);
  if (param_6 != 0) {
    lVar4 = param_6;
  }
  bVar11 = (byte)((uint)uVar23 >> 0xd) & 0x4f;
  while (*pbVar1 == 0x4f) {
    cVar10 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar16) {
      *pbVar1 = bVar11;
      cVar10 = ExclusiveMonitorsStatus();
    }
    if (cVar10 == '\0') goto LAB__text__00113c94;
  }
  pcVar2 = (char *)(param_2 + 0x123);
  ClearExclusiveLocal();
  do {
    cVar10 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar16) {
      *pcVar2 = *pcVar2 + '\x01';
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  DataMemoryBarrier(2,3);
  do {
    if (*pbVar1 != 0x4f) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x120));
        while (*pbVar1 == 0x4f) {
          cVar10 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
          if (bVar16) {
            *pbVar1 = bVar11;
            cVar10 = ExclusiveMonitorsStatus();
          }
          if (cVar10 == '\0') goto LAB__text__00113c84;
        }
      } while( true );
    }
    cVar10 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar16) {
      *pbVar1 = bVar11;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
LAB__text__00113c84:
  do {
    cVar10 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
    if (bVar16) {
      *pcVar2 = *pcVar2 + -1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
LAB__text__00113c94:
  uVar17 = *(ulong *)(param_2 + 0x78);
  plVar14 = (long *)(param_2 + 0x70);
  uVar20 = *param_4;
  uVar15 = uVar20;
  if (param_4[3] != 0) {
    uVar15 = param_4[1];
  }
  uVar18 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
  uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
  uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar18 < 2) {
    uVar21 = uVar17 - 1 & uVar15;
  }
  else {
    uVar21 = uVar15;
    if (uVar17 <= uVar15) {
      uVar21 = 0;
      if (uVar17 != 0) {
        uVar21 = uVar15 / uVar17;
      }
      uVar21 = uVar15 - uVar21 * uVar17;
    }
  }
  plVar19 = *(long **)(*plVar14 + uVar21 * 8);
  if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
    plVar13 = _DAT_0089f5c8;
    if (uVar20 != 0) {
      plVar13 = (long *)(uVar20 + 0x58);
    }
    do {
      if ((int)plVar19[7] == (int)param_4[5]) {
        uVar8 = plVar19[2];
        uVar20 = uVar8;
        if (plVar19[5] != 0) {
          uVar20 = plVar19[3];
        }
        if (((param_4[3] == 0) || (plVar19[5] == 0)) || (uVar20 != uVar15)) {
          if (uVar20 == uVar15) goto LAB__text__00113da8;
        }
        else {
          plVar5 = _DAT_0089f5c8;
          if (uVar8 != 0) {
            plVar5 = (long *)(uVar8 + 0x58);
          }
          if (*plVar5 == *plVar13) {
LAB__text__00113da8:
            if (plVar19[8] == lVar4) {
              lVar22 = plVar19[9];
              if ((lVar22 == 0) || (*(int *)(lVar22 + 0x54) == 0)) goto LAB__text__00114274;
              piVar3 = (int *)(lVar22 + 0x54);
              iVar24 = *(int *)(lVar22 + 0x54);
              goto LAB__text__001141f0;
            }
          }
        }
      }
      plVar19 = (long *)*plVar19;
      if (plVar19 == (long *)0x0) break;
      uVar20 = plVar19[1];
      if (uVar18 < 2) {
        uVar20 = uVar20 & uVar17 - 1;
      }
      else if (uVar17 <= uVar20) {
        uVar8 = 0;
        if (uVar17 != 0) {
          uVar8 = uVar20 / uVar17;
        }
        uVar20 = uVar20 - uVar8 * uVar17;
      }
    } while (uVar20 == uVar21);
  }
  uVar23 = uVar23 & 0xffffffffffffe000;
  if (*(long *)(uVar23 + 0x98) == 0x10) {
LAB__text__00114378:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar19 = *(long **)(param_2 + 8);
  *(long **)(uVar23 + *(long *)(uVar23 + 0x98) * 8 + 0x18) = plVar19;
  *(long *)(uVar23 + 0x98) = *(long *)(uVar23 + 0x98) + 1;
  plVar13 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0x1b0,8);
  if (plVar13 == (long *)0x0) {
    (**(code **)(*plVar19 + 0xb8))(plVar19);
  }
  FUN__text__005d8a8c(plVar13,param_4,lVar4);
  lVar22 = _DAT_0089f7f0;
  plVar13[0x32] = 0;
  plVar13[0x33] = 0;
  plVar13[0x34] = 0;
  plVar13[0x35] = 0;
  plVar13[9] = lVar22 + 0x68;
  plVar13[10] = lVar22 + 0xa8;
  *plVar13 = lVar22 + 0x10;
  plVar13[1] = (long)plVar19;
  plVar13[2] = (long)plVar13;
  plVar13[3] = 0x1b0;
  plVar13[4] = 8;
  *(long *)(uVar23 + 0x98) = *(long *)(uVar23 + 0x98) + -1;
  (**(code **)(plVar13[9] + 0x10))();
  plVar19 = *(long **)(*(long *)(param_2 + 0x70) + uVar21 * 8);
  if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
    uVar15 = *(ulong *)(param_2 + 0x78);
    uVar23 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
    uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
    do {
      if ((int)plVar19[7] == (int)param_4[5]) {
        uVar17 = plVar19[2];
        uVar20 = uVar17;
        if (plVar19[5] != 0) {
          uVar20 = plVar19[3];
        }
        uVar18 = *param_4;
        uVar8 = param_4[1];
        uVar12 = uVar18;
        if (((param_4[3] == 0) || (uVar12 = uVar8, plVar19[5] == 0)) || (uVar20 != uVar8)) {
          if (uVar20 == uVar12) goto LAB__text__00113f78;
        }
        else {
          plVar5 = _DAT_0089f5c8;
          if (uVar17 != 0) {
            plVar5 = (long *)(uVar17 + 0x58);
          }
          plVar6 = _DAT_0089f5c8;
          if (uVar18 != 0) {
            plVar6 = (long *)(uVar18 + 0x58);
          }
          if (*plVar5 == *plVar6) {
LAB__text__00113f78:
            if ((plVar19[9] == 0) || (*(int *)(plVar19[9] + 0x54) == 0)) {
              (**(code **)(*plVar13 + 0x10))(&local_b8,plVar13);
              uVar23 = local_b8;
              local_b8 = 0;
              plVar19[8] = lVar4;
              if (plVar19[9] == 0) {
                plVar19[9] = uVar23;
              }
              else {
                (**(code **)(*(long *)(plVar19[9] + 0x48) + 0x18))();
                plVar19[9] = uVar23;
                if (local_b8 != 0) {
                  (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
                }
              }
              goto LAB__text__001140e0;
            }
          }
        }
      }
      plVar19 = (long *)*plVar19;
      if (plVar19 == (long *)0x0) break;
      uVar20 = plVar19[1];
      if ((uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 < 2) {
        uVar20 = uVar20 & uVar15 - 1;
      }
      else if (uVar15 <= uVar20) {
        uVar17 = 0;
        if (uVar15 != 0) {
          uVar17 = uVar20 / uVar15;
        }
        uVar20 = uVar20 - uVar17 * uVar15;
      }
    } while (uVar20 == uVar21);
  }
  (**(code **)(*plVar13 + 0x10))(&local_c0,plVar13);
  lVar22 = local_c0;
  local_b0 = param_4[1];
  local_a8 = param_4[2];
  local_c0 = 0;
  uVar23 = param_4[3];
  uVar15 = param_4[4];
  local_98 = 0;
  local_a0 = uVar23;
  if (uVar15 != 0) {
    (**(code **)(*(long *)(uVar15 + 0x48) + 0x10))();
    uVar23 = param_4[3];
    local_98 = uVar15;
  }
  local_90 = (undefined4)param_4[5];
  if (uVar23 == 0) {
    uVar23 = *param_4;
  }
  else {
    uVar23 = *param_4;
    if (uVar23 != 0) {
      (**(code **)(*(long *)(uVar23 + 0x48) + 0x10))();
    }
  }
  local_80 = lVar22;
  local_b8 = uVar23;
  local_88 = lVar4;
  FUN__text__0010ad14(local_78,plVar14,&local_b8);
  FUN__text__0010ae78(plVar14,local_78[0]);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if ((local_a0 != 0) && (local_b8 != 0)) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
  }
  local_b8 = 0;
  local_b0 = 0xcbf29ce484222645;
  local_a8 = 0x70f683;
  local_a0 = 0;
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
  }
  local_98 = 0;
  local_90 = 0;
  if (local_c0 != 0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
  }
LAB__text__001140e0:
  do {
    cVar10 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar16) {
      *pbVar1 = 0x4f;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  DataMemoryBarrier(2,3);
  if (*(char *)(param_2 + 0x123) != '\0') {
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x120));
  }
  if (*(char *)(param_2 + 0x13b) != '\0') {
    param_7 = 0;
  }
  FUN__text__005d8c7c(plVar13,param_7);
  puVar7 = (undefined8 *)(param_2 + 0x128);
  if (1 < param_3) {
    puVar7 = (undefined8 *)(param_2 + 0x130);
  }
  FUN__text__005dd910(*puVar7,plVar13,param_5);
  *param_1 = plVar13;
  plVar13 = plVar13 + 9;
  (**(code **)(*plVar13 + 0x10))(plVar13);
  (**(code **)(*plVar13 + 0x18))(plVar13);
  return;
LAB__text__001141f0:
  plVar13 = *(long **)(lVar22 + 0x58);
  plVar14 = (long *)FUN__text__0010b70c();
  if (plVar14 != plVar13) {
    do {
      plVar13 = (long *)*plVar13;
    } while (plVar13 != plVar14 && plVar13 != (long *)0x0);
    if (plVar13 == (long *)0x0) goto LAB__text__00114274;
  }
  iVar9 = *piVar3;
  if (iVar9 == iVar24) {
    cVar10 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    if (bVar16) {
      *piVar3 = iVar24 + 1;
      cVar10 = ExclusiveMonitorsStatus();
    }
    if (cVar10 != '\0') goto LAB__text__00114238;
    bVar16 = true;
  }
  else {
    ClearExclusiveLocal();
LAB__text__00114238:
    bVar16 = false;
  }
  if (bVar16) {
    if (*(long *)(lVar22 + 0x60) != 0) {
      plVar13 = (long *)(*(long *)(lVar22 + 0x60) + -0x50);
      goto LAB__text__001140e0;
    }
    goto LAB__text__00114274;
  }
  iVar24 = iVar9;
  if (iVar9 == 0) {
LAB__text__00114274:
    uVar23 = uVar23 & 0xffffffffffffe000;
    if (*(long *)(uVar23 + 0x98) == 0x10) goto LAB__text__00114378;
    plVar14 = *(long **)(param_2 + 8);
    *(long **)(uVar23 + *(long *)(uVar23 + 0x98) * 8 + 0x18) = plVar14;
    *(long *)(uVar23 + 0x98) = *(long *)(uVar23 + 0x98) + 1;
    plVar13 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x1b0,8);
    if (plVar13 == (long *)0x0) {
      (**(code **)(*plVar14 + 0xb8))(plVar14);
    }
    FUN__text__005d8a8c(plVar13,param_4,lVar4);
    lVar4 = _DAT_0089f7f0;
    plVar13[0x32] = 0;
    plVar13[0x33] = 0;
    plVar13[0x34] = 0;
    plVar13[0x35] = 0;
    plVar13[9] = lVar4 + 0x68;
    plVar13[10] = lVar4 + 0xa8;
    *plVar13 = lVar4 + 0x10;
    plVar13[1] = (long)plVar14;
    plVar13[2] = (long)plVar13;
    plVar13[3] = 0x1b0;
    plVar13[4] = 8;
    *(long *)(uVar23 + 0x98) = *(long *)(uVar23 + 0x98) + -1;
    (**(code **)(plVar13[9] + 0x10))();
    (**(code **)(*plVar13 + 0x10))(&local_b8,plVar13);
    if (plVar19[9] != 0) {
      (**(code **)(*(long *)(plVar19[9] + 0x48) + 0x18))();
      plVar19[9] = 0;
    }
    plVar19[9] = local_b8;
    goto LAB__text__001140e0;
  }
  goto LAB__text__001141f0;
}


