/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00416430; name: FUN_.text__00416430
 */


long FUN__text__00416430(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (DAT_00aea228 != 0) {
    lVar3 = (ulong)DAT_00aea228 << 3;
    plVar2 = DAT_00aea220;
    do {
      lVar1 = *plVar2;
      if (((*(long *)(lVar1 + 0x68) == *param_1) && (*(long *)(lVar1 + 0x70) == param_1[1])) &&
         (*(long *)(lVar1 + 0x78) == param_1[2])) {
        return lVar1;
      }
      plVar2 = plVar2 + 1;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  return 0;
}


