/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044e018; name: FUN_.text__0044e018
 */


void FUN__text__0044e018(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  plVar1 = *(long **)(param_1 + 0xe0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,0);
    puVar2 = *(undefined8 **)(param_1 + 0xe0);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      FUN__text__00400fc0(5,puVar2);
    }
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  FUN__text__004509b0(param_1);
  plVar1 = *(long **)(param_1 + 0xe8);
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,0);
    puVar2 = *(undefined8 **)(param_1 + 0xe8);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      FUN__text__00400fc0(5,puVar2);
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  return;
}


