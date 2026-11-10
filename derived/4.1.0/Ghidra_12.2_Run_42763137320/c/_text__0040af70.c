/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040af70; name: FUN_.text__0040af70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__0040af70(byte param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(_DAT_008a49d0 + 0x10);
  if (lVar3 == 0) {
    iVar1 = 1;
  }
  else {
    iVar2 = 1;
    do {
      iVar1 = FUN__text__00406cc0(lVar3,0);
      lVar3 = *(long *)(lVar3 + 0x20);
      if (iVar1 == 1 || iVar2 != 1) {
        iVar1 = iVar2;
      }
      iVar2 = iVar1;
    } while (lVar3 != 0);
  }
  FUN__text__0041595c(0);
  *(bool *)_DAT_008a4a18 = iVar1 == 1;
  *_DAT_008a49e8 = param_1 & 1;
  nn::os::SignalEvent(_DAT_008a49f8);
  return iVar1;
}


