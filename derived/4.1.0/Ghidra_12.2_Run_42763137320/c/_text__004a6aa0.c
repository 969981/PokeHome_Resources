/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a6aa0; name: FUN_.text__004a6aa0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004a6aa0(undefined8 param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined1 uStack_51;
  
  lVar9 = *_DAT_008a45c8;
  piVar1 = (int *)(lVar9 + 0x168);
  FUN__text__00411c2c(&uStack_51);
  FUN__text__00411760(piVar1);
  if (*(int *)(lVar9 + 0x1d0) != 0) {
    plVar8 = (long *)**(undefined8 **)(lVar9 + 0x1c8);
    if (plVar8 == (long *)0x0) {
      uVar10 = 0;
      do {
        if (*(int *)(lVar9 + 0x1d0) - 1 == uVar10) goto LAB__text__004a6c34;
        plVar8 = (long *)(*(undefined8 **)(lVar9 + 0x1c8))[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (plVar8 == (long *)0x0);
    }
    else {
      uVar10 = 0;
    }
    do {
      if ((int)plVar8[4] == 0) {
        plVar11 = (long *)plVar8[1];
        if (plVar11 == (long *)0x0) {
          do {
            uVar3 = (int)uVar10 + 1;
            uVar10 = (ulong)uVar3;
            if (*(uint *)(lVar9 + 0x1d0) <= uVar3) goto LAB__text__004a6c34;
            plVar11 = *(long **)(*(long *)(lVar9 + 0x1c8) + (ulong)uVar3 * 8);
          } while (plVar11 == (long *)0x0);
        }
        uVar10 = uVar10 & 0xffffffff;
      }
      else {
        piVar2 = (int *)((long)plVar8 + 0x14);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = *piVar2 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((int)plVar8[4] != 0) {
          *(undefined4 *)(plVar8 + 4) = 0;
          FUN__text__004a6890(param_1,plVar8);
          do {
            iVar4 = *piVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = iVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar4 + -1 == 0) {
            (**(code **)(*plVar8 + 0x20))(plVar8);
          }
        }
        plVar11 = (long *)plVar8[1];
        if (plVar11 == (long *)0x0) {
          uVar5 = *(uint *)(lVar9 + 0x1d0);
          uVar3 = uVar5;
          if (uVar5 <= (int)uVar10 + 1U) {
            uVar3 = (int)uVar10 + 1;
          }
          uVar12 = (ulong)uVar3;
          do {
            uVar3 = (int)uVar10 + 1;
            uVar10 = (ulong)uVar3;
            if (uVar5 <= uVar3) {
              plVar11 = (long *)0x0;
              goto LAB__text__004a6be0;
            }
            plVar11 = *(long **)(*(long *)(lVar9 + 0x1c8) + (ulong)uVar3 * 8);
          } while (plVar11 == (long *)0x0);
        }
        uVar12 = uVar10 & 0xffffffff;
LAB__text__004a6be0:
        do {
          iVar4 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = iVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        uVar10 = uVar12;
        if (iVar4 + -1 == 0) {
          (**(code **)(*plVar8 + 0x20))(plVar8);
        }
      }
      plVar8 = plVar11;
    } while (plVar8 != (long *)0x0);
  }
LAB__text__004a6c34:
  do {
    iVar4 = *piVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar7) {
      *piVar1 = iVar4 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar4 == -1) {
    *(undefined8 *)(lVar9 + 0x170) = 0;
  }
  nn::os::UnlockMutex((MutexType *)(lVar9 + 0x178));
  FUN__text__00411c70(&uStack_51);
  return;
}


