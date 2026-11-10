/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064ba4c; name: FUN_.text__0064ba4c
 */


undefined8 FUN__text__0064ba4c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  if ((*(byte *)(*(long *)(param_1 + 0x10) + 0x25a) & 1) == 0) {
    uVar1 = 1;
  }
  else {
    FUN__text__005e8af0(*(undefined8 *)(param_1 + 0x10));
    lVar2 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    uVar1 = 0;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      return 0;
    }
  }
  return uVar1;
}


