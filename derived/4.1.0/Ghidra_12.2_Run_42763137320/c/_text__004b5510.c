/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b5510; name: FUN_.text__004b5510
 */


void FUN__text__004b5510(long param_1,long param_2,long param_3,ulong param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  
  plVar13 = (long *)(param_1 + 0x60);
  plVar14 = (long *)*plVar13;
  if (plVar14 != (long *)0x0) {
    if (param_2 == 0) {
      if ((param_4 & 1) == 0) {
        plVar11 = (long *)0x0;
        if (param_3 == 0) {
          do {
            while ((lVar12 = plVar14[2], param_5 != 0 && (*(int *)(lVar12 + 0x30) != param_5))) {
LAB__text__004b5854:
              plVar8 = (long *)*plVar14;
              plVar11 = plVar14;
              plVar14 = plVar8;
              if (plVar8 == (long *)0x0) goto LAB__text__004b56e0;
            }
            if (*(int *)(lVar12 + 0x34) != 0) {
              *(int *)(lVar12 + 0x34) = *(int *)(lVar12 + 0x34) + -1;
              goto LAB__text__004b5854;
            }
            FUN__text__004b6060(param_1);
            plVar9 = (long *)*plVar14;
            plVar8 = plVar13;
            if (*(long **)(param_1 + 0x60) != plVar14) {
              plVar8 = plVar11;
            }
            *plVar8 = (long)plVar9;
            if (*(long **)(param_1 + 0x68) == plVar14) {
              *(long **)(param_1 + 0x68) = plVar11;
            }
            *plVar14 = *(long *)(param_1 + 0x70);
            *(long **)(param_1 + 0x70) = plVar14;
            *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
            plVar14 = plVar9;
          } while (plVar9 != (long *)0x0);
        }
        else {
          do {
            while ((lVar12 = plVar14[2], *(long *)(lVar12 + 0x40) != param_3 ||
                   ((param_5 != 0 && (*(int *)(lVar12 + 0x30) != param_5))))) {
LAB__text__004b57e0:
              plVar8 = (long *)*plVar14;
              plVar11 = plVar14;
              plVar14 = plVar8;
              if (plVar8 == (long *)0x0) goto LAB__text__004b56e0;
            }
            if (*(int *)(lVar12 + 0x34) != 0) {
              *(int *)(lVar12 + 0x34) = *(int *)(lVar12 + 0x34) + -1;
              goto LAB__text__004b57e0;
            }
            FUN__text__004b6060(param_1);
            plVar9 = (long *)*plVar14;
            plVar8 = plVar13;
            if (*(long **)(param_1 + 0x60) != plVar14) {
              plVar8 = plVar11;
            }
            *plVar8 = (long)plVar9;
            if (*(long **)(param_1 + 0x68) == plVar14) {
              *(long **)(param_1 + 0x68) = plVar11;
            }
            *plVar14 = *(long *)(param_1 + 0x70);
            *(long **)(param_1 + 0x70) = plVar14;
            *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
            plVar14 = plVar9;
          } while (plVar9 != (long *)0x0);
        }
      }
      else {
        plVar11 = (long *)0x0;
        do {
          while (((param_3 == 0 || (*(long *)(plVar14[2] + 0x40) == param_3)) &&
                 ((param_5 == 0 || (*(int *)(plVar14[2] + 0x30) == param_5))))) {
            FUN__text__004b6060(param_1);
            plVar9 = (long *)*plVar14;
            plVar8 = plVar13;
            if (*(long **)(param_1 + 0x60) != plVar14) {
              plVar8 = plVar11;
            }
            *plVar8 = (long)plVar9;
            if (*(long **)(param_1 + 0x68) == plVar14) {
              *(long **)(param_1 + 0x68) = plVar11;
            }
            *plVar14 = *(long *)(param_1 + 0x70);
            *(long **)(param_1 + 0x70) = plVar14;
            *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
            plVar14 = plVar9;
            if (plVar9 == (long *)0x0) goto LAB__text__004b56e0;
          }
          plVar8 = (long *)*plVar14;
          plVar11 = plVar14;
          plVar14 = plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
    else {
      plVar11 = (long *)0x0;
      do {
        while (((plVar8 = plVar14, lVar12 = plVar8[2], param_3 != 0 &&
                (*(long *)(lVar12 + 0x40) != param_3)) ||
               (((param_5 != 0 && (*(int *)(lVar12 + 0x30) != param_5)) ||
                ((*(long *)(lVar12 + 8) == 0 || (lVar6 = FUN__text__004ba560(), lVar6 == 0))))))) {
LAB__text__004b56d0:
          plVar14 = (long *)*plVar8;
          plVar11 = plVar8;
          if ((long *)*plVar8 == (long *)0x0) goto LAB__text__004b56e0;
        }
        if (lVar6 == param_2) {
          bVar5 = true;
        }
        else {
          lVar10 = *(long *)(lVar6 + 0x78);
          if ((*(byte *)(param_2 + 0xd4) >> 1 & 1) == 0) {
            if (lVar10 == 0) {
              piVar1 = (int *)(lVar6 + 0x24);
              do {
                iVar2 = *piVar1;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar2 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar2 + -1 == 0) {
                (**(code **)(*(long *)(lVar6 + 0x10) + 0x20))();
              }
              goto LAB__text__004b56d0;
            }
            do {
              bVar5 = lVar10 == param_2;
              if (bVar5) break;
              lVar10 = *(long *)(lVar10 + 0x78);
            } while (lVar10 != 0);
          }
          else {
            lVar7 = *(long *)(lVar6 + 0x80);
            if ((lVar10 != 0) && (lVar7 == 0)) {
              do {
                plVar14 = (long *)(lVar10 + 0x78);
                lVar7 = *(long *)(lVar10 + 0x80);
                lVar10 = *plVar14;
              } while (*plVar14 != 0 && lVar7 == 0);
            }
            bVar5 = lVar7 != 0;
            if ((lVar7 != param_2) && (lVar7 != 0)) {
              do {
                lVar7 = *(long *)(lVar7 + 0x80);
                bVar5 = lVar7 != 0;
              } while (lVar7 != param_2 && lVar7 != 0);
            }
          }
        }
        piVar1 = (int *)(lVar6 + 0x24);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 != 0) {
          if (bVar5) goto LAB__text__004b563c;
          goto LAB__text__004b56d0;
        }
        (**(code **)(*(long *)(lVar6 + 0x10) + 0x20))();
        if (!bVar5) goto LAB__text__004b56d0;
LAB__text__004b563c:
        if (((param_4 & 1) == 0) && (*(int *)(lVar12 + 0x34) != 0)) {
          *(int *)(lVar12 + 0x34) = *(int *)(lVar12 + 0x34) + -1;
          goto LAB__text__004b56d0;
        }
        FUN__text__004b6060(param_1,lVar12);
        plVar14 = (long *)*plVar8;
        plVar9 = plVar13;
        if (*(long **)(param_1 + 0x60) != plVar8) {
          plVar9 = plVar11;
        }
        *plVar9 = (long)plVar14;
        if (*(long **)(param_1 + 0x68) == plVar8) {
          *(long **)(param_1 + 0x68) = plVar11;
        }
        *plVar8 = *(long *)(param_1 + 0x70);
        *(long **)(param_1 + 0x70) = plVar8;
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
      } while (plVar14 != (long *)0x0);
    }
  }
LAB__text__004b56e0:
  FUN__text__004b6c20(param_1,param_2,param_3,0,param_5);
  return;
}


