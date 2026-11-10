/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049cb6c; name: FUN_.text__0049cb6c
 */


void FUN__text__0049cb6c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  plVar2 = (long *)param_2[2];
  param_1[2] = plVar2;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (((DAT_00ae9a68 != 0 && plVar2 != (long *)0x0) && (*plVar2 != 0)) &&
     (iVar1 = FUN__text__0047c040(), iVar1 == 1)) {
    param_1[7] = *(undefined8 *)param_1[2];
  }
  return;
}


