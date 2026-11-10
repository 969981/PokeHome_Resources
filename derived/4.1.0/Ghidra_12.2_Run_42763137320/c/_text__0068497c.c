/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068497c; name: FUN_.text__0068497c
 */


void * FUN__text__0068497c(void *param_1,long param_2,undefined8 param_3)

{
  void *__dest;
  size_t __n;
  
  __n = param_2 << 3;
  if (__n == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = (void *)FUN__text__006809d4(param_3,__n);
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_1,__n);
    }
  }
  return __dest;
}


