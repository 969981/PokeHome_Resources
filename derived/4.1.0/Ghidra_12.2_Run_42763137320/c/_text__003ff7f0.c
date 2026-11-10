/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ff7f0; name: FUN_.text__003ff7f0
 */


void FUN__text__003ff7f0(long param_1,ulong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  ulong uVar8;
  int *piVar9;
  int *piVar10;
  
LAB__text__003ff7f8:
  uVar8 = param_2 & 0xffffffff;
  do {
    piVar4 = (int *)(param_1 + uVar8 * 0x18);
    piVar6 = piVar4 + 4;
    piVar7 = *(int **)piVar6;
    if (piVar7 == (int *)0x0 || param_3 < piVar7) {
      piVar5 = (int *)0x0;
      piVar9 = piVar7;
    }
    else {
      piVar9 = piVar7;
      do {
        piVar5 = piVar9;
        piVar9 = *(int **)piVar5;
      } while (piVar9 != (int *)0x0 && piVar9 <= param_3);
    }
    if (*(int *)(param_1 + 0x318) - 1 <= uVar8) {
      *(int **)param_3 = piVar9;
      if (piVar5 != (int *)0x0) {
        piVar6 = piVar5;
      }
      *(int **)piVar6 = param_3;
      if (piVar9 != (int *)0x0) {
        *piVar4 = *piVar4 + 1;
        return;
      }
LAB__text__003ff9a8:
      *(int **)(piVar4 + 2) = param_3;
      *piVar4 = *piVar4 + 1;
      return;
    }
    iVar1 = *(int *)(param_1 + 0x314);
    param_2 = uVar8 + 1;
    iVar2 = 1 << (ulong)(iVar1 + (int)param_2 & 0x1f);
    if (((piVar5 != (int *)0x0) && ((iVar2 - 1U & (int)piVar5 - *(int *)(param_1 + 0x300)) == 0)) &&
       ((long)param_3 - (long)piVar5 == (ulong)(uint)(1 << (ulong)(iVar1 + (int)uVar8 & 0x1f))))
    break;
    if (piVar9 == (int *)0x0) {
      param_3[0] = 0;
      param_3[1] = 0;
      if (piVar5 != (int *)0x0) {
        piVar6 = piVar5;
      }
      *(int **)piVar6 = param_3;
      goto LAB__text__003ff9a8;
    }
    if (((iVar2 - 1U & (int)param_3 - *(int *)(param_1 + 0x300)) != 0) ||
       ((long)piVar9 - (long)param_3 != (ulong)(uint)(1 << (ulong)(iVar1 + (int)uVar8 & 0x1f)))) {
      *(int **)param_3 = piVar9;
      if (piVar5 != (int *)0x0) {
        piVar6 = piVar5;
      }
      *(int **)piVar6 = param_3;
      *piVar4 = *piVar4 + 1;
      return;
    }
    if (piVar7 != piVar9) {
      piVar6 = piVar5;
    }
    *(undefined8 *)piVar6 = *(undefined8 *)piVar9;
    if (*(int **)(piVar4 + 2) == piVar9) {
      *(int **)(piVar4 + 2) = piVar5;
    }
    *piVar4 = *piVar4 + -1;
    uVar8 = param_2;
  } while( true );
  piVar9 = piVar6;
  piVar3 = (int *)0x0;
  do {
    piVar10 = piVar3;
    piVar9 = *(int **)piVar9;
    piVar3 = piVar9;
  } while (piVar9 != (int *)0x0 && piVar9 != piVar5);
  param_3 = piVar5;
  if (piVar9 != (int *)0x0) {
    if (piVar7 != piVar9) {
      piVar6 = piVar10;
    }
    *(undefined8 *)piVar6 = *(undefined8 *)piVar9;
    if (*(int **)(piVar4 + 2) == piVar9) {
      *(int **)(piVar4 + 2) = piVar10;
    }
    *piVar4 = *piVar4 + -1;
  }
  goto LAB__text__003ff7f8;
}


