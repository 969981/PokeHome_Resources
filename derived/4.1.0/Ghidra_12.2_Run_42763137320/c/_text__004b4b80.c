/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b4b80; name: FUN_.text__004b4b80
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN__text__004b4b80(long param_1,long param_2,long param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined4 local_a4 [17];
  
  plVar13 = *(long **)(param_1 + 0x38);
  if (plVar13 != (long *)0x0) {
    plVar11 = (long *)0x0;
    do {
      plVar10 = (long *)plVar13[2];
      if ((((param_3 == 0) || (plVar10[8] == param_3)) &&
          ((param_4 == 0 || ((int)plVar10[6] == param_4)))) &&
         (*(short *)(plVar10[1] + 0x34) != 0x1820)) {
        if (param_2 != 0) {
          lVar6 = FUN__text__004ba560();
          if (lVar6 == 0) goto LAB__text__004b4c00;
          if (lVar6 != param_2) {
            lVar9 = *(long *)(lVar6 + 0x78);
            if ((*(byte *)(param_2 + 0xd4) >> 1 & 1) != 0) {
              lVar8 = *(long *)(lVar6 + 0x80);
              if ((lVar9 != 0) && (lVar8 == 0)) {
                do {
                  plVar7 = (long *)(lVar9 + 0x78);
                  lVar8 = *(long *)(lVar9 + 0x80);
                  lVar9 = *plVar7;
                } while (*plVar7 != 0 && lVar8 == 0);
              }
              bVar5 = lVar8 != 0;
              if ((lVar8 != param_2) && (lVar8 != 0)) {
                do {
                  lVar8 = *(long *)(lVar8 + 0x80);
                  bVar5 = lVar8 != 0;
                } while (lVar8 != param_2 && lVar8 != 0);
              }
              goto LAB__text__004b4cac;
            }
            if (lVar9 != 0) {
              do {
                bVar5 = lVar9 == param_2;
                if (bVar5) break;
                lVar9 = *(long *)(lVar9 + 0x78);
              } while (lVar9 != 0);
              goto LAB__text__004b4cac;
            }
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
            if (iVar2 + -1 != 0) goto LAB__text__004b4c00;
            (**(code **)(*(long *)(lVar6 + 0x10) + 0x20))();
            plVar12 = (long *)*plVar13;
            plVar11 = plVar13;
            goto joined_r0x004b4db0;
          }
          bVar5 = true;
LAB__text__004b4cac:
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
          if (iVar2 + -1 == 0) {
            (**(code **)(*(long *)(lVar6 + 0x10) + 0x20))();
          }
          if (!bVar5) goto LAB__text__004b4c00;
        }
        plVar7 = (long *)plVar10[1];
        local_a4[0] = 0;
        if (*(short *)((long)plVar7 + 0x34) == 0x403) {
LAB__text__004b4d00:
          (**(code **)(*plVar7 + 0x58))(plVar7,local_a4);
        }
        else if (*(short *)((long)plVar7 + 0x34) == 0x503) {
          FUN__text__004b934c();
          plVar7 = (long *)plVar10[1];
          goto LAB__text__004b4d00;
        }
        FUN__text__0048e190(DAT_00ae9a80,(int)plVar10[6]);
        plVar12 = (long *)*plVar13;
        plVar7 = (long *)(param_1 + 0x38);
        if (*(long **)(param_1 + 0x38) != plVar13) {
          plVar7 = plVar11;
        }
        *plVar7 = (long)plVar12;
        if (*(long **)(param_1 + 0x40) == plVar13) {
          *(long **)(param_1 + 0x40) = plVar11;
        }
        *plVar13 = *(long *)(param_1 + 0x48);
        *(long **)(param_1 + 0x48) = plVar13;
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
        plVar13 = (long *)plVar10[1];
        piVar1 = (int *)((long)plVar13 + 0x14);
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
          (**(code **)(*plVar13 + 0x20))();
        }
        (**(code **)(*plVar10 + 8))(plVar10);
        FUN__text__00400fc0(0,plVar10);
      }
      else {
LAB__text__004b4c00:
        plVar12 = (long *)*plVar13;
        plVar11 = plVar13;
      }
joined_r0x004b4db0:
      plVar13 = plVar12;
    } while (plVar13 != (long *)0x0);
  }
  plVar13 = *(long **)(param_1 + 0x60);
  if (plVar13 != (long *)0x0) {
    plVar11 = (long *)0x0;
    do {
      plVar10 = (long *)plVar13[2];
      if ((((param_3 == 0) || (plVar10[8] == param_3)) &&
          ((param_4 == 0 || ((int)plVar10[6] == param_4)))) &&
         (*(short *)(plVar10[1] + 0x34) != 0x1820)) {
        if (param_2 != 0) {
          lVar6 = FUN__text__004ba560();
          if (lVar6 == 0) goto LAB__text__004b4e34;
          if (lVar6 != param_2) {
            lVar9 = *(long *)(lVar6 + 0x78);
            if ((*(byte *)(param_2 + 0xd4) >> 1 & 1) != 0) {
              lVar8 = *(long *)(lVar6 + 0x80);
              if ((lVar9 != 0) && (lVar8 == 0)) {
                do {
                  plVar7 = (long *)(lVar9 + 0x78);
                  lVar8 = *(long *)(lVar9 + 0x80);
                  lVar9 = *plVar7;
                } while (*plVar7 != 0 && lVar8 == 0);
              }
              bVar5 = lVar8 != 0;
              if ((lVar8 != param_2) && (lVar8 != 0)) {
                do {
                  lVar8 = *(long *)(lVar8 + 0x80);
                  bVar5 = lVar8 != 0;
                } while (lVar8 != param_2 && lVar8 != 0);
              }
              goto LAB__text__004b4edc;
            }
            if (lVar9 != 0) {
              do {
                bVar5 = lVar9 == param_2;
                if (bVar5) break;
                lVar9 = *(long *)(lVar9 + 0x78);
              } while (lVar9 != 0);
              goto LAB__text__004b4edc;
            }
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
            if (iVar2 + -1 != 0) goto LAB__text__004b4e34;
            (**(code **)(*(long *)(lVar6 + 0x10) + 0x20))();
            plVar12 = (long *)*plVar13;
            plVar11 = plVar13;
            goto joined_r0x004b501c;
          }
          bVar5 = true;
LAB__text__004b4edc:
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
          if (iVar2 + -1 == 0) {
            (**(code **)(*(long *)(lVar6 + 0x10) + 0x20))();
          }
          if (!bVar5) goto LAB__text__004b4e34;
        }
        plVar7 = (long *)plVar10[1];
        local_a4[0] = 0;
        if (*(short *)((long)plVar7 + 0x34) == 0x403) {
LAB__text__004b4f30:
          (**(code **)(*plVar7 + 0x58))(plVar7,local_a4);
        }
        else if (*(short *)((long)plVar7 + 0x34) == 0x503) {
          FUN__text__004b934c();
          plVar7 = (long *)plVar10[1];
          goto LAB__text__004b4f30;
        }
        FUN__text__0048e190(DAT_00ae9a80,(int)plVar10[6]);
        plVar12 = (long *)*plVar13;
        plVar7 = (long *)(param_1 + 0x60);
        if (*(long **)(param_1 + 0x60) != plVar13) {
          plVar7 = plVar11;
        }
        *plVar7 = (long)plVar12;
        if (*(long **)(param_1 + 0x68) == plVar13) {
          *(long **)(param_1 + 0x68) = plVar11;
        }
        *plVar13 = *(long *)(param_1 + 0x70);
        *(long **)(param_1 + 0x70) = plVar13;
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
        plVar13 = (long *)plVar10[1];
        piVar1 = (int *)((long)plVar13 + 0x14);
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
          (**(code **)(*plVar13 + 0x20))();
        }
        (**(code **)(*plVar10 + 8))(plVar10);
        FUN__text__00400fc0(0,plVar10);
      }
      else {
LAB__text__004b4e34:
        plVar12 = (long *)*plVar13;
        plVar11 = plVar13;
      }
joined_r0x004b501c:
      plVar13 = plVar12;
    } while (plVar13 != (long *)0x0);
  }
  return 1;
}


