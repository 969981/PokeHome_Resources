/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011bfb0; name: FUN_.text__0011bfb0
 */


void FUN__text__0011bfb0(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  code *UNRECOVERED_JUMPTABLE;
  long lVar6;
  int iVar7;
  long *plVar8;
  
  lVar6 = *(long *)(param_1 + 0x90);
  if (lVar6 != 0) {
    if (*(int *)(lVar6 + 0x54) != 0) {
      piVar1 = (int *)(lVar6 + 0x54);
      iVar7 = *(int *)(lVar6 + 0x54);
      do {
        plVar8 = *(long **)(lVar6 + 0x58);
        plVar5 = (long *)FUN__text__0011c0e8();
        if (plVar5 != plVar8) {
          do {
            plVar8 = (long *)*plVar8;
          } while (plVar8 != plVar5 && plVar8 != (long *)0x0);
          if (plVar8 == (long *)0x0) break;
        }
        iVar2 = *piVar1;
        if (iVar2 == iVar7) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            plVar5 = *(long **)(lVar6 + 0x60);
            if (plVar5 != (long *)0x0) {
              plVar5 = plVar5 + -1;
              (**(code **)(*plVar5 + 0x38))(plVar5,param_1);
            }
            lVar6 = *(long *)(param_1 + 0x90);
            *(undefined8 *)(param_1 + 0x90) = 0;
            goto joined_r0x0011c05c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar7 = iVar2;
      } while (iVar2 != 0);
    }
    plVar5 = (long *)0x0;
    lVar6 = *(long *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = 0;
joined_r0x0011c05c:
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    if (*(long *)(param_1 + 0x90) == 0) goto LAB__text__0011c098;
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
LAB__text__0011c098:
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x18);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0011c0bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + 0x30);
  return;
}


