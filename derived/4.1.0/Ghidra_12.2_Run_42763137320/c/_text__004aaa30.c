/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004aaa30; name: FUN_.text__004aaa30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004aaa30(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined2 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  char cVar9;
  undefined1 uStack_21;
  
  plVar8 = *(long **)(param_2 + 0x50);
  plVar6 = plVar8;
  if (*(int *)(param_2 + 0x58) != 0) {
    do {
      FUN__text__00411c2c(&uStack_21);
      if (plVar8 != (long *)(*(long *)(param_2 + 0x50) + (ulong)*(uint *)(param_2 + 0x58) * 8)) {
        cVar9 = '\x01';
        do {
          plVar6 = (long *)*plVar8;
          piVar1 = (int *)((long)plVar6 + 0x14);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            (**(code **)(*plVar6 + 0x20))();
          }
          plVar8 = plVar8 + 1;
        } while ((plVar8 != (long *)(*(long *)(param_2 + 0x50) +
                                    (ulong)*(uint *)(param_2 + 0x58) * 8)) &&
                (cVar9 = cVar9 + '\x01', cVar9 != '\0'));
      }
      FUN__text__00411c70(&uStack_21);
      plVar6 = *(long **)(param_2 + 0x50);
    } while (plVar8 != *(long **)(param_2 + 0x50) + *(uint *)(param_2 + 0x58));
  }
  if (plVar6 != (long *)0x0) {
    *(undefined4 *)(param_2 + 0x58) = 0;
    FUN__text__00400fc0(0,plVar6);
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined4 *)(param_2 + 0x5c) = 0;
  }
  *(undefined8 *)(param_2 + 0x40) = param_3;
  *(undefined8 *)(param_2 + 0x48) = param_4;
  *(undefined1 *)(param_2 + 0x30) = 1;
  plVar8 = _DAT_008a45c0;
  lVar7 = *_DAT_008a45c0;
  uVar5 = FUN__text__004af708();
  lVar7 = FUN__text__004b0170(lVar7,0x1a,uVar5);
  *(long *)(lVar7 + 4) = param_2;
  piVar1 = (int *)(*plVar8 + 0xd4);
  do {
    cVar9 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  FUN__text__004b0020(*plVar8,0,0);
  return;
}


