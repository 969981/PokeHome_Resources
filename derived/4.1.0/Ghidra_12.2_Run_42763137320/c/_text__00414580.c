/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00414580; name: FUN_.text__00414580
 */


void FUN__text__00414580(long param_1,ulong param_2)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  
  if (param_2 != 0) {
    lVar3 = (*(ulong *)(param_1 + 0x38) & param_2) + (ulong)*(uint *)(param_1 + 0x30);
    piVar2 = (int *)(lVar3 + 0x10);
    do {
      iVar4 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar1 = iVar4 + 1;
    if (((int)uVar1 < 0) && ((uVar1 & 0x7fffffff) == *(uint *)(lVar3 + 0xc))) {
      *(undefined4 *)(lVar3 + 0x14) = 0;
      return;
    }
  }
  return;
}


