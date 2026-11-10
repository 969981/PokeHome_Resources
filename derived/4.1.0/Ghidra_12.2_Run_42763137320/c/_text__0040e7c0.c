/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040e7c0; name: FUN_.text__0040e7c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__0040e7c0(undefined4 param_1,undefined4 param_2,ushort param_3,ushort param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined2 uVar5;
  long lVar6;
  
  if (DAT_00ae9ab0 == '\0') {
    return 0x66;
  }
  uVar5 = FUN__text__004af6c0();
  plVar4 = _DAT_008a45c0;
  lVar6 = FUN__text__004b0170(*_DAT_008a45c0,7,uVar5);
  *(undefined4 *)(lVar6 + 4) = param_1;
  *(undefined4 *)(lVar6 + 8) = param_2;
  *(ushort *)(lVar6 + 0xc) = param_3 & 1;
  *(ushort *)(lVar6 + 0xe) = param_4 & 1;
  piVar1 = (int *)(*plVar4 + 0xd4);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return 1;
}


