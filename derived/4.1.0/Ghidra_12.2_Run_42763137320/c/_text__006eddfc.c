/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006eddfc; name: FUN_.text__006eddfc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006eddfc(long param_1,uint param_2)

{
  if (((param_2 >> 6 & 0x48) == 0 && (param_2 & 0x4020) == 0) && (param_2 & 0x2050) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006ede38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*_DAT_008a6f50)(*(undefined8 *)(param_1 + 0xb0));
  return;
}


