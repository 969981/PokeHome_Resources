/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005211e0; name: FUN_.text__005211e0
 */


long FUN__text__005211e0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x60) != 0) {
    plVar1 = *(long **)(param_1 + 0x58);
    lVar2 = (ulong)*(uint *)(param_1 + 0x60) << 3;
    do {
      if (*(long *)(*plVar1 + 0x78) != param_2) {
        return *plVar1;
      }
      plVar1 = plVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return 0;
}


