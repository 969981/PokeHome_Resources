/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b2960; name: FUN_.text__004b2960
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004b2960(long param_1,long *param_2,int param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  ushort uVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  long *plVar13;
  uint uVar14;
  undefined4 local_84 [17];
  
  puVar11 = _DAT_008a45d8;
  FUN__text__0048e100(*_DAT_008a45d8,(int)param_2[6]);
  piVar1 = (int *)(param_2[1] + 0x14);
  do {
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  iVar7 = FUN__text__004ba140(param_2[1]);
  uVar2 = iVar7 + param_3;
  uVar3 = *_DAT_008a4b70;
  iVar7 = *(int *)(param_1 + 0x88);
  uVar12 = 0;
  if (uVar3 != 0) {
    uVar12 = uVar2 / uVar3;
  }
  uVar14 = (uint)uVar3;
  *(int *)(param_2 + 2) = iVar7;
  *(uint *)((long)param_2 + 0x14) = uVar2 - uVar12 * uVar14;
  if (uVar2 < uVar14) {
    uVar12 = 0;
  }
  else if (*(short *)(param_2[1] + 0x34) == 0x503) {
    bVar6 = DAT_00ae9acc <= uVar12;
    uVar5 = uVar12 - DAT_00ae9acc;
    uVar12 = 0;
    if (bVar6) {
      uVar12 = uVar5;
    }
    *(uint *)((long)param_2 + 0x14) = uVar2 - uVar12 * uVar14;
  }
  if ((uVar12 == 0) && ((param_4 & 1) == 0)) {
    (**(code **)(*(long *)param_2[1] + 0x40))((long *)param_2[1],param_2);
    if ((int)param_2[6] != 0) {
      FUN__text__0048e190(*puVar11);
    }
    plVar8 = (long *)param_2[1];
    piVar1 = (int *)((long)plVar8 + 0x14);
    do {
      iVar7 = *piVar1 + -1;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB__text__004b2a60:
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x20))();
    }
    (**(code **)(*param_2 + 8))(param_2);
    FUN__text__00400fc0(0,param_2);
    return;
  }
  uVar12 = uVar12 + iVar7;
  *(uint *)(param_2 + 2) = uVar12;
  if (*(long *)(param_1 + 0x48) == 0) {
    puVar9 = (undefined8 *)FUN__text__00400f80(0,0x18);
    if (puVar9 == (undefined8 *)0x0) {
      FUN__text__0048e190(*puVar11,(int)param_2[6]);
      plVar8 = (long *)param_2[1];
      piVar1 = (int *)((long)plVar8 + 0x14);
      do {
        iVar7 = *piVar1 + -1;
        cVar4 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      goto LAB__text__004b2a60;
    }
    *puVar9 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 **)(param_1 + 0x48) = puVar9;
    *(uint *)(puVar9 + 1) = uVar12;
    *(long **)(*(long *)(param_1 + 0x48) + 0x10) = param_2;
    puVar11 = *(undefined8 **)(param_1 + 0x38);
  }
  else {
    *(uint *)(*(long *)(param_1 + 0x48) + 8) = uVar12;
    *(long **)(*(long *)(param_1 + 0x48) + 0x10) = param_2;
    puVar11 = *(undefined8 **)(param_1 + 0x38);
  }
  if (puVar11 == (undefined8 *)0x0) {
    puVar11 = *(undefined8 **)(param_1 + 0x48);
    *(undefined8 **)(param_1 + 0x40) = puVar11;
    *(undefined8 *)(param_1 + 0x48) = *puVar11;
    *puVar11 = 0;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x40);
  }
  else {
    if (uVar12 < *(uint *)(puVar11 + 1)) {
      plVar8 = *(long **)(param_1 + 0x48);
      *(long **)(param_1 + 0x38) = plVar8;
      plVar13 = plVar8;
    }
    else {
      do {
        puVar9 = puVar11;
        puVar11 = (undefined8 *)*puVar9;
        if (puVar11 == (undefined8 *)0x0) {
          plVar8 = *(long **)(param_1 + 0x48);
          *(long **)(param_1 + 0x40) = plVar8;
          goto LAB__text__004b2b54;
        }
      } while (*(uint *)(puVar11 + 1) <= uVar12);
      plVar8 = *(long **)(param_1 + 0x48);
LAB__text__004b2b54:
      *puVar9 = plVar8;
      plVar13 = *(long **)(param_1 + 0x48);
    }
    *(long *)(param_1 + 0x48) = *plVar13;
    *plVar8 = (long)puVar11;
  }
  local_84[0] = 0;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  plVar8 = (long *)param_2[1];
  if (*(short *)((long)plVar8 + 0x34) != 0x403) {
    if (*(short *)((long)plVar8 + 0x34) != 0x503) {
      return;
    }
    uVar10 = FUN__text__004b934c();
    if ((uVar10 & 1) == 0) {
      return;
    }
    plVar8 = (long *)param_2[1];
  }
  (**(code **)(*plVar8 + 0x58))(plVar8,local_84);
  return;
}


