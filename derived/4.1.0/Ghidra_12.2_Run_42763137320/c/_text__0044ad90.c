/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044ad90; name: FUN_.text__0044ad90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0044ad90(long *param_1)

{
  int *piVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  
  *param_1 = _DAT_008a4b28 + 0x10;
  if (param_1[8] != 0) {
    *(undefined4 *)(param_1 + 9) = 0;
    FUN__text__00400fc0(0);
    param_1[8] = 0;
    *(undefined4 *)((long)param_1 + 0x4c) = 0;
  }
  if ((long *)param_1[0xc] != (long *)0x0) {
    *(undefined4 *)(param_1 + 0xd) = 0;
    if ((long *)param_1[0xc] != param_1 + 10) {
      FUN__text__00400fc0(4);
    }
    param_1[0xc] = 0;
    *(undefined4 *)((long)param_1 + 0x6c) = 0;
  }
  if (param_1[4] != 0) {
    *(undefined2 *)(param_1 + 7) = 0;
    FUN__text__00400fc0(5);
    param_1[4] = 0;
  }
  lVar4 = param_1[5];
  uVar5 = (ulong)*(uint *)(param_1 + 6);
  if (*(uint *)(param_1 + 6) != 0) {
    lVar7 = lVar4;
    do {
      if (*(long *)(lVar7 + 8) != 0) {
        *(undefined4 *)(lVar7 + 0x10) = 0;
        FUN__text__00400fc0(0,*(long *)(lVar7 + 8));
        *(undefined8 *)(lVar7 + 8) = 0;
        *(undefined4 *)(lVar7 + 0x14) = 0;
        lVar4 = param_1[5];
        uVar5 = (ulong)*(uint *)(param_1 + 6);
      }
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != lVar4 + uVar5 * 0x18);
  }
  if (lVar4 != 0) {
    *(undefined4 *)(param_1 + 6) = 0;
    FUN__text__00400fc0(0);
    param_1[5] = 0;
    *(undefined4 *)((long)param_1 + 0x34) = 0;
  }
  *param_1 = 0x8888b0;
  if (param_1[2] == 0) {
    lVar4 = 0;
  }
  else {
    *(long *)(param_1[2] + 0x18) = param_1[3];
    lVar4 = param_1[2];
  }
  piVar3 = _DAT_008a46a8;
  piVar6 = (int *)param_1[3];
  plVar2 = *(long **)(_DAT_008a46a8 + 2);
  piVar1 = _DAT_008a46a8;
  if (*(long **)(_DAT_008a46a8 + 4) != param_1) {
    piVar1 = piVar6;
  }
  *(long *)(piVar1 + 4) = lVar4;
  if (plVar2 == param_1) {
    *(int **)(piVar3 + 2) = piVar6;
  }
  *piVar3 = *piVar3 + -1;
  return;
}


