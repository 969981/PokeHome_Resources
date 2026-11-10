/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00521260; name: FUN_.text__00521260
 */


bool FUN__text__00521260(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (*(uint *)(param_1 + 0x60) != 0) {
    plVar1 = *(long **)(param_1 + 0x58);
    lVar2 = (ulong)*(uint *)(param_1 + 0x60) << 3;
    do {
      lVar3 = *plVar1;
      if (*(long *)(lVar3 + 0x78) == param_2) goto LAB__text__00521290;
      plVar1 = plVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  lVar3 = 0;
LAB__text__00521290:
  return lVar3 != 0;
}


