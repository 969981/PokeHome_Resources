/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0054e370; name: FUN_.text__0054e370
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0054e370(long *param_1)

{
  *param_1 = _DAT_008a3a60 + 0x10;
  if ((long *)param_1[2] != (long *)0x0) {
    if (param_1[0x10] != 0) {
      (**(code **)(*(long *)param_1[2] + 0x18))();
      param_1[0x10] = 0;
    }
    *(undefined4 *)(param_1 + 0x11) = 0;
  }
  return;
}


