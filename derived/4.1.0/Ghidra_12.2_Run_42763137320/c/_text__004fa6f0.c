/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fa6f0; name: FUN_.text__004fa6f0
 */


void FUN__text__004fa6f0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  FUN__text__004f5e04(param_1,param_3);
  param_1[0x17] = 0;
  param_1[0xf] = param_2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = 0x8913b8;
  param_1[5] = 0x8914f8;
  param_1[3] = 0x8914d0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfc;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  if (param_2 != 0) {
    piVar1 = (int *)(param_2 + 0x24);
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


