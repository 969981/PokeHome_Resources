/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004edb20; name: FUN_.text__004edb20
 */


bool FUN__text__004edb20(long param_1,short param_2)

{
  short sVar1;
  short *psVar2;
  long lVar3;
  
  if (*(uint *)(param_1 + 0x60) == 0) {
    return false;
  }
  lVar3 = (ulong)*(uint *)(param_1 + 0x60) * 2;
  psVar2 = *(short **)(param_1 + 0x58);
  do {
    lVar3 = lVar3 + -2;
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != param_2 && lVar3 != 0);
  return sVar1 == param_2;
}


