/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00451ce0; name: FUN_.text__00451ce0
 */


undefined8 FUN__text__00451ce0(undefined4 *param_1,ulong param_2)

{
  size_t __n;
  void *__s;
  
  *param_1 = (int)param_2;
  __n = (param_2 & 0xff) * 0x20 + 0x38;
  __s = (void *)FUN__text__00400f90(6,__n,0x10);
  if (__s == (void *)0x0) {
    *(undefined8 *)(param_1 + 8) = 0;
    FUN__text__00400fc0(6,0);
    *(undefined8 *)(param_1 + 8) = 0;
    return 2;
  }
  memset(__s,0,__n);
  *(long *)((long)__s + 0x28) = (long)__s + 0x38;
  *(ulong *)((long)__s + 0x30) = (long)__s + 0x38 + (param_2 & 0xff) * 0x10;
  *(void **)(param_1 + 8) = __s;
  return 1;
}


