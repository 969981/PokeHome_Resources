/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b5090; name: thunk_FUN_.text__006ec64c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN__text__006ec64c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)*_DAT_008a6cf8)(*(undefined8 *)(param_1 + 8));
  *param_2 = uVar1;
  param_2[1] = 0;
  return;
}


