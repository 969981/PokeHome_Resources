/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c9908; name: FUN_.text__003c9908
 */


void FUN__text__003c9908(long param_1,long *param_2)

{
  char cVar1;
  long *plVar2;
  long local_38;
  long local_18;
  
  local_18 = *param_2;
  if (local_18 == 0) {
    FUN__text__003c99f4(param_1,&local_18);
    cVar1 = *(char *)(param_1 + 0x1f0);
  }
  else {
    plVar2 = (long *)(local_18 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    FUN__text__003c99f4(param_1,&local_18);
    (**(code **)(*plVar2 + 0x18))(plVar2);
    cVar1 = *(char *)(param_1 + 0x1f0);
  }
  if (cVar1 == '\0') {
    return;
  }
  local_38 = *param_2;
  if (local_38 == 0) {
    FUN__text__003c9c10(param_1,&local_38);
    return;
  }
  plVar2 = (long *)(local_38 + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  FUN__text__003c9c10(param_1,&local_38);
                    /* WARNING: Could not recover jumptable at 0x003c99d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2);
  return;
}


