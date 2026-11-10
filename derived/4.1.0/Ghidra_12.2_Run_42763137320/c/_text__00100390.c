/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00100390; name: free
 */


void free(void *__ptr)

{
  long *plVar1;
  
  FUN__text__005f5500();
  if (__ptr == (void *)0x0) {
    return;
  }
  plVar1 = (long *)FUN__text__005f52b0();
                    /* WARNING: Could not recover jumptable at 0x001003c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,__ptr,0,8);
  return;
}


