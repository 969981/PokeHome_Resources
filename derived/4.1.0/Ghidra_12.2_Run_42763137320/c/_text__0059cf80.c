/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0059cf80; name: FUN_.text__0059cf80
 */


void FUN__text__0059cf80(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar5 + 0x58) == 0) {
    uVar4 = (**(code **)**(undefined8 **)(lVar5 + 0x60))();
    *(undefined8 *)(lVar5 + 0x58) = uVar4;
  }
  piVar1 = (int *)(lVar5 + 0x54);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


