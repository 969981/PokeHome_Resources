/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00445cb0; name: FUN_.text__00445cb0
 */


void FUN__text__00445cb0(long param_1,long param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(long *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 8) = 1;
  *(long *)(param_1 + 0x20) = param_3;
  *(undefined2 *)(param_1 + 0x28) = 0xff00;
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xf0;
  if (param_2 != 0) {
    FUN__text__004470f0(param_2);
    param_3 = *(long *)(param_1 + 0x20);
  }
  if (param_3 != 0) {
    piVar1 = (int *)(param_3 + 0x24);
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


