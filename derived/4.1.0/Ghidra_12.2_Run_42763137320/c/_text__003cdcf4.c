/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cdcf4; name: FUN_.text__003cdcf4
 */


void FUN__text__003cdcf4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x58));
  (**(code **)(*plVar1 + 0x28))(plVar1,0,param_3);
  (**(code **)(*plVar1 + 0x28))(plVar1,1,param_3);
  (**(code **)(*plVar1 + 0x28))(plVar1,2,param_3);
                    /* WARNING: Could not recover jumptable at 0x003cdd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))(plVar1,3,param_3);
  return;
}


