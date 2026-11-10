/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f445c; name: FUN_.text__003f445c
 */


void FUN__text__003f445c(long param_1)

{
  long lVar1;
  
  FUN__text__003f4770(param_1 + 0x10);
  lVar1 = FUN__text__003f54b0();
  if (lVar1 == param_1) {
    FUN__text__003f54c0(0);
    FUN__text__003f56f0(*(undefined4 *)(param_1 + 0x18));
    return;
  }
  FUN__text__003f56f0(*(undefined4 *)(param_1 + 0x18));
  return;
}


