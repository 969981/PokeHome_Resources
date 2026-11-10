/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b91d0; name: FUN_.text__006b91d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006b91d0(long *param_1,undefined8 param_2)

{
  FUN__text__006b19a4();
  *param_1 = _DAT_008a6910 + 0x10;
  param_1[4] = (long)(param_1 + 4);
  param_1[5] = (long)(param_1 + 4);
  FUN__text__006b2810(param_1,param_2,0,0,0);
  param_1[0x1d] = 0;
  *param_1 = 0x89ddf0;
  param_1[0x1b] = (long)(param_1 + 0x1b);
  param_1[0x1c] = (long)(param_1 + 0x1b);
  return;
}


