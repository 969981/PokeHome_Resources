/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004317a0; name: FUN_.text__004317a0
 */


undefined4 FUN__text__004317a0(undefined8 *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  
  piVar2 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar3 = piVar2;
  if (uVar1 == 0) {
LAB__text__004317d4:
    if (piVar3 != piVar2 + (ulong)uVar1 * 4) {
      return *(undefined4 *)(*(long *)(piVar3 + 2) + 4);
    }
  }
  else {
    lVar4 = (ulong)uVar1 << 4;
    do {
      if (*piVar3 == param_2) goto LAB__text__004317d4;
      piVar3 = piVar3 + 4;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  return 0;
}


