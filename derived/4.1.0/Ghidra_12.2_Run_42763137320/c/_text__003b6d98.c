/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b6d98; name: FUN_.text__003b6d98
 */


undefined8 FUN__text__003b6d98(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 8) == '\0') {
    return 0;
  }
  plVar1 = *(long **)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x50) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x003b6de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,param_1 + 0x38,param_2);
    return uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x003b6dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0xb8))(plVar1,param_1 + 0x40,param_1 + 0x48);
  return uVar2;
}


