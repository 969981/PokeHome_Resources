/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004df380; name: FUN_.text__004df380
 */


void FUN__text__004df380(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (*(uint *)(param_1 + 1) != 0) {
      plVar2 = (long *)(lVar1 + 0x60);
      lVar1 = (ulong)*(uint *)(param_1 + 1) * 0xc0;
      do {
        if (plVar2[0xb] != 0) {
          FUN__text__00400fc0(0);
          plVar2[0xb] = 0;
        }
        if (*plVar2 != 0) {
          *(undefined4 *)(plVar2 + 1) = 0;
          (**(code **)(*(long *)plVar2[-1] + 0x18))();
          *plVar2 = 0;
          *(undefined4 *)((long)plVar2 + 0xc) = 0;
        }
        if ((plVar2[4] != 0) && ((char)plVar2[5] != '\0')) {
          (**(code **)(*(long *)plVar2[3] + 0x18))();
          *(undefined1 *)(plVar2 + 5) = 0;
        }
        plVar2[4] = 0;
        lVar1 = lVar1 + -0xc0;
        plVar2 = plVar2 + 0x18;
      } while (lVar1 != 0);
      lVar1 = *param_1;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    FUN__text__00400fc0(0,lVar1);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  return;
}


