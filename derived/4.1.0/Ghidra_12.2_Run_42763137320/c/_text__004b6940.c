/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b6940; name: FUN_.text__004b6940
 */


undefined8 FUN__text__004b6940(long *param_1,long param_2,undefined8 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined4 local_a4 [17];
  
  plVar10 = (long *)param_1[7];
  plVar6 = param_1;
  if (plVar10 != (long *)0x0) {
    plVar9 = (long *)0x0;
    do {
      while ((((plVar7 = (long *)plVar10[2], param_2 != 0 && (plVar7[8] != param_2)) ||
              ((param_4 != 0 && ((int)plVar7[6] != param_4)))) ||
             (plVar6 = (long *)FUN__text__004b6760(plVar6,plVar7[1],param_3),
             ((ulong)plVar6 & 1) != 0))) {
LAB__text__004b69d0:
        plVar7 = (long *)*plVar10;
        plVar9 = plVar10;
        plVar10 = plVar7;
        if (plVar7 == (long *)0x0) goto LAB__text__004b6ab4;
      }
      plVar6 = (long *)plVar7[1];
      sVar3 = *(short *)((long)plVar6 + 0x34);
      if (sVar3 == 0x1820) goto LAB__text__004b69d0;
      local_a4[0] = 0;
      if (sVar3 == 0x403) {
LAB__text__004b6a00:
        (**(code **)(*plVar6 + 0x58))(plVar6,local_a4);
      }
      else if (sVar3 == 0x503) {
        FUN__text__004b934c();
        plVar6 = (long *)plVar7[1];
        goto LAB__text__004b6a00;
      }
      FUN__text__0048e190(DAT_00ae9a80,(int)plVar7[6]);
      plVar8 = (long *)*plVar10;
      plVar6 = param_1 + 7;
      if ((long *)param_1[7] != plVar10) {
        plVar6 = plVar9;
      }
      *plVar6 = (long)plVar8;
      if ((long *)param_1[8] == plVar10) {
        param_1[8] = (long)plVar9;
      }
      *plVar10 = param_1[9];
      param_1[9] = (long)plVar10;
      *(int *)((long)param_1 + 0x5c) = *(int *)((long)param_1 + 0x5c) + -1;
      plVar6 = (long *)plVar7[1];
      piVar1 = (int *)((long)plVar6 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        (**(code **)(*plVar6 + 0x20))();
      }
      (**(code **)(*plVar7 + 8))(plVar7);
      plVar6 = (long *)FUN__text__00400fc0(0,plVar7);
      plVar10 = plVar8;
    } while (plVar8 != (long *)0x0);
  }
LAB__text__004b6ab4:
  plVar10 = (long *)param_1[0xc];
  if (plVar10 != (long *)0x0) {
    plVar9 = (long *)0x0;
    do {
      while (((plVar7 = (long *)plVar10[2], param_2 == 0 || (plVar7[8] == param_2)) &&
             (((param_4 == 0 || ((int)plVar7[6] == param_4)) &&
              (plVar6 = (long *)FUN__text__004b6760(plVar6,plVar7[1],param_3),
              ((ulong)plVar6 & 1) == 0))))) {
        plVar6 = (long *)plVar7[1];
        sVar3 = *(short *)((long)plVar6 + 0x34);
        if (sVar3 == 0x1820) break;
        local_a4[0] = 0;
        if (sVar3 == 0x403) {
LAB__text__004b6b40:
          (**(code **)(*plVar6 + 0x58))(plVar6,local_a4);
        }
        else if (sVar3 == 0x503) {
          FUN__text__004b934c();
          plVar6 = (long *)plVar7[1];
          goto LAB__text__004b6b40;
        }
        FUN__text__0048e190(DAT_00ae9a80,(int)plVar7[6]);
        plVar8 = (long *)*plVar10;
        plVar6 = param_1 + 0xc;
        if ((long *)param_1[0xc] != plVar10) {
          plVar6 = plVar9;
        }
        *plVar6 = (long)plVar8;
        if ((long *)param_1[0xd] == plVar10) {
          param_1[0xd] = (long)plVar9;
        }
        *plVar10 = param_1[0xe];
        param_1[0xe] = (long)plVar10;
        *(int *)((long)param_1 + 0x84) = *(int *)((long)param_1 + 0x84) + -1;
        plVar6 = (long *)plVar7[1];
        piVar1 = (int *)((long)plVar6 + 0x14);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          (**(code **)(*plVar6 + 0x20))();
        }
        (**(code **)(*plVar7 + 8))(plVar7);
        plVar6 = (long *)FUN__text__00400fc0(0,plVar7);
        plVar10 = plVar8;
        if (plVar8 == (long *)0x0) {
          return 1;
        }
      }
      plVar7 = (long *)*plVar10;
      plVar9 = plVar10;
      plVar10 = plVar7;
    } while (plVar7 != (long *)0x0);
  }
  return 1;
}


