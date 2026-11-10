/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b9200; name: FUN_.text__004b9200
 */


void FUN__text__004b9200(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  piVar1 = (int *)(param_2 + 0x14);
  *(long *)(param_1 + 0xe0) = param_2;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  iVar4 = (**(code **)(**(long **)(param_1 + 0xe0) + 0x10))();
  if (iVar4 != 0xc) {
    plVar5 = (long *)(*(long *)(param_1 + 0xe0) + -0x10);
    (**(code **)(*plVar5 + 0x128))(plVar5,1);
    *(undefined1 *)(param_1 + 0xc6) = 0;
  }
  return;
}


