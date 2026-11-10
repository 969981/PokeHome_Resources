/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00446d98; name: FUN_.text__00446d98
 */


void FUN__text__00446d98(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                        undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[3] = 0;
  *param_1 = 0x888758;
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_4 + 0x14);
  param_1[4] = param_4[1];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_4 + 2);
  piVar2 = (int *)*param_4;
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
    param_2 = param_1[2];
  }
  param_1[3] = piVar2;
  uVar3 = *param_3;
  *(undefined4 *)(param_1 + 7) = param_5;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[6] = uVar3;
  *(undefined4 *)((long)param_1 + 0x4c) = 1;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x60);
    *(int *)(param_2 + 0x60) = iVar1 + 1;
    if ((iVar1 == 1) && (*(char *)(param_2 + 100) != '\0')) {
      FUN__text__004473d0(param_2);
      return;
    }
  }
  return;
}


