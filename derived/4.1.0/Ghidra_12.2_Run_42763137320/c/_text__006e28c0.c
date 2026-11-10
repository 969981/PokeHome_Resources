/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e28c0; name: FUN_.text__006e28c0
 */


void FUN__text__006e28c0(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (0 < *(int *)(param_1 + 8)) {
    lVar1 = 0;
    lVar2 = 0x110;
    do {
      FUN__text__006ea3f4(*(long *)(param_1 + 0x10) + lVar2);
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x9e8;
    } while (lVar1 < *(int *)(param_1 + 8));
  }
  return;
}


