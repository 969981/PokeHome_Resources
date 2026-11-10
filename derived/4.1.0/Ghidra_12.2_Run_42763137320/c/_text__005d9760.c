/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d9760; name: FUN_.text__005d9760
 */


undefined4 FUN__text__005d9760(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x10) != 0)) {
    lVar2 = 0;
    plVar3 = *(long **)(lVar1 + 0x20);
    do {
      if (*plVar3 == param_2) {
        return *(undefined4 *)(*(long *)(lVar1 + 0x18) + lVar2 + 4);
      }
      lVar2 = lVar2 + 0x18;
      plVar3 = plVar3 + 1;
    } while ((ulong)*(uint *)(lVar1 + 0x10) * 0x18 != lVar2);
  }
  return 0;
}


