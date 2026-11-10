/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019ef34; name: FUN_.text__0019ef34
 */


void FUN__text__0019ef34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x68);
  if ((char)plVar1[4] != '\0') {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3);
  }
  plVar1 = *(long **)(param_1 + 0xa8);
  if ((char)plVar1[4] != '\0') {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3);
  }
  plVar1 = *(long **)(param_1 + 0x88);
  if ((char)plVar1[4] != '\0') {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3);
  }
  plVar1 = *(long **)(param_1 + 200);
  if ((char)plVar1[4] == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0019efd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3);
  return;
}


