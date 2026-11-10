/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00677c20; name: FUN_.text__00677c20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00677c20(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    (**(code **)(_DAT_008b4668 + 0x88))();
    param_1[3] = 0;
    param_1[5] = 0;
    FUN__text__006778d8(param_1 + 7);
    FUN__text__006783e4(*param_1);
    *param_1 = 0;
    FUN__text__006783e4(param_1[1]);
    param_1[1] = 0;
  }
  return;
}


