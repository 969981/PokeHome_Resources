/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cd3d0; name: FUN_.text__004cd3d0
 */


void FUN__text__004cd3d0(long param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  
  piVar2 = *(int **)(param_1 + 8);
  uVar3 = *(uint *)(param_1 + 0x10);
  piVar1 = piVar2;
  if (uVar3 == 0) {
LAB__text__004cd41c:
    if (piVar1 != piVar2 + uVar3) {
      uVar3 = uVar3 - 1;
      if (piVar1 < piVar2 + uVar3) {
        memmove(piVar1,piVar1 + 1,(ulong)(uint)((int)(piVar2 + uVar3) - (int)piVar1) & 0xfffffffc);
        uVar3 = *(int *)(param_1 + 0x10) - 1;
      }
      *(uint *)(param_1 + 0x10) = uVar3;
      return;
    }
  }
  else {
    lVar4 = (ulong)uVar3 << 2;
    do {
      if (*piVar1 == param_2) goto LAB__text__004cd41c;
      piVar1 = piVar1 + 1;
      lVar4 = lVar4 + -4;
    } while (lVar4 != 0);
  }
  return;
}


