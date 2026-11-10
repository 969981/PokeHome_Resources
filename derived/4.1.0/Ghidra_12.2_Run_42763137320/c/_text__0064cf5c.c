/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064cf5c; name: FUN_.text__0064cf5c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0064cf5c(long *param_1)

{
  *param_1 = _DAT_008a1868 + 0x10;
  if (param_1[3] != 0) {
    (**(code **)(*(long *)(param_1[3] + 0x48) + 0x18))();
  }
  operator_delete(param_1);
  return;
}


