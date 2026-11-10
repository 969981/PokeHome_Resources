/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fedb0; name: FUN_.text__004fedb0
 */


long * FUN__text__004fedb0(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  undefined2 uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar5 = *(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x30) < 2) {
    if ((uVar5 & 0xffff) == 0) {
      return (long *)0x0;
    }
    plVar8 = (long *)FUN__text__00400f80(0,0x10);
    if (plVar8 != (long *)0x0) {
      FUN__text__004ce070(plVar8);
    }
  }
  else {
    if ((1 < *(uint *)(param_1 + 0x30) - 2) || ((uVar5 & 0xffff) == 0)) {
      return (long *)0x0;
    }
    uVar6 = *(undefined2 *)(param_1 + 0x38);
    plVar8 = (long *)FUN__text__00400f80(0,0x38);
    if (plVar8 != (long *)0x0) {
      FUN__text__004cd54c(plVar8,uVar5);
      iVar7 = FUN__text__004cd580(plVar8,uVar6);
      if (iVar7 != 1) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        return (long *)0x0;
      }
      if (*(char *)(param_1 + 0x34) != '\0') {
        if (*(uint *)(param_1 + 0x28) == 0) {
          *(undefined4 *)(plVar8 + 1) = 0;
          *(undefined4 *)((long)plVar8 + 0xc) = 0;
          return plVar8;
        }
        plVar9 = *(long **)(param_1 + 0x20);
        uVar11 = (ulong)*(uint *)(param_1 + 0x28) - 1 & 0x1fffffffffffffff;
        uVar12 = uVar11 + 1;
        uVar10 = uVar12 & 3;
        if (uVar11 < 3) {
          iVar7 = 0;
        }
        else {
          iVar7 = 0;
          uVar12 = uVar12 & 0x3ffffffffffffffc;
          do {
            lVar2 = *plVar9;
            plVar3 = plVar9 + 1;
            uVar12 = uVar12 - 4;
            plVar1 = plVar9 + 2;
            plVar4 = plVar9 + 3;
            plVar9 = plVar9 + 4;
            iVar7 = *(int *)(*plVar4 + 0x1c) +
                    *(int *)(*plVar1 + 0x1c) + *(int *)(*plVar3 + 0x1c) +
                    *(int *)(lVar2 + 0x1c) + iVar7;
          } while (uVar12 != 0);
        }
        for (; uVar10 != 0; uVar10 = uVar10 - 1) {
          iVar7 = *(int *)(*plVar9 + 0x1c) + iVar7;
          plVar9 = plVar9 + 1;
        }
        *(int *)(plVar8 + 1) = iVar7;
        *(int *)((long)plVar8 + 0xc) = iVar7;
        return plVar8;
      }
    }
  }
  return plVar8;
}


