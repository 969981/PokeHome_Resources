/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00449800; name: FUN_.text__00449800
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00449800(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  int iVar7;
  int *piVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  
  puVar9 = _DAT_008a4768;
  piVar8 = _DAT_008a3828;
  lVar15 = *(long *)(_DAT_008a46a8 + 0x10);
  if (lVar15 != 0) {
    lVar1 = _DAT_008a3f88 + 0x10;
    do {
      plVar10 = *(long **)(*(long *)(lVar15 + 8) + 0x10);
      if ((plVar10 == (long *)0x0) && (plVar10 = (long *)*puVar9, plVar10 == (long *)0x0)) {
        plVar10 = (long *)FUN__text__00400f80(4,0xf0);
        if (plVar10 != (long *)0x0) {
          plVar10[1] = 0;
          plVar10[2] = 0;
          piVar5 = *(int **)(piVar8 + 2);
          lVar6 = *(long *)(piVar8 + 4);
          iVar7 = *piVar8;
          plVar10[3] = (long)piVar5;
          *(long **)(piVar8 + 2) = plVar10;
          piVar4 = piVar8;
          if (lVar6 != 0) {
            piVar4 = piVar5;
          }
          *(long **)(piVar4 + 4) = plVar10;
          *(undefined2 *)(plVar10 + 0x1c) = 0x101;
          plVar10[8] = 0;
          plVar10[9] = 0;
          plVar10[0xc] = 0;
          plVar10[0xd] = 0;
          *piVar8 = iVar7 + 1;
          *plVar10 = lVar1;
          plVar10[0x12] = 0;
          plVar10[0x13] = 0;
          plVar10[0x16] = 0;
          plVar10[0x17] = 0;
          plVar10[0x1a] = 0;
          plVar10[0x1b] = 0;
        }
        *puVar9 = plVar10;
      }
      if ((*(uint *)(param_2 + 0x18) != 0) && (*(uint *)(plVar10 + 0x1b) != 0)) {
        puVar11 = *(ulong **)(param_2 + 0x10);
        puVar2 = puVar11 + *(uint *)(param_2 + 0x18);
        puVar12 = (ulong *)plVar10[0x1a];
        puVar3 = puVar12 + *(uint *)(plVar10 + 0x1b);
        do {
          uVar13 = *puVar11;
          uVar14 = *puVar12;
          if (uVar13 == uVar14) {
            *(byte *)(lVar15 + 0x7c) = *(byte *)(lVar15 + 0x7c) | 1;
            break;
          }
          puVar11 = puVar11 + (uVar14 > uVar13);
          puVar12 = puVar12 + (uVar14 <= uVar13);
        } while (puVar11 != puVar2 && puVar12 != puVar3);
      }
      lVar15 = *(long *)(lVar15 + 0x10);
    } while (lVar15 != 0);
  }
  return;
}


