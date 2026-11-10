/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c6c30; name: FUN_.text__005c6c30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN__text__005c6c30(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  
  puVar8 = _DAT_008a00e0;
  pbVar4 = _DAT_008a00d8;
  plVar6 = *(long **)(param_1 + 0xb0);
  plVar7 = *(long **)(param_1 + 0xb8);
  if (plVar6 != plVar7) {
    do {
      lVar13 = *plVar6;
      if ((lVar13 != 0) && (*(int *)(lVar13 + 0x54) != 0)) {
        piVar1 = (int *)(lVar13 + 0x54);
        iVar11 = *(int *)(lVar13 + 0x54);
        do {
          puVar9 = *(undefined8 **)(lVar13 + 0x58);
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
            *puVar8 = _DAT_0089f8c0;
            __cxa_guard_release(pbVar4);
          }
          if (puVar9 != puVar8) {
            do {
              puVar9 = (undefined8 *)*puVar9;
            } while (puVar9 != puVar8 && puVar9 != (undefined8 *)0x0);
            if (puVar9 == (undefined8 *)0x0) break;
          }
          iVar5 = *piVar1;
          if (iVar5 == iVar11) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar13 = *(long *)(lVar13 + 0x60);
              if (lVar13 != 0) {
                lVar10 = *(long *)(lVar13 + 0xe8);
                if (*(long *)(lVar13 + 0x100) == 0) {
                  lVar12 = *param_2;
                  (**(code **)(*(long *)(lVar13 + -8) + 0x18))((long *)(lVar13 + -8));
                }
                else {
                  plVar14 = (long *)(*(long *)(lVar13 + 0x100) + 0x48);
                  (**(code **)(*plVar14 + 0x10))(plVar14);
                  lVar12 = *param_2;
                  (**(code **)(*plVar14 + 0x18))(plVar14);
                  (**(code **)(*(long *)(lVar13 + -8) + 0x18))((long *)(lVar13 + -8));
                }
                if (lVar10 == lVar12) {
                  plVar7 = plVar6;
                  if (plVar6 == *(long **)(param_1 + 0xb8)) {
                    return (undefined8 *)0x0;
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
          iVar11 = iVar5;
        } while (iVar5 != 0);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar7);
    if (plVar7 != *(long **)(param_1 + 0xb8)) {
LAB__text__005c6e6c:
      if ((*plVar7 != 0) && (puVar8 = *(undefined8 **)(*plVar7 + 0x60), puVar8 != (undefined8 *)0x0)
         ) {
        plVar6 = (long *)(**(code **)*puVar8)(puVar8);
        plVar7 = (long *)FUN__text__003ead60();
        if (plVar7 != plVar6) {
          do {
            plVar6 = (long *)*plVar6;
          } while (plVar6 != plVar7 && plVar6 != (long *)0x0);
          if (plVar6 == (long *)0x0) {
            return (undefined8 *)0x0;
          }
        }
        return puVar8 + -10;
      }
    }
  }
  return (undefined8 *)0x0;
}


