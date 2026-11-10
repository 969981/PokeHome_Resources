/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b8120; name: FUN_.text__004b8120
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004b8120(long param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  lVar5 = FUN__text__004b0170(*_DAT_008a45c0,0x38,0x14);
  uVar2 = *param_2;
  *(undefined8 *)(lVar5 + 0xc) = param_2[1];
  piVar1 = (int *)(param_1 + 0xd4);
  *(undefined8 *)(lVar5 + 4) = uVar2;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return;
}


