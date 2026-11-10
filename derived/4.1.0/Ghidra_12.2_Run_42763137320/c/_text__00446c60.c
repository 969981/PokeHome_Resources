/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00446c60; name: FUN_.text__00446c60
 */


void FUN__text__00446c60(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  if (*(long *)(param_1 + 200) != 0) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  lVar6 = *(long *)(param_1 + 0x230);
  if (lVar6 != 0) {
    if (*(uint *)(param_1 + 0x238) != 0) {
      lVar8 = lVar6 + (ulong)*(uint *)(param_1 + 0x238) * 0x28;
      do {
        plVar7 = *(long **)(lVar6 + 0x18);
        plVar5 = plVar7;
        if (*(int *)(lVar6 + 0x20) != 0) {
          do {
            plVar5 = (long *)*plVar7;
            piVar1 = (int *)((long)plVar5 + 0x14);
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
              (**(code **)(*plVar5 + 0x20))();
            }
            plVar7 = plVar7 + 1;
            plVar5 = *(long **)(lVar6 + 0x18);
          } while (plVar7 != *(long **)(lVar6 + 0x18) + *(uint *)(lVar6 + 0x20));
        }
        if (plVar5 != (long *)0x0) {
          *(undefined4 *)(lVar6 + 0x20) = 0;
          FUN__text__00400fc0(0,plVar5);
          *(undefined8 *)(lVar6 + 0x18) = 0;
          *(undefined4 *)(lVar6 + 0x24) = 0;
        }
        lVar6 = lVar6 + 0x28;
      } while (lVar6 != lVar8);
      lVar6 = *(long *)(param_1 + 0x230);
    }
    *(undefined4 *)(param_1 + 0x238) = 0;
    if (lVar6 != param_1 + 0xf0) {
      FUN__text__00400fc0(0,lVar6);
    }
    *(undefined8 *)(param_1 + 0x230) = 0;
    *(undefined4 *)(param_1 + 0x23c) = 0;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  return;
}


