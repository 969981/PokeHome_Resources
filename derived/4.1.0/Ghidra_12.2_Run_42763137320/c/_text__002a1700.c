/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a1700; name: FUN_.text__002a1700
 */


void FUN__text__002a1700(long param_1,void *param_2)

{
  size_t __n;
  void *__src;
  long *plVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    plVar1 = *(long **)(param_1 + 0x150 + lVar2);
    if (plVar1 != (long *)0x0) {
      (**(code **)(plVar1[9] + 0x10))();
    }
    __n = (**(code **)(*plVar1 + 0x30))(plVar1);
    __src = (void *)(**(code **)(*plVar1 + 0x28))(plVar1);
    memcpy(param_2,__src,__n);
    param_2 = (void *)((long)param_2 + __n);
    (**(code **)(plVar1[9] + 0x18))(plVar1 + 9);
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0xf8);
  return;
}


