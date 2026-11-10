/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001003e0; name: calloc
 */


void * calloc(size_t __nmemb,size_t __size)

{
  long *plVar1;
  void *__s;
  
  plVar1 = (long *)FUN__text__005f52b0();
  __s = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,__size * __nmemb,8);
  if (__s != (void *)0x0) {
    memset(__s,0,__size * __nmemb);
  }
  FUN__text__005f5500();
  return __s;
}


