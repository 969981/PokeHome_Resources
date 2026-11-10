/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e7a60; name: FUN_.text__003e7a60
 */


void FUN__text__003e7a60(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  FUN__text__003e8230(*(undefined8 *)(param_1 + 0x90));
  lVar1 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  plVar3 = *(long **)(param_1 + 0x58);
  if (plVar3 != (long *)0x0) {
    plVar2 = plVar3;
    if (*(long **)(param_1 + 0x60) != plVar3) {
      plVar2 = *(long **)(param_1 + 0x60);
      do {
        plVar4 = plVar2 + -1;
        if (*plVar4 != 0) {
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
          plVar2[-1] = 0;
        }
        plVar2 = plVar4;
      } while (plVar4 != plVar3);
      plVar2 = *(long **)(param_1 + 0x58);
    }
    *(long **)(param_1 + 0x60) = plVar3;
    (**(code **)(**(long **)(param_1 + 0x70) + 0x18))
              (*(long **)(param_1 + 0x70),plVar2,*(long *)(param_1 + 0x68) - (long)plVar2,8);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x50) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return;
}


