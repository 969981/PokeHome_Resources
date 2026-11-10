/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004880f0; name: FUN_.text__004880f0
 */


int * FUN__text__004880f0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  uint uVar5;
  
  piVar3 = (int *)*param_1;
  uVar5 = *(uint *)(param_1 + 1);
  piVar1 = piVar3;
  if (uVar5 == 0) {
LAB__text__00488150:
    if (piVar1 != piVar3 + (ulong)uVar5 * 4) goto LAB__text__004881a4;
  }
  else {
    lVar4 = (ulong)uVar5 << 4;
    do {
      if (*piVar1 == (int)param_2 && piVar1[1] == (int)((ulong)param_2 >> 0x20))
      goto LAB__text__00488150;
      piVar1 = piVar1 + 4;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  if (*(uint *)((long)param_1 + 0xc) <= uVar5) {
    uVar2 = FUN__text__0048b5a0(param_1);
    if ((uVar2 & 1) == 0) {
      return (int *)0x0;
    }
    if (*(uint *)((long)param_1 + 0xc) <= uVar5) {
      return (int *)0x0;
    }
    uVar5 = *(uint *)(param_1 + 1);
    piVar3 = (int *)*param_1;
  }
  *(uint *)(param_1 + 1) = uVar5 + 1;
  if (piVar3 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar1 = piVar3 + (ulong)uVar5 * 4;
  *(undefined8 *)piVar1 = param_2;
LAB__text__004881a4:
  *(undefined8 *)(piVar1 + 2) = *param_3;
  return piVar1 + 2;
}


