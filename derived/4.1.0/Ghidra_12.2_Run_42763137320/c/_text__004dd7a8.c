/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dd7a8; name: FUN_.text__004dd7a8
 */


undefined8 FUN__text__004dd7a8(long param_1,uint *param_2)

{
  void *__dest;
  
  if ((*(byte *)(param_1 + 0x82) >> 4 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 2);
    return 1;
  }
  __dest = (void *)FUN__text__00400f80(5,*param_2);
  *(void **)(param_1 + 0x10) = __dest;
  if (__dest == (void *)0x0) {
    return 0x34;
  }
  memcpy(__dest,*(void **)(param_2 + 2),(ulong)*param_2);
  return 1;
}


