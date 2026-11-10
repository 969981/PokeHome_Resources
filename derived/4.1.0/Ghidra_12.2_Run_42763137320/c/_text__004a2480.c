/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a2480; name: FUN_.text__004a2480
 */


void FUN__text__004a2480(long param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  char cVar14;
  undefined1 uStack_41;
  
  FUN__text__004a6aa0();
  FUN__text__004a6db0(param_1);
  if (*(int *)(param_1 + 0xb0) != 0) {
    lVar10 = **(long **)(param_1 + 0xa8);
    if (lVar10 == 0) {
      uVar7 = 0;
      do {
        if (*(int *)(param_1 + 0xb0) - 1 == uVar7) {
          return;
        }
        lVar10 = (*(long **)(param_1 + 0xa8))[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (lVar10 == 0);
    }
    else {
      uVar7 = 0;
    }
    uVar12 = uVar7 & 0xffffffff;
    do {
      lVar8 = *(long *)(lVar10 + 0x10);
      lVar13 = lVar8;
      if (lVar8 == 0) {
        uVar3 = *(uint *)(param_1 + 0xb0);
        if (uVar3 <= (int)uVar7 + 1U) {
          uVar3 = (int)uVar7 + 1;
        }
        uVar12 = (ulong)uVar3;
        uVar9 = uVar7 & 0xffffffff;
        do {
          if (uVar3 - 1 == (int)uVar9) {
            lVar13 = 0;
            goto LAB__text__004a2550;
          }
          uVar9 = (ulong)((int)uVar9 + 1);
          lVar13 = *(long *)(*(long *)(param_1 + 0xa8) + uVar9 * 8);
        } while (lVar13 == 0);
        uVar12 = uVar9;
      }
LAB__text__004a2550:
      *(long *)(*(long *)(param_1 + 0xa8) + (uVar7 & 0xffffffff) * 8) = lVar8;
      *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
      plVar11 = *(long **)(lVar10 + 0x50);
      plVar6 = plVar11;
      if (*(int *)(lVar10 + 0x58) != 0) {
        do {
          FUN__text__00411c2c(&uStack_41);
          if (plVar11 != (long *)(*(long *)(lVar10 + 0x50) + (ulong)*(uint *)(lVar10 + 0x58) * 8)) {
            cVar14 = '\x01';
            do {
              plVar6 = (long *)*plVar11;
              piVar1 = (int *)((long)plVar6 + 0x14);
              do {
                iVar2 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar2 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar2 + -1 == 0) {
                (**(code **)(*plVar6 + 0x20))();
              }
              plVar11 = plVar11 + 1;
            } while ((plVar11 !=
                      (long *)(*(long *)(lVar10 + 0x50) + (ulong)*(uint *)(lVar10 + 0x58) * 8)) &&
                    (cVar14 = cVar14 + '\x01', cVar14 != '\0'));
          }
          FUN__text__00411c70(&uStack_41);
          plVar6 = *(long **)(lVar10 + 0x50);
        } while (plVar11 != *(long **)(lVar10 + 0x50) + *(uint *)(lVar10 + 0x58));
      }
      if (plVar6 != (long *)0x0) {
        *(undefined4 *)(lVar10 + 0x58) = 0;
        FUN__text__00400fc0(0,plVar6);
        *(undefined8 *)(lVar10 + 0x50) = 0;
        *(undefined4 *)(lVar10 + 0x5c) = 0;
      }
      FUN__text__004a1bc0(lVar10,1);
      uVar7 = uVar12;
      lVar10 = lVar13;
    } while (lVar13 != 0);
  }
  return;
}


