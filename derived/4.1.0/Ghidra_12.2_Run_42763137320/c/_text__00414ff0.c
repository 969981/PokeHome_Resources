/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00414ff0; name: FUN_.text__00414ff0
 */


void FUN__text__00414ff0(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (DAT_00aea228 != 0) {
    lVar2 = (ulong)DAT_00aea228 << 3;
    plVar1 = DAT_00aea220;
    do {
      lVar3 = *(long *)(*plVar1 + 8);
      if (lVar3 != 0) {
        *(ushort *)(lVar3 + 0x208) = *(ushort *)(lVar3 + 0x208) & 0xfffe;
      }
      plVar1 = plVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  if (DAT_00aea238 != 0) {
    lVar2 = (ulong)DAT_00aea238 << 3;
    plVar1 = DAT_00aea230;
    do {
      lVar3 = *(long *)(*plVar1 + 8);
      if (lVar3 != 0) {
        *(ushort *)(lVar3 + 0x208) = *(ushort *)(lVar3 + 0x208) & 0xfffe;
      }
      plVar1 = plVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}


