/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066cbcc; name: FUN_.text__0066cbcc
 */


size_t FUN__text__0066cbcc(void *param_1,long param_2,long param_3,long param_4)

{
  size_t __n;
  ulong uVar1;
  
  uVar1 = (*(long **)(param_4 + 0x1598))[2] - *(long *)(param_4 + 0x1590);
  __n = param_3 * param_2;
  if (uVar1 <= (ulong)(param_3 * param_2)) {
    __n = uVar1;
  }
  if (__n != 0) {
    memcpy(param_1,(void *)(**(long **)(param_4 + 0x1598) + *(long *)(param_4 + 0x1590)),__n);
    *(size_t *)(param_4 + 0x1590) = *(long *)(param_4 + 0x1590) + __n;
  }
  return __n;
}


