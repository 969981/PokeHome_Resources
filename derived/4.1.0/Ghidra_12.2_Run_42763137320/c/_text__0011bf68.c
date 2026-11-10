/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011bf68; name: FUN_.text__0011bf68
 */


void FUN__text__0011bf68(long *param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  uVar1 = nn::oe::GetOperationMode();
  if (uVar1 < 2) {
    *(uint *)(lVar2 + 0x230) = uVar1;
  }
  return;
}


