/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00473890; name: FUN_.text__00473890
 */


void FUN__text__00473890(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = DAT_00aea800;
  while (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x68);
    plVar1 = &DAT_00aea800;
    if (DAT_00aea800 != lVar2) {
      plVar1 = (long *)&DAT_00000068;
    }
    *plVar1 = lVar3;
    if (DAT_00aea7f8 == lVar2) {
      DAT_00aea7f8 = 0;
    }
    FUN__text__004061f0(lVar2,0);
    lVar2 = lVar3;
  }
  return;
}


