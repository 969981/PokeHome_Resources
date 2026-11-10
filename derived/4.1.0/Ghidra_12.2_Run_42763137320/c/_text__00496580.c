/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00496580; name: FUN_.text__00496580
 */


byte FUN__text__00496580(long param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  
  bVar2 = false;
  do {
    bVar1 = param_1 == param_2;
    if (((bool)bVar1) || (bVar2)) {
LAB__text__004965c4:
      if ((bVar1 & 1) != 0) break;
    }
    else {
      if (*(long *)(param_1 + 0x80) != 0) {
        bVar1 = FUN__text__00460340(*(long *)(param_1 + 0x80),param_2);
        bVar2 = true;
        goto LAB__text__004965c4;
      }
      bVar2 = false;
      bVar1 = 0;
    }
    param_1 = *(long *)(param_1 + 0x78);
  } while (param_1 != 0);
  return bVar1 & 1;
}


