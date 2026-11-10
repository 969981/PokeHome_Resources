/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006925e0; name: FUN_.text__006925e0
 */


void FUN__text__006925e0(long param_1,uint param_2)

{
  do {
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & ~param_2;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN__text__006925e0(*(long *)(param_1 + 0x20),param_2);
    }
    param_1 = *(long *)(param_1 + 0x28);
  } while (param_1 != 0);
  return;
}


