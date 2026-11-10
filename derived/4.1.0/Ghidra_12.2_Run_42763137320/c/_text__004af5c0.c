/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004af5c0; name: FUN_.text__004af5c0
 */


long FUN__text__004af5c0(uint *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar6 = (ulong)*param_1;
  if (*param_1 == 0) {
    return 0;
  }
  lVar5 = *(long *)(param_1 + 2);
  uVar7 = 0;
  lVar4 = 0;
  do {
    uVar3 = *(int *)(lVar5 + 4) - param_2;
    uVar1 = -uVar3;
    if (-1 < (int)uVar3) {
      uVar1 = uVar3;
    }
    lVar2 = lVar5;
    if (lVar4 != 0 && uVar7 <= uVar1) {
      lVar2 = lVar4;
      uVar1 = uVar7;
    }
    uVar7 = uVar1;
    lVar5 = lVar5 + 0x10;
    uVar6 = uVar6 - 1;
    lVar4 = lVar2;
  } while (uVar6 != 0);
  return lVar2;
}


