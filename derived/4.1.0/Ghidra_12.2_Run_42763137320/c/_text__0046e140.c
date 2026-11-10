/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0046e140; name: FUN_.text__0046e140
 */


void FUN__text__0046e140(undefined4 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*(long *)(param_1 + 4);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    *(undefined4 *)(plVar1 + 2) = 0;
    *(undefined4 *)(plVar1 + 4) = 0;
    if (plVar1[6] != 0) {
      FUN__text__00400fc0(0);
    }
    *(undefined4 *)((long)plVar1 + 0x2c) = 0;
    plVar1[6] = 0;
    if (plVar1[1] != 0) {
      *(undefined4 *)(plVar1 + 2) = 0;
      FUN__text__00400fc0(0);
      plVar1[1] = 0;
      *(undefined4 *)((long)plVar1 + 0x14) = 0;
    }
    if (plVar1[3] != 0) {
      *(undefined4 *)(plVar1 + 4) = 0;
      FUN__text__00400fc0(0);
      plVar1[3] = 0;
      *(undefined4 *)((long)plVar1 + 0x24) = 0;
    }
    FUN__text__00400fc0(0,plVar1);
    plVar1 = (long *)lVar2;
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}


