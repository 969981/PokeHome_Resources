/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c3280; name: FUN_.text__004c3280
 */


void FUN__text__004c3280(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (uVar1 != 0) {
    lVar2 = (ulong)uVar1 * 0x30;
    plVar3 = *(long **)(param_1 + 0x10);
    do {
      if (((*(long *)(param_2 + 0x40) == *plVar3) && (*(long *)(param_2 + 0x10) == plVar3[1])) &&
         (*(int *)(param_2 + 0x2c) == (int)plVar3[2])) {
        if (plVar3 != *(long **)(param_1 + 0x10) + (ulong)uVar1 * 6) {
          for (plVar3 = (long *)plVar3[4]; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
            if (plVar3[3] == param_2) {
              FUN__text__00446b50(plVar3,0);
            }
          }
        }
        break;
      }
      plVar3 = plVar3 + 6;
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  for (plVar3 = *(long **)(param_1 + 0x28); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    if (plVar3[3] == param_2) {
      FUN__text__00446b50(plVar3,0);
    }
  }
  return;
}


