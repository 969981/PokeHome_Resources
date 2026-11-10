/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00501ee0; name: FUN_.text__00501ee0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00501ee0(long *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  FUN__text__004f5304(param_1,param_3);
  lVar4 = _DAT_008a5128;
  param_1[0x12] = param_2;
  *param_1 = lVar4 + 0x10;
  param_1[3] = lVar4 + 0x160;
  param_1[5] = lVar4 + 0x188;
  FUN__text__004ff408(param_1 + 0x13);
  *(undefined1 *)(param_1 + 0x1e) = 1;
  if (param_1[0x12] != 0) {
    piVar1 = (int *)(param_1[0x12] + 0x24);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


