/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f01e0; name: FUN_.text__004f01e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004f01e0(long *param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  FUN__text__004eb7a4();
  lVar4 = _DAT_008a5130;
  *param_1 = _DAT_008a5130 + 0x10;
  param_1[3] = lVar4 + 0xa0;
  param_1[5] = lVar4 + 200;
  FUN__text__004ed6f4(param_1 + 0xc);
  lVar4 = _DAT_008a5138;
  param_1[0xf] = 0;
  param_1[0x10] = param_3;
  *(undefined4 *)(param_1 + 0x11) = param_4;
  param_1[0xc] = lVar4 + 0x10;
  FUN__text__00458c68(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(byte *)((long)param_1 + 0xac) = *(byte *)((long)param_1 + 0xac) & 0xfc;
  if (param_1[0x10] != 0) {
    piVar1 = (int *)(param_1[0x10] + 0x24);
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


