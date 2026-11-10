/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ae030; name: FUN_.text__004ae030
 */


undefined8 FUN__text__004ae030(ulong *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  
  *param_1 = 0;
  if (param_2 < 1) {
LAB__text__004ae0b0:
    uVar5 = 1;
  }
  else {
    iVar6 = 0;
    uVar5 = 0x34;
LAB__text__004ae064:
    puVar3 = (ulong *)FUN__text__00400f80(param_3,0x10);
    if (puVar3 != (ulong *)0x0) {
      puVar3[1] = 0;
      do {
        uVar4 = *param_1;
        *puVar3 = uVar4 | 1;
        while (*param_1 == uVar4) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
          if (bVar2) {
            *param_1 = (ulong)puVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') {
            iVar6 = iVar6 + 1;
            if (iVar6 == param_2) goto LAB__text__004ae0b0;
            goto LAB__text__004ae064;
          }
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
  return uVar5;
}


