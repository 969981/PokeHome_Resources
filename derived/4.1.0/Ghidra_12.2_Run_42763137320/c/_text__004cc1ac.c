/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cc1ac; name: FUN_.text__004cc1ac
 */


undefined8 FUN__text__004cc1ac(undefined4 *param_1,void *param_2,uint param_3,undefined4 param_4)

{
  void *__dest;
  
  if (*(long *)(param_1 + 2) != 0) {
    FUN__text__00400fc0(1);
    *(undefined8 *)(param_1 + 2) = 0;
  }
  if (param_3 != 0) {
    __dest = (void *)FUN__text__00400f80(1,(ulong)param_3);
    *(void **)(param_1 + 2) = __dest;
    if (__dest == (void *)0x0) {
      return 0x34;
    }
    memcpy(__dest,param_2,(ulong)param_3);
  }
  *param_1 = param_4;
  return 1;
}


