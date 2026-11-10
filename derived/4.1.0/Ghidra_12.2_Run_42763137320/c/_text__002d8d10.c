/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d8d10; name: FUN_.text__002d8d10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002d8d10(long *param_1)

{
  *param_1 = _DAT_008a2890 + 0x10;
  if (param_1[0x3d] != 0) {
    (**(code **)(*(long *)(param_1[0x3d] + 0x48) + 0x18))();
    param_1[0x3d] = 0;
  }
  FUN__text__002d8d70(param_1 + 0x1e);
  FUN__text__002d9110(param_1 + 2);
  return;
}


