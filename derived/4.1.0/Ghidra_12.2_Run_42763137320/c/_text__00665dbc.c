/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00665dbc; name: FUN_.text__00665dbc
 */


int FUN__text__00665dbc(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + 0xf78) = 0;
  iVar1 = FUN__text__00665e14();
  if (iVar1 == 0) {
    if (((*(byte *)(lVar2 + 0xfac) >> 4 & 1) == 0) && ((*(byte *)(lVar2 + 0x10fc) & 1) == 0)) {
      FUN__text__00659c40(*(undefined8 *)(lVar2 + 0x668),0x718d91);
    }
    *(undefined4 *)(lVar2 + 0x10f8) = 0;
  }
  return iVar1;
}


