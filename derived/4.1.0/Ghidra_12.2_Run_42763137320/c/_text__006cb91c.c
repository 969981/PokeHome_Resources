/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006cb91c; name: FUN_.text__006cb91c
 */


void FUN__text__006cb91c(long param_1)

{
  uint uVar1;
  void *__s;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x20) + 0x18);
  __s = *(void **)(*(long *)(param_1 + 0x18) + 0x10);
  *(void **)(*(long *)(param_1 + 0x18) + 0x10) = (void *)((long)__s + (long)(int)uVar1 * 0x18);
  if (0 < (int)uVar1 && __s != (void *)0x0) {
    memset(__s,0,(ulong)uVar1 * 0x18);
  }
  *(void **)(param_1 + 0x28) = __s;
  return;
}


