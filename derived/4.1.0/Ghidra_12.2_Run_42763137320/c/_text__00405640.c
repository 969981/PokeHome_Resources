/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00405640; name: FUN_.text__00405640
 */


long FUN__text__00405640(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long local_28;
  
  local_28 = 0;
  if (param_3 == 1) {
    FUN__text__00404130(param_1,param_2,&local_28);
    return local_28;
  }
  FUN__text__00404130(param_1,param_2,0);
  param_2 = param_2 + param_3 * 0x108;
  lVar2 = *(long *)(param_2 + 0xb18);
  if (lVar2 == 0) {
    return 0;
  }
  plVar1 = (long *)(param_2 + 0xb18);
  *plVar1 = lVar2 + -1;
  return plVar1[lVar2];
}


