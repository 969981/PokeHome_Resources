/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00491508; name: FUN_.text__00491508
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00491508(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  int *piVar5;
  
  if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[4] = 0;
  }
  param_1[4] = 0;
  *param_1 = 0x889df0;
  if (param_1[2] == 0) {
    uVar4 = 0;
  }
  else {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
    uVar4 = param_1[2];
  }
  piVar3 = _DAT_008a3f98;
  piVar5 = (int *)param_1[3];
  puVar2 = *(undefined8 **)(_DAT_008a3f98 + 2);
  piVar1 = _DAT_008a3f98;
  if (*(undefined8 **)(_DAT_008a3f98 + 4) != param_1) {
    piVar1 = piVar5;
  }
  *(undefined8 *)(piVar1 + 4) = uVar4;
  if (puVar2 == param_1) {
    *(int **)(piVar3 + 2) = piVar5;
    *piVar3 = *piVar3 + -1;
    return;
  }
  *piVar3 = *piVar3 + -1;
  return;
}


