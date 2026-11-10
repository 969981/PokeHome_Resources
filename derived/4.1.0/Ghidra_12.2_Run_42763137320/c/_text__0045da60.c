/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045da60; name: FUN_.text__0045da60
 */


void FUN__text__0045da60(undefined8 param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  int *piVar10;
  long alStack_440 [128];
  
  uVar5 = DAT_00aea6c0;
  if (DAT_00aea6c0 != 0) {
    lVar4 = -0x40 - ((long)(int)DAT_00aea6c0 * 8 + 0xfU & 0xfffffffffffffff0);
    lVar6 = 0;
    plVar8 = DAT_00aea6b8;
    do {
      lVar7 = *plVar8;
      *(long *)((long)alStack_440 + lVar6 * 8 + lVar4 + 0x440) = lVar7;
      piVar10 = (int *)(lVar7 + 0x24);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar3) {
          *piVar10 = *piVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar8 = plVar8 + 1;
      lVar6 = lVar6 + 1;
    } while (plVar8 != DAT_00aea6b8 + DAT_00aea6c0);
    if (0 < (int)uVar5) {
      uVar9 = 0;
      do {
        plVar8 = *(long **)((long)alStack_440 + uVar9 * 8 + lVar4 + 0x440);
        piVar10 = (int *)((long)plVar8 + 0x24);
        (**(code **)(*plVar8 + 0xa0))(plVar8,param_1);
        do {
          iVar1 = *piVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar3) {
            *piVar10 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar1 + -1 == 0) {
          (**(code **)(plVar8[2] + 0x20))(plVar8 + 2);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar5);
    }
  }
  return;
}


