/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004bd0b0; name: FUN_.text__004bd0b0
 */


undefined8
FUN__text__004bd0b0(long *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int *piVar5;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined1 local_50;
  undefined8 local_48;
  
  plVar4 = (long *)FUN__text__004ba560();
  if (plVar4 == (long *)0x0) {
    return 0xf;
  }
  local_48 = 0;
  local_50 = 0;
  local_58 = *(byte *)((long)param_1 + 0x36) & 0x1f;
  uStack_54 = 0;
  local_70[0] = param_2;
  local_68 = param_3;
  local_60 = param_4;
  local_5c = FUN__text__004ba030(param_1);
  (**(code **)(*param_1 + 0x70))(param_1,local_70);
  piVar5 = (int *)((long)plVar4 + 0x24);
  (**(code **)(*plVar4 + 0x90))(plVar4,local_70);
  do {
    iVar1 = *piVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
    if (bVar3) {
      *piVar5 = iVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar1 + -1 == 0) {
    (**(code **)(plVar4[2] + 0x20))(plVar4 + 2);
  }
  return 1;
}


