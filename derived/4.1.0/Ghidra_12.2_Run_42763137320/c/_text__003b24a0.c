/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b24a0; name: FUN_.text__003b24a0
 */


long FUN__text__003b24a0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long local_28;
  
  FUN__text__003b53e8(&local_28,param_2);
  if (*param_1 != 0) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
  }
  *param_1 = local_28;
  *(long *)(local_28 + 0x60) = param_1[1];
  lVar3 = *param_1;
  if (lVar3 != 0) {
    plVar1 = (long *)(*(code *)**(undefined8 **)(lVar3 + 0x50))();
    plVar2 = (long *)FUN__text__003b37cc();
    if (plVar2 != plVar1) {
      do {
        plVar1 = (long *)*plVar1;
      } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
      if (plVar1 == (long *)0x0) {
        return 0;
      }
    }
  }
  return lVar3;
}


