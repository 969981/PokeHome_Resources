/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ae0b0; name: FUN_.text__003ae0b0
 */


undefined8 FUN__text__003ae0b0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = (long *)**(undefined8 **)(param_1 + 0x820);
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  plVar1 = (long *)(**(code **)plVar3[10])();
  plVar2 = (long *)FUN__text__003a9f60();
  if (plVar2 == plVar1) {
    if (*(int *)(param_1 + 0x890) != 0) {
      return 0;
    }
  }
  else {
    do {
      plVar1 = (long *)*plVar1;
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
    if ((plVar1 == (long *)0x0) || (*(int *)(param_1 + 0x890) != 0)) {
      return 0;
    }
  }
  if (*(char *)((long)plVar3 + 0x6c) == '\0') {
    (**(code **)(*plVar3 + 0x40))(plVar3);
    FUN__text__003a1648(param_1,1);
    FUN__text__003b2fa0(param_1,0);
    return 1;
  }
  (**(code **)(*plVar3 + 0x50))(plVar3);
  FUN__text__003a1648(param_1,1);
  FUN__text__003b30d0(param_1,0);
  return 1;
}


