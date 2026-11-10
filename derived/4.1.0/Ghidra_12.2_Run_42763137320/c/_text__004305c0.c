/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004305c0; name: FUN_.text__004305c0
 */


void FUN__text__004305c0(undefined8 *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  puVar7 = (undefined8 *)*param_1;
  if (*(int *)(param_1 + 1) == 0) {
    puVar3 = puVar7;
  }
  else {
    do {
      lVar4 = puVar7[1];
      if (*(long *)(lVar4 + 0x10) != 0) {
        *(undefined4 *)(lVar4 + 0x18) = 0;
        FUN__text__00400fc0(0);
        *(undefined8 *)(lVar4 + 0x10) = 0;
        *(undefined4 *)(lVar4 + 0x1c) = 0;
      }
      *(undefined8 *)(lVar4 + 8) = 0;
      FUN__text__00400fc0(2,lVar4);
      puVar3 = (undefined8 *)*param_1;
      uVar5 = *(uint *)(param_1 + 1);
      if (puVar7 < puVar3 + (ulong)uVar5 * 2 + -2) {
        uVar1 = puVar3[(ulong)uVar5 * 2 + -1];
        *puVar7 = puVar3[(ulong)uVar5 * 2 + -2];
        puVar7[1] = uVar1;
        uVar5 = *(uint *)(param_1 + 1);
        puVar3 = (undefined8 *)*param_1;
      }
      *(uint *)(param_1 + 1) = uVar5 - 1;
    } while (puVar7 != puVar3 + (ulong)(uVar5 - 1) * 2);
  }
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN__text__00400fc0(0);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  FUN__text__004308e0(param_1 + 2);
  FUN__text__004309f0(param_1 + 8);
  plVar9 = param_1 + 0x12;
  plVar8 = param_1 + 0x11;
  plVar2 = (long *)*plVar9;
  while (plVar2 != (long *)0x0) {
    plVar10 = (long *)*plVar2;
    plVar6 = plVar9;
    if ((long *)*plVar9 != plVar2) {
      plVar6 = (long *)0x0;
    }
    *plVar6 = (long)plVar10;
    if ((long *)*plVar8 == plVar2) {
      *plVar8 = 0;
      lVar4 = plVar2[1];
      plVar2[4] = 0;
      plVar2[5] = 0;
    }
    else {
      lVar4 = plVar2[1];
      plVar2[4] = 0;
      plVar2[5] = 0;
    }
    if (lVar4 != 0) {
      *(undefined4 *)(plVar2 + 2) = 0;
      FUN__text__00400fc0(0);
      plVar2[1] = 0;
      *(undefined4 *)((long)plVar2 + 0x14) = 0;
    }
    FUN__text__00400fc0(2,plVar2);
    plVar2 = plVar10;
  }
  plVar6 = param_1 + 0x14;
  *plVar8 = 0;
  *plVar9 = 0;
  plVar8 = param_1 + 0x13;
  plVar2 = (long *)*plVar6;
  while (plVar2 != (long *)0x0) {
    plVar10 = (long *)*plVar2;
    plVar9 = plVar6;
    if ((long *)*plVar6 != plVar2) {
      plVar9 = (long *)0x0;
    }
    *plVar9 = (long)plVar10;
    if ((long *)*plVar8 == plVar2) {
      *plVar8 = 0;
      lVar4 = plVar2[1];
      plVar2[4] = 0;
      plVar2[5] = 0;
    }
    else {
      lVar4 = plVar2[1];
      plVar2[4] = 0;
      plVar2[5] = 0;
    }
    if (lVar4 != 0) {
      *(undefined4 *)(plVar2 + 2) = 0;
      FUN__text__00400fc0(0);
      plVar2[1] = 0;
      *(undefined4 *)((long)plVar2 + 0x14) = 0;
    }
    FUN__text__00400fc0(2,plVar2);
    plVar2 = plVar10;
  }
  *plVar8 = 0;
  *plVar6 = 0;
  return;
}


