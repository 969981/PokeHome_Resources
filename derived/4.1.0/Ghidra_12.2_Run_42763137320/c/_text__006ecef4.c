/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ecef4; name: FUN_.text__006ecef4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ecef4(long param_1,long param_2)

{
  undefined8 *puVar1;
  
  (*(code *)*_DAT_008a6e20)(*(undefined8 *)(param_1 + 0xb0));
  (*(code *)*_DAT_008a6e28)(*(undefined8 *)(param_1 + 0xb0),3,*(undefined4 *)(param_2 + 8));
  (*(code *)*_DAT_008a6e30)(*(undefined8 *)(param_1 + 0xb0),3,*(undefined4 *)(param_2 + 0xc));
  puVar1 = _DAT_008a6e38;
  (*(code *)*_DAT_008a6e38)(*(undefined8 *)(param_1 + 0xb0),2,*(undefined4 *)(param_2 + 0x10));
  (*(code *)*puVar1)(*(undefined8 *)(param_1 + 0xb0),1,*(undefined4 *)(param_2 + 0x14));
  if ((*(ushort *)(param_2 + 0x1a) >> 3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x006ecfb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*_DAT_008a6e40)(0,0x3f800000,*(undefined8 *)(param_1 + 0xb0),0);
    return;
  }
  return;
}


