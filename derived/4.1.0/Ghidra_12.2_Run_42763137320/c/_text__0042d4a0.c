/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042d4a0; name: FUN_.text__0042d4a0
 */


void FUN__text__0042d4a0(long *param_1)

{
  ushort *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  long *plVar6;
  undefined2 *puVar7;
  int *piVar8;
  ushort *puVar9;
  ulong uVar10;
  int *piVar11;
  ushort *puVar12;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  uint uVar16;
  ulong uVar17;
  undefined4 uVar18;
  
  plVar6 = (long *)(**(code **)(*param_1 + 0x80))();
  if (plVar6 == (long *)0x0) {
    return;
  }
  lVar14 = *plVar6;
  do {
    if (lVar14 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0042d744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x40))();
      return;
    }
    piVar8 = *(int **)(lVar14 + 0x28);
    uVar16 = *(uint *)(lVar14 + 0x30);
    piVar11 = piVar8;
    if (uVar16 == 0) {
LAB__text__0042d534:
      if ((piVar11 == piVar8 + (ulong)uVar16 * 4) || (*(long *)(piVar11 + 2) == 0))
      goto LAB__text__0042d6b0;
      puVar9 = *(ushort **)(*(long *)(piVar11 + 2) + 0x18);
      if (puVar9 != (ushort *)0x0) {
        uVar4 = *puVar9;
        if ((ulong)uVar4 != 0) {
          puVar1 = puVar9 + uVar4;
          puVar15 = (undefined4 *)((long)puVar9 + ((ulong)((uint)uVar4 * 2 + 5) & 0x3fffc));
          do {
            uVar18 = *puVar15;
            puVar9 = puVar9 + 1;
            uVar4 = *puVar9;
            puVar12 = *(ushort **)(lVar14 + 0x20);
            if (puVar12 == (ushort *)0x0) {
              uVar17 = 0;
            }
            else {
              uVar5 = *puVar12;
              uVar17 = (ulong)uVar5;
              uVar16 = (uint)uVar5;
              if (uVar5 < 2) {
                uVar16 = 1;
              }
              uVar10 = (ulong)uVar16;
              plVar6 = (long *)((long)puVar12 + ((ulong)((uint)uVar5 * 2 + 9) & 0x3fff8) + 8);
              do {
                puVar12 = puVar12 + 1;
                if (*puVar12 == uVar4) {
                  if (*plVar6 == 0) {
                    *(undefined4 *)(plVar6 + -1) = uVar18;
                  }
                  else {
                    FUN__text__0042f65c(uVar18,DAT_00ae9a60,*plVar6,uVar4,0,4,0);
                  }
                  goto LAB__text__0042d598;
                }
                plVar6 = plVar6 + 2;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
            uVar16 = (int)uVar17 + 1;
            uVar3 = uVar16 * 2 + 9 & 0x7fff8;
            puVar7 = (undefined2 *)FUN__text__00400f80(0,uVar3 + uVar16 * 0x10);
            if (puVar7 != (undefined2 *)0x0) {
              if (*(long *)(lVar14 + 0x20) != 0) {
                memcpy(puVar7 + 1,(void *)(*(long *)(lVar14 + 0x20) + 2),uVar17 << 1);
                memcpy((void *)((long)puVar7 + (ulong)uVar3),
                       (void *)(*(long *)(lVar14 + 0x20) + (ulong)((int)uVar17 * 2 + 9U & 0x3fff8)),
                       uVar17 << 4);
                FUN__text__00400fc0(0,*(undefined8 *)(lVar14 + 0x20));
              }
              puVar7[uVar16] = uVar4;
              puVar2 = (undefined4 *)((long)puVar7 + uVar17 * 0x10 + (ulong)uVar3);
              *puVar7 = (short)uVar16;
              *(undefined2 **)(lVar14 + 0x20) = puVar7;
              *puVar2 = uVar18;
              *(undefined8 *)(puVar2 + 2) = 0;
            }
LAB__text__0042d598:
            puVar15 = puVar15 + 1;
          } while (puVar9 != puVar1);
        }
      }
    }
    else {
      lVar13 = (ulong)uVar16 << 4;
      do {
        if (*piVar11 == *(int *)(lVar14 + 0x3c)) goto LAB__text__0042d534;
        piVar11 = piVar11 + 4;
        lVar13 = lVar13 + -0x10;
      } while (lVar13 != 0);
LAB__text__0042d6b0:
      puVar9 = *(ushort **)(lVar14 + 0x20);
      if ((puVar9 != (ushort *)0x0) && ((ulong)*puVar9 != 0)) {
        lVar13 = (ulong)*puVar9 << 1;
        plVar6 = (long *)((long)puVar9 + ((ulong)((int)lVar13 + 9) & 0x3fff8) + 8);
        do {
          if (*plVar6 != 0) {
            FUN__text__0042f5a0(DAT_00ae9a60,*plVar6,lVar14);
            *plVar6 = 0;
            (**(code **)(**(long **)(lVar14 + 0x18) + 0x18))();
          }
          plVar6 = plVar6 + 2;
          lVar13 = lVar13 + -2;
        } while (lVar13 != 0);
      }
    }
    lVar14 = *(long *)(lVar14 + 0x10);
  } while( true );
}


