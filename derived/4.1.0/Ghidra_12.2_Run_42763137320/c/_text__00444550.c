/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00444550; name: FUN_.text__00444550
 */


void FUN__text__00444550(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  
  if (param_2 != 0) {
    plVar11 = *(long **)(param_1 + 0x80);
    uVar3 = *(uint *)(param_1 + 0x88);
    uVar12 = (ulong)uVar3;
    if (uVar3 != 0) {
      lVar8 = uVar12 << 3;
      plVar7 = plVar11;
      do {
        if (*plVar7 == param_2) {
          return;
        }
        plVar7 = plVar7 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    uVar4 = *(uint *)(param_1 + 0x8c);
    if (uVar3 < uVar4) {
      *(uint *)(param_1 + 0x88) = uVar3 + 1;
      if (plVar11 == (long *)0x0) {
        return;
      }
    }
    else {
      iVar2 = uVar4 + (uVar4 >> 1);
      if (uVar4 == 0) {
        iVar2 = 1;
      }
      uVar4 = iVar2 + uVar4;
      if (plVar11 == (long *)0x0) {
        plVar11 = (long *)FUN__text__00400f80(0,(ulong)uVar4 << 3);
        if (plVar11 == (long *)0x0) {
          return;
        }
        plVar7 = *(long **)(param_1 + 0x80);
        if ((plVar7 != (long *)0x0) && (plVar7 != plVar11)) {
          if (uVar3 != 0) {
            if (uVar3 == 1) {
              uVar9 = 0;
            }
            else {
              uVar10 = 0;
              do {
                uVar9 = uVar10 + 2;
                plVar11[uVar10] = *(long *)(*(long *)(param_1 + 0x80) + uVar10 * 8);
                (plVar11 + uVar10)[1] = *(long *)(*(long *)(param_1 + 0x80) + uVar10 * 8 + 8);
                uVar10 = uVar9;
              } while ((uVar12 & 0xfffffffe) != uVar9);
            }
            if ((uVar3 & 1) != 0) {
              plVar11[uVar9] = *(long *)(*(long *)(param_1 + 0x80) + uVar9 * 8);
            }
            plVar7 = *(long **)(param_1 + 0x80);
          }
          FUN__text__00400fc0(0,plVar7);
        }
      }
      else {
        plVar11 = (long *)FUN__text__00400fa0(0,plVar11);
        if (plVar11 == (long *)0x0) {
          return;
        }
      }
      *(long **)(param_1 + 0x80) = plVar11;
      *(uint *)(param_1 + 0x8c) = uVar4;
      if (uVar4 <= uVar3) {
        return;
      }
      uVar12 = (ulong)*(uint *)(param_1 + 0x88);
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) + 1;
    }
    piVar1 = (int *)(param_2 + 0x24);
    plVar11[uVar12] = param_2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  return;
}


