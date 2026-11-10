/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046e348; name: FUN_.text__0046e348
 */


void FUN__text__0046e348(int *param_1,long param_2)

{
  long *plVar1;
  
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(int *)(param_2 + 0xbc) = *(int *)(param_2 + 0xbc) + 1;
  plVar1 = (long *)(param_1 + 4);
  if (*(long *)(param_1 + 4) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 2) + 0x60);
  }
  *plVar1 = param_2;
  *(long *)(param_1 + 2) = param_2;
  *param_1 = *param_1 + 1;
  return;
}


