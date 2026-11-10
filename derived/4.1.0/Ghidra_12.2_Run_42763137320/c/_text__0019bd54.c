/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019bd54; name: FUN_.text__0019bd54
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0019bd54(long *param_1,long *param_2,uint param_3)

{
  void *__dest;
  void *__src;
  
  *param_1 = _DAT_008a06a0 + 0x10;
  FUN__text__0019c35c(param_1 + 1);
  param_1[0x1e] = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  param_1[0xe] = (long)param_2;
  param_1[0xf] = 0x924924924924924;
  param_1[0x14] = 0;
  param_1[0x1c] = 0;
  param_1[0x16] = (long)param_2;
  param_1[0x17] = 0x924924924924924;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  if (param_3 == 0) goto LAB__text__0019be38;
  __dest = (void *)(**(code **)(*param_2 + 0x10))(param_2,(ulong)param_3 * 0x1c,4);
  __src = (void *)param_1[0x1e];
  if (((__src == (void *)0x0) || (__dest == (void *)0x0)) || (param_1[0x1f] == 0)) {
    if (__src != (void *)0x0) goto LAB__text__0019be10;
  }
  else {
    memmove(__dest,__src,param_1[0x1f] * 0x1c);
    __src = (void *)param_1[0x1e];
LAB__text__0019be10:
    (**(code **)(*(long *)param_1[0x16] + 0x18))((long *)param_1[0x16],__src,param_1[0x20] * 0x1c,4)
    ;
  }
  param_1[0x1e] = (long)__dest;
  param_1[0x20] = (ulong)param_3;
LAB__text__0019be38:
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  memset(param_1 + 0x25,0,0x3f498);
  FUN__text__0019c3e4(param_1 + 1);
  return;
}


