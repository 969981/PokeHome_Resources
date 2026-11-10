/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004de7e8; name: FUN_.text__004de7e8
 */


undefined8 FUN__text__004de7e8(int *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  void *__s;
  ulong __n;
  
  uVar1 = 0x1f;
  if ((param_2 != 0) && (param_3 != 0)) {
    *param_1 = param_2;
    param_1[1] = param_3;
    __n = (ulong)(param_3 * param_2 + 0x1fU >> 3 & 0x1ffffffc);
    __s = (void *)FUN__text__00400f80(5,__n);
    *(void **)(param_1 + 2) = __s;
    if (__s == (void *)0x0) {
      return 0x34;
    }
    memset(__s,0,__n);
    uVar1 = 1;
  }
  return uVar1;
}


