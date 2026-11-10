/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ae1d0; name: FUN_.text__003ae1d0
 */


undefined8 FUN__text__003ae1d0(long param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar4 = (long *)**(undefined8 **)(param_1 + 0x820);
  if (plVar4 != (long *)0x0) {
    plVar1 = (long *)(**(code **)plVar4[10])();
    plVar2 = (long *)FUN__text__003a9e38();
    if (plVar2 != plVar1) {
      do {
        plVar1 = (long *)*plVar1;
      } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
      if (plVar1 == (long *)0x0) {
        return 0;
      }
    }
    uVar3 = (**(code **)(*plVar4 + 0x68))(plVar4);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x890) == 0) {
      *(undefined4 *)(param_1 + 0x7d8) = 0;
      *(undefined4 *)(param_1 + 0x890) = 1;
      *(undefined1 *)(param_1 + 0x85) = 0;
      FUN__text__003a1648(param_1,1);
      return 1;
    }
  }
  return 0;
}


