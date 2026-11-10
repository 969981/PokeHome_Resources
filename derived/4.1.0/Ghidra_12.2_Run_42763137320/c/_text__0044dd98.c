/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044dd98; name: FUN_.text__0044dd98
 */


void FUN__text__0044dd98(long param_1)

{
  undefined8 *puVar1;
  
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x68))();
    puVar1 = *(undefined8 **)(param_1 + 0x38);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1);
      FUN__text__00400fc0(5,puVar1);
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x40) + 0x68))();
    puVar1 = *(undefined8 **)(param_1 + 0x40);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1);
      FUN__text__00400fc0(5,puVar1);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (*(long **)(param_1 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x48) + 0x68))();
    puVar1 = *(undefined8 **)(param_1 + 0x48);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1);
      FUN__text__00400fc0(5,puVar1);
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x50) + 0x68))();
    puVar1 = *(undefined8 **)(param_1 + 0x50);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1);
      FUN__text__00400fc0(5,puVar1);
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  FUN__text__00451d7c(param_1 + 0x10);
  return;
}


