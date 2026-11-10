/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d6b3c; name: FUN_.text__001d6b3c
 */


undefined8 FUN__text__001d6b3c(long param_1)

{
  int iVar1;
  
  FUN__text__001db410(*(undefined8 *)(param_1 + 0x6d0));
  (**(code **)(**(long **)(param_1 + 0x6b0) + 0x18))();
  FUN__text__001d8bac(*(undefined8 *)(param_1 + 0x690));
  iVar1 = FUN__text__001dc710(*(undefined8 *)(param_1 + 0x6d0));
  if (iVar1 - 1U < 4) {
    *(undefined4 *)(param_1 + 0x648) = *(undefined4 *)((long)(int)(iVar1 - 1U) * 4 + 0x7249e0);
  }
  return 0;
}


