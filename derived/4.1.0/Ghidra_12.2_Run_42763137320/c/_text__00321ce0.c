/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00321ce0; name: FUN_.text__00321ce0
 */


int FUN__text__00321ce0(int param_1)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  
  iVar3 = 0;
  lVar4 = -300;
  puVar5 = &DAT_00941d60;
  do {
    lVar2 = FUN__text__00304b90();
    if (puVar5[lVar2] == '\x01') {
      if (iVar3 == param_1) {
        return (int)lVar4 + 0x12d;
      }
      iVar3 = iVar3 + 1;
    }
    bVar1 = lVar4 != -1;
    lVar4 = lVar4 + 1;
    puVar5 = puVar5 + 0x8c;
  } while (bVar1);
  return 0;
}


