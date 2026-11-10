/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c6970; name: FUN_.text__005c6970
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__005c6970(long *param_1,long param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  int iVar20;
  long lVar21;
  long *plVar22;
  undefined1 auVar23 [16];
  long local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *local_48;
  
  lVar9 = *param_1;
  plVar7 = (long *)param_1[1];
  lVar18 = param_2 - lVar9 >> 3;
  plVar6 = (long *)(lVar9 + (param_2 - lVar9 & 0xfffffffffffffff8U));
  if (plVar7 < (long *)param_1[2]) {
    if (plVar6 == plVar7) {
      uVar10 = tpidr_el0;
      uVar10 = uVar10 & 0xffffffffffffe000;
      if (*(long *)(uVar10 + 0x98) != 0x10) {
        *(long *)(uVar10 + *(long *)(uVar10 + 0x98) * 8 + 0x18) = param_1[3];
        *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
        lVar9 = *param_3;
        *param_3 = 0;
        *plVar6 = lVar9;
        *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + -1;
        param_1[1] = (long)(plVar6 + 1);
        return plVar6;
      }
LAB__text__005c6c24:
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    plVar22 = plVar7 + -1;
    if (plVar22 < plVar7) {
      uVar10 = tpidr_el0;
      uVar10 = uVar10 & 0xffffffffffffe000;
      lVar16 = *(long *)(uVar10 + 0x98);
      plVar12 = plVar7;
      plVar14 = plVar22;
      do {
        if (lVar16 == 0x10) goto LAB__text__005c6c24;
        *(long *)((uVar10 | 0x18) + lVar16 * 8) = param_1[3];
        *(long *)(uVar10 + 0x98) = *(long *)(uVar10 + 0x98) + 1;
        lVar16 = *plVar14;
        plVar15 = plVar14 + 1;
        *plVar14 = 0;
        plVar13 = plVar12 + 1;
        *plVar12 = lVar16;
        lVar16 = *(long *)(uVar10 + 0x98) + -1;
        *(long *)(uVar10 + 0x98) = lVar16;
        plVar12 = plVar13;
        plVar14 = plVar15;
      } while (plVar15 < plVar7);
      param_1[1] = (long)plVar13;
    }
    else {
      param_1[1] = (long)plVar7;
    }
    if (plVar7 != plVar6 + 1) {
      lVar16 = ((long)plVar7 - (long)(plVar6 + 1) >> 3) << 3;
      lVar9 = lVar9 + lVar18 * 8 + -8;
      do {
        if (*plVar22 != 0) {
          (**(code **)(*(long *)(*plVar22 + 0x48) + 0x18))();
          *plVar22 = 0;
        }
        lVar18 = *(long *)(lVar9 + lVar16);
        *(undefined8 *)(lVar9 + lVar16) = 0;
        lVar16 = lVar16 + -8;
        *plVar22 = lVar18;
        plVar22 = plVar22 + -1;
      } while (lVar16 != 0);
    }
    if (*plVar6 != 0) {
      (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
      *plVar6 = 0;
    }
    lVar9 = *param_3;
    *param_3 = 0;
    *plVar6 = lVar9;
    return plVar6;
  }
  uVar10 = ((long)plVar7 - lVar9 >> 3) + 1;
  if (uVar10 >> 0x3d != 0) {
    auVar23 = FUN__text__005cb464(param_1);
    puVar17 = _DAT_008a00e0;
    pbVar4 = _DAT_008a00d8;
    lVar9 = auVar23._0_8_;
    plVar6 = *(long **)(lVar9 + 0xb0);
    plVar7 = *(long **)(lVar9 + 0xb8);
    if (plVar6 != plVar7) {
      do {
        lVar18 = *plVar6;
        if ((lVar18 != 0) && (*(int *)(lVar18 + 0x54) != 0)) {
          piVar1 = (int *)(lVar18 + 0x54);
          iVar20 = *(int *)(lVar18 + 0x54);
          do {
            puVar19 = *(undefined8 **)(lVar18 + 0x58);
            if (((*pbVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar4), iVar5 != 0)) {
              if (((*_DAT_0089f8b8 & 1) == 0) &&
                 (iVar5 = __cxa_guard_acquire(_DAT_0089f8b8), iVar5 != 0)) {
                if (((*_DAT_0089f790 & 1) == 0) &&
                   (iVar5 = __cxa_guard_acquire(_DAT_0089f790), iVar5 != 0)) {
                  if (((*_DAT_0089f498 & 1) == 0) &&
                     (iVar5 = __cxa_guard_acquire(_DAT_0089f498), iVar5 != 0)) {
                    *_DAT_0089f4a0 = 0;
                    __cxa_guard_release(_DAT_0089f498);
                  }
                  *_DAT_0089f798 = _DAT_0089f4a0;
                  __cxa_guard_release(_DAT_0089f790);
                }
                *_DAT_0089f8c0 = _DAT_0089f798;
                __cxa_guard_release(_DAT_0089f8b8);
              }
              *puVar17 = _DAT_0089f8c0;
              __cxa_guard_release(pbVar4);
            }
            if (puVar19 != puVar17) {
              do {
                puVar19 = (undefined8 *)*puVar19;
              } while (puVar19 != puVar17 && puVar19 != (undefined8 *)0x0);
              if (puVar19 == (undefined8 *)0x0) break;
            }
            iVar5 = *piVar1;
            if (iVar5 == iVar20) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar20 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                lVar18 = *(long *)(lVar18 + 0x60);
                if (lVar18 != 0) {
                  lVar16 = *(long *)(lVar18 + 0xe8);
                  if (*(long *)(lVar18 + 0x100) == 0) {
                    lVar21 = *auVar23._8_8_;
                    (**(code **)(*(long *)(lVar18 + -8) + 0x18))((long *)(lVar18 + -8));
                  }
                  else {
                    plVar22 = (long *)(*(long *)(lVar18 + 0x100) + 0x48);
                    (**(code **)(*plVar22 + 0x10))(plVar22);
                    lVar21 = *auVar23._8_8_;
                    (**(code **)(*plVar22 + 0x18))(plVar22);
                    (**(code **)(*(long *)(lVar18 + -8) + 0x18))((long *)(lVar18 + -8));
                  }
                  if (lVar16 == lVar21) {
                    plVar7 = plVar6;
                    if (plVar6 == *(long **)(lVar9 + 0xb8)) {
                      return (long *)0x0;
                    }
                    goto LAB__text__005c6e6c;
                  }
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar20 = iVar5;
          } while (iVar5 != 0);
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar7);
      if (plVar7 != *(long **)(lVar9 + 0xb8)) {
LAB__text__005c6e6c:
        if ((*plVar7 != 0) &&
           (puVar17 = *(undefined8 **)(*plVar7 + 0x60), puVar17 != (undefined8 *)0x0)) {
          plVar6 = (long *)(**(code **)*puVar17)(puVar17);
          plVar7 = (long *)FUN__text__003ead60();
          if (plVar7 != plVar6) {
            do {
              plVar6 = (long *)*plVar6;
            } while (plVar6 != plVar7 && plVar6 != (long *)0x0);
            if (plVar6 == (long *)0x0) {
              return (long *)0x0;
            }
          }
          return puVar17 + -10;
        }
      }
    }
    return (long *)0x0;
  }
  uVar8 = param_1[2] - lVar9;
  plVar7 = param_1 + 3;
  uVar11 = (long)uVar8 >> 2;
  if (uVar11 <= uVar10) {
    uVar11 = uVar10;
  }
  if (0x7ffffffffffffff7 < uVar8) {
    uVar11 = 0x1fffffffffffffff;
  }
  local_48 = plVar7;
  if (uVar11 != 0) {
    local_68 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,uVar11 << 3,8);
    if (local_68 != 0) goto LAB__text__005c6aa0;
    (**(code **)(*(long *)*plVar7 + 0xb8))();
  }
  local_68 = 0;
LAB__text__005c6aa0:
  local_60 = (undefined8 *)(local_68 + lVar18 * 8);
  local_50 = local_68 + uVar11 * 8;
  local_58 = local_60;
  FUN__text__005cb0d0(&local_68,param_3);
  plVar6 = (long *)FUN__text__005cb340(param_1,&local_68,plVar6);
  puVar17 = local_60;
  while (local_58 != puVar17) {
    puVar19 = local_58 + -1;
    plVar7 = local_58 + -1;
    local_58 = puVar19;
    if (*plVar7 != 0) {
      (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
      *puVar19 = 0;
    }
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)*local_48 + 0x18))((long *)*local_48,local_68,local_50 - local_68,8);
  }
  return plVar6;
}


