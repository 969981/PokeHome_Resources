/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00121e40; name: FUN_.text__00121e40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00121e40(long param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  int iVar6;
  bool bVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  int iVar13;
  
  lVar10 = *(long *)(*(long *)(param_1 + 0x60) + 0xa0);
  if (lVar10 == 0) {
LAB__text__001222b0:
    bVar7 = true;
  }
  else {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))((long *)(lVar10 + 0x48));
    puVar5 = _DAT_0089ffc0;
    pbVar4 = _DAT_0089ffb8;
    pbVar3 = _DAT_0089f498;
    if (*(int *)(lVar10 + 0x54) == 0) {
      bVar7 = false;
    }
    else {
      piVar11 = (int *)(lVar10 + 0x54);
      lVar9 = lVar10;
      iVar13 = *(int *)(lVar10 + 0x54);
LAB__text__00121ec8:
      do {
        puVar8 = *(undefined8 **)(lVar9 + 0x58);
        if (((*pbVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar4), iVar6 != 0)) {
          if (((*_DAT_0089f790 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(_DAT_0089f790), iVar6 != 0)) {
            if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
              *_DAT_0089f4a0 = 0;
              __cxa_guard_release(pbVar3);
            }
            *_DAT_0089f798 = _DAT_0089f4a0;
            __cxa_guard_release(_DAT_0089f790);
          }
          *puVar5 = _DAT_0089f798;
          __cxa_guard_release(pbVar4);
        }
        if (puVar8 != puVar5) {
          do {
            puVar8 = (undefined8 *)*puVar8;
          } while (puVar8 != puVar5 && puVar8 != (undefined8 *)0x0);
          if (puVar8 != (undefined8 *)0x0) goto LAB__text__00121ef4;
LAB__text__00122288:
          bVar7 = false;
          lVar10 = lVar9;
          break;
        }
LAB__text__00121ef4:
        iVar6 = *piVar11;
        if (iVar6 != iVar13) {
          ClearExclusiveLocal();
LAB__text__00121eb8:
          iVar13 = iVar6;
          if (iVar6 == 0) goto LAB__text__00122288;
          goto LAB__text__00121ec8;
        }
        cVar1 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar7) {
          *piVar11 = iVar13 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 != '\0') goto LAB__text__00121eb8;
        if (*(long *)(lVar9 + 0x60) == 0) goto LAB__text__00122288;
        (**(code **)(*(long *)(*(long *)(lVar9 + 0x60) + -8) + 0x18))();
        iVar13 = *piVar11;
        do {
          if (iVar13 == 0) {
            lVar10 = 0;
            goto LAB__text__00122044;
          }
          puVar8 = *(undefined8 **)(lVar9 + 0x58);
          if (((*pbVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar4), iVar6 != 0)) {
            if (((*_DAT_0089f790 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(_DAT_0089f790), iVar6 != 0)) {
              if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
                *_DAT_0089f4a0 = 0;
                __cxa_guard_release(pbVar3);
              }
              *_DAT_0089f798 = _DAT_0089f4a0;
              __cxa_guard_release(_DAT_0089f790);
            }
            *puVar5 = _DAT_0089f798;
            __cxa_guard_release(pbVar4);
          }
          if (puVar8 != puVar5) {
            do {
              puVar8 = (undefined8 *)*puVar8;
            } while (puVar8 != puVar5 && puVar8 != (undefined8 *)0x0);
            lVar10 = 0;
            if (puVar8 == (undefined8 *)0x0) goto LAB__text__00122044;
          }
          iVar6 = *piVar11;
          if (iVar6 == iVar13) {
            cVar1 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar7) {
              *piVar11 = iVar13 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 != '\0') goto LAB__text__00121f84;
            bVar7 = true;
          }
          else {
            ClearExclusiveLocal();
LAB__text__00121f84:
            bVar7 = false;
          }
          iVar13 = iVar6;
        } while (!bVar7);
        lVar10 = 0;
        if (*(long *)(lVar9 + 0x60) != 0) {
          lVar10 = *(long *)(lVar9 + 0x60) + -0x50;
        }
LAB__text__00122044:
        FUN__text__00121e40(lVar10,param_2 + 1);
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
        iVar13 = *piVar11;
        do {
          if (iVar13 == 0) {
LAB__text__0012216c:
            lVar12 = 0;
            lVar10 = *(long *)(_DAT_00000060 + 0x98);
            goto joined_r0x00122198;
          }
          puVar8 = *(undefined8 **)(lVar9 + 0x58);
          if (((*pbVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar4), iVar6 != 0)) {
            if (((*_DAT_0089f790 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(_DAT_0089f790), iVar6 != 0)) {
              if (((*pbVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar3), iVar6 != 0)) {
                *_DAT_0089f4a0 = 0;
                __cxa_guard_release(pbVar3);
              }
              *_DAT_0089f798 = _DAT_0089f4a0;
              __cxa_guard_release(_DAT_0089f790);
            }
            *puVar5 = _DAT_0089f798;
            __cxa_guard_release(pbVar4);
          }
          if (puVar8 != puVar5) {
            do {
              puVar8 = (undefined8 *)*puVar8;
            } while (puVar8 != puVar5 && puVar8 != (undefined8 *)0x0);
            if (puVar8 == (undefined8 *)0x0) goto LAB__text__0012216c;
          }
          iVar6 = *piVar11;
          if (iVar6 == iVar13) {
            cVar1 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar7) {
              *piVar11 = iVar13 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 != '\0') goto LAB__text__001220c4;
            bVar7 = true;
          }
          else {
            ClearExclusiveLocal();
LAB__text__001220c4:
            bVar7 = false;
          }
          iVar13 = iVar6;
        } while (!bVar7);
        lVar12 = 0;
        if (*(long *)(lVar9 + 0x60) != 0) {
          lVar12 = *(long *)(lVar9 + 0x60) + -0x50;
        }
        lVar10 = *(long *)(*(long *)(lVar12 + 0x60) + 0x98);
joined_r0x00122198:
        if (lVar10 == 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
          goto LAB__text__001222b0;
        }
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))((long *)(lVar10 + 0x48));
        (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
        piVar11 = (int *)(lVar10 + 0x54);
        bVar7 = false;
        lVar9 = lVar10;
        iVar13 = *(int *)(lVar10 + 0x54);
      } while (*(int *)(lVar10 + 0x54) != 0);
    }
  }
  uVar2 = *(int *)(*(long *)(param_1 + 0x60) + 0x40) - 1;
  if (uVar2 < 5) {
                    /* WARNING: Could not emulate address calculation at 0x001222e4 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__001222c4 + (ulong)*(byte *)((ulong)uVar2 + 0x7217f0) * 4))(5);
    return;
  }
  if (!bVar7) {
                    /* WARNING: Could not recover jumptable at 0x001223a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    return;
  }
  return;
}


