/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004de884; name: FUN_.text__004de884
 */


undefined8 FUN__text__004de884(int *param_1,int param_2,int param_3)

{
  void *__s;
  ulong __n;
  
  __n = (ulong)(param_3 * param_2 + 0x1fU >> 3 & 0x1ffffffc);
  __s = (void *)FUN__text__00400fa0(5,*(undefined8 *)(param_1 + 2),__n);
  if (__s != (void *)0x0) {
    memset(__s,0,__n);
    *param_1 = param_2;
    param_1[1] = param_3;
    *(void **)(param_1 + 2) = __s;
    return 1;
  }
  if (*(long *)(param_1 + 2) != 0) {
    FUN__text__00400fc0(5);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  param_1[0] = 0;
  param_1[1] = 0;
  return 0x34;
}


