/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067fe0c; name: FUN_.text__0067fe0c
 */


int FUN__text__0067fe0c(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = FUN__text__00680914();
  if ((((lVar3 == 0) || ((*(byte *)(lVar3 + 0xe4) >> 1 & 1) != 0)) || (*(int *)(lVar3 + 0xdc) == 5))
     || (iVar1 = FUN__text__00685da8(lVar3), iVar1 == 0)) {
    iVar1 = -0x1f5;
  }
  else {
    iVar2 = FUN__text__00685d7c(lVar3,8);
    iVar1 = 0;
    if (iVar2 < -900) {
      iVar1 = iVar2;
    }
  }
  return iVar1;
}


