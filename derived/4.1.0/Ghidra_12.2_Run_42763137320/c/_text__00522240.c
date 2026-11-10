/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00522240; name: FUN_.text__00522240
 */


undefined8 FUN__text__00522240(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  
  plVar10 = *(long **)(param_1 + 0x408);
  uVar5 = *(uint *)(param_1 + 0x410);
  uVar11 = (ulong)uVar5;
  plVar7 = plVar10;
  if (uVar5 == 0) {
LAB__text__005222a0:
    if (plVar7 != plVar10 + (ulong)uVar5 * 2) {
      return 1;
    }
  }
  else {
    lVar9 = uVar11 << 4;
    do {
      if (*plVar7 == param_2 && plVar7[1] == param_3) goto LAB__text__005222a0;
      plVar7 = plVar7 + 2;
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != 0);
  }
  uVar6 = *(uint *)(param_1 + 0x414);
  if (uVar5 < uVar6) {
    *(uint *)(param_1 + 0x410) = uVar5 + 1;
    if (plVar10 == (long *)0x0) {
      return 2;
    }
  }
  else {
    iVar1 = uVar6 + (uVar6 >> 1);
    if (uVar6 == 0) {
      iVar1 = 1;
    }
    uVar6 = iVar1 + uVar6;
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)FUN__text__00400f80(10,(ulong)uVar6 << 4);
      if (plVar10 == (long *)0x0) {
        return 2;
      }
      plVar7 = *(long **)(param_1 + 0x408);
      if ((plVar7 != (long *)0x0) && (plVar7 != plVar10)) {
        if (uVar5 != 0) {
          if (uVar5 == 1) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0;
            lVar9 = 0x10;
            plVar7 = plVar10 + 2;
            do {
              uVar8 = uVar8 + 2;
              lVar2 = *(long *)(param_1 + 0x408) + lVar9;
              lVar4 = *(long *)(lVar2 + -8);
              plVar7[-2] = *(long *)(lVar2 + -0x10);
              plVar7[-1] = lVar4;
              plVar3 = (long *)(*(long *)(param_1 + 0x408) + lVar9);
              lVar9 = lVar9 + 0x20;
              lVar2 = plVar3[1];
              *plVar7 = *plVar3;
              plVar7[1] = lVar2;
              plVar7 = plVar7 + 4;
            } while ((uVar11 & 0xfffffffe) != uVar8);
          }
          if ((uVar5 & 1) != 0) {
            plVar7 = (long *)(*(long *)(param_1 + 0x408) + uVar8 * 0x10);
            lVar9 = plVar7[1];
            plVar10[uVar8 * 2] = *plVar7;
            (plVar10 + uVar8 * 2)[1] = lVar9;
          }
          plVar7 = *(long **)(param_1 + 0x408);
        }
        FUN__text__00400fc0(10,plVar7);
      }
    }
    else {
      plVar10 = (long *)FUN__text__00400fa0(10,plVar10);
      if (plVar10 == (long *)0x0) {
        return 2;
      }
    }
    *(long **)(param_1 + 0x408) = plVar10;
    *(uint *)(param_1 + 0x414) = uVar6;
    if (uVar6 <= uVar5) {
      return 2;
    }
    uVar11 = (ulong)*(uint *)(param_1 + 0x410);
    *(uint *)(param_1 + 0x410) = *(uint *)(param_1 + 0x410) + 1;
  }
  plVar10[uVar11 * 2] = param_2;
  (plVar10 + uVar11 * 2)[1] = param_3;
  return 1;
}


