/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00100680; name: aligned_alloc
 */


void aligned_alloc(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  
  FUN__text__005f5500();
  plVar1 = (long *)FUN__text__005f52b0();
                    /* WARNING: Could not recover jumptable at 0x001006b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_1);
  return;
}


