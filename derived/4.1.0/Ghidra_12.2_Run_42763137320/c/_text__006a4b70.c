/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a4b70; name: FUN_.text__006a4b70
 */


void FUN__text__006a4b70(long param_1,char *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  
  if (*(int *)(param_1 + 0x48) == 0) {
LAB__text__006a4bcc:
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = (long *)(param_1 + 0x40);
    do {
      lVar6 = *plVar7;
      if (lVar6 == param_1 + 0x38) goto LAB__text__006a4bcc;
      plVar7 = (long *)(lVar6 + 8);
      iVar3 = strcmp(param_2,*(char **)(*(long *)(lVar6 + -0x20) + 0x10));
    } while (iVar3 != 0);
    plVar7 = (long *)(lVar6 + -0x20);
  }
  piVar4 = (int *)FUN__text__006c1950(*(undefined8 *)(param_1 + 0x18),
                                      *(undefined8 *)(*plVar7 + 0x10));
  lVar6 = *(long *)(param_1 + 0x18) + (ulong)(uint)piVar4[1];
  piVar8 = *(int **)(param_1 + 0x28);
  if ((piVar8 != (int *)0x0) && (0 < *piVar8)) {
    lVar10 = 0;
    lVar9 = 0x1c;
    do {
      uVar5 = FUN__text__0069a120(lVar6,*(long *)(piVar8 + 2) + lVar9 + -0x1c);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(piVar8 + 2) != 0) {
          uVar2 = *(uint *)(*(long *)(piVar8 + 2) + lVar9);
          piVar8 = (int *)0x0;
          if (((uVar2 != 0) && (lVar10 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar10 != 0))
             && (piVar1 = (int *)(lVar10 + (ulong)uVar2), piVar8 = piVar1 + 0x15,
                *piVar1 != 0x31747063)) {
            piVar8 = (int *)0x0;
          }
          goto LAB__text__006a4c80;
        }
        break;
      }
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0x28;
    } while (lVar10 < *piVar8);
  }
  piVar8 = (int *)0x0;
LAB__text__006a4c80:
  plVar7[3] = lVar6;
  if (piVar8 != (int *)0x0) {
    piVar4 = piVar8;
  }
  plVar7[1] = (long)piVar4;
  return;
}


