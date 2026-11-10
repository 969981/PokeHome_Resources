/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001554a0; name: FUN_.text__001554a0
 */


void FUN__text__001554a0(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  uint *puVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ushort uVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ushort *puVar12;
  long lVar13;
  uint uVar14;
  uint *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  
  piVar8 = (int *)*param_2;
  if (piVar8 == (int *)0x0 || *(uint *)(param_2 + 1) == 0xffffffff) goto LAB__text__00155668;
  puVar12 = (ushort *)((long)piVar8 - (long)*piVar8);
  uVar6 = *puVar12;
  if ((uVar6 < 5) || (uVar10 = (ulong)puVar12[2], uVar10 == 0)) goto LAB__text__00155668;
  puVar1 = (uint *)((long)piVar8 + uVar10);
  lVar11 = (ulong)*(uint *)(param_2 + 1) * 4;
  puVar15 = (uint *)((long)puVar1 + (ulong)*puVar1 + lVar11 + 4);
  piVar2 = (int *)((long)puVar15 + (ulong)*puVar15);
  if (*(ushort *)((long)piVar2 - (long)*piVar2) < 0xb) {
    uVar16 = 0;
    if (8 < uVar6) goto LAB__text__00155540;
LAB__text__00155558:
    lVar17 = 0;
  }
  else {
    uVar16 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[5];
    if (uVar16 == 0) {
      uVar16 = 0;
    }
    else {
      uVar5 = *(uint *)((long)piVar2 + uVar16);
      uVar16 = (ulong)uVar5;
      if (uVar5 == 0xffffffff) goto LAB__text__00155668;
    }
    if (uVar6 < 9) goto LAB__text__00155558;
LAB__text__00155540:
    if ((ulong)puVar12[4] == 0) goto LAB__text__00155558;
    puVar15 = (uint *)((long)piVar8 + (ulong)puVar12[4]);
    lVar17 = (long)puVar15 + (ulong)*puVar15;
  }
  puVar15 = (uint *)(lVar17 + uVar16 * 4 + 4);
  uVar18 = (ulong)*puVar15;
  piVar2 = (int *)((long)puVar15 + uVar18);
  uVar19 = (ulong)*(ushort *)((long)piVar2 + (6 - (long)*piVar2));
  puVar15 = (uint *)((long)piVar2 + uVar19);
  uVar9 = (ulong)*puVar15;
  uVar5 = *(uint *)((long)puVar15 + uVar9);
  if (uVar5 != 0) {
    uVar14 = 0;
    lVar13 = 0;
    do {
      lVar3 = lVar17 + uVar19 + uVar18 + uVar16 * 4 + uVar9 + lVar13;
      uVar20 = (ulong)*(uint *)(lVar3 + 8);
      lVar4 = lVar3 + (uVar20 - (long)*(int *)(lVar3 + uVar20 + 8));
      if ((*(ushort *)(lVar4 + 8) < 5) || (uVar7 = (ulong)*(ushort *)(lVar4 + 0xc), uVar7 == 0)) {
        if (*param_3 == 0) goto LAB__text__0015560c;
      }
      else if (*(long *)(lVar3 + uVar20 + uVar7 + 8) == *param_3) {
LAB__text__0015560c:
        puVar15 = (uint *)((long)puVar1 + lVar11 + (ulong)*puVar1 + 4);
        uVar16 = (ulong)*puVar15;
        piVar2 = (int *)((long)puVar15 + uVar16);
        uVar9 = (ulong)*(ushort *)((long)piVar2 + (6 - (long)*piVar2));
        puVar15 = (uint *)((long)piVar2 + uVar9);
        uVar18 = (ulong)*puVar15;
        if (uVar14 < *(uint *)((long)puVar15 + uVar18)) {
          FUN__text__0015533c(param_1,piVar8,
                              *(undefined4 *)
                               ((long)piVar8 +
                               *puVar1 + uVar16 + uVar9 + uVar18 + lVar13 + lVar11 + uVar10 + 8));
          return;
        }
        break;
      }
      lVar13 = lVar13 + 4;
      uVar14 = uVar14 + 1;
    } while ((ulong)uVar5 * 4 != lVar13);
  }
LAB__text__00155668:
  FUN__text__00155348(param_1);
  return;
}


