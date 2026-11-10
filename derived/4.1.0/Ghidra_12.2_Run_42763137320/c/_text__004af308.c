/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004af308; name: FUN_.text__004af308
 */


undefined8 FUN__text__004af308(long param_1,uint param_2,void *param_3,uint param_4)

{
  void *__dest;
  
  __dest = (void *)FUN__text__00400f80(5,param_4 + 1);
  if (__dest == (void *)0x0) {
    return 0x34;
  }
  memcpy(__dest,param_3,(ulong)param_4);
  *(undefined1 *)((long)__dest + (ulong)param_4) = 0;
  *(void **)(*(long *)(param_1 + 8) + (ulong)param_2 * 0x10 + 8) = __dest;
  return 1;
}


