/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005cf76c; name: FUN_.text__005cf76c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005cf76c(long param_1)

{
  if (*(long *)(param_1 + 0xd8) != 0) {
    FUN__text__006f3274(param_1 + 0x58,_DAT_008a0448);
  }
  *(undefined8 *)(param_1 + 0xd0) = 0xffffffffffffffff;
  FUN__text__005ce0a0(DAT_008e1498,param_1);
  return;
}


