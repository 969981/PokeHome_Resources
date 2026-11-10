/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f7010; name: FUN_.text__004f7010
 */


void FUN__text__004f7010(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    if (*(uint *)(param_1 + 1) != 0) {
      lVar2 = (ulong)*(uint *)(param_1 + 1) * 0x60;
      do {
        if (plVar1[10] != 0) {
          FUN__text__00400fc0(2);
        }
        if (*plVar1 != 0) {
          *(undefined4 *)(plVar1 + 1) = 0;
          FUN__text__00400fc0(0);
          *plVar1 = 0;
          *(undefined4 *)((long)plVar1 + 0xc) = 0;
        }
        if (plVar1[2] != 0) {
          *(undefined4 *)(plVar1 + 3) = 0;
          FUN__text__00400fc0(0);
          plVar1[2] = 0;
          *(undefined4 *)((long)plVar1 + 0x1c) = 0;
        }
        plVar1 = plVar1 + 0xc;
        lVar2 = lVar2 + -0x60;
      } while (lVar2 != 0);
      plVar1 = (long *)*param_1;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    FUN__text__00400fc0(0,plVar1);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  return;
}


