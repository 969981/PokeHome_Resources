/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00129f20; name: FUN_.text__00129f20
 */


void FUN__text__00129f20(long *param_1,long param_2,long *param_3,ulong param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  long local_80 [3];
  long local_68;
  
  lVar6 = *(long *)(param_2 + 8);
  lVar7 = 0;
  if (lVar6 != 0) {
    plVar9 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    if (*(int *)(lVar6 + 0x54) != 0) {
      piVar1 = (int *)(lVar6 + 0x54);
      iVar10 = *(int *)(lVar6 + 0x54);
      do {
        plVar11 = *(long **)(lVar6 + 0x58);
        plVar5 = (long *)FUN__text__001280e4();
        if (plVar5 != plVar11) {
          do {
            plVar11 = (long *)*plVar11;
          } while (plVar11 != plVar5 && plVar11 != (long *)0x0);
          if (plVar11 == (long *)0x0) break;
        }
        iVar2 = *piVar1;
        if (iVar2 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar7 = 0;
            if (*(long *)(lVar6 + 0x60) != 0) {
              lVar7 = *(long *)(lVar6 + 0x60) + -0x50;
            }
            (**(code **)(*plVar9 + 0x18))(plVar9);
            if (lVar7 != 0) {
              FUN__text__005e9290(local_80,lVar7 + 0x630);
              lVar6 = local_80[0];
              lVar8 = *param_3;
              if (local_68 != 0) {
                (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
              }
              if (lVar6 == lVar8) {
                *param_1 = lVar7;
                return;
              }
            }
            goto LAB__text__0012a050;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar2;
      } while (iVar2 != 0);
    }
    lVar7 = 0;
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
LAB__text__0012a050:
  plVar9 = *(long **)(param_2 + 0x18);
  plVar5 = *(long **)(param_2 + 0x20);
  lVar6 = lVar7;
  if (plVar9 != plVar5) {
    do {
      lVar8 = *plVar9;
      lVar7 = 0;
      if (lVar8 != 0) {
        if (*(int *)(lVar8 + 0x54) != 0) {
          piVar1 = (int *)(lVar8 + 0x54);
          iVar10 = *(int *)(lVar8 + 0x54);
          do {
            plVar12 = *(long **)(lVar8 + 0x58);
            plVar11 = (long *)FUN__text__001280e4();
            if (plVar11 != plVar12) {
              do {
                plVar12 = (long *)*plVar12;
              } while (plVar12 != plVar11 && plVar12 != (long *)0x0);
              if (plVar12 == (long *)0x0) break;
            }
            iVar2 = *piVar1;
            if (iVar2 == iVar10) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar10 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar7 = 0;
                if (*(long *)(lVar8 + 0x60) != 0) {
                  lVar7 = *(long *)(lVar8 + 0x60) + -0x50;
                }
                goto joined_r0x0012a110;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar10 = iVar2;
          } while (iVar2 != 0);
        }
        lVar7 = 0;
      }
joined_r0x0012a110:
      if (lVar6 != 0) {
        (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
      }
      if (lVar7 != 0) {
        FUN__text__005e9290(local_80,lVar7 + 0x630);
        lVar6 = local_80[0];
        lVar8 = *param_3;
        if (local_68 != 0) {
          (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        }
        if (lVar6 == lVar8) {
          *param_1 = lVar7;
          return;
        }
      }
      if ((param_4 & 1) != 0) {
        (**(code **)(**(long **)(lVar7 + 0x610) + 0x28))
                  (local_80,*(long **)(lVar7 + 0x610),param_3,1);
        if (local_80[0] != 0) {
          plVar9 = (long *)(local_80[0] + 0x48);
          (**(code **)(*plVar9 + 0x18))(plVar9);
          lVar6 = *plVar9;
          *param_1 = local_80[0];
          (**(code **)(lVar6 + 0x10))(plVar9);
          goto LAB__text__0012a1cc;
        }
        *param_1 = 0;
      }
      plVar9 = plVar9 + 1;
      lVar6 = lVar7;
    } while (plVar9 != plVar5);
  }
  *param_1 = 0;
  if (lVar7 != 0) {
LAB__text__0012a1cc:
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  return;
}


