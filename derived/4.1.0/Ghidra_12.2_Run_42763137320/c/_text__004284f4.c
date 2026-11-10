/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004284f4; name: FUN_.text__004284f4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004284f4(long *param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 10) >> 4 & 1) != 0) {
      FUN__text__0048e8c0(*_DAT_008a4638,*(undefined4 *)(lVar1 + 0x280),param_1);
      lVar1 = param_1[3];
    }
    FUN__text__00475a44(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00428554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))(param_1);
  return;
}


