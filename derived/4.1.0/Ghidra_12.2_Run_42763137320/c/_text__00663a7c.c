/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00663a7c; name: FUN_.text__00663a7c
 */


void FUN__text__00663a7c(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    FUN__text__0065fd64(param_1 + 0x220);
    FUN__text__0065fd64(param_1 + 0x230);
    lVar1 = *(long *)(param_1 + 0x290);
    while (lVar1 != 0) {
      FUN__text__006783e4(*(undefined8 *)(*(long *)(param_1 + 0x288) + lVar1 * 8 + -8));
      lVar1 = *(long *)(param_1 + 0x290) + -1;
      *(long *)(param_1 + 0x290) = lVar1;
    }
    FUN__text__006783e4(*(undefined8 *)(param_1 + 0x288));
    *(undefined8 *)(param_1 + 0x288) = 0;
  }
  return;
}


