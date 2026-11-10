/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005047d0; name: FUN_.text__005047d0
 */


undefined8
FUN__text__005047d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   int param_5)

{
  ulong uVar1;
  int *piVar2;
  int *piVar3;
  long lVar4;
  uint uVar5;
  
  piVar2 = *(int **)(param_1 + 0xe0);
  uVar5 = *(uint *)(param_1 + 0xe8);
  piVar3 = piVar2;
  if (uVar5 == 0) {
LAB__text__0050482c:
    if (piVar3 != piVar2 + (ulong)uVar5 * 8) {
      piVar3 = piVar3 + 2;
      goto LAB__text__00504890;
    }
  }
  else {
    lVar4 = (ulong)uVar5 << 5;
    do {
      if (*piVar3 == param_5) goto LAB__text__0050482c;
      piVar3 = piVar3 + 8;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  if (*(uint *)(param_1 + 0xec) <= uVar5) {
    uVar1 = FUN__text__00507990();
    if ((uVar1 & 1) == 0) {
      return 2;
    }
    if (*(uint *)(param_1 + 0xec) <= uVar5) {
      return 2;
    }
    uVar5 = *(uint *)(param_1 + 0xe8);
    piVar2 = *(int **)(param_1 + 0xe0);
  }
  *(uint *)(param_1 + 0xe8) = uVar5 + 1;
  if (piVar2 == (int *)0x0) {
    return 2;
  }
  piVar2 = piVar2 + (ulong)uVar5 * 8;
  *piVar2 = param_5;
  piVar2[4] = 0;
  piVar2[5] = 0;
  piVar2[6] = 0;
  piVar2[7] = 0;
  piVar3 = piVar2 + 2;
  piVar3[0] = 0;
  piVar3[1] = 0;
LAB__text__00504890:
  *(undefined8 *)piVar3 = param_2;
  *(undefined8 *)(piVar3 + 2) = param_3;
  *(undefined8 *)(piVar3 + 4) = param_4;
  return 1;
}


