/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b6760; name: FUN_.text__004b6760
 */


undefined8 FUN__text__004b6760(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  
  if (param_3 == (undefined8 *)0x0) {
    return 0;
  }
  if (*(int *)(param_2 + 0x30) == 0) {
    return 0;
  }
  lVar4 = FUN__text__004ba560(param_2);
  if (lVar4 != 0) {
    if (*(uint *)(param_3 + 1) != 0) {
      lVar6 = 0;
      bVar3 = false;
      lVar7 = lVar4;
LAB__text__004b67a4:
      piVar8 = (int *)*param_3;
LAB__text__004b67b4:
      if (*(int *)(lVar7 + 0x20) != *piVar8 ||
          (*(uint *)(lVar7 + 0xd2) >> 0x11 & 1) != (uint)*(byte *)(piVar8 + 1))
      goto code_r0x004b67c8;
      piVar8 = (int *)(lVar4 + 0x24);
      do {
        iVar5 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB__text__004b6914;
    }
    lVar6 = 0;
    bVar3 = false;
    lVar7 = lVar4;
    do {
      while (bVar3) {
        bVar3 = true;
        plVar1 = (long *)(lVar7 + 0x78);
        lVar7 = *plVar1;
        if (*plVar1 == 0) goto LAB__text__004b6854;
      }
      plVar1 = (long *)(lVar7 + 0x78);
      lVar6 = *(long *)(lVar7 + 0x80);
      bVar3 = lVar6 != 0;
      lVar7 = *plVar1;
    } while (*plVar1 != 0);
LAB__text__004b6854:
    if (lVar6 != 0) {
      if (*(uint *)(param_3 + 1) == 0) {
        do {
          lVar6 = *(long *)(lVar6 + 0x80);
        } while (lVar6 != 0);
      }
      else {
        do {
          piVar8 = (int *)*param_3;
          do {
            if (*(int *)(lVar6 + 0x20) == *piVar8 &&
                (*(uint *)(lVar6 + 0xd2) >> 0x11 & 1) == (uint)*(byte *)(piVar8 + 1)) {
              piVar8 = (int *)(lVar4 + 0x24);
              do {
                iVar5 = *piVar8;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
                if (bVar3) {
                  *piVar8 = iVar5 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
LAB__text__004b6914:
              uVar9 = 1;
              goto joined_r0x004b691c;
            }
            piVar8 = piVar8 + 2;
          } while (piVar8 != (int *)*param_3 + (ulong)*(uint *)(param_3 + 1) * 2);
          lVar6 = *(long *)(lVar6 + 0x80);
        } while (lVar6 != 0);
      }
    }
    if (lVar4 != 0) {
      piVar8 = (int *)(lVar4 + 0x24);
      do {
        iVar5 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar9 = 0;
joined_r0x004b691c:
      if (iVar5 == 1) {
        (**(code **)(*(long *)(lVar4 + 0x10) + 0x20))();
        return uVar9;
      }
      return uVar9;
    }
  }
  return 0;
code_r0x004b67c8:
  piVar8 = piVar8 + 2;
  if (piVar8 == (int *)*param_3 + (ulong)*(uint *)(param_3 + 1) * 2) goto code_r0x004b67d4;
  goto LAB__text__004b67b4;
code_r0x004b67d4:
  if (bVar3) {
    bVar3 = true;
    lVar7 = *(long *)(lVar7 + 0x78);
  }
  else {
    lVar6 = *(long *)(lVar7 + 0x80);
    bVar3 = lVar6 != 0;
    lVar7 = *(long *)(lVar7 + 0x78);
  }
  if (lVar7 == 0) goto LAB__text__004b6854;
  goto LAB__text__004b67a4;
}


