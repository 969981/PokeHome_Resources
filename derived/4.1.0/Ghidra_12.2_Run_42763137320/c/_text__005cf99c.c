/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cf99c; name: FUN_.text__005cf99c
 */


undefined8 FUN__text__005cf99c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x110) == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN__text__006f3f40(*(undefined8 *)(*(long *)(param_1 + 0x110) + 0x68));
  return uVar1;
}


