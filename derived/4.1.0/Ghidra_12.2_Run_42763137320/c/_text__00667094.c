/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00667094; name: FUN_.text__00667094
 */


undefined4 FUN__text__00667094(long param_1,uint param_2,void *param_3,size_t param_4)

{
  undefined4 uVar1;
  void *__dest;
  
  if (*(long *)(param_1 + 0x738) == 0) {
    if ((param_2 < 3) && (__dest = (void *)FUN__text__006783d4(param_4 + 1), __dest != (void *)0x0))
    {
      memcpy(__dest,param_3,param_4);
      *(undefined1 *)((long)__dest + param_4) = 0;
      FUN__text__006783e4(__dest);
    }
    uVar1 = 0;
  }
  else {
    FUN__text__0065cab0(param_1,1);
    uVar1 = (**(code **)(param_1 + 0x738))
                      (param_1,param_2,param_3,param_4,*(undefined8 *)(param_1 + 0x670));
    FUN__text__0065cab0(param_1,0);
  }
  return uVar1;
}


