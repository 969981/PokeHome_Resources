/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002f4070; name: FUN_.text__002f4070
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002f4070(long param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  
  puVar9 = _DAT_008a25b0;
  pbVar7 = _DAT_008a25a8;
  pbVar6 = _DAT_0089f498;
  plVar2 = *(long **)(param_1 + 0x98);
  plVar3 = *(long **)(param_1 + 0xa0);
  do {
    if (plVar2 == plVar3) {
      puVar13 = *(undefined8 **)(param_1 + 0xd0);
      for (puVar9 = *(undefined8 **)(param_1 + 200); puVar9 != puVar13; puVar9 = puVar9 + 0x10) {
        (*(code *)*puVar9)(puVar9 + 4);
      }
      return;
    }
    if ((*plVar2 != 0) && (*(int *)(*plVar2 + 0x54) != 0)) {
      lVar12 = *plVar2;
      plVar11 = (long *)0x0;
      if (lVar12 != 0) {
        if (*(int *)(lVar12 + 0x54) != 0) {
          piVar1 = (int *)(lVar12 + 0x54);
          iVar10 = *(int *)(lVar12 + 0x54);
          do {
            puVar13 = *(undefined8 **)(lVar12 + 0x58);
            if (((*pbVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(pbVar7), iVar8 != 0)) {
              if (((*_DAT_0089f790 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(_DAT_0089f790), iVar8 != 0)) {
                if (((*pbVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(pbVar6), iVar8 != 0)) {
                  *_DAT_0089f4a0 = 0;
                  __cxa_guard_release(pbVar6);
                }
                *_DAT_0089f798 = _DAT_0089f4a0;
                __cxa_guard_release(_DAT_0089f790);
              }
              *puVar9 = _DAT_0089f798;
              __cxa_guard_release(pbVar7);
            }
            if (puVar13 != puVar9) {
              do {
                puVar13 = (undefined8 *)*puVar13;
              } while (puVar13 != puVar9 && puVar13 != (undefined8 *)0x0);
              if (puVar13 == (undefined8 *)0x0) break;
            }
            iVar8 = *piVar1;
            if (iVar8 == iVar10) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar10 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                plVar11 = (long *)0x0;
                if (*(long *)(lVar12 + 0x60) != 0) {
                  plVar11 = (long *)(*(long *)(lVar12 + 0x60) + -0x50);
                }
                goto LAB__text__002f40bc;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar10 = iVar8;
          } while (iVar8 != 0);
        }
        plVar11 = (long *)0x0;
      }
LAB__text__002f40bc:
      (**(code **)(*plVar11 + 0x38))(plVar11);
      (**(code **)(plVar11[9] + 0x18))(plVar11 + 9);
    }
    plVar2 = plVar2 + 1;
  } while( true );
}


