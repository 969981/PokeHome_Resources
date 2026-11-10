/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00187470; name: FUN_.text__00187470
 */


undefined8 * FUN__text__00187470(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  if (*(long *)(param_1 + 0x68) == 0) {
    return (undefined8 *)0x0;
  }
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  plVar1 = (long *)(**(code **)*puVar3)(puVar3);
  plVar2 = (long *)FUN__text__00183c50();
  if (plVar2 != plVar1) {
    do {
      plVar1 = (long *)*plVar1;
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
    if (plVar1 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  return puVar3 + -10;
}


