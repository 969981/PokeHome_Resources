/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001e3e90; name: FUN_.text__001e3e90
 */


void FUN__text__001e3e90(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar1 = (long *)(**(code **)*puVar3)(puVar3);
  plVar2 = (long *)FUN__text__0018d6a0();
  if (plVar2 != plVar1) {
    do {
      plVar1 = (long *)*plVar1;
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
  }
  *(undefined4 *)((long)puVar3 + 0x15c) = *(undefined4 *)(param_1 + 0x84);
  return;
}


