/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001494f8; name: FUN_.text__001494f8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__001494f8(long *param_1)

{
  *param_1 = _DAT_008a0110 + 0x10;
  if (param_1[1] != 0) {
    (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
  }
  operator_delete(param_1);
  return;
}


