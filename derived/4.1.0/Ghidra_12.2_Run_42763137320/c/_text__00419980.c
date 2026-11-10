/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00419980; name: FUN_.text__00419980
 */


undefined8 FUN__text__00419980(long param_1,long param_2,uint param_3)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *local_50 [2];
  
  lVar1 = param_1 + 0x68;
  uVar6 = FUN__text__0045cf78(lVar1);
  if (((uVar6 & 1) != 0) &&
     (uVar6 = (ulong)*(uint *)(param_1 + 0x1a0), *(uint *)(param_1 + 0x1a0) != 0)) {
    lVar7 = *(long *)(param_1 + 0x198);
    if ((param_3 & 1) == 0) {
      plVar8 = (long *)(lVar7 + 0x10);
      lVar7 = uVar6 << 5;
      do {
        if (*plVar8 == param_2) {
          local_50[0] = (long *)0x0;
          FUN__text__0045cfa0(lVar1,local_50);
          goto LAB__text__00419aa4;
        }
        plVar8 = plVar8 + 4;
        lVar7 = lVar7 + -0x20;
      } while (lVar7 != 0);
    }
    else {
      lVar9 = lVar7;
      do {
        if (*(long *)(lVar9 + 0x10) == param_2) {
          local_50[0] = (long *)0x0;
          FUN__text__0045cfa0(lVar1,local_50);
          uVar6 = FUN__text__004d8e58(lVar9 + 8,*(undefined8 *)(*(long *)(param_1 + 400) + 0x88));
          if ((uVar6 & 1) == 0) {
LAB__text__00419aa4:
            if (local_50[0] != (long *)0x0) {
              piVar2 = (int *)((long)local_50[0] + 0x14);
              do {
                iVar3 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = iVar3 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar3 + -1 == 0) {
                (**(code **)(*local_50[0] + 0x20))();
              }
            }
            return 1;
          }
          if (local_50[0] != (long *)0x0) {
            piVar2 = (int *)((long)local_50[0] + 0x14);
            do {
              iVar3 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar3 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar3 + -1 == 0) {
              (**(code **)(*local_50[0] + 0x20))();
            }
          }
          lVar7 = *(long *)(param_1 + 0x198);
          uVar6 = (ulong)*(uint *)(param_1 + 0x1a0);
        }
        lVar9 = lVar9 + 0x20;
      } while (lVar9 != lVar7 + uVar6 * 0x20);
    }
  }
  return 0;
}


