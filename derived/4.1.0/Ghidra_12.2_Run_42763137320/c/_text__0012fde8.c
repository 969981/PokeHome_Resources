/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012fde8; name: FUN_.text__0012fde8
 */


void FUN__text__0012fde8(long param_1,long param_2)

{
  *(long *)(param_1 + 8) = param_2;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(DAT_008e1518 + 0x48);
    return;
  }
  return;
}


