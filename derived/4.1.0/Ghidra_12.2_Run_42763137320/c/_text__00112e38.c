/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00112e38; name: FUN_.text__00112e38
 */


bool FUN__text__00112e38(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (*(char *)(param_1 + 0x2e2) == '\0') {
    if (*(long *)(param_1 + 0x2e8) == 0) {
      return false;
    }
    iVar1 = FUN__text__003d0e08();
    if (iVar1 != 1) {
      return false;
    }
    *(undefined1 *)(param_1 + 0x2e2) = 1;
    FUN__text__003d0e80(*(undefined8 *)(param_1 + 0x2e8));
    uVar2 = FUN__text__001155b0(*(undefined8 *)(param_1 + 0x4d8));
  }
  else {
    uVar2 = FUN__text__001155b0(*(undefined8 *)(param_1 + 0x4d8));
  }
  if (((((uVar2 & 1) == 0) || (*(long *)(param_1 + 0x508) == 0)) ||
      (*(char *)(*(long *)(param_1 + 0x508) + 0x170) == '\0')) || (*(long *)(param_1 + 0x618) == 0))
  {
    return false;
  }
  return *(char *)(*(long *)(param_1 + 0x618) + 0x170) != '\0';
}


