/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042f5a0; name: FUN_.text__0042f5a0
 */


undefined8 FUN__text__0042f5a0(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_2 + 0x28);
  uVar1 = *(uint *)(param_2 + 0x30);
  plVar2 = plVar3;
  if (uVar1 == 0) {
LAB__text__0042f5d4:
    plVar3 = plVar3 + uVar1;
    if (plVar2 != plVar3) {
      if (plVar2 < plVar3 + -1) {
        *plVar2 = plVar3[-1];
        uVar1 = *(uint *)(param_2 + 0x30);
      }
      *(uint *)(param_2 + 0x30) = uVar1 - 1;
      return 1;
    }
  }
  else {
    lVar4 = (ulong)uVar1 << 3;
    do {
      if (*plVar2 == param_3) goto LAB__text__0042f5d4;
      plVar2 = plVar2 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  return 2;
}


