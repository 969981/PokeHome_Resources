/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049a5e0; name: FUN_.text__0049a5e0
 */


long FUN__text__0049a5e0(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = FUN__text__00400f80(2,0x138);
  if (lVar5 != 0) {
    FUN__text__00499440(lVar5);
    iVar4 = FUN__text__0049ccc8(lVar5);
    if (iVar4 != 1) {
      piVar1 = (int *)(lVar5 + 0x24);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 1) {
        (**(code **)(*(long *)(lVar5 + 0x10) + 0x20))((long *)(lVar5 + 0x10));
      }
      lVar5 = 0;
    }
  }
  return lVar5;
}


