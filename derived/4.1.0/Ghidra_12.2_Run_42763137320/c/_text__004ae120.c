/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ae120; name: FUN_.text__004ae120
 */


undefined8 FUN__text__004ae120(ulong *param_1,ulong param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  for (puVar3 = (ulong *)*param_1; puVar3 != (ulong *)0x0;
      puVar3 = (ulong *)(*puVar3 & 0xfffffffffffffffc)) {
    uVar4 = *puVar3;
    while ((uVar4 & 1) != 0) {
      uVar5 = uVar4 & 0xfffffffffffffffc | 2;
      while (*puVar3 == uVar4) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar2) {
          *puVar3 = uVar5;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          puVar3[1] = param_2;
          do {
            while (*puVar3 != uVar5) {
              ClearExclusiveLocal();
            }
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar2) {
              *puVar3 = uVar4 & 0xfffffffffffffffc;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          return 1;
        }
      }
      ClearExclusiveLocal();
      uVar4 = *puVar3;
    }
  }
  puVar3 = (ulong *)FUN__text__00400f80(param_3,0x10);
  if (puVar3 == (ulong *)0x0) {
    return 0x34;
  }
  puVar3[1] = param_2;
  do {
    uVar4 = *param_1;
    *puVar3 = uVar4;
    while (*param_1 == uVar4) {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar2) {
        *param_1 = (ulong)puVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
      if (cVar1 == '\0') {
        return 1;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


