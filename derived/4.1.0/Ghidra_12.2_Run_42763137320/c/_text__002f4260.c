/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002f4260; name: FUN_.text__002f4260
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x002f4470 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN__text__002f4260(long param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  
  puVar10 = _DAT_008a25b0;
  pbVar6 = _DAT_008a25a8;
  plVar2 = *(long **)(param_1 + 0x98);
  plVar3 = *(long **)(param_1 + 0xa0);
  do {
    if (plVar2 == plVar3) {
      puVar11 = *(undefined8 **)(param_1 + 0x130);
      for (puVar10 = *(undefined8 **)(param_1 + 0x128); puVar10 != puVar11; puVar10 = puVar10 + 0x10
          ) {
        (*(code *)*puVar10)(puVar10 + 4);
      }
      return;
    }
    if ((*plVar2 != 0) && (*(int *)(*plVar2 + 0x54) != 0)) {
      lVar13 = *plVar2;
      if (lVar13 == 0) {
LAB__text__002f4470:
        iVar8 = (**(code **)(lRam0000000000000000 + 0x60))(0);
      }
      else {
        if (*(int *)(lVar13 + 0x54) != 0) {
          piVar1 = (int *)(lVar13 + 0x54);
          iVar8 = *(int *)(lVar13 + 0x54);
          do {
            puVar11 = *(undefined8 **)(lVar13 + 0x58);
            if (((*pbVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(pbVar6), iVar7 != 0)) {
              if (((*_DAT_0089f790 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(_DAT_0089f790), iVar7 != 0)) {
                if (((*_DAT_0089f498 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(_DAT_0089f498), iVar7 != 0)) {
                  *_DAT_0089f4a0 = 0;
                  __cxa_guard_release(_DAT_0089f498);
                }
                *_DAT_0089f798 = _DAT_0089f4a0;
                __cxa_guard_release(_DAT_0089f790);
              }
              *puVar10 = _DAT_0089f798;
              __cxa_guard_release(pbVar6);
            }
            if (puVar11 != puVar10) {
              do {
                puVar11 = (undefined8 *)*puVar11;
              } while (puVar11 != puVar10 && puVar11 != (undefined8 *)0x0);
              if (puVar11 == (undefined8 *)0x0) goto LAB__text__002f441c;
            }
            iVar7 = *piVar1;
            if (iVar7 == iVar8) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar8 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                plVar12 = (long *)0x0;
                if (*(long *)(lVar13 + 0x60) != 0) {
                  plVar12 = (long *)(*(long *)(lVar13 + 0x60) + -0x50);
                }
                iVar8 = (**(code **)(*plVar12 + 0x60))(plVar12);
                if (iVar8 == -0x7ee3623b) goto LAB__text__002f42b0;
                goto LAB__text__002f4488;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar8 = iVar7;
          } while (iVar7 != 0);
          goto LAB__text__002f4470;
        }
LAB__text__002f441c:
        iVar8 = (**(code **)(lRam0000000000000000 + 0x60))(0);
      }
      plVar12 = (long *)0x0;
      if (iVar8 != -0x7ee3623b) {
LAB__text__002f4488:
        uVar9 = (**(code **)(*plVar12 + 0x68))(plVar12);
        FUN__text__002f1170(iVar8,uVar9);
      }
LAB__text__002f42b0:
      (**(code **)(*plVar12 + 0x48))(plVar12);
      (**(code **)(plVar12[9] + 0x18))(plVar12 + 9);
    }
    plVar2 = plVar2 + 1;
  } while( true );
}


