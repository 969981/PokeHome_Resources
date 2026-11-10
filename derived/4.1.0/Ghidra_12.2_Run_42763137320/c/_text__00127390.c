/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00127390; name: FUN_.text__00127390
 */


byte FUN__text__00127390(long param_1)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0xc90);
  if (*(uint *)(param_1 + 0xc90) == 0) {
    bVar2 = 1;
  }
  else {
    plVar4 = (long *)(param_1 + 0x98);
    bVar2 = 1;
    do {
      bVar1 = false;
      if (*plVar4 != 0) {
        bVar1 = *(char *)(*plVar4 + 0x170) != '\0';
      }
      bVar2 = bVar2 & bVar1;
      plVar4 = plVar4 + 0x32;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return bVar2;
}


