/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fdb18; name: FUN_.text__004fdb18
 */


undefined4 * FUN__text__004fdb18(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  piVar2 = *(int **)(param_1 + 2);
  if ((piVar2 != (int *)0x0) && (iVar1 = *piVar2, *piVar2 = iVar1 + -1, iVar1 + -1 == 0)) {
    FUN__text__00400fc0(param_1[5],*(undefined8 *)(param_1 + 2));
  }
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  piVar2 = *(int **)(param_2 + 2);
  *(int **)(param_1 + 2) = piVar2;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  return param_1;
}


