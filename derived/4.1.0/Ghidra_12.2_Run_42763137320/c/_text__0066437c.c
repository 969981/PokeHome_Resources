/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066437c; name: FUN_.text__0066437c
 */


undefined8 FUN__text__0066437c(undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00664388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_2 + 0x18))();
  return uVar1;
}


