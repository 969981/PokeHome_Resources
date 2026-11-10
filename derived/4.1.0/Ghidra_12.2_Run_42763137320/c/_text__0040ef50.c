/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040ef50; name: FUN_.text__0040ef50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0040ef50(uint param_1,int param_2)

{
  if (param_2 <= _DAT_008ab02c) {
    _DAT_008ab02c = param_2;
    *_DAT_008a4cd8 = param_1 & 0xffff;
  }
  return 1;
}


