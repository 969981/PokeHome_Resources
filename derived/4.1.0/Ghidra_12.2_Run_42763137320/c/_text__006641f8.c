/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006641f8; name: FUN_.text__006641f8
 */


ulong FUN__text__006641f8(undefined8 param_1,void *param_2,size_t param_3)

{
  void *__dest;
  ulong uVar1;
  
  if ((param_2 == (void *)0x0) || (param_3 == 0)) {
    uVar1 = FUN__text__00657540(param_1,param_2);
    return uVar1;
  }
  __dest = (void *)FUN__text__006783d4(param_3 + 1);
  if (__dest == (void *)0x0) {
    uVar1 = 0x1b;
  }
  else {
    memcpy(__dest,param_2,param_3);
    *(undefined1 *)((long)__dest + param_3) = 0;
    uVar1 = FUN__text__00657540(param_1,__dest);
    uVar1 = uVar1 & 0xffffffff;
    FUN__text__006783e4(__dest);
  }
  return uVar1;
}


