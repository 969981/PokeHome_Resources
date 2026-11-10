/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00602b10; name: FUN_.text__00602b10
 */


int FUN__text__00602b10(undefined8 param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  uint *puVar3;
  
  lVar2 = FUN__text__0063e460();
  if ((ulong)*(byte *)(lVar2 + 0x13) < 8) {
    iVar1 = 100;
    puVar3 = (uint *)((ulong)*(byte *)(lVar2 + 0x13) * 0x194 + 0x759268);
    lVar2 = 2;
    do {
      if (param_2 < puVar3[-1]) {
        lVar2 = lVar2 + -1;
LAB__text__00602b90:
        return (int)lVar2 + -1;
      }
      if (param_2 < *puVar3) goto LAB__text__00602b90;
      lVar2 = lVar2 + 2;
      puVar3 = puVar3 + 2;
    } while (lVar2 != 0x66);
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}


