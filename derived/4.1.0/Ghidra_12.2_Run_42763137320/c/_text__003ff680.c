/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ff680; name: FUN_.text__003ff680
 */


int * FUN__text__003ff680(long param_1,uint param_2,long param_3,int param_4,uint param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar1 = (int *)(*(long *)(param_1 + 0x300) +
                  (ulong)((-1 << (ulong)(*(int *)(param_1 + 0x314) + param_2 + 1 & 0x1f) & param_5)
                         + param_4));
  if (*(long *)(param_1 + 0x300) != 0) {
    piVar1[0] = 0;
    piVar1[1] = 0;
  }
  if (param_3 != 0) {
    return piVar1;
  }
  if ((*(int *)(param_1 + 0x318) - 1U <= param_2) ||
     (param_5 <= (uint)(1 << (ulong)(*(int *)(param_1 + 0x314) + param_2 + 1 & 0x1f)))) {
    FUN__text__003ff7f0(param_1,param_2,piVar1);
    return (int *)0x0;
  }
  piVar2 = (int *)(param_1 + (ulong)param_2 * 0x18);
  piVar3 = piVar2 + 4;
  piVar5 = *(int **)piVar3;
  if (piVar5 == (int *)0x0) {
    piVar4 = (int *)0x0;
LAB__text__003ff730:
    piVar1[0] = 0;
    piVar1[1] = 0;
    if (piVar4 != (int *)0x0) {
      piVar3 = piVar4;
    }
    *(int **)piVar3 = piVar1;
    piVar3 = piVar2 + 2;
  }
  else {
    if (piVar1 < piVar5) {
      piVar4 = (int *)0x0;
      piVar6 = piVar5;
    }
    else {
      piVar6 = piVar5;
      do {
        piVar4 = piVar6;
        piVar6 = *(int **)piVar4;
        if (piVar6 == (int *)0x0) goto LAB__text__003ff730;
      } while (piVar6 <= piVar1);
    }
    if ((long)piVar6 - (long)piVar1 ==
        (ulong)(uint)(1 << (ulong)(*(int *)(param_1 + 0x314) + param_2 & 0x1f))) {
      if (piVar5 != piVar6) {
        piVar3 = piVar4;
      }
      *(undefined8 *)piVar3 = *(undefined8 *)piVar6;
      if (*(int **)(piVar2 + 2) == piVar6) {
        *(int **)(piVar2 + 2) = piVar4;
      }
      *piVar2 = *piVar2 + -1;
      return piVar1;
    }
    *(int **)piVar1 = piVar6;
    if (piVar4 != (int *)0x0) {
      piVar3 = piVar4;
    }
  }
  *(int **)piVar3 = piVar1;
  *piVar2 = *piVar2 + 1;
  return (int *)0x0;
}


