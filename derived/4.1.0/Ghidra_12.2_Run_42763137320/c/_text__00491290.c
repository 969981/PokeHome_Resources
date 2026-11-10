/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00491290; name: FUN_.text__00491290
 */


bool FUN__text__00491290(long param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  
  if (*(uint *)(param_1 + 0x38) != 0) {
    piVar2 = *(int **)(param_1 + 0x30);
    lVar3 = (ulong)*(uint *)(param_1 + 0x38) << 2;
    do {
      if (*piVar2 == param_2) {
        return true;
      }
      piVar2 = piVar2 + 1;
      lVar3 = lVar3 + -4;
    } while (lVar3 != 0);
  }
  if (*(uint *)(param_1 + 0x28) == 0) {
    return false;
  }
  lVar3 = (ulong)*(uint *)(param_1 + 0x28) * 0xc;
  piVar2 = *(int **)(param_1 + 0x20);
  do {
    lVar3 = lVar3 + -0xc;
    iVar1 = *piVar2;
    piVar2 = piVar2 + 3;
  } while (iVar1 != param_2 && lVar3 != 0);
  return iVar1 == param_2;
}


