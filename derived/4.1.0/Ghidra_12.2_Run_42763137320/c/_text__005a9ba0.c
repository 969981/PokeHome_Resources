/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a9ba0; name: FUN_.text__005a9ba0
 */


void * FUN__text__005a9ba0(void *param_1,size_t param_2,long *param_3)

{
  void *pvVar1;
  
  if (DAT_00b11150 == 0) {
    pvVar1 = (void *)FUN__text__001004c0(param_3,param_1,param_2);
    if ((param_2 != 0) && (pvVar1 == (void *)0x0)) {
      (**(code **)(*param_3 + 0xb8))(param_3);
    }
    return pvVar1;
  }
  if (param_2 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)aligned_alloc(0x1000,param_2);
    if (param_1 != (void *)0x0) {
      memcpy(pvVar1,param_1,param_2);
    }
  }
  free(param_1);
  return pvVar1;
}


