/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040eea0; name: FUN_.text__0040eea0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0040eea0(short param_1,int param_2)

{
  if (param_1 == 0) {
    return 0x1f;
  }
  if (param_2 <= _DAT_008ab028) {
    _DAT_008ab028 = param_2;
    DAT_00aea7d0 = param_1;
  }
  return 1;
}


