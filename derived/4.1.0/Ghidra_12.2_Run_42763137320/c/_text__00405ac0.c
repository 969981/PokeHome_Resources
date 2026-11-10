/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00405ac0; name: FUN_.text__00405ac0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00405ac0(uint param_1)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  
  puVar1 = (uint *)(_DAT_008a4cc0 + (ulong)(param_1 & 0x7f) * 4);
  if (*puVar1 == param_1) {
    do {
      if (*puVar1 != param_1) {
        ClearExclusiveLocal();
        return;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = param_1 & 0x7fffffff;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


