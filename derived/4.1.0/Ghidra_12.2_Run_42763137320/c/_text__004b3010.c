/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b3010; name: FUN_.text__004b3010
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004b3010(long param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined4 local_a4 [17];
  
  puVar5 = _DAT_008a45d8;
  plVar9 = *(long **)(param_1 + 0x38);
  if (plVar9 != (long *)0x0) {
    plVar8 = (long *)0x0;
    do {
      while( true ) {
        plVar7 = (long *)plVar9[2];
        plVar6 = (long *)plVar7[1];
        if (((int)plVar6[2] != param_2) || ((param_3 != 0 && ((int)plVar7[6] != param_3)))) break;
        local_a4[0] = 0;
        if (*(short *)((long)plVar6 + 0x34) == 0x403) {
LAB__text__004b30b4:
          (**(code **)(*plVar6 + 0x58))(plVar6,local_a4);
        }
        else if (*(short *)((long)plVar6 + 0x34) == 0x503) {
          FUN__text__004b934c();
          plVar6 = (long *)plVar7[1];
          goto LAB__text__004b30b4;
        }
        FUN__text__0048e190(*puVar5,(int)plVar7[6]);
        plVar10 = (long *)*plVar9;
        plVar6 = (long *)(param_1 + 0x38);
        if (*(long **)(param_1 + 0x38) != plVar9) {
          plVar6 = plVar8;
        }
        *plVar6 = (long)plVar10;
        if (*(long **)(param_1 + 0x40) == plVar9) {
          *(long **)(param_1 + 0x40) = plVar8;
        }
        *plVar9 = *(long *)(param_1 + 0x48);
        *(long **)(param_1 + 0x48) = plVar9;
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
        plVar9 = (long *)plVar7[1];
        piVar1 = (int *)((long)plVar9 + 0x14);
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
          (**(code **)(*plVar9 + 0x20))();
        }
        (**(code **)(*plVar7 + 8))(plVar7);
        FUN__text__00400fc0(0,plVar7);
        plVar9 = plVar10;
        if (plVar10 == (long *)0x0) goto LAB__text__004b3158;
      }
      plVar6 = (long *)*plVar9;
      plVar8 = plVar9;
      plVar9 = plVar6;
    } while (plVar6 != (long *)0x0);
  }
LAB__text__004b3158:
  plVar9 = *(long **)(param_1 + 0x60);
  if (plVar9 != (long *)0x0) {
    plVar8 = (long *)0x0;
    do {
      while( true ) {
        plVar7 = (long *)plVar9[2];
        plVar6 = (long *)plVar7[1];
        if (((int)plVar6[2] != param_2) || ((param_3 != 0 && ((int)plVar7[6] != param_3)))) break;
        local_a4[0] = 0;
        if (*(short *)((long)plVar6 + 0x34) == 0x403) {
LAB__text__004b31c4:
          (**(code **)(*plVar6 + 0x58))(plVar6,local_a4);
        }
        else if (*(short *)((long)plVar6 + 0x34) == 0x503) {
          FUN__text__004b934c();
          plVar6 = (long *)plVar7[1];
          goto LAB__text__004b31c4;
        }
        FUN__text__0048e190(*puVar5,(int)plVar7[6]);
        plVar10 = (long *)*plVar9;
        plVar6 = (long *)(param_1 + 0x60);
        if (*(long **)(param_1 + 0x60) != plVar9) {
          plVar6 = plVar8;
        }
        *plVar6 = (long)plVar10;
        if (*(long **)(param_1 + 0x68) == plVar9) {
          *(long **)(param_1 + 0x68) = plVar8;
        }
        *plVar9 = *(long *)(param_1 + 0x70);
        *(long **)(param_1 + 0x70) = plVar9;
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
        plVar9 = (long *)plVar7[1];
        piVar1 = (int *)((long)plVar9 + 0x14);
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
          (**(code **)(*plVar9 + 0x20))();
        }
        (**(code **)(*plVar7 + 8))(plVar7);
        FUN__text__00400fc0(0,plVar7);
        plVar9 = plVar10;
        if (plVar10 == (long *)0x0) {
          return 1;
        }
      }
      plVar6 = (long *)*plVar9;
      plVar8 = plVar9;
      plVar9 = plVar6;
    } while (plVar6 != (long *)0x0);
  }
  return 1;
}


