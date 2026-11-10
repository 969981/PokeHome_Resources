/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f5618; name: FUN_.text__006f5618
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006f5618(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = param_2;
  param_1[1] = param_1 + 2;
  (*(code *)*_DAT_008a7b90)(param_1 + 2,*param_2);
  *(undefined1 *)(param_1 + 10) = 1;
  return;
}


