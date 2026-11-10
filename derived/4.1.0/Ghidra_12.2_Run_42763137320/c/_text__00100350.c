/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00100350; name: malloc
 */


void * malloc(size_t __size)

{
  long *plVar1;
  void *pvVar2;
  
  FUN__text__005f5500();
  plVar1 = (long *)FUN__text__005f52b0();
                    /* WARNING: Could not recover jumptable at 0x00100380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar2 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,__size,8);
  return pvVar2;
}


