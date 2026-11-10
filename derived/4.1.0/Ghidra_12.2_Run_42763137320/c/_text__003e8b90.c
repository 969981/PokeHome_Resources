/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e8b90; name: FUN_.text__003e8b90
 */


int FUN__text__003e8b90(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (*(int **)(param_1 + 0x58) == (int *)0x0) {
    lVar3 = *(long *)(param_1 + 0x50);
    iVar2 = 0;
  }
  else {
    iVar2 = **(int **)(param_1 + 0x58);
    lVar3 = *(long *)(param_1 + 0x50);
  }
  for (; lVar3 != param_1 + 0x48; lVar3 = *(long *)(lVar3 + 8)) {
    iVar1 = FUN__text__003e8b90(*(undefined8 *)(lVar3 + 0x10));
    iVar2 = iVar1 + iVar2;
  }
  return iVar2;
}


