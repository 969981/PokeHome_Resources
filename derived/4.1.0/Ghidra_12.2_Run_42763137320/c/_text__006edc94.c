/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006edc94; name: FUN_.text__006edc94
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006edc94(undefined4 param_1,long param_2,long param_3,undefined4 param_4,int param_5
                        )

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  (*(code *)*_DAT_008a6f40)(*(undefined8 *)(param_2 + 0xb0),0,0,0x7fffffff,0x7fffffff);
  (*(code *)*_DAT_008a6ea0)(*(undefined8 *)(param_2 + 0xb0),0,0,0,uVar1,uVar2);
  if (param_5 == 3) {
    uVar1 = *(undefined8 *)(param_2 + 0xb0);
    uVar2 = 1;
  }
  else {
    if (param_5 != 2) {
      if (param_5 == 1) {
                    /* WARNING: Could not recover jumptable at 0x006edd58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*_DAT_008a6f48)(param_1,*(undefined8 *)(param_2 + 0xb0),1,param_4,0);
        return;
      }
      nn::detail::UnexpectedDefaultImpl();
      return;
    }
    uVar1 = *(undefined8 *)(param_2 + 0xb0);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x006eddac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*_DAT_008a6f48)(param_1,uVar1,uVar2,param_4,0xffffffff);
  return;
}


