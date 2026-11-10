/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028c89c; name: FUN_.text__0028c89c
 */


void FUN__text__0028c89c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(byte *)(lVar1 + 0x978) = *(byte *)(lVar1 + 0x978) ^ 1;
  FUN__text__0028aca0(lVar1);
  if (*(long *)(lVar1 + 0x4e0) == 0) {
    return;
  }
  FUN__text__003c02e4();
  return;
}


