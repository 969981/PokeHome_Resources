/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00133ff0; name: FUN_.text__00133ff0
 */


void FUN__text__00133ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)FUN__text__00134070(param_2,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
  plVar2 = plVar1 + 9;
  (**(code **)(*plVar2 + 0x10))(plVar2);
  (**(code **)(*plVar1 + 0x88))(plVar1,param_3);
                    /* WARNING: Could not recover jumptable at 0x0013405c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


