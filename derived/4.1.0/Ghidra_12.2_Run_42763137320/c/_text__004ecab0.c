/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ecab0; name: FUN_.text__004ecab0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004ecab0(long param_1)

{
  long lVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  ushort uVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  
  *(undefined1 *)(param_1 + 0x94) = 1;
  uVar7 = FUN__text__004f53e0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x80));
  if (*(long **)(param_1 + 0x78) != (long *)0x0) {
    uVar3 = *(undefined4 *)(param_1 + 0x90);
    uVar6 = (**(code **)(**(long **)(param_1 + 0x78) + 0x280))();
    if (uVar6 != 0) {
      uVar12 = 0;
      lVar1 = _DAT_008a5100 + 0x10;
      do {
        lVar9 = FUN__text__004f41b8(*(undefined8 *)(param_1 + 0x78),uVar12);
        if (*(int *)(lVar9 + 300) == 3) {
          for (lVar13 = *(long *)(param_1 + 0x88); lVar13 != 0; lVar13 = *(long *)(lVar13 + 0x70)) {
            if (*(long *)(lVar13 + 0x50) == lVar9) {
              if (*(int *)(lVar9 + 0x110) != 0) {
                uVar8 = 0;
                piVar2 = (int *)(lVar9 + 0x24);
                do {
                  uVar10 = FUN__text__004edb20(lVar13,uVar8);
                  if (((uVar10 & 1) != 0) &&
                     (plVar11 = (long *)FUN__text__00400f80(0,0x38), plVar11 != (long *)0x0)) {
                    *(undefined4 *)(plVar11 + 2) = uVar7;
                    plVar11[3] = lVar9;
                    *(uint *)(plVar11 + 4) = uVar8;
                    *(undefined4 *)((long)plVar11 + 0x24) = 0;
                    *(undefined4 *)(plVar11 + 6) = uVar3;
                    *plVar11 = lVar1;
                    do {
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                      if (bVar5) {
                        *piVar2 = *piVar2 + 1;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    FUN__text__004ed750(param_1 + 0x60,plVar11);
                  }
                  uVar8 = uVar8 + 1;
                } while (uVar8 < *(uint *)(lVar9 + 0x110));
              }
              break;
            }
          }
          FUN__text__004ecd40(param_1,uVar7,lVar9);
        }
        else {
          uVar8 = FUN__text__004ef6d0(lVar9);
          plVar11 = (long *)FUN__text__00400f80(0,0x38);
          if (plVar11 != (long *)0x0) {
            *(undefined4 *)(plVar11 + 2) = uVar7;
            lVar13 = _DAT_008a5100;
            *(uint *)(plVar11 + 4) = uVar8 & 0xffff;
            *(undefined4 *)((long)plVar11 + 0x24) = 0;
            piVar2 = (int *)(lVar9 + 0x24);
            plVar11[3] = lVar9;
            *(undefined4 *)(plVar11 + 6) = uVar3;
            *plVar11 = lVar13 + 0x10;
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = *piVar2 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            FUN__text__004ed750(param_1 + 0x60,plVar11);
          }
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar6);
    }
  }
  return;
}


