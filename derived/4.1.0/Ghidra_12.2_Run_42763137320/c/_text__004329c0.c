/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004329c0; name: FUN_.text__004329c0
 */


long FUN__text__004329c0(long *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar5 = *param_1;
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 == 0) {
    lVar2 = 0;
    if (lVar5 != 0) {
      lVar2 = lVar5;
    }
    return lVar2;
  }
  uVar7 = 0;
  uVar8 = (ulong)uVar3;
  do {
    uVar6 = (uint)uVar7;
    uVar1 = uVar6 + (int)(uVar8 >> 1);
    bVar4 = *(uint *)(*(long *)(lVar5 + (ulong)uVar1 * 8) + 8) < param_2;
    if (bVar4) {
      uVar6 = uVar1 + 1;
    }
    uVar7 = (ulong)uVar6;
    uVar9 = uVar8 - bVar4;
    uVar8 = uVar9 >> 1;
  } while (1 < uVar9);
  lVar2 = (ulong)uVar3 << 3;
  if (lVar5 != 0) {
    lVar2 = lVar5 + uVar7 * 8;
  }
  return lVar2;
}


