/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00430ec0; name: FUN_.text__00430ec0
 */


undefined8 FUN__text__00430ec0(undefined8 *param_1,int param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  
  piVar3 = (int *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  piVar5 = piVar3;
  if (uVar2 != 0) {
    lVar6 = (ulong)uVar2 << 4;
    while (*piVar5 != param_2) {
      piVar5 = piVar5 + 4;
      lVar6 = lVar6 + -0x10;
      if (lVar6 == 0) {
        return 0x14;
      }
    }
  }
  if (piVar5 == piVar3 + (ulong)uVar2 * 4) {
    return 0x14;
  }
  plVar1 = (long *)(*(long *)(piVar5 + 2) + 8);
  lVar6 = 0;
  plVar7 = plVar1;
  do {
    lVar4 = lVar6;
    lVar6 = *plVar7;
    plVar7 = (long *)(lVar6 + 8);
  } while (lVar6 != 0 && lVar6 != param_3);
  if (lVar6 != 0) {
    if (*plVar1 != lVar6) {
      plVar1 = (long *)(lVar4 + 8);
    }
    *plVar1 = *(long *)(lVar6 + 8);
  }
  return 1;
}


