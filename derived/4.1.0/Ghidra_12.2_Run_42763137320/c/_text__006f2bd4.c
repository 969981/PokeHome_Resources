/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f2bd4; name: FUN_.text__006f2bd4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006f2bd4(long param_1,long param_2,long param_3)

{
  (*(code *)*_DAT_008a71b8)(*(undefined8 *)(param_1 + 8),1,param_2 + 0xb8);
  if (param_3 == 0) {
    return;
  }
  *(long *)(param_3 + 8) = param_3 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x006f2c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*_DAT_008a7ba8)(*(undefined8 *)(param_1 + 8),param_3 + 0x10,0,1);
  return;
}


