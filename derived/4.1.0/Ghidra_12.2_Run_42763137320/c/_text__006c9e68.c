/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c9e68; name: FUN_.text__006c9e68
 */


void FUN__text__006c9e68(long param_1)

{
  undefined8 *puVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x18))();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN__text__006a0f24(puVar1);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


