/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f3420; name: FUN_.text__004f3420
 */


void FUN__text__004f3420(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  int *piVar8;
  uint uVar9;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN__text__004f3420(*(long *)(param_1 + 0x78),param_2);
  }
  plVar7 = *(long **)(param_1 + 0x120);
  if ((plVar7 != (long *)0x0) && ((int)plVar7[1] != 0)) {
    piVar8 = (int *)*plVar7;
    do {
      piVar3 = (int *)*param_2;
      uVar9 = *(uint *)(param_2 + 1);
      if (uVar9 != 0) {
        piVar5 = piVar3 + (ulong)uVar9 * 6;
        piVar4 = piVar3;
        do {
          while (*piVar4 == *piVar8) {
            if (piVar4 < piVar5 + -6) {
              uVar1 = *(undefined8 *)(piVar5 + -6);
              uVar6 = *(undefined8 *)(piVar5 + -2);
              *(undefined8 *)(piVar4 + 2) = *(undefined8 *)(piVar5 + -4);
              *(undefined8 *)(piVar4 + 4) = uVar6;
              *(undefined8 *)piVar4 = uVar1;
              uVar9 = *(uint *)(param_2 + 1);
              piVar3 = (int *)*param_2;
            }
            uVar9 = uVar9 - 1;
            *(uint *)(param_2 + 1) = uVar9;
            piVar5 = piVar3 + (ulong)uVar9 * 6;
            if (piVar4 == piVar5) goto LAB__text__004f34f8;
          }
          piVar4 = piVar4 + 6;
          piVar5 = piVar3 + (ulong)uVar9 * 6;
        } while (piVar4 != piVar5);
      }
LAB__text__004f34f8:
      if (uVar9 < *(uint *)((long)param_2 + 0xc)) {
LAB__text__004f3524:
        *(uint *)(param_2 + 1) = uVar9 + 1;
        if (piVar3 != (int *)0x0) {
          uVar1 = *(undefined8 *)piVar8;
          piVar3 = piVar3 + (ulong)uVar9 * 6;
          uVar6 = *(undefined8 *)(piVar8 + 4);
          *(undefined8 *)(piVar3 + 2) = *(undefined8 *)(piVar8 + 2);
          *(undefined8 *)(piVar3 + 4) = uVar6;
          *(undefined8 *)piVar3 = uVar1;
        }
      }
      else {
        uVar2 = FUN__text__004f3680(param_2);
        if (((uVar2 & 1) != 0) && (uVar9 < *(uint *)((long)param_2 + 0xc))) {
          uVar9 = *(uint *)(param_2 + 1);
          piVar3 = (int *)*param_2;
          goto LAB__text__004f3524;
        }
      }
      piVar8 = piVar8 + 6;
    } while (piVar8 != (int *)(*plVar7 + (ulong)*(uint *)(plVar7 + 1) * 0x18));
  }
  return;
}


