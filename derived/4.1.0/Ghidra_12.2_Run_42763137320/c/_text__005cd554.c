/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cd554; name: FUN_.text__005cd554
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__005cd554(long param_1)

{
  if (*(int *)(*_DAT_0089f5b8 + 0x859c) == 2) {
    return *(undefined4 *)(param_1 + 0x7c);
  }
  if (*(int *)(*_DAT_0089f5b8 + 0x859c) == 1) {
    return *(undefined4 *)(param_1 + 100);
  }
  return *(undefined4 *)(param_1 + 0x70);
}


