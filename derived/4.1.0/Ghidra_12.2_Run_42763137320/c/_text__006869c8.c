/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006869c8; name: FUN_.text__006869c8
 */


int FUN__text__006869c8(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_00c5f838 == 0) {
    iVar2 = -1;
  }
  else {
    nnosLockMutex(&DAT_00c5f870);
    iVar1 = FUN__text__00656c60(DAT_00c5f890);
    iVar2 = FUN__text__00656c60(DAT_00c5f898);
    iVar2 = iVar2 + iVar1;
    nnosUnlockMutex(&DAT_00c5f870);
  }
  return iVar2;
}


