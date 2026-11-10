/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f33c0; name: FUN_.text__005f33c0
 */


void FUN__text__005f33c0(long param_1)

{
  undefined2 uVar1;
  
  if (*(char *)(param_1 + 0x7c) != '\0') {
    uVar1 = FUN__text__005f3410(*(undefined8 *)(param_1 + 0x58));
    *(undefined2 *)(param_1 + 0x7a) = uVar1;
  }
  return;
}


