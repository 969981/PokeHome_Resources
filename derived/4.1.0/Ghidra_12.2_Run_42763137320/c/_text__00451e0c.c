/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00451e0c; name: FUN_.text__00451e0c
 */


undefined8 FUN__text__00451e0c(uint *param_1,uint param_2)

{
  size_t __n;
  void *__s;
  
  FUN__text__00400fc0(6,*(undefined8 *)(param_1 + 8));
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = param_2;
  *(byte *)((long)param_1 + 0xd) = *(byte *)((long)param_1 + 0xd) | 0xf;
  __n = ((ulong)param_2 & 0xff) * 0x20 + 0x38;
  *(byte *)((long)param_1 + 0x19) = *(byte *)((long)param_1 + 0x19) | 0xf;
  __s = (void *)FUN__text__00400f90(6,__n,0x10);
  if (__s == (void *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0;
    FUN__text__00400fc0(6,0);
    param_1[8] = 0;
    param_1[9] = 0;
    return 2;
  }
  memset(__s,0,__n);
  *(long *)((long)__s + 0x28) = (long)__s + 0x38;
  *(ulong *)((long)__s + 0x30) = (long)__s + 0x38 + ((ulong)param_2 & 0xff) * 0x10;
  *(void **)(param_1 + 8) = __s;
  return 1;
}


