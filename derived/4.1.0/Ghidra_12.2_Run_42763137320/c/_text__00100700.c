/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00100700; name: operator.delete
 */


/* operator delete(void*) */

void operator_delete(void *param_1)

{
  long *plVar1;
  
  FUN__text__005f5500();
  if (param_1 == (void *)0x0) {
    return;
  }
  plVar1 = (long *)FUN__text__005f52b0();
                    /* WARNING: Could not recover jumptable at 0x00100738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1,0,8);
  return;
}


