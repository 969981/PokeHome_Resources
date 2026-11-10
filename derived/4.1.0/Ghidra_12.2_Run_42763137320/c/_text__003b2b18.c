/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b2b18; name: FUN_.text__003b2b18
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003b2b18(long *param_1)

{
  *param_1 = _DAT_008a3580 + 0x10;
  if (param_1[2] != 0) {
    (**(code **)(*(long *)(param_1[2] + 0x48) + 0x18))();
  }
  operator_delete(param_1);
  return;
}


