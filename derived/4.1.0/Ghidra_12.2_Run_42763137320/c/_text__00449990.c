/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00449990; name: FUN_.text__00449990
 */


void FUN__text__00449990(void)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  for (lVar2 = DAT_00ae9e38; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x10)) {
    if ((*(long *)(lVar2 + 8) != 0) && (*(long *)(*(long *)(lVar2 + 8) + 8) != 0)) {
      FUN__text__0044b1dc();
    }
  }
  if (DAT_00aea600 == 0) {
    return;
  }
  lVar2 = *DAT_00aea5f8;
  if (lVar2 == 0) {
    uVar3 = 0;
    do {
      if (DAT_00aea600 - 1 == uVar3) {
        return;
      }
      lVar2 = DAT_00aea5f8[uVar3 + 1];
      uVar3 = uVar3 + 1;
    } while (lVar2 == 0);
  }
  else {
    uVar3 = 0;
  }
  do {
    do {
      FUN__text__0044b1dc(lVar2);
      lVar2 = *(long *)(lVar2 + 0x70);
    } while (lVar2 != 0);
    uVar1 = DAT_00aea600;
    if (DAT_00aea600 <= (int)uVar3 + 1U) {
      uVar1 = (int)uVar3 + 1;
    }
    do {
      if (uVar1 - 1 == (int)uVar3) {
        return;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
      lVar2 = DAT_00aea5f8[uVar3];
    } while (lVar2 == 0);
  } while( true );
}


