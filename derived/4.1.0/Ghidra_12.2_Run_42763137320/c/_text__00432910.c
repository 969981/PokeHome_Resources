/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00432910; name: FUN_.text__00432910
 */


undefined8 FUN__text__00432910(long *param_1,int param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  plVar1 = plVar3;
  if (uVar2 == 0) {
LAB__text__00432958:
    if (plVar1 != plVar3 + uVar2) {
      *param_3 = *plVar1;
      uVar2 = (int)param_1[1] - 1;
      plVar3 = (long *)(*param_1 + (ulong)uVar2 * 8);
      if (plVar1 < plVar3) {
        memmove(plVar1,plVar1 + 1,(ulong)(uint)((int)plVar3 - (int)plVar1) & 0xfffffff8);
        uVar2 = (int)param_1[1] - 1;
      }
      *(uint *)(param_1 + 1) = uVar2;
      return 1;
    }
  }
  else {
    lVar4 = (ulong)uVar2 << 3;
    do {
      if (*(int *)(*plVar1 + 4) == param_2) goto LAB__text__00432958;
      plVar1 = plVar1 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  return 0;
}


