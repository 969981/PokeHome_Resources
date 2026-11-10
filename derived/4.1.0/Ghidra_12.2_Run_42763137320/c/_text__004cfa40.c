/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cfa40; name: FUN_.text__004cfa40
 */


void FUN__text__004cfa40(long param_1,byte param_2,byte param_3)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x20) = *(byte *)(lVar1 + 0x20) & (param_3 ^ 0xff) | param_3 & param_2;
  }
  plVar2 = *(long **)(param_1 + 0x10);
  if ((plVar2 != (long *)0x0) && ((int)plVar2[1] != 0)) {
    lVar1 = *plVar2;
    do {
      plVar2 = (long *)(lVar1 + 8);
      lVar1 = lVar1 + 0x10;
      *(byte *)(*plVar2 + 0x20) = *(byte *)(*plVar2 + 0x20) & ~param_3 | param_3 & param_2;
    } while (lVar1 != **(long **)(param_1 + 0x10) +
                      (ulong)*(uint *)(*(long **)(param_1 + 0x10) + 1) * 0x10);
  }
  return;
}


