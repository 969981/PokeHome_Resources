/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042d9c0; name: FUN_.text__0042d9c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0042d9c0(long *param_1,int param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  
  plVar6 = (long *)(**(code **)(*param_1 + 0x80))();
  if ((plVar6 != (long *)0x0) && (lVar8 = *plVar6, lVar8 != 0)) {
    if (*(int *)(lVar8 + 0x38) == param_2) {
      lVar11 = 0;
      lVar12 = lVar8;
    }
    else {
      lVar12 = lVar8;
      do {
        lVar11 = lVar12;
        lVar12 = *(long *)(lVar11 + 0x10);
        if (lVar12 == 0) {
          return;
        }
      } while (*(int *)(lVar12 + 0x38) != param_2);
    }
    if (lVar8 != lVar12) {
      plVar6 = (long *)(lVar11 + 0x10);
    }
    *plVar6 = *(long *)(lVar12 + 0x10);
    FUN__text__00430ec0(*_DAT_008a4658,param_2,lVar12);
    uVar9 = (ulong)*(uint *)(lVar12 + 0x30);
    if (*(uint *)(lVar12 + 0x30) != 0) {
LAB__text__0042dab4:
      lVar8 = uVar9 << 4;
      plVar6 = (long *)(*(int **)(lVar12 + 0x28) + 2);
      iVar3 = **(int **)(lVar12 + 0x28);
LAB__text__0042dac4:
      if ((int)plVar6[-1] != iVar3) goto code_r0x0042dad0;
      if (lVar8 != 0) {
        FUN__text__00432270(*plVar6);
        plVar6 = (long *)*plVar6;
        piVar7 = (int *)((long)plVar6 + 0x14);
        do {
          iVar1 = *piVar7;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
          if (bVar5) {
            *piVar7 = iVar1 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar1 + -1 == 0) {
          (**(code **)(*plVar6 + 0x20))();
        }
        piVar10 = *(int **)(lVar12 + 0x28);
        uVar2 = *(uint *)(lVar12 + 0x30);
        uVar9 = (ulong)uVar2;
        piVar7 = piVar10;
        if (uVar2 == 0) {
LAB__text__0042db50:
          if (piVar7 != piVar10 + (ulong)uVar2 * 4) {
            uVar9 = (ulong)(uVar2 - 1);
            if (piVar7 < piVar10 + uVar9 * 4) {
              memmove(piVar7,piVar7 + 4,
                      (ulong)(uint)((int)(piVar10 + uVar9 * 4) - (int)piVar7) & 0xfffffff0);
              uVar9 = (ulong)(*(int *)(lVar12 + 0x30) - 1);
            }
            *(int *)(lVar12 + 0x30) = (int)uVar9;
          }
        }
        else {
          lVar8 = uVar9 << 4;
          do {
            if (*piVar7 == iVar3) goto LAB__text__0042db50;
            piVar7 = piVar7 + 4;
            lVar8 = lVar8 + -0x10;
          } while (lVar8 != 0);
        }
      }
      goto LAB__text__0042dab0;
    }
LAB__text__0042da64:
    FUN__text__004303d0(lVar12);
    FUN__text__00400fc0(2,lVar12);
    if ((param_3 & 1) != 0) {
      FUN__text__0042d4a0(param_1);
      return;
    }
  }
  return;
code_r0x0042dad0:
  lVar8 = lVar8 + -0x10;
  plVar6 = plVar6 + 2;
  if (lVar8 == 0) goto LAB__text__0042dab0;
  goto LAB__text__0042dac4;
LAB__text__0042dab0:
  if ((int)uVar9 == 0) goto LAB__text__0042da64;
  goto LAB__text__0042dab4;
}


