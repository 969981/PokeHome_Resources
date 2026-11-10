/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b7a40; name: FUN_.text__004b7a40
 */


void FUN__text__004b7a40(undefined8 *param_1,long param_2)

{
  int iVar1;
  
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = param_2;
  *param_1 = 0x88b588;
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


