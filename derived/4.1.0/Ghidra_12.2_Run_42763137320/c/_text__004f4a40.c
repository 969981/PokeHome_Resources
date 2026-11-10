/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f4a40; name: FUN_.text__004f4a40
 */


int FUN__text__004f4a40(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  
  uVar3 = *(int *)(param_1 + 0x130) - 1;
  uVar7 = (ulong)uVar3;
  if (uVar3 != 0) {
    lVar9 = *(long *)(param_1 + 0x128);
    lVar6 = 0;
    piVar1 = (int *)(lVar9 + 4);
    iVar8 = 0;
    do {
      iVar4 = *(int *)(lVar9 + 4) - (*piVar1 + param_2);
      iVar2 = -iVar4;
      if (-1 < iVar4) {
        iVar2 = iVar4;
      }
      lVar5 = lVar9;
      if (lVar6 != 0 && iVar8 <= iVar2) {
        iVar2 = iVar8;
        lVar5 = lVar6;
      }
      lVar6 = lVar5;
      lVar9 = lVar9 + 0x10;
      uVar7 = uVar7 - 1;
      iVar8 = iVar2;
    } while (uVar7 != 0);
    if (lVar6 != 0) {
      param_2 = *(int *)(lVar6 + 4) - *piVar1;
    }
  }
  return param_2;
}


