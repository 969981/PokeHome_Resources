/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042eca0; name: FUN_.text__0042eca0
 */


undefined8 FUN__text__0042eca0(long param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  
  piVar2 = *(int **)(param_1 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x30);
  piVar3 = piVar2;
  if (uVar1 == 0) {
LAB__text__0042ecd4:
    if (piVar3 != piVar2 + (ulong)uVar1 * 4) {
      return *(undefined8 *)(piVar3 + 2);
    }
  }
  else {
    lVar4 = (ulong)uVar1 << 4;
    do {
      if (*piVar3 == param_2) goto LAB__text__0042ecd4;
      piVar3 = piVar3 + 4;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  return 0;
}


