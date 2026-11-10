/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004932ac; name: FUN_.text__004932ac
 */


void FUN__text__004932ac(long param_1,long param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x40) != param_2) {
    *(long *)(param_1 + 0x40) = param_2;
    lVar1 = *(long *)(*(long *)(param_1 + 8) + 8);
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 0x7c) = *(byte *)(lVar1 + 0x7c) | 1;
    }
  }
  return;
}


