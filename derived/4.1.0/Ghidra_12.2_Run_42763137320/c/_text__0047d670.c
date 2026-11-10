/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047d670; name: FUN_.text__0047d670
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0047d670(long *param_1)

{
  int *piVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  
  *param_1 = _DAT_008a4478 + 0x10;
  FUN__text__0047d924(param_1,0);
  if (param_1[4] != 0) {
    FUN__text__00400fc0(4);
    param_1[4] = 0;
  }
  *param_1 = 0x889b58;
  if (param_1[2] == 0) {
    lVar4 = 0;
  }
  else {
    *(long *)(param_1[2] + 0x18) = param_1[3];
    lVar4 = param_1[2];
  }
  piVar3 = _DAT_008a4470;
  piVar5 = (int *)param_1[3];
  plVar2 = *(long **)(_DAT_008a4470 + 2);
  piVar1 = _DAT_008a4470;
  if (*(long **)(_DAT_008a4470 + 4) != param_1) {
    piVar1 = piVar5;
  }
  *(long *)(piVar1 + 4) = lVar4;
  if (plVar2 == param_1) {
    *(int **)(piVar3 + 2) = piVar5;
    *piVar3 = *piVar3 + -1;
    return;
  }
  *piVar3 = *piVar3 + -1;
  return;
}


