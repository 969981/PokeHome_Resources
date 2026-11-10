/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f320c; name: FUN_.text__005f320c
 */


undefined8 FUN__text__005f320c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x7c) == '\0') {
    return 0;
  }
  uVar1 = FUN__text__005f3560(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_2 + 0x58));
  return uVar1;
}


