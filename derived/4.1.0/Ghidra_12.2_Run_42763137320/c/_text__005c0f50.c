/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c0f50; name: FUN_.text__005c0f50
 */


void FUN__text__005c0f50(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  
  lVar9 = *param_1;
  lVar8 = *(long *)(lVar9 + 0xd8);
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar10 = *(int *)(lVar8 + 0x54);
    do {
      plVar11 = *(long **)(lVar8 + 0x58);
      plVar7 = (long *)FUN__text__003ead60();
      if (plVar7 != plVar11) {
        do {
          plVar11 = (long *)*plVar11;
        } while (plVar11 != plVar7 && plVar11 != (long *)0x0);
        if (plVar11 == (long *)0x0) {
          return;
        }
      }
      iVar2 = *piVar1;
      if (iVar2 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar8 = *(long *)(lVar8 + 0x60);
          if (lVar8 == 0) {
            return;
          }
          uVar5 = FUN__text__005cd4dc(*(undefined8 *)(lVar8 + 0x60));
          uVar6 = FUN__text__005cd554(*(undefined8 *)(lVar8 + 0x60));
          lVar9 = *(long *)(lVar9 + 0xb0);
          *(undefined2 *)(lVar9 + 0x664) = uVar5;
          *(undefined2 *)(lVar9 + 0x666) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x005c102c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar8 + -8) + 0x18))((long *)(lVar8 + -8));
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar2;
    } while (iVar2 != 0);
  }
  return;
}


