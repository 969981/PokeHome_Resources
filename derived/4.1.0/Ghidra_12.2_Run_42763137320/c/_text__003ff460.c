/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ff460; name: FUN_.text__003ff460
 */


void FUN__text__003ff460(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined8 *puVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  ulong uVar13;
  
  iVar8 = -1;
  do {
    iVar5 = iVar8;
    iVar8 = iVar5 + 1;
    uVar2 = -1 << (ulong)(*(int *)(param_1 + 0x314) + iVar5 + 2U & 0x1f);
  } while ((param_3 & (uVar2 ^ 0xffffffff)) == 0);
  uVar1 = *(int *)(param_1 + 0x314) + iVar8;
  uVar13 = (ulong)(iVar5 + 2U);
  uVar3 = 1 << (ulong)(uVar1 & 0x1f);
  if (((uVar3 & param_3) == 0) || ((param_3 & (-1 << (ulong)(uVar1 & 0x1f) ^ 0xffffffffU)) == 0)) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)
             (*(long *)(param_1 + 0x300) + (ulong)(uVar3 + param_2 + (uVar2 & param_3)));
    if (*(long *)(param_1 + 0x300) != 0) {
      *puVar6 = 0;
    }
  }
  piVar4 = (int *)FUN__text__003ff680(param_1,iVar8,puVar6,param_2,param_3);
  if (iVar5 + 2U < *(int *)(param_1 + 0x318) - 1U) {
    do {
      uVar2 = 1 << (ulong)(*(int *)(param_1 + 0x314) + (int)uVar13 & 0x1f);
      if (param_3 <= uVar2) break;
      if ((uVar2 & param_3) == 0) {
        if ((piVar4 != (int *)0x0) && ((*(int *)(param_1 + 0x30c) - param_3 & uVar2) != 0)) {
          piVar7 = (int *)(param_1 + uVar13 * 0x18);
          piVar9 = piVar7 + 4;
          piVar11 = *(int **)piVar9;
          if (piVar11 == (int *)0x0) {
            piVar10 = (int *)0x0;
LAB__text__003ff5a8:
            piVar4[0] = 0;
            piVar4[1] = 0;
            if (piVar10 != (int *)0x0) {
              piVar9 = piVar10;
            }
            *(int **)piVar9 = piVar4;
            piVar9 = piVar7 + 2;
LAB__text__003ff614:
            *(int **)piVar9 = piVar4;
            iVar8 = 1;
            piVar4 = (int *)0x0;
          }
          else {
            if (piVar4 < piVar11) {
              piVar10 = (int *)0x0;
              piVar12 = piVar11;
            }
            else {
              piVar12 = piVar11;
              do {
                piVar10 = piVar12;
                piVar12 = *(int **)piVar10;
                if (piVar12 == (int *)0x0) goto LAB__text__003ff5a8;
              } while (piVar12 <= piVar4);
            }
            if ((long)piVar12 - (long)piVar4 != (ulong)uVar2) {
              *(int **)piVar4 = piVar12;
              if (piVar10 != (int *)0x0) {
                piVar9 = piVar10;
              }
              goto LAB__text__003ff614;
            }
            if (piVar11 != piVar12) {
              piVar9 = piVar10;
            }
            *(undefined8 *)piVar9 = *(undefined8 *)piVar12;
            if (*(int **)(piVar7 + 2) == piVar12) {
              *(int **)(piVar7 + 2) = piVar10;
              iVar8 = -1;
            }
            else {
              iVar8 = -1;
            }
          }
          *piVar7 = *piVar7 + iVar8;
        }
      }
      else {
        piVar4 = (int *)FUN__text__003ff680(param_1,uVar13 & 0xffffffff,piVar4,param_2,param_3);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(int *)(param_1 + 0x318) - 1);
  }
  if (piVar4 == (int *)0x0) {
    return;
  }
  FUN__text__003ff7f0(param_1,uVar13 & 0xffffffff);
  return;
}


