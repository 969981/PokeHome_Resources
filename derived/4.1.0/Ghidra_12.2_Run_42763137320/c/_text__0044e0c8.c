/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044e0c8; name: FUN_.text__0044e0c8
 */


void FUN__text__0044e0c8(long param_1)

{
  undefined8 *puVar1;
  
  if (*(long **)(param_1 + 0xe0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0xe0) + 0x60))();
    puVar1 = *(undefined8 **)(param_1 + 0xe0);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1);
      FUN__text__00400fc0(5,puVar1);
    }
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  FUN__text__004509b0(param_1);
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 1;
  return;
}


