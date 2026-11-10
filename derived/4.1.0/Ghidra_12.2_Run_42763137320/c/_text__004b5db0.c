/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b5db0; name: FUN_.text__004b5db0
 */


void FUN__text__004b5db0(long param_1,uint param_2,long *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined4 local_74 [17];
  
  uVar3 = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)((long)param_3 + 0x34) = param_4;
  *(undefined4 *)(param_3 + 3) = uVar3;
  if (*(long *)(param_1 + 0x70) != 0) {
    *(uint *)(*(long *)(param_1 + 0x70) + 8) = param_2;
    *(long **)(*(long *)(param_1 + 0x70) + 0x10) = param_3;
    puVar6 = *(undefined8 **)(param_1 + 0x60);
joined_r0x004b5e5c:
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 0x70);
      *(undefined8 **)(param_1 + 0x68) = puVar6;
      *(undefined8 *)(param_1 + 0x70) = *puVar6;
      *puVar6 = 0;
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x68);
    }
    else {
      if (param_2 < *(uint *)(puVar6 + 1)) {
        plVar8 = *(long **)(param_1 + 0x70);
        *(long **)(param_1 + 0x60) = plVar8;
        plVar9 = plVar8;
      }
      else {
        do {
          puVar7 = puVar6;
          puVar6 = (undefined8 *)*puVar7;
          if (puVar6 == (undefined8 *)0x0) {
            plVar8 = *(long **)(param_1 + 0x70);
            *(long **)(param_1 + 0x68) = plVar8;
            goto LAB__text__004b5e88;
          }
        } while (*(uint *)(puVar6 + 1) <= param_2);
        plVar8 = *(long **)(param_1 + 0x70);
LAB__text__004b5e88:
        *puVar7 = plVar8;
        plVar9 = *(long **)(param_1 + 0x70);
      }
      *(long *)(param_1 + 0x70) = *plVar9;
      *plVar8 = (long)puVar6;
    }
    *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    return;
  }
  puVar6 = (undefined8 *)FUN__text__00400f80(0,0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 **)(param_1 + 0x70) = puVar6;
    *(uint *)(puVar6 + 1) = param_2;
    *(long **)(*(long *)(param_1 + 0x70) + 0x10) = param_3;
    puVar6 = *(undefined8 **)(param_1 + 0x60);
    goto joined_r0x004b5e5c;
  }
  plVar8 = (long *)param_3[1];
  local_74[0] = 0;
  if (*(short *)((long)plVar8 + 0x34) != 0x403) {
    if (*(short *)((long)plVar8 + 0x34) != 0x503) goto LAB__text__004b5ef0;
    FUN__text__004b934c();
    plVar8 = (long *)param_3[1];
  }
  (**(code **)(*plVar8 + 0x58))(plVar8,local_74);
LAB__text__004b5ef0:
  FUN__text__0048e190(DAT_00ae9a80,(int)param_3[6]);
  plVar8 = (long *)param_3[1];
  piVar1 = (int *)((long)plVar8 + 0x14);
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
    (**(code **)(*plVar8 + 0x20))();
  }
  (**(code **)(*param_3 + 8))(param_3);
  FUN__text__00400fc0(0,param_3);
  return;
}


