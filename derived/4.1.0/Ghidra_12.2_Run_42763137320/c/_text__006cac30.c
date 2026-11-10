/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006cac30; name: FUN_.text__006cac30
 */


long FUN__text__006cac30(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  while( true ) {
    if (lVar2 == param_1 + 0x10) {
      return 0;
    }
    iVar1 = strcmp((char *)(lVar2 + 0x10),param_2);
    if (iVar1 == 0) break;
    lVar2 = *(long *)(lVar2 + 8);
  }
  return lVar2;
}


