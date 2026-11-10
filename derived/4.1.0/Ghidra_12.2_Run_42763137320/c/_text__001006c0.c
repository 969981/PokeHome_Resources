/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001006c0; name: operator.new
 */


/* operator new(unsigned long) */

void * operator_new(ulong param_1)

{
  long *plVar1;
  void *pvVar2;
  
  plVar1 = (long *)FUN__text__005f52b0();
  pvVar2 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,param_1,8);
  FUN__text__005f5500();
  return pvVar2;
}


