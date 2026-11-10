/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00305c0c; name: FUN_.text__00305c0c
 */


void FUN__text__00305c0c(long param_1,uint param_2)

{
  long lVar1;
  
  if (param_2 >> 3 < 0x465) {
    lVar1 = param_1 + (ulong)(param_2 >> 3);
    *(byte *)(lVar1 + 8) = *(byte *)(lVar1 + 8) | (byte)(1 << (ulong)(param_2 & 7));
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}


