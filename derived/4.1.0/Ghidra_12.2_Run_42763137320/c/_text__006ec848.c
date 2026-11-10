/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ec848; name: FUN_.text__006ec848
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ec848(undefined1 *param_1)

{
  if (*(long *)(param_1 + 0xb8) != 0) {
    (*DAT_00c5ff80)(**(undefined8 **)(param_1 + 8));
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  (*(code *)*_DAT_008a6d88)(*(undefined8 *)(param_1 + 0xb0));
  *param_1 = 0;
  return;
}


