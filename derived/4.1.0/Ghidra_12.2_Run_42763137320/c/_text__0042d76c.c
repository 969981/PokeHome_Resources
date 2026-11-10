/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042d76c; name: FUN_.text__0042d76c
 */


undefined8 FUN__text__0042d76c(long *param_1,undefined4 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x80))();
  if ((plVar1 == (long *)0x0) || (*plVar1 == 0)) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0042d7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
  return uVar2;
}


