/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045b390; name: FUN_.text__0045b390
 */


int FUN__text__0045b390(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    do {
      if (((*(byte *)(lVar2 + 0x198) >> 2 & 1) == 0) &&
         (*(int *)(*(long *)(lVar2 + 0x158) + 0x1b8) == param_2)) {
        iVar1 = iVar1 + 1;
      }
      lVar2 = *(long *)(lVar2 + 0x20);
    } while (lVar2 != 0);
  }
  return iVar1;
}


