/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b42a0; name: FUN_.text__004b42a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004b42a0(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 local_94 [17];
  
  puVar5 = _DAT_008a45d8;
  puVar9 = *(undefined8 **)(param_1 + 0x38);
  if (puVar9 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
    do {
      while (plVar7 = (long *)puVar9[2], (int)plVar7[6] != param_2) {
        puVar11 = (undefined8 *)*puVar9;
        puVar8 = puVar9;
        puVar9 = puVar11;
        if (puVar11 == (undefined8 *)0x0) goto LAB__text__004b43c8;
      }
      plVar6 = (long *)plVar7[1];
      local_94[0] = 0;
      if (*(short *)((long)plVar6 + 0x34) == 0x403) {
LAB__text__004b4324:
        (**(code **)(*plVar6 + 0x58))(plVar6,local_94);
      }
      else if (*(short *)((long)plVar6 + 0x34) == 0x503) {
        FUN__text__004b934c();
        plVar6 = (long *)plVar7[1];
        goto LAB__text__004b4324;
      }
      FUN__text__0048e190(*puVar5,(int)plVar7[6]);
      puVar10 = (undefined8 *)*puVar9;
      puVar11 = (undefined8 *)(param_1 + 0x38);
      if (*(undefined8 **)(param_1 + 0x38) != puVar9) {
        puVar11 = puVar8;
      }
      *puVar11 = puVar10;
      if (*(undefined8 **)(param_1 + 0x40) == puVar9) {
        *(undefined8 **)(param_1 + 0x40) = puVar8;
      }
      *puVar9 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 **)(param_1 + 0x48) = puVar9;
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
      plVar6 = (long *)plVar7[1];
      piVar1 = (int *)((long)plVar6 + 0x14);
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
        (**(code **)(*plVar6 + 0x20))();
      }
      (**(code **)(*plVar7 + 8))(plVar7);
      FUN__text__00400fc0(0,plVar7);
      puVar9 = puVar10;
    } while (puVar10 != (undefined8 *)0x0);
  }
LAB__text__004b43c8:
  puVar9 = *(undefined8 **)(param_1 + 0x60);
  if (puVar9 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
    do {
      while (plVar7 = (long *)puVar9[2], (int)plVar7[6] == param_2) {
        plVar6 = (long *)plVar7[1];
        local_94[0] = 0;
        if (*(short *)((long)plVar6 + 0x34) == 0x403) {
LAB__text__004b4424:
          (**(code **)(*plVar6 + 0x58))(plVar6,local_94);
        }
        else if (*(short *)((long)plVar6 + 0x34) == 0x503) {
          FUN__text__004b934c();
          plVar6 = (long *)plVar7[1];
          goto LAB__text__004b4424;
        }
        FUN__text__0048e190(*puVar5,(int)plVar7[6]);
        puVar10 = (undefined8 *)*puVar9;
        puVar11 = (undefined8 *)(param_1 + 0x60);
        if (*(undefined8 **)(param_1 + 0x60) != puVar9) {
          puVar11 = puVar8;
        }
        *puVar11 = puVar10;
        if (*(undefined8 **)(param_1 + 0x68) == puVar9) {
          *(undefined8 **)(param_1 + 0x68) = puVar8;
        }
        *puVar9 = *(undefined8 *)(param_1 + 0x70);
        *(undefined8 **)(param_1 + 0x70) = puVar9;
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
        plVar6 = (long *)plVar7[1];
        piVar1 = (int *)((long)plVar6 + 0x14);
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
          (**(code **)(*plVar6 + 0x20))();
        }
        (**(code **)(*plVar7 + 8))(plVar7);
        FUN__text__00400fc0(0,plVar7);
        puVar9 = puVar10;
        if (puVar10 == (undefined8 *)0x0) {
          return;
        }
      }
      puVar11 = (undefined8 *)*puVar9;
      puVar8 = puVar9;
      puVar9 = puVar11;
    } while (puVar11 != (undefined8 *)0x0);
  }
  return;
}


