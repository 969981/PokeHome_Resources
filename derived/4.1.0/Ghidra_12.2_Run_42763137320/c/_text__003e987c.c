/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e987c; name: FUN_.text__003e987c
 */


void FUN__text__003e987c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_2 + 0xe8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x003e9894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x78))(plVar1,param_3,1);
  return;
}


