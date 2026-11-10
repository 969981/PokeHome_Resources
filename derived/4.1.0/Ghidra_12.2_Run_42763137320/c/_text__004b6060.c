/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b6060; name: FUN_.text__004b6060
 */


void FUN__text__004b6060(long param_1,long *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined4 local_74 [17];
  
  uVar2 = (int)param_2[2] + (*(int *)(param_1 + 0x88) - (int)param_2[3]);
  *(uint *)(param_2 + 2) = uVar2;
  if (*(long *)(param_1 + 0x48) != 0) {
    *(uint *)(*(long *)(param_1 + 0x48) + 8) = uVar2;
    *(long **)(*(long *)(param_1 + 0x48) + 0x10) = param_2;
    puVar6 = *(undefined8 **)(param_1 + 0x38);
joined_r0x004b6118:
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 0x48);
      *(undefined8 **)(param_1 + 0x40) = puVar6;
      *(undefined8 *)(param_1 + 0x48) = *puVar6;
      *puVar6 = 0;
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x40);
    }
    else {
      if (uVar2 < *(uint *)(puVar6 + 1)) {
        plVar8 = *(long **)(param_1 + 0x48);
        *(long **)(param_1 + 0x38) = plVar8;
        plVar9 = plVar8;
      }
      else {
        do {
          puVar7 = puVar6;
          puVar6 = (undefined8 *)*puVar7;
          if (puVar6 == (undefined8 *)0x0) {
            plVar8 = *(long **)(param_1 + 0x48);
            *(long **)(param_1 + 0x40) = plVar8;
            goto LAB__text__004b6144;
          }
        } while (*(uint *)(puVar6 + 1) <= uVar2);
        plVar8 = *(long **)(param_1 + 0x48);
LAB__text__004b6144:
        *puVar7 = plVar8;
        plVar9 = *(long **)(param_1 + 0x48);
      }
      *(long *)(param_1 + 0x48) = *plVar9;
      *plVar8 = (long)puVar6;
    }
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
    return;
  }
  puVar6 = (undefined8 *)FUN__text__00400f80(0,0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 **)(param_1 + 0x48) = puVar6;
    *(uint *)(puVar6 + 1) = uVar2;
    *(long **)(*(long *)(param_1 + 0x48) + 0x10) = param_2;
    puVar6 = *(undefined8 **)(param_1 + 0x38);
    goto joined_r0x004b6118;
  }
  plVar8 = (long *)param_2[1];
  local_74[0] = 0;
  if (*(short *)((long)plVar8 + 0x34) != 0x403) {
    if (*(short *)((long)plVar8 + 0x34) != 0x503) goto LAB__text__004b61ac;
    FUN__text__004b934c();
    plVar8 = (long *)param_2[1];
  }
  (**(code **)(*plVar8 + 0x58))(plVar8,local_74);
LAB__text__004b61ac:
  FUN__text__0048e190(DAT_00ae9a80,(int)param_2[6]);
  plVar8 = (long *)param_2[1];
  piVar1 = (int *)((long)plVar8 + 0x14);
  do {
    iVar3 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar3 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 + -1 == 0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  (**(code **)(*param_2 + 8))(param_2);
  FUN__text__00400fc0(0,param_2);
  return;
}


