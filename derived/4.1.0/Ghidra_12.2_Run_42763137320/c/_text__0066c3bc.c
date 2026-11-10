/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066c3bc; name: FUN_.text__0066c3bc
 */


void * FUN__text__0066c3bc(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)FUN__text__006783d4(param_2);
  if (__dest != (void *)0x0) {
    memcpy(__dest,param_1,param_2);
  }
  return __dest;
}


