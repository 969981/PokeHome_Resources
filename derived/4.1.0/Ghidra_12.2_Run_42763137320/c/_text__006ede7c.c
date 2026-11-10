/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ede7c; name: FUN_.text__006ede7c
 */


void FUN__text__006ede7c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 1) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x006edebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00c60d90)(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_2 + 0x10));
    return;
  }
  if (*(char *)(param_2 + 1) == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x006edea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00c60d98)(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_2 + 0x10));
    return;
  }
  return;
}


