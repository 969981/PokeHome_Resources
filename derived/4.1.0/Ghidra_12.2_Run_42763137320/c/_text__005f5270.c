/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f5270; name: FUN_.text__005f5270
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f5270(long *param_1)

{
  *_DAT_008a5cb0 = param_1;
                    /* WARNING: Could not recover jumptable at 0x005f528c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0x7161b5);
  return;
}


