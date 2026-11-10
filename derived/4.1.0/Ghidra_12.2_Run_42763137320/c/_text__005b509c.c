/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b509c; name: FUN_.text__005b509c
 */


void FUN__text__005b509c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[1];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_1);
    lVar2 = param_1[1];
    *param_1 = 0;
    param_1[1] = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    param_1[2] = 0xffffffffffffffff;
    param_1[3] = 0;
  }
  return;
}


