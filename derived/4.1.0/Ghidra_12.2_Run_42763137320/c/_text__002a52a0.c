/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002a52a0; name: FUN_.text__002a52a0
 */


bool FUN__text__002a52a0(int param_1)

{
  int *piVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = 0;
  do {
    piVar1 = (int *)(lVar3 + 0x732b9c);
    if (*piVar1 == param_1) break;
    bVar2 = lVar3 != 0x7fc;
    lVar3 = lVar3 + 4;
  } while (bVar2);
  return *piVar1 == param_1;
}


