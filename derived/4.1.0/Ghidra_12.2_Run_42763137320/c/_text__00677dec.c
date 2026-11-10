/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00677dec; name: FUN_.text__00677dec
 */


void FUN__text__00677dec(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x16c8) != 0) {
    if (0 < *(int *)(param_1 + 0x16c8)) {
      lVar1 = 0;
      do {
        FUN__text__0066bd88(*(undefined8 *)(*(long *)(param_1 + 0x16d0) + lVar1 * 8));
        *(undefined8 *)(*(long *)(param_1 + 0x16d0) + lVar1 * 8) = 0;
        lVar1 = lVar1 + 1;
      } while (lVar1 < *(int *)(param_1 + 0x16c8));
    }
    FUN__text__006783e4(*(undefined8 *)(param_1 + 0x16d0));
    *(undefined8 *)(param_1 + 0x16d0) = 0;
    *(undefined4 *)(param_1 + 0x16c8) = 0;
  }
  return;
}


