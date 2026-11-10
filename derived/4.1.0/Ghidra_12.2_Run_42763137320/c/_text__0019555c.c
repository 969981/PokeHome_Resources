/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019555c; name: FUN_.text__0019555c
 */


void FUN__text__0019555c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long local_38;
  long local_18;
  
  local_18 = *(long *)(param_1 + 0x38);
  if (local_18 == 0) {
    FUN__text__001916b0(param_1,&local_18,param_2,0);
    uVar1 = FUN__text__00306588(*(undefined8 *)(param_1 + 0x38));
  }
  else {
    plVar2 = (long *)(local_18 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN__text__001916b0(param_1,&local_18,param_2,0);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    uVar1 = FUN__text__00306588(*(undefined8 *)(param_1 + 0x38));
  }
  if ((uVar1 & 1) == 0) {
    FUN__text__00307ca0(*(undefined8 *)(param_1 + 0x38));
  }
  local_38 = *(long *)(param_1 + 0x28);
  if (local_38 == 0) {
    FUN__text__001951d4(param_1,&local_38,param_2,1);
    return;
  }
  plVar2 = (long *)(local_38 + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  FUN__text__001951d4(param_1,&local_38,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00195618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


