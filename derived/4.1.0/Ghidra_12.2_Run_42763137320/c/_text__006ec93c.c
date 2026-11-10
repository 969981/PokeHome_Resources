/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ec93c; name: FUN_.text__006ec93c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ec93c(undefined1 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)*_DAT_008a6da8)(*(undefined8 *)(param_1 + 0xb0));
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  *param_1 = 1;
  return;
}


