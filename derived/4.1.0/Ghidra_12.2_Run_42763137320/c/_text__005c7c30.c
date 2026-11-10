/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c7c30; name: FUN_.text__005c7c30
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005c7c30(long *param_1,long *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  bool bVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long *local_80;
  long *local_68;
  
  puVar4 = _DAT_008a00e0;
  pbVar3 = _DAT_008a00d8;
  local_80 = param_2;
  local_68 = param_1;
LAB__text__005c7c70:
  plVar6 = local_68;
LAB__text__005c7c8c:
  while( true ) {
    local_68 = plVar6;
    uVar16 = (long)local_80 - (long)local_68;
    uVar12 = (long)uVar16 >> 3;
    if (uVar12 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x005c8f80 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(byte *)(uVar12 + 0x757cc8) * 4 + 0x5c8f8c))();
      return;
    }
    if ((long)uVar16 < 0xc0) {
      plVar6 = local_68 + 1;
      if ((param_4 & 1) == 0) {
        if (local_68 == local_80 || plVar6 == local_80) {
          return;
        }
        goto LAB__text__005c9e88;
      }
      if (local_68 == local_80 || plVar6 == local_80) {
        return;
      }
      plVar7 = local_68;
      goto LAB__text__005c90dc;
    }
    if (param_3 == 0) {
      if (local_68 == local_80) {
        return;
      }
      uVar14 = uVar12 - 2 >> 1;
      uVar15 = uVar14;
      goto LAB__text__005c9494;
    }
    uVar12 = uVar12 >> 1;
    plVar6 = local_68 + uVar12;
    if (uVar16 < 0x401) {
      FUN__text__005ca610(plVar6,local_68,local_80 + -1);
    }
    else {
      FUN__text__005ca610(local_68,plVar6,local_80 + -1);
      plVar7 = local_68 + 1;
      plVar8 = local_68 + uVar12;
      FUN__text__005ca610(plVar7,plVar8 + -1,local_80 + -2);
      FUN__text__005ca610(local_68 + 2,plVar7 + uVar12,local_80 + -3);
      FUN__text__005ca610(plVar8 + -1,plVar6,plVar7 + uVar12);
      lVar17 = *local_68;
      *local_68 = 0;
      lVar13 = *plVar8;
      *plVar8 = 0;
      *local_68 = lVar13;
      if (*plVar8 != 0) {
        (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
      }
      *plVar6 = lVar17;
    }
    if ((param_4 & 1) != 0) break;
    if ((local_68[-1] == 0) ||
       (puVar18 = *(undefined8 **)(local_68[-1] + 0x60), puVar18 == (undefined8 *)0x0)) {
LAB__text__005c7dd0:
      puVar18 = (undefined8 *)0x0;
    }
    else {
      plVar6 = (long *)(**(code **)*puVar18)(puVar18);
      plVar7 = (long *)FUN__text__003ead60();
      if (plVar7 != plVar6) {
        do {
          plVar6 = (long *)*plVar6;
        } while (plVar6 != plVar7 && plVar6 != (long *)0x0);
        if (plVar6 == (long *)0x0) goto LAB__text__005c7dd0;
      }
      puVar18 = puVar18 + -10;
    }
    puVar10 = *(undefined8 **)(*local_68 + 0x60);
    plVar6 = (long *)(**(code **)*puVar10)(puVar10);
    plVar7 = (long *)FUN__text__003ead60();
    if (plVar7 != plVar6) {
      do {
        plVar6 = (long *)*plVar6;
      } while (plVar6 != plVar7 && plVar6 != (long *)0x0);
    }
    if (*(int *)(puVar18 + 0x35) < *(int *)(puVar10 + 0x2b)) break;
    lVar13 = *local_68;
    *local_68 = 0;
    if ((lVar13 == 0) || (puVar18 = *(undefined8 **)(lVar13 + 0x60), puVar18 == (undefined8 *)0x0))
    {
LAB__text__005c877c:
      puVar18 = (undefined8 *)0x0;
    }
    else {
      plVar6 = (long *)(**(code **)*puVar18)(puVar18);
      plVar7 = (long *)FUN__text__003ead60();
      if (plVar7 != plVar6) {
        do {
          plVar6 = (long *)*plVar6;
        } while (plVar6 != plVar7 && plVar6 != (long *)0x0);
        if (plVar6 == (long *)0x0) goto LAB__text__005c877c;
      }
      puVar18 = puVar18 + -10;
    }
    puVar10 = *(undefined8 **)(local_80[-1] + 0x60);
    plVar6 = (long *)(**(code **)*puVar10)(puVar10);
    plVar7 = (long *)FUN__text__003ead60();
    if (plVar7 != plVar6) {
      do {
        plVar6 = (long *)*plVar6;
      } while (plVar6 != plVar7 && plVar6 != (long *)0x0);
    }
    plVar6 = local_68;
    if (*(int *)(puVar18 + 0x35) < *(int *)(puVar10 + 0x2b)) {
      do {
        if ((lVar13 == 0) ||
           (puVar18 = *(undefined8 **)(lVar13 + 0x60), puVar18 == (undefined8 *)0x0)) {
LAB__text__005c8840:
          puVar18 = (undefined8 *)0x0;
        }
        else {
          plVar7 = (long *)(**(code **)*puVar18)(puVar18);
          plVar8 = (long *)FUN__text__003ead60();
          if (plVar8 != plVar7) {
            do {
              plVar7 = (long *)*plVar7;
            } while (plVar7 != plVar8 && plVar7 != (long *)0x0);
            if (plVar7 == (long *)0x0) goto LAB__text__005c8840;
          }
          puVar18 = puVar18 + -10;
        }
        plVar6 = plVar6 + 1;
        puVar10 = *(undefined8 **)(*plVar6 + 0x60);
        plVar7 = (long *)(**(code **)*puVar10)(puVar10);
        plVar8 = (long *)FUN__text__003ead60();
        if (plVar8 != plVar7) {
          do {
            plVar7 = (long *)*plVar7;
          } while (plVar7 != plVar8 && plVar7 != (long *)0x0);
        }
      } while (*(int *)(puVar10 + 0x2b) <= *(int *)(puVar18 + 0x35));
    }
    else {
      do {
        plVar6 = plVar6 + 1;
        if (local_80 <= plVar6) break;
        if ((lVar13 == 0) ||
           (puVar18 = *(undefined8 **)(lVar13 + 0x60), puVar18 == (undefined8 *)0x0)) {
LAB__text__005c88f0:
          puVar18 = (undefined8 *)0x0;
        }
        else {
          plVar7 = (long *)(**(code **)*puVar18)(puVar18);
          plVar8 = (long *)FUN__text__003ead60();
          if (plVar8 != plVar7) {
            do {
              plVar7 = (long *)*plVar7;
            } while (plVar7 != plVar8 && plVar7 != (long *)0x0);
            if (plVar7 == (long *)0x0) goto LAB__text__005c88f0;
          }
          puVar18 = puVar18 + -10;
        }
        puVar10 = *(undefined8 **)(*plVar6 + 0x60);
        plVar7 = (long *)(**(code **)*puVar10)(puVar10);
        plVar8 = (long *)FUN__text__003ead60();
        if (plVar8 != plVar7) {
          do {
            plVar7 = (long *)*plVar7;
          } while (plVar7 != plVar8 && plVar7 != (long *)0x0);
        }
      } while (*(int *)(puVar10 + 0x2b) <= *(int *)(puVar18 + 0x35));
    }
    plVar7 = local_80;
    if (plVar6 < local_80) {
      do {
        if ((lVar13 == 0) ||
           (puVar18 = *(undefined8 **)(lVar13 + 0x60), puVar18 == (undefined8 *)0x0)) {
LAB__text__005c89b0:
          puVar18 = (undefined8 *)0x0;
        }
        else {
          plVar8 = (long *)(**(code **)*puVar18)(puVar18);
          plVar9 = (long *)FUN__text__003ead60();
          if (plVar9 != plVar8) {
            do {
              plVar8 = (long *)*plVar8;
            } while (plVar8 != plVar9 && plVar8 != (long *)0x0);
            if (plVar8 == (long *)0x0) goto LAB__text__005c89b0;
          }
          puVar18 = puVar18 + -10;
        }
        plVar7 = plVar7 + -1;
        puVar10 = *(undefined8 **)(*plVar7 + 0x60);
        plVar8 = (long *)(**(code **)*puVar10)(puVar10);
        plVar9 = (long *)FUN__text__003ead60();
        if (plVar9 != plVar8) {
          do {
            plVar8 = (long *)*plVar8;
          } while (plVar8 != plVar9 && plVar8 != (long *)0x0);
        }
      } while (*(int *)(puVar18 + 0x35) < *(int *)(puVar10 + 0x2b));
    }
    while (plVar6 < plVar7) {
      lVar20 = *plVar6;
      *plVar6 = 0;
      lVar17 = *plVar7;
      *plVar7 = 0;
      *plVar6 = lVar17;
      if (*plVar7 != 0) {
        (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
      }
      *plVar7 = lVar20;
      do {
        if ((lVar13 == 0) ||
           (puVar18 = *(undefined8 **)(lVar13 + 0x60), puVar18 == (undefined8 *)0x0)) {
LAB__text__005c8a90:
          puVar18 = (undefined8 *)0x0;
        }
        else {
          puVar10 = (undefined8 *)(**(code **)*puVar18)(puVar18);
          if (((*pbVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar3), iVar5 != 0)) {
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
            *puVar4 = _DAT_0089f8c0;
            __cxa_guard_release(pbVar3);
          }
          if (puVar10 != puVar4) {
            do {
              puVar10 = (undefined8 *)*puVar10;
            } while (puVar10 != puVar4 && puVar10 != (undefined8 *)0x0);
            if (puVar10 == (undefined8 *)0x0) goto LAB__text__005c8a90;
          }
          puVar18 = puVar18 + -10;
        }
        plVar6 = plVar6 + 1;
        puVar19 = *(undefined8 **)(*plVar6 + 0x60);
        puVar10 = (undefined8 *)(**(code **)*puVar19)(puVar19);
        if (((*pbVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar3), iVar5 != 0)) {
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
          *puVar4 = _DAT_0089f8c0;
          __cxa_guard_release(pbVar3);
        }
        if (puVar10 != puVar4) {
          do {
            puVar10 = (undefined8 *)*puVar10;
          } while (puVar10 != puVar4 && puVar10 != (undefined8 *)0x0);
        }
      } while (*(int *)(puVar19 + 0x2b) <= *(int *)(puVar18 + 0x35));
      do {
        if ((lVar13 == 0) ||
           (puVar18 = *(undefined8 **)(lVar13 + 0x60), puVar18 == (undefined8 *)0x0)) {
LAB__text__005c8d00:
          puVar18 = (undefined8 *)0x0;
        }
        else {
          puVar10 = (undefined8 *)(**(code **)*puVar18)(puVar18);
          if (((*pbVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar3), iVar5 != 0)) {
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
            *puVar4 = _DAT_0089f8c0;
            __cxa_guard_release(pbVar3);
          }
          if (puVar10 != puVar4) {
            do {
              puVar10 = (undefined8 *)*puVar10;
            } while (puVar10 != puVar4 && puVar10 != (undefined8 *)0x0);
            if (puVar10 == (undefined8 *)0x0) goto LAB__text__005c8d00;
          }
          puVar18 = puVar18 + -10;
        }
        plVar7 = plVar7 + -1;
        puVar19 = *(undefined8 **)(*plVar7 + 0x60);
        puVar10 = (undefined8 *)(**(code **)*puVar19)(puVar19);
        if (((*pbVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar3), iVar5 != 0)) {
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
          *puVar4 = _DAT_0089f8c0;
          __cxa_guard_release(pbVar3);
        }
        if (puVar10 != puVar4) {
          do {
            puVar10 = (undefined8 *)*puVar10;
          } while (puVar10 != puVar4 && puVar10 != (undefined8 *)0x0);
        }
      } while (*(int *)(puVar18 + 0x35) < *(int *)(puVar19 + 0x2b));
    }
    plVar7 = plVar6 + -1;
    if (plVar7 != local_68) {
      if (*local_68 != 0) {
        (**(code **)(*(long *)(*local_68 + 0x48) + 0x18))();
        *local_68 = 0;
      }
      lVar17 = *plVar7;
      *plVar7 = 0;
      *local_68 = lVar17;
    }
    if (*plVar7 != 0) {
      (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
    }
    param_4 = 0;
    *plVar7 = lVar13;
    param_3 = param_3 + -1;
  }
  param_3 = param_3 + -1;
  lVar13 = *local_68;
  *local_68 = 0;
  plVar6 = local_68;
  do {
    plVar7 = plVar6;
    plVar6 = plVar7 + 1;
    if ((*plVar6 == 0) || (puVar18 = *(undefined8 **)(*plVar6 + 0x60), puVar18 == (undefined8 *)0x0)
       ) {
LAB__text__005c7e90:
      puVar18 = (undefined8 *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)*puVar18)(puVar18);
      plVar9 = (long *)FUN__text__003ead60();
      if (plVar9 != plVar8) {
        do {
          plVar8 = (long *)*plVar8;
        } while (plVar8 != plVar9 && plVar8 != (long *)0x0);
        if (plVar8 == (long *)0x0) goto LAB__text__005c7e90;
      }
      puVar18 = puVar18 + -10;
    }
    puVar19 = *(undefined8 **)(lVar13 + 0x60);
    puVar10 = (undefined8 *)(**(code **)*puVar19)(puVar19);
    if (((*pbVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar3), iVar5 != 0)) {
      if (((*_DAT_0089f8b8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(_DAT_0089f8b8), iVar5 != 0)) {
        if (((*_DAT_0089f790 & 1) == 0) && (iVar5 = __cxa_guard_acquire(_DAT_0089f790), iVar5 != 0))
        {
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
      *puVar4 = _DAT_0089f8c0;
      __cxa_guard_release(pbVar3);
    }
    if (puVar10 != puVar4) {
      do {
        puVar10 = (undefined8 *)*puVar10;
      } while (puVar10 != puVar4 && puVar10 != (undefined8 *)0x0);
    }
  } while (*(int *)(puVar18 + 0x35) < *(int *)(puVar19 + 0x2b));
  plVar8 = local_80;
  if (plVar7 == local_68) {
    do {
      if (plVar8 <= plVar6) break;
      plVar8 = plVar8 + -1;
      if ((*plVar8 == 0) ||
         (puVar18 = *(undefined8 **)(*plVar8 + 0x60), puVar18 == (undefined8 *)0x0)) {
LAB__text__005c80f0:
        puVar18 = (undefined8 *)0x0;
      }
      else {
        plVar9 = (long *)(**(code **)*puVar18)(puVar18);
        plVar11 = (long *)FUN__text__003ead60();
        if (plVar11 != plVar9) {
          do {
            plVar9 = (long *)*plVar9;
          } while (plVar9 != plVar11 && plVar9 != (long *)0x0);
          if (plVar9 == (long *)0x0) goto LAB__text__005c80f0;
        }
        puVar18 = puVar18 + -10;
      }
      puVar10 = *(undefined8 **)(lVar13 + 0x60);
      plVar9 = (long *)(**(code **)*puVar10)(puVar10);
      plVar11 = (long *)FUN__text__003ead60();
      if (plVar11 != plVar9) {
        do {
          plVar9 = (long *)*plVar9;
        } while (plVar9 != plVar11 && plVar9 != (long *)0x0);
      }
    } while (*(int *)(puVar10 + 0x2b) <= *(int *)(puVar18 + 0x35));
  }
  else {
    do {
      plVar8 = plVar8 + -1;
      if ((*plVar8 == 0) ||
         (puVar18 = *(undefined8 **)(*plVar8 + 0x60), puVar18 == (undefined8 *)0x0)) {
LAB__text__005c8040:
        puVar18 = (undefined8 *)0x0;
      }
      else {
        plVar9 = (long *)(**(code **)*puVar18)(puVar18);
        plVar11 = (long *)FUN__text__003ead60();
        if (plVar11 != plVar9) {
          do {
            plVar9 = (long *)*plVar9;
          } while (plVar9 != plVar11 && plVar9 != (long *)0x0);
          if (plVar9 == (long *)0x0) goto LAB__text__005c8040;
        }
        puVar18 = puVar18 + -10;
      }
      puVar10 = *(undefined8 **)(lVar13 + 0x60);
      plVar9 = (long *)(**(code **)*puVar10)(puVar10);
      plVar11 = (long *)FUN__text__003ead60();
      if (plVar11 != plVar9) {
        do {
          plVar9 = (long *)*plVar9;
        } while (plVar9 != plVar11 && plVar9 != (long *)0x0);
      }
    } while (*(int *)(puVar10 + 0x2b) <= *(int *)(puVar18 + 0x35));
  }
  if (plVar6 < plVar8) {
    plVar9 = plVar6;
    plVar11 = plVar8;
    do {
      lVar20 = *plVar9;
      *plVar9 = 0;
      lVar17 = *plVar11;
      *plVar11 = 0;
      *plVar9 = lVar17;
      if (*plVar11 != 0) {
        (**(code **)(*(long *)(*plVar11 + 0x48) + 0x18))();
      }
      *plVar11 = lVar20;
      do {
        plVar7 = plVar9;
        plVar9 = plVar7 + 1;
        if ((*plVar9 == 0) ||
           (puVar18 = *(undefined8 **)(*plVar9 + 0x60), puVar18 == (undefined8 *)0x0)) {
LAB__text__005c8200:
          puVar18 = (undefined8 *)0x0;
        }
        else {
          puVar10 = (undefined8 *)(**(code **)*puVar18)(puVar18);
          if (((*pbVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar3), iVar5 != 0)) {
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
            *puVar4 = _DAT_0089f8c0;
            __cxa_guard_release(pbVar3);
          }
          if (puVar10 != puVar4) {
            do {
              puVar10 = (undefined8 *)*puVar10;
            } while (puVar10 != puVar4 && puVar10 != (undefined8 *)0x0);
            if (puVar10 == (undefined8 *)0x0) goto LAB__text__005c8200;
          }
          puVar18 = puVar18 + -10;
        }
        puVar19 = *(undefined8 **)(lVar13 + 0x60);
        puVar10 = (undefined8 *)(**(code **)*puVar19)(puVar19);
        if (((*pbVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar3), iVar5 != 0)) {
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
          *puVar4 = _DAT_0089f8c0;
          __cxa_guard_release(pbVar3);
        }
        if (puVar10 != puVar4) {
          do {
            puVar10 = (undefined8 *)*puVar10;
          } while (puVar10 != puVar4 && puVar10 != (undefined8 *)0x0);
        }
      } while (*(int *)(puVar18 + 0x35) < *(int *)(puVar19 + 0x2b));
      do {
        plVar11 = plVar11 + -1;
        if ((*plVar11 == 0) ||
           (puVar18 = *(undefined8 **)(*plVar11 + 0x60), puVar18 == (undefined8 *)0x0)) {
LAB__text__005c8470:
          puVar18 = (undefined8 *)0x0;
        }
        else {
          puVar10 = (undefined8 *)(**(code **)*puVar18)(puVar18);
          if (((*pbVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar3), iVar5 != 0)) {
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
            *puVar4 = _DAT_0089f8c0;
            __cxa_guard_release(pbVar3);
          }
          if (puVar10 != puVar4) {
            do {
              puVar10 = (undefined8 *)*puVar10;
            } while (puVar10 != puVar4 && puVar10 != (undefined8 *)0x0);
            if (puVar10 == (undefined8 *)0x0) goto LAB__text__005c8470;
          }
          puVar18 = puVar18 + -10;
        }
        puVar19 = *(undefined8 **)(lVar13 + 0x60);
        puVar10 = (undefined8 *)(**(code **)*puVar19)(puVar19);
        if (((*pbVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar3), iVar5 != 0)) {
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
          *puVar4 = _DAT_0089f8c0;
          __cxa_guard_release(pbVar3);
        }
        if (puVar10 != puVar4) {
          do {
            puVar10 = (undefined8 *)*puVar10;
          } while (puVar10 != puVar4 && puVar10 != (undefined8 *)0x0);
        }
      } while (*(int *)(puVar19 + 0x2b) <= *(int *)(puVar18 + 0x35));
    } while (plVar9 < plVar11);
  }
  if (plVar7 != local_68) {
    if (*local_68 != 0) {
      (**(code **)(*(long *)(*local_68 + 0x48) + 0x18))();
      *local_68 = 0;
    }
    lVar17 = *plVar7;
    *plVar7 = 0;
    *local_68 = lVar17;
  }
  if (*plVar7 != 0) {
    (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
  }
  *plVar7 = lVar13;
  if (plVar8 <= plVar6) {
    uVar12 = FUN__text__005caa70(local_68,plVar7);
    uVar16 = FUN__text__005caa70(plVar7 + 1,local_80);
    if ((uVar16 & 1) != 0) goto LAB__text__005c8f64;
    plVar6 = plVar7 + 1;
    if ((uVar12 & 1) != 0) goto LAB__text__005c7c8c;
  }
  FUN__text__005c7c30(local_68,plVar7,param_3,param_4 & 1);
  param_4 = 0;
  plVar6 = plVar7 + 1;
  goto LAB__text__005c7c8c;
LAB__text__005c9e88:
  plVar7 = plVar6;
  if ((local_68[1] == 0) ||
     (puVar18 = *(undefined8 **)(local_68[1] + 0x60), puVar18 == (undefined8 *)0x0)) {
LAB__text__005c9ee0:
    puVar18 = (undefined8 *)0x0;
  }
  else {
    plVar6 = (long *)(**(code **)*puVar18)(puVar18);
    plVar8 = (long *)FUN__text__003ead60();
    if (plVar8 != plVar6) {
      do {
        plVar6 = (long *)*plVar6;
      } while (plVar6 != plVar8 && plVar6 != (long *)0x0);
      if (plVar6 == (long *)0x0) goto LAB__text__005c9ee0;
    }
    puVar18 = puVar18 + -10;
  }
  puVar10 = *(undefined8 **)(*local_68 + 0x60);
  plVar6 = (long *)(**(code **)*puVar10)(puVar10);
  plVar8 = (long *)FUN__text__003ead60();
  if (plVar8 != plVar6) {
    do {
      plVar6 = (long *)*plVar6;
    } while (plVar6 != plVar8 && plVar6 != (long *)0x0);
  }
  if (*(int *)(puVar18 + 0x35) < *(int *)(puVar10 + 0x2b)) {
    lVar17 = *plVar7;
    lVar13 = 0;
    *plVar7 = 0;
    plVar6 = plVar7;
    do {
      plVar8 = local_68;
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
      }
      *plVar6 = *plVar8;
      *plVar8 = 0;
      if ((lVar17 == 0) || (puVar18 = *(undefined8 **)(lVar17 + 0x60), puVar18 == (undefined8 *)0x0)
         ) {
LAB__text__005c9fd0:
        puVar18 = (undefined8 *)0x0;
      }
      else {
        puVar10 = (undefined8 *)(**(code **)*puVar18)(puVar18);
        if (((*pbVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar3), iVar5 != 0)) {
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
          *puVar4 = _DAT_0089f8c0;
          __cxa_guard_release(pbVar3);
        }
        if (puVar10 != puVar4) {
          do {
            puVar10 = (undefined8 *)*puVar10;
          } while (puVar10 != puVar4 && puVar10 != (undefined8 *)0x0);
          if (puVar10 == (undefined8 *)0x0) goto LAB__text__005c9fd0;
        }
        puVar18 = puVar18 + -10;
      }
      puVar19 = *(undefined8 **)(plVar8[-1] + 0x60);
      puVar10 = (undefined8 *)(**(code **)*puVar19)(puVar19);
      if (((*pbVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar3), iVar5 != 0)) {
        if (((*_DAT_0089f8b8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(_DAT_0089f8b8), iVar5 != 0))
        {
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
        *puVar4 = _DAT_0089f8c0;
        __cxa_guard_release(pbVar3);
      }
      if (puVar10 != puVar4) {
        do {
          puVar10 = (undefined8 *)*puVar10;
        } while (puVar10 != puVar4 && puVar10 != (undefined8 *)0x0);
      }
      lVar13 = *plVar8;
      plVar6 = plVar8;
      local_68 = plVar8 + -1;
    } while (*(int *)(puVar18 + 0x35) < *(int *)(puVar19 + 0x2b));
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
    }
    *plVar8 = lVar17;
  }
  plVar6 = plVar7 + 1;
  local_68 = plVar7;
  if (plVar7 + 1 == local_80) {
    return;
  }
  goto LAB__text__005c9e88;
LAB__text__005c90dc:
  plVar8 = plVar6;
  if ((plVar7[1] == 0) ||
     (puVar18 = *(undefined8 **)(plVar7[1] + 0x60), puVar18 == (undefined8 *)0x0)) {
LAB__text__005c9130:
    puVar18 = (undefined8 *)0x0;
  }
  else {
    plVar6 = (long *)(**(code **)*puVar18)(puVar18);
    plVar9 = (long *)FUN__text__003ead60();
    if (plVar9 != plVar6) {
      do {
        plVar6 = (long *)*plVar6;
      } while (plVar6 != plVar9 && plVar6 != (long *)0x0);
      if (plVar6 == (long *)0x0) goto LAB__text__005c9130;
    }
    puVar18 = puVar18 + -10;
  }
  puVar10 = *(undefined8 **)(*plVar7 + 0x60);
  plVar6 = (long *)(**(code **)*puVar10)(puVar10);
  plVar9 = (long *)FUN__text__003ead60();
  if (plVar9 != plVar6) {
    do {
      plVar6 = (long *)*plVar6;
    } while (plVar6 != plVar9 && plVar6 != (long *)0x0);
  }
  if (*(int *)(puVar18 + 0x35) < *(int *)(puVar10 + 0x2b)) {
    lVar17 = *plVar8;
    lVar13 = 0;
    *plVar8 = 0;
    plVar6 = plVar8;
    do {
      plVar9 = plVar7;
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
      }
      lVar13 = *plVar9;
      *plVar9 = 0;
      *plVar6 = lVar13;
      if (plVar9 == local_68) {
        plVar9 = local_68;
        goto LAB__text__005c90c4;
      }
      if ((lVar17 == 0) || (puVar18 = *(undefined8 **)(lVar17 + 0x60), puVar18 == (undefined8 *)0x0)
         ) {
LAB__text__005c9230:
        puVar18 = (undefined8 *)0x0;
      }
      else {
        puVar10 = (undefined8 *)(**(code **)*puVar18)(puVar18);
        if (((*pbVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar3), iVar5 != 0)) {
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
          *puVar4 = _DAT_0089f8c0;
          __cxa_guard_release(pbVar3);
        }
        if (puVar10 != puVar4) {
          do {
            puVar10 = (undefined8 *)*puVar10;
          } while (puVar10 != puVar4 && puVar10 != (undefined8 *)0x0);
          if (puVar10 == (undefined8 *)0x0) goto LAB__text__005c9230;
        }
        puVar18 = puVar18 + -10;
      }
      puVar19 = *(undefined8 **)(plVar9[-1] + 0x60);
      puVar10 = (undefined8 *)(**(code **)*puVar19)(puVar19);
      if (((*pbVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar3), iVar5 != 0)) {
        if (((*_DAT_0089f8b8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(_DAT_0089f8b8), iVar5 != 0))
        {
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
        *puVar4 = _DAT_0089f8c0;
        __cxa_guard_release(pbVar3);
      }
      if (puVar10 != puVar4) {
        do {
          puVar10 = (undefined8 *)*puVar10;
        } while (puVar10 != puVar4 && puVar10 != (undefined8 *)0x0);
      }
      lVar13 = *plVar9;
      plVar6 = plVar9;
      plVar7 = plVar9 + -1;
    } while (*(int *)(puVar18 + 0x35) < *(int *)(puVar19 + 0x2b));
    if (lVar13 != 0) {
      (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
      *plVar9 = 0;
    }
LAB__text__005c90c4:
    *plVar9 = lVar17;
  }
  plVar6 = plVar8 + 1;
  plVar7 = plVar8;
  if (plVar8 + 1 == local_80) {
    return;
  }
  goto LAB__text__005c90dc;
LAB__text__005c9494:
  do {
    if ((long)uVar15 <= (long)uVar14) {
      uVar1 = uVar15 << 1 | 1;
      uVar22 = uVar15 * 2 + 2;
      plVar6 = local_68 + uVar1;
      uVar21 = uVar1;
      if ((long)uVar22 < (long)uVar12) {
        if ((*plVar6 == 0) ||
           (puVar18 = *(undefined8 **)(*plVar6 + 0x60), puVar18 == (undefined8 *)0x0)) {
LAB__text__005c951c:
          puVar18 = (undefined8 *)0x0;
        }
        else {
          plVar7 = (long *)(**(code **)*puVar18)(puVar18);
          plVar8 = (long *)FUN__text__003ead60();
          if (plVar8 != plVar7) {
            do {
              plVar7 = (long *)*plVar7;
            } while (plVar7 != plVar8 && plVar7 != (long *)0x0);
            if (plVar7 == (long *)0x0) goto LAB__text__005c951c;
          }
          puVar18 = puVar18 + -10;
        }
        puVar10 = *(undefined8 **)(plVar6[1] + 0x60);
        plVar7 = (long *)(**(code **)*puVar10)(puVar10);
        plVar8 = (long *)FUN__text__003ead60();
        if (plVar8 != plVar7) {
          do {
            plVar7 = (long *)*plVar7;
          } while (plVar7 != plVar8 && plVar7 != (long *)0x0);
        }
        uVar21 = uVar22;
        plVar7 = plVar6 + 1;
        if (*(int *)(puVar10 + 0x2b) <= *(int *)(puVar18 + 0x35)) {
          uVar21 = uVar1;
          plVar7 = plVar6;
        }
        plVar6 = plVar7;
      }
      if ((*plVar6 == 0) ||
         (puVar18 = *(undefined8 **)(*plVar6 + 0x60), puVar18 == (undefined8 *)0x0)) {
        puVar18 = (undefined8 *)0x0;
      }
      else {
        plVar7 = (long *)(**(code **)*puVar18)(puVar18);
        plVar8 = (long *)FUN__text__003ead60();
        if (plVar8 != plVar7) {
          do {
            plVar7 = (long *)*plVar7;
          } while (plVar7 != plVar8 && plVar7 != (long *)0x0);
          if (plVar7 == (long *)0x0) {
            puVar18 = (undefined8 *)0x0;
            goto LAB__text__005c95e0;
          }
        }
        puVar18 = puVar18 + -10;
      }
LAB__text__005c95e0:
      plVar7 = local_68 + uVar15;
      puVar10 = *(undefined8 **)(*plVar7 + 0x60);
      plVar8 = (long *)(**(code **)*puVar10)(puVar10);
      plVar9 = (long *)FUN__text__003ead60();
      if (plVar9 != plVar8) {
        do {
          plVar8 = (long *)*plVar8;
        } while (plVar8 != plVar9 && plVar8 != (long *)0x0);
      }
      if (*(int *)(puVar10 + 0x2b) <= *(int *)(puVar18 + 0x35)) {
        lVar13 = *plVar7;
        *plVar7 = 0;
        while( true ) {
          plVar8 = plVar6;
          lVar17 = *plVar8;
          *plVar8 = 0;
          *plVar7 = lVar17;
          if ((long)uVar14 < (long)uVar21) break;
          lVar17 = uVar21 * 2;
          uVar21 = uVar21 << 1 | 1;
          uVar22 = lVar17 + 2;
          plVar6 = local_68 + uVar21;
          if ((long)uVar22 < (long)uVar12) {
            if ((*plVar6 == 0) ||
               (puVar18 = *(undefined8 **)(*plVar6 + 0x60), puVar18 == (undefined8 *)0x0)) {
LAB__text__005c9700:
              puVar18 = (undefined8 *)0x0;
            }
            else {
              plVar7 = (long *)(**(code **)*puVar18)(puVar18);
              plVar9 = (long *)FUN__text__003ead60();
              if (plVar9 != plVar7) {
                do {
                  plVar7 = (long *)*plVar7;
                } while (plVar7 != plVar9 && plVar7 != (long *)0x0);
                if (plVar7 == (long *)0x0) goto LAB__text__005c9700;
              }
              puVar18 = puVar18 + -10;
            }
            puVar10 = *(undefined8 **)(plVar6[1] + 0x60);
            plVar7 = (long *)(**(code **)*puVar10)(puVar10);
            plVar9 = (long *)FUN__text__003ead60();
            if (plVar9 != plVar7) {
              do {
                plVar7 = (long *)*plVar7;
              } while (plVar7 != plVar9 && plVar7 != (long *)0x0);
            }
            plVar7 = plVar6 + 1;
            if (*(int *)(puVar10 + 0x2b) <= *(int *)(puVar18 + 0x35)) {
              uVar22 = uVar21;
              plVar7 = plVar6;
            }
            plVar6 = plVar7;
            lVar17 = *plVar6;
            uVar21 = uVar22;
            if (lVar17 != 0) goto LAB__text__005c975c;
LAB__text__005c97a0:
            puVar18 = (undefined8 *)0x0;
          }
          else {
            lVar17 = *plVar6;
            if (lVar17 == 0) goto LAB__text__005c97a0;
LAB__text__005c975c:
            puVar18 = *(undefined8 **)(lVar17 + 0x60);
            if (puVar18 == (undefined8 *)0x0) goto LAB__text__005c97a0;
            plVar7 = (long *)(**(code **)*puVar18)(puVar18);
            plVar9 = (long *)FUN__text__003ead60();
            if (plVar9 != plVar7) {
              do {
                plVar7 = (long *)*plVar7;
              } while (plVar7 != plVar9 && plVar7 != (long *)0x0);
              if (plVar7 == (long *)0x0) goto LAB__text__005c97a0;
            }
            puVar18 = puVar18 + -10;
          }
          puVar10 = *(undefined8 **)(lVar13 + 0x60);
          plVar7 = (long *)(**(code **)*puVar10)(puVar10);
          plVar9 = (long *)FUN__text__003ead60();
          if (plVar9 != plVar7) {
            do {
              plVar7 = (long *)*plVar7;
            } while (plVar7 != plVar9 && plVar7 != (long *)0x0);
          }
          if (*(int *)(puVar18 + 0x35) < *(int *)(puVar10 + 0x2b)) break;
          plVar7 = plVar8;
          if (*plVar8 != 0) {
            (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
            *plVar8 = 0;
          }
        }
        if (*plVar8 != 0) {
          (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
        }
        *plVar8 = lVar13;
      }
    }
    bVar2 = uVar15 != 0;
    uVar15 = uVar15 - 1;
  } while (bVar2);
  uVar12 = uVar16 >> 3;
  do {
    lVar13 = *local_68;
    *local_68 = 0;
    uVar16 = 0;
    plVar6 = local_68;
    do {
      plVar7 = plVar6 + uVar16 + 1;
      uVar14 = uVar16 << 1 | 1;
      uVar15 = uVar16 * 2 + 2;
      uVar22 = uVar14;
      if ((long)uVar15 < (long)uVar12) {
        if ((*plVar7 == 0) ||
           (puVar18 = *(undefined8 **)(*plVar7 + 0x60), puVar18 == (undefined8 *)0x0)) {
LAB__text__005c9900:
          puVar18 = (undefined8 *)0x0;
        }
        else {
          puVar10 = (undefined8 *)(**(code **)*puVar18)(puVar18);
          if (((*pbVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar3), iVar5 != 0)) {
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
            *puVar4 = _DAT_0089f8c0;
            __cxa_guard_release(pbVar3);
          }
          if (puVar10 != puVar4) {
            do {
              puVar10 = (undefined8 *)*puVar10;
            } while (puVar10 != puVar4 && puVar10 != (undefined8 *)0x0);
            if (puVar10 == (undefined8 *)0x0) goto LAB__text__005c9900;
          }
          puVar18 = puVar18 + -10;
        }
        puVar19 = *(undefined8 **)(plVar6[uVar16 + 2] + 0x60);
        puVar10 = (undefined8 *)(**(code **)*puVar19)(puVar19);
        if (((*pbVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar3), iVar5 != 0)) {
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
          *puVar4 = _DAT_0089f8c0;
          __cxa_guard_release(pbVar3);
        }
        if (puVar10 != puVar4) {
          do {
            puVar10 = (undefined8 *)*puVar10;
          } while (puVar10 != puVar4 && puVar10 != (undefined8 *)0x0);
        }
        uVar22 = uVar15;
        plVar8 = plVar6 + uVar16 + 2;
        if (*(int *)(puVar19 + 0x2b) <= *(int *)(puVar18 + 0x35)) {
          uVar22 = uVar14;
          plVar8 = plVar7;
        }
        plVar7 = plVar8;
      }
      if (*plVar6 != 0) {
        (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
        *plVar6 = 0;
      }
      lVar17 = *plVar7;
      *plVar7 = 0;
      *plVar6 = lVar17;
      uVar16 = uVar22;
      plVar6 = plVar7;
    } while ((long)uVar22 <= (long)(uVar12 - 2 >> 1));
    local_80 = local_80 + -1;
    lVar17 = *plVar7;
    if (plVar7 == local_80) {
      if (lVar17 != 0) {
        (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))();
      }
      *plVar7 = lVar13;
    }
    else {
      if (lVar17 != 0) {
        (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))();
        *plVar7 = 0;
      }
      lVar17 = *local_80;
      *local_80 = 0;
      *plVar7 = lVar17;
      if (*local_80 != 0) {
        (**(code **)(*(long *)(*local_80 + 0x48) + 0x18))();
      }
      *local_80 = lVar13;
      uVar16 = (long)plVar7 + (8 - (long)local_68);
      if (8 < (long)uVar16) {
        uVar16 = (uVar16 >> 3) - 2 >> 1;
        lVar13 = local_68[uVar16];
        if ((lVar13 == 0) ||
           (puVar18 = *(undefined8 **)(lVar13 + 0x60), puVar18 == (undefined8 *)0x0)) {
LAB__text__005c9c24:
          puVar18 = (undefined8 *)0x0;
        }
        else {
          plVar6 = (long *)(**(code **)*puVar18)(puVar18);
          plVar8 = (long *)FUN__text__003ead60();
          if (plVar8 != plVar6) {
            do {
              plVar6 = (long *)*plVar6;
            } while (plVar6 != plVar8 && plVar6 != (long *)0x0);
            if (plVar6 == (long *)0x0) goto LAB__text__005c9c24;
          }
          puVar18 = puVar18 + -10;
        }
        puVar10 = *(undefined8 **)(*plVar7 + 0x60);
        plVar6 = (long *)(**(code **)*puVar10)(puVar10);
        plVar8 = (long *)FUN__text__003ead60();
        if (plVar8 != plVar6) {
          do {
            plVar6 = (long *)*plVar6;
          } while (plVar6 != plVar8 && plVar6 != (long *)0x0);
        }
        if (*(int *)(puVar18 + 0x35) < *(int *)(puVar10 + 0x2b)) {
          lVar13 = *plVar7;
          *plVar7 = 0;
          plVar6 = local_68 + uVar16;
          while( true ) {
            plVar8 = plVar6;
            lVar17 = *plVar8;
            *plVar8 = 0;
            *plVar7 = lVar17;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1 >> 1;
            plVar6 = local_68 + uVar16;
            if ((*plVar6 == 0) ||
               (puVar18 = *(undefined8 **)(*plVar6 + 0x60), puVar18 == (undefined8 *)0x0)) {
LAB__text__005c9d00:
              puVar18 = (undefined8 *)0x0;
            }
            else {
              plVar7 = (long *)(**(code **)*puVar18)(puVar18);
              plVar9 = (long *)FUN__text__003ead60();
              if (plVar9 != plVar7) {
                do {
                  plVar7 = (long *)*plVar7;
                } while (plVar7 != plVar9 && plVar7 != (long *)0x0);
                if (plVar7 == (long *)0x0) goto LAB__text__005c9d00;
              }
              puVar18 = puVar18 + -10;
            }
            puVar19 = *(undefined8 **)(lVar13 + 0x60);
            puVar10 = (undefined8 *)(**(code **)*puVar19)(puVar19);
            if (((*pbVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(pbVar3), iVar5 != 0)) {
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
              *puVar4 = _DAT_0089f8c0;
              __cxa_guard_release(pbVar3);
            }
            if (puVar10 != puVar4) {
              do {
                puVar10 = (undefined8 *)*puVar10;
              } while (puVar10 != puVar4 && puVar10 != (undefined8 *)0x0);
            }
            if (*(int *)(puVar19 + 0x2b) <= *(int *)(puVar18 + 0x35)) break;
            plVar7 = plVar8;
            if (*plVar8 != 0) {
              (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
              *plVar8 = 0;
            }
          }
          if (*plVar8 != 0) {
            (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
          }
          *plVar8 = lVar13;
        }
      }
    }
    bVar2 = (long)uVar12 < 3;
    uVar12 = uVar12 - 1;
    if (bVar2) {
      return;
    }
  } while( true );
LAB__text__005c8f64:
  local_80 = plVar7;
  if ((uVar12 & 1) != 0) {
    return;
  }
  goto LAB__text__005c7c70;
}


