/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011be60; name: FUN_.text__0011be60
 */


void FUN__text__0011be60(void)

{
  int iVar1;
  long lVar2;
  
  if (DAT_008e15a0 == 0) {
    lVar2 = 0;
    iVar1 = nn::oe::GetCurrentFocusState();
  }
  else {
    lVar2 = *(long *)(DAT_008e15a0 + 0xb0);
    iVar1 = nn::oe::GetCurrentFocusState();
  }
  if (iVar1 == 3) {
    if (lVar2 != 0) {
      FUN__text__001537b0(lVar2,1);
      return;
    }
  }
  else if ((iVar1 == 1) && (lVar2 != 0)) {
    FUN__text__001537b0(lVar2,0);
    return;
  }
  return;
}


