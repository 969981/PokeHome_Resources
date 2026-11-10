/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004142e0; name: FUN_.text__004142e0
 */


void FUN__text__004142e0(long param_1)

{
  long lVar1;
  
  lVar1 = FUN__text__00405b00(*(undefined4 *)(param_1 + 0x28));
  if (lVar1 == 0) {
    return;
  }
  *(undefined4 *)(lVar1 + 0x14) = 0;
  FUN__text__00405b80(*(undefined4 *)(param_1 + 0x28),0);
  return;
}


