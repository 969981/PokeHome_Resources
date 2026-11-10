/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b7470; name: FUN_.text__004b7470
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004b7470(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined4 local_a4 [17];
  
  puVar5 = _DAT_008a45d8;
  puVar13 = *(undefined8 **)(param_1 + 0x38);
  if (puVar13 != (undefined8 *)0x0) {
    if (param_2 == 0) {
      do {
        puVar13 = (undefined8 *)*puVar13;
      } while (puVar13 != (undefined8 *)0x0);
    }
    else {
      puVar12 = (undefined8 *)0x0;
      do {
        while ((plVar11 = (long *)puVar13[2], *(short *)(plVar11[1] + 0x34) != 0x1820 &&
               (lVar7 = FUN__text__004ba560(), lVar7 != 0))) {
          if (lVar7 == param_2) {
            bVar6 = true;
          }
          else {
            lVar10 = *(long *)(lVar7 + 0x78);
            if ((*(byte *)(param_2 + 0xd4) >> 1 & 1) == 0) {
              if (lVar10 == 0) {
                piVar1 = (int *)(lVar7 + 0x24);
                do {
                  iVar2 = *piVar1;
                  cVar3 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar6) {
                    *piVar1 = iVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar2 + -1 == 0) {
                  (**(code **)(*(long *)(lVar7 + 0x10) + 0x20))();
                }
                break;
              }
              do {
                bVar6 = lVar10 == param_2;
                if (bVar6) break;
                lVar10 = *(long *)(lVar10 + 0x78);
              } while (lVar10 != 0);
            }
            else {
              lVar9 = *(long *)(lVar7 + 0x80);
              if (lVar10 != 0 && lVar9 == 0) {
                do {
                  plVar8 = (long *)(lVar10 + 0x78);
                  lVar9 = *(long *)(lVar10 + 0x80);
                  lVar10 = *plVar8;
                } while (*plVar8 != 0 && lVar9 == 0);
              }
              bVar6 = lVar9 != 0;
              if ((lVar9 != param_2) && (lVar9 != 0)) {
                do {
                  lVar9 = *(long *)(lVar9 + 0x80);
                  bVar6 = lVar9 != 0;
                } while (lVar9 != param_2 && lVar9 != 0);
              }
            }
          }
          piVar1 = (int *)(lVar7 + 0x24);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            (**(code **)(*(long *)(lVar7 + 0x10) + 0x20))();
          }
          if (!bVar6) break;
          plVar8 = (long *)plVar11[1];
          local_a4[0] = 0;
          if (*(short *)((long)plVar8 + 0x34) == 0x403) {
LAB__text__004b75d4:
            (**(code **)(*plVar8 + 0x58))(plVar8,local_a4);
          }
          else if (*(short *)((long)plVar8 + 0x34) == 0x503) {
            FUN__text__004b934c();
            plVar8 = (long *)plVar11[1];
            goto LAB__text__004b75d4;
          }
          FUN__text__0048e190(*puVar5,(int)plVar11[6]);
          puVar15 = (undefined8 *)*puVar13;
          puVar14 = (undefined8 *)(param_1 + 0x38);
          if (*(undefined8 **)(param_1 + 0x38) != puVar13) {
            puVar14 = puVar12;
          }
          *puVar14 = puVar15;
          if (*(undefined8 **)(param_1 + 0x40) == puVar13) {
            *(undefined8 **)(param_1 + 0x40) = puVar12;
          }
          *puVar13 = *(undefined8 *)(param_1 + 0x48);
          *(undefined8 **)(param_1 + 0x48) = puVar13;
          *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
          plVar8 = (long *)plVar11[1];
          piVar1 = (int *)((long)plVar8 + 0x14);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            (**(code **)(*plVar8 + 0x20))();
          }
          (**(code **)(*plVar11 + 8))(plVar11);
          FUN__text__00400fc0(0,plVar11);
          puVar13 = puVar15;
          if (puVar15 == (undefined8 *)0x0) {
            return;
          }
        }
        puVar14 = (undefined8 *)*puVar13;
        puVar12 = puVar13;
        puVar13 = puVar14;
      } while (puVar14 != (undefined8 *)0x0);
    }
  }
  return;
}


