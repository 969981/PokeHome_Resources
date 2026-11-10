/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c31a0; name: FUN_.text__004c31a0
 */


void FUN__text__004c31a0(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  
  plVar2 = *(long **)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 0x18);
  plVar1 = plVar2;
  if (uVar3 == 0) {
LAB__text__004c3218:
    if ((plVar1 != plVar2 + (ulong)uVar3 * 6) && (plVar1[4] == 0)) {
      uVar3 = uVar3 - 1;
      if (plVar1 < plVar2 + (ulong)uVar3 * 6) {
        memmove(plVar1,plVar1 + 6,(ulong)(uint)((int)(plVar2 + (ulong)uVar3 * 6) - (int)plVar1));
        uVar3 = *(int *)(param_1 + 0x18) - 1;
      }
      *(uint *)(param_1 + 0x18) = uVar3;
      return;
    }
  }
  else {
    lVar4 = (ulong)uVar3 * 0x30;
    do {
      if (((*(long *)(param_2 + 0x40) == *plVar1) && (*(long *)(param_2 + 0x10) == plVar1[1])) &&
         (*(int *)(param_2 + 0x2c) == (int)plVar1[2])) goto LAB__text__004c3218;
      plVar1 = plVar1 + 6;
      lVar4 = lVar4 + -0x30;
    } while (lVar4 != 0);
  }
  return;
}


