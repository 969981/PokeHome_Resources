/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c51c0; name: FUN_.text__004c51c0
 */


undefined8
FUN__text__004c51c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  
  for (lVar5 = *(long *)(param_1 + 0x18); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x18)) {
    if ((*(short *)(lVar5 + 0x34) == 0x403) &&
       (plVar4 = (long *)FUN__text__004ba560(lVar5), plVar4 != (long *)0x0)) {
      piVar6 = (int *)((long)plVar4 + 0x24);
      (**(code **)(*plVar4 + 0x78))(plVar4,param_2,param_3,param_4,1,param_5,param_6,param_7);
      do {
        iVar1 = *piVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 + -1 == 0) {
        (**(code **)(plVar4[2] + 0x20))(plVar4 + 2);
      }
    }
  }
  return 1;
}


