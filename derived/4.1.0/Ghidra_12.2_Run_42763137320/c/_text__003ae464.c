/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ae464; name: FUN_.text__003ae464
 */


void FUN__text__003ae464(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x98);
  if (*(char *)(param_1 + 0x6e8) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x003ae49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xb0))(plVar1,param_1 + 0x6d0,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003ae488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xb8))(plVar1,param_1 + 0x6d8,param_1 + 0x6e0);
  return;
}


