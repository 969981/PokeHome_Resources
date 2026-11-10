/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049c9c0; name: FUN_.text__0049c9c0
 */


undefined8 * FUN__text__0049c9c0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 2) = uVar4;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  uVar10 = *(uint *)(param_2 + 4);
  if (*(uint *)((long)param_1 + 0x24) < uVar10) {
    if (param_1[3] == 0) {
      lVar7 = FUN__text__00400f80(0,(ulong)uVar10 << 3);
      if (lVar7 == 0) {
        return param_1;
      }
      if ((param_1[3] != 0) && (param_1[3] != lVar7)) {
        FUN__text__00400fc0(0);
      }
    }
    else {
      lVar7 = FUN__text__00400fa0();
      if (lVar7 == 0) {
        return param_1;
      }
    }
    param_1[3] = lVar7;
    *(uint *)((long)param_1 + 0x24) = uVar10;
  }
  *(uint *)(param_1 + 4) = uVar10;
  if (*(int *)(param_2 + 4) != 0) {
    uVar8 = 0;
    do {
      lVar7 = uVar8 * 8;
      uVar8 = uVar8 + 1;
      *(undefined8 *)(param_1[3] + lVar7) = *(undefined8 *)(param_2[3] + lVar7);
    } while (uVar8 < *(uint *)(param_2 + 4));
    uVar10 = *(uint *)(param_1 + 4);
  }
  if (uVar10 != 0) {
    plVar9 = (long *)param_1[3];
    do {
      piVar1 = (int *)(*plVar9 + 0x14);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar9 = plVar9 + 1;
    } while (plVar9 != (long *)(param_1[3] + (ulong)*(uint *)(param_1 + 4) * 8));
  }
  return param_1;
}


