/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001ca91c; name: FUN_.text__001ca91c
 */


void FUN__text__001ca91c(long param_1,byte param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x280) == '\0') {
    return;
  }
  *(byte *)(param_1 + 0x4c9) = param_2 & 1;
  uVar1 = FUN__text__0012cb14(*(long *)(param_1 + 8) + 0x110,param_1 + 0x288);
  FUN__text__003a14e8(uVar1,*(undefined1 *)(param_1 + 0x4c9));
  FUN__text__003a14e8(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x4c9));
  return;
}


