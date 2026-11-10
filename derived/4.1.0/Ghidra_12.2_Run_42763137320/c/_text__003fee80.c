/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003fee80; name: FUN_.text__003fee80
 */


undefined8 FUN__text__003fee80(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = (int *)0x0;
  piVar3 = param_1;
  do {
    piVar2 = piVar1;
    piVar3 = *(int **)(piVar3 + 4);
    piVar1 = piVar3;
  } while (piVar3 != (int *)0x0 && piVar3 != param_2);
  if (piVar3 == (int *)0x0) {
    return 2;
  }
  piVar1 = param_1;
  if (*(int **)(param_1 + 4) != piVar3) {
    piVar1 = piVar2;
  }
  *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(piVar3 + 4);
  if (*(int **)(param_1 + 2) == piVar3) {
    *(int **)(param_1 + 2) = piVar2;
    *param_1 = *param_1 + -1;
    return 1;
  }
  *param_1 = *param_1 + -1;
  return 1;
}


