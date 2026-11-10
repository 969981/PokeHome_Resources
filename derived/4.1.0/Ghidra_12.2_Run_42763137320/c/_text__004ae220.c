/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ae220; name: FUN_.text__004ae220
 */


void FUN__text__004ae220(ulong *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  
  param_1 = (ulong *)*param_1;
  do {
    if (param_1 == (ulong *)0x0) {
      return;
    }
    uVar3 = *param_1;
    while (((uVar3 & 3) == 0 && (param_1[1] == param_2))) {
      while (*param_1 == uVar3) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = uVar3 | 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
      ClearExclusiveLocal();
      uVar3 = *param_1;
    }
    param_1 = (ulong *)(*param_1 & 0xfffffffffffffffc);
  } while( true );
}


