/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b8bb0; name: FUN_.text__006b8bb0
 */


void FUN__text__006b8bb0(undefined8 *param_1,long param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  long *plVar7;
  long lVar8;
  
  if (*(char *)(param_1 + 0x13) == '\0') {
    lVar8 = *(long *)(*(long *)(param_2 + 0xb8) + 0x68);
    uVar3 = FUN__text__006c1bd0(param_2,*param_1);
    uVar4 = *param_1;
    *(undefined4 *)((long)param_1 + (ulong)param_3 * 4 + 0x9c) = uVar3;
    uVar3 = FUN__text__006c1bd0(param_2,uVar4);
    *(undefined4 *)((long)param_1 + (ulong)param_3 * 4 + 0xa8) = uVar3;
    pbVar6 = *(byte **)(param_2 + 200);
    uVar5 = lVar8 + 0xdfU & -lVar8;
    if ((*pbVar6 & 1) == 0) {
      lVar8 = *(long *)(pbVar6 + 0x40);
      *(ulong *)(pbVar6 + 0x40) = lVar8 + uVar5;
    }
    else {
      plVar7 = *(long **)(pbVar6 + 0x40);
      do {
        lVar8 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar8 + uVar5;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    *(int *)((long)param_1 + (ulong)param_3 * 4 + 0xc0) = (int)lVar8;
  }
  if (((param_1[0xb] != 0) && ((*(byte *)(param_1 + 0x45) >> 2 & 1) == 0)) &&
     ((*(byte *)(param_1[0xb] + 8) >> 5 & 1) != 0)) {
    uVar3 = FUN__text__006c1bd0(param_2,*param_1);
    *(undefined4 *)((long)param_1 + (ulong)param_3 * 4 + 0xb4) = uVar3;
  }
  return;
}


