/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002f3c70; name: FUN_.text__002f3c70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002f3c70(long param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [16];
  
  puVar10 = _DAT_008a25b0;
  pbVar6 = _DAT_008a25a8;
  plVar2 = *(long **)(param_1 + 0x98);
  plVar3 = *(long **)(param_1 + 0xa0);
  do {
    if (plVar2 == plVar3) {
      puVar14 = *(undefined8 **)(param_1 + 0x100);
      for (puVar10 = *(undefined8 **)(param_1 + 0xf8); puVar10 != puVar14; puVar10 = puVar10 + 0x10)
      {
        (*(code *)*puVar10)(puVar10 + 4);
      }
      return;
    }
    if ((*plVar2 != 0) && (*(int *)(*plVar2 + 0x54) != 0)) {
      lVar11 = *plVar2;
      plVar12 = (long *)0x0;
      if (lVar11 != 0) {
        if (*(int *)(lVar11 + 0x54) != 0) {
          piVar1 = (int *)(lVar11 + 0x54);
          iVar8 = *(int *)(lVar11 + 0x54);
          do {
            puVar14 = *(undefined8 **)(lVar11 + 0x58);
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
            if (puVar14 != puVar10) {
              do {
                puVar14 = (undefined8 *)*puVar14;
              } while (puVar14 != puVar10 && puVar14 != (undefined8 *)0x0);
              if (puVar14 == (undefined8 *)0x0) break;
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
                if (*(long *)(lVar11 + 0x60) != 0) {
                  plVar12 = (long *)(*(long *)(lVar11 + 0x60) + -0x50);
                }
                goto LAB__text__002f3e54;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar8 = iVar7;
          } while (iVar7 != 0);
        }
        plVar12 = (long *)0x0;
      }
LAB__text__002f3e54:
      (**(code **)(*plVar12 + 0x40))(plVar12);
      iVar8 = (**(code **)(*plVar12 + 0x60))(plVar12);
      if (iVar8 != -0x7ee3623b) {
        auVar15 = FUN__text__002f11e0(iVar8);
        uVar13 = auVar15._8_8_;
        uVar9 = (**(code **)(*plVar12 + 0x68))(plVar12);
        if ((auVar15._0_8_ & 0xff) == 0) {
          uVar13 = 0;
        }
        else if (uVar9 <= uVar13) goto LAB__text__002f3ce4;
        (**(code **)(*plVar12 + 0x58))(plVar12,uVar13,uVar9);
        FUN__text__002f1170(iVar8,uVar9);
      }
LAB__text__002f3ce4:
      (**(code **)(plVar12[9] + 0x18))(plVar12 + 9);
    }
    plVar2 = plVar2 + 1;
  } while( true );
}


