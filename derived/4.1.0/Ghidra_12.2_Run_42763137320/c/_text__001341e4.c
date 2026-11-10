/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001341e4; name: FUN_.text__001341e4
 */


void FUN__text__001341e4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN__text__00134070(param_2,param_1);
  if (lVar1 == 0) {
    return;
  }
  plVar2 = (long *)(lVar1 + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  FUN__text__00128ec0(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x0013423c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


