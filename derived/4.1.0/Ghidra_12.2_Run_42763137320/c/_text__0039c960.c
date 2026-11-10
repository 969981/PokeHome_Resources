/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0039c960; name: FUN_.text__0039c960
 */


/* WARNING: Removing unreachable block (ram,0x0039cab4) */

void FUN__text__0039c960(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  
  lVar8 = *(long *)(param_1 + 0x5a0);
  if (lVar8 == 0) {
    *(undefined8 *)(param_1 + 0x5a0) = 0;
  }
  else {
    if (*(int *)(lVar8 + 0x54) != 0) {
      piVar1 = (int *)(lVar8 + 0x54);
      iVar9 = *(int *)(lVar8 + 0x54);
      do {
        plVar10 = *(long **)(lVar8 + 0x58);
        plVar5 = (long *)FUN__text__0011c0e8();
        if (plVar5 != plVar10) {
          do {
            plVar10 = (long *)*plVar10;
          } while (plVar10 != plVar5 && plVar10 != (long *)0x0);
          if (plVar10 == (long *)0x0) break;
        }
        iVar2 = *piVar1;
        if (iVar2 == iVar9) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            plVar5 = *(long **)(lVar8 + 0x60);
            if (plVar5 != (long *)0x0) {
              plVar5 = plVar5 + -1;
              (**(code **)(*plVar5 + 0x38))(plVar5,param_1 + 0x510);
            }
            lVar8 = *(long *)(param_1 + 0x5a0);
            *(undefined8 *)(param_1 + 0x5a0) = 0;
            goto joined_r0x0039ca1c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar2;
      } while (iVar2 != 0);
    }
    plVar5 = (long *)0x0;
    lVar8 = *(long *)(param_1 + 0x5a0);
    *(undefined8 *)(param_1 + 0x5a0) = 0;
joined_r0x0039ca1c:
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
    }
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  pcVar7 = *(code **)(param_1 + 0x5b0);
  if (pcVar7 != (code *)0x0) {
    do {
      uVar6 = (*pcVar7)(param_1 + 0x5d0);
      if ((uVar6 & 1) == 0) break;
      nn::os::SleepThread(16000000);
      pcVar7 = *(code **)(param_1 + 0x5b0);
    } while (pcVar7 != (code *)0x0);
  }
  nn::oe::LeaveExitRequestHandlingSection();
  do {
    nn::os::SleepThread(16000000);
  } while( true );
}


