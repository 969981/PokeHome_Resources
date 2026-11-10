/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00531e54; name: FUN_.text__00531e54
 */


undefined8 FUN__text__00531e54(long param_1,uint param_2)

{
  int iVar1;
  undefined8 *__dest;
  void *__src;
  long lVar2;
  
  if (*(long *)(param_1 + 0x20) != 0 && param_2 <= *(uint *)(param_1 + 0x18)) {
    return 1;
  }
  iVar1 = 0x68;
  if (param_2 != 0) {
    iVar1 = param_2 * 0x58 + 0x10;
  }
  __dest = (undefined8 *)FUN__text__00400f80(9,iVar1);
  if (__dest == (undefined8 *)0x0) {
    return 0x34;
  }
  __src = *(void **)(param_1 + 0x20);
  if ((__src == (void *)0x0) || (*(int *)((long)__src + 8) == 0)) {
    *(undefined4 *)(__dest + 1) = 0;
    *__dest = 0xffffffffffffffff;
    lVar2 = *(long *)(param_1 + 0x20);
  }
  else {
    memcpy(__dest,__src,(ulong)(*(int *)((long)__src + 8) * 0x58 + 0x10));
    lVar2 = *(long *)(param_1 + 0x20);
  }
  if (lVar2 != 0) {
    FUN__text__00400fc0(9);
  }
  *(undefined8 **)(param_1 + 0x20) = __dest;
  *(uint *)(param_1 + 0x18) = param_2;
  return 1;
}


