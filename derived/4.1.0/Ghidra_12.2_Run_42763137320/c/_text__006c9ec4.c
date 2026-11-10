/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c9ec4; name: FUN_.text__006c9ec4
 */


undefined8 FUN__text__006c9ec4(long param_1)

{
  undefined8 uVar1;
  
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x88))();
    (**(code **)(**(long **)(param_1 + 0x20) + 0x90))();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  return uVar1;
}


