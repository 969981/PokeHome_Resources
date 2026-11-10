/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004da80c; name: FUN_.text__004da80c
 */


void FUN__text__004da80c(long param_1)

{
  *(undefined8 *)(param_1 + 0xc4) = 0;
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN__text__0041edb0();
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xc4) = 0;
    *(undefined8 *)(param_1 + 0xbc) = 0x2b;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined8 *)(param_1 + 0xcc) = 0x3f800000ffffffff;
    *(undefined8 *)(param_1 + 0xd4) = 0x1ffffffff;
  }
  return;
}


