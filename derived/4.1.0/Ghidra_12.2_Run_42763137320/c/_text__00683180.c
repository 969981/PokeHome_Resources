/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00683180; name: FUN_.text__00683180
 */


void FUN__text__00683180(undefined8 *param_1)

{
  int iVar1;
  
  if ((param_1 != (undefined8 *)0x0) && (*(int *)(param_1 + 4) != -1)) {
    iVar1 = *(int *)(param_1 + 4) + -1;
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 == 0) {
      FUN__text__006809f8(param_1[1],param_1,*param_1);
      return;
    }
  }
  return;
}


