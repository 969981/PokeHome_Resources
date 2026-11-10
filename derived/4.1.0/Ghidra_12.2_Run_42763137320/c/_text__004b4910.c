/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b4910; name: FUN_.text__004b4910
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__004b4910(long param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  bool bVar11;
  long *plVar12;
  undefined4 local_84 [17];
  
  puVar9 = *(undefined8 **)(param_1 + 0x38);
  if ((puVar9 == (undefined8 *)0x0) ||
     (uVar3 = *(uint *)(puVar9 + 1), uVar4 = *(uint *)(param_1 + 0x88),
     bVar11 = uVar4 > uVar3 || uVar3 == uVar4, uVar4 <= uVar3 && uVar3 != uVar4)) {
    return false;
  }
  plVar12 = (long *)puVar9[2];
  *(undefined8 *)(param_1 + 0x38) = *puVar9;
  if (*(undefined8 **)(param_1 + 0x40) == puVar9) {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  *puVar9 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 **)(param_1 + 0x48) = puVar9;
  local_84[0] = 0;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
  plVar7 = (long *)plVar12[1];
  if (*(short *)((long)plVar7 + 0x34) != 0x403) {
    if ((*(short *)((long)plVar7 + 0x34) != 0x503) ||
       (uVar8 = FUN__text__004b934c(), (uVar8 & 1) == 0)) goto LAB__text__004b49b4;
    plVar7 = (long *)plVar12[1];
  }
  (**(code **)(*plVar7 + 0x58))(plVar7,local_84);
LAB__text__004b49b4:
  (**(code **)(*(long *)plVar12[1] + 0x40))((long *)plVar12[1],plVar12);
  puVar9 = _DAT_008a45d8;
  if ((int)plVar12[6] != 0) {
    FUN__text__0048e190(*_DAT_008a45d8);
  }
  plVar7 = (long *)plVar12[1];
  piVar1 = (int *)((long)plVar7 + 0x14);
  do {
    iVar2 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar2 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar2 + -1 == 0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  (**(code **)(*plVar12 + 8))(plVar12);
  FUN__text__00400fc0(0,plVar12);
  DAT_00aea808 = DAT_00aea808 + 1;
  puVar10 = *(undefined8 **)(param_1 + 0x38);
  if (puVar10 == (undefined8 *)0x0) {
    bVar11 = true;
  }
  else {
    do {
      if (*(uint *)(param_1 + 0x88) < *(uint *)(puVar10 + 1)) {
        return bVar11;
      }
      plVar12 = (long *)puVar10[2];
      *(undefined8 *)(param_1 + 0x38) = *puVar10;
      if (*(undefined8 **)(param_1 + 0x40) == puVar10) {
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
      *puVar10 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 **)(param_1 + 0x48) = puVar10;
      local_84[0] = 0;
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
      plVar7 = (long *)plVar12[1];
      if (*(short *)((long)plVar7 + 0x34) == 0x403) {
LAB__text__004b4aec:
        (**(code **)(*plVar7 + 0x58))(plVar7,local_84);
      }
      else if ((*(short *)((long)plVar7 + 0x34) == 0x503) &&
              (uVar8 = FUN__text__004b934c(), (uVar8 & 1) != 0)) {
        plVar7 = (long *)plVar12[1];
        goto LAB__text__004b4aec;
      }
      (**(code **)(*(long *)plVar12[1] + 0x40))((long *)plVar12[1],plVar12);
      if ((int)plVar12[6] != 0) {
        FUN__text__0048e190(*puVar9);
      }
      plVar7 = (long *)plVar12[1];
      piVar1 = (int *)((long)plVar7 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar2 + -1 == 0) {
        (**(code **)(*plVar7 + 0x20))();
      }
      (**(code **)(*plVar12 + 8))(plVar12);
      FUN__text__00400fc0(0,plVar12);
      DAT_00aea808 = DAT_00aea808 + 1;
      puVar10 = *(undefined8 **)(param_1 + 0x38);
    } while (puVar10 != (undefined8 *)0x0);
  }
  return bVar11;
}


