/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045cc44; name: FUN_.text__0045cc44
 */


void FUN__text__0045cc44(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = param_3;
  if (param_3 != 0) {
    iVar1 = *(int *)(param_3 + 0x60);
    *(int *)(param_3 + 0x60) = iVar1 + 1;
    if ((iVar1 == 1) && (*(char *)(param_3 + 100) != '\0')) {
      FUN__text__004473d0(param_3);
      return;
    }
  }
  return;
}


