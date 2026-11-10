/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dabb8; name: FUN_.text__004dabb8
 */


void FUN__text__004dabb8(long param_1)

{
  if (*(long *)(param_1 + 0xb0) != 0) {
    *(undefined8 *)(param_1 + 0xc4) = 0;
    FUN__text__0041edb0();
  }
  *(undefined2 *)(param_1 + 0x92) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  FUN__text__0041b440(param_1 + 0x10);
  return;
}


