/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00196fbc; name: FUN_.text__00196fbc
 */


void FUN__text__00196fbc(long *param_1,long *param_2)

{
  long *plVar1;
  long local_28;
  
  local_28 = *param_1;
  if (local_28 == 0) {
    FUN__text__00197040(&local_28,param_2);
  }
  else {
    plVar1 = (long *)(local_28 + 0x48);
    (**(code **)(*plVar1 + 0x10))(plVar1);
    FUN__text__00197040(&local_28,param_2);
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  FUN__text__0019c3e4(*(long *)(*param_2 + 0x60) + 8);
  FUN__text__0019bb44(*param_2,0);
  return;
}


