/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00432a30; name: FUN_.text__00432a30
 */


long FUN__text__00432a30(long *param_1,uint param_2,long param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar4 = *param_1;
  uVar6 = (ulong)(param_3 - lVar4) >> 3;
  if (0 < param_4 - param_3) {
    uVar7 = (ulong)(param_4 - param_3) >> 3;
    do {
      uVar5 = (uint)uVar6;
      uVar1 = uVar5 + (int)(uVar7 >> 1);
      bVar3 = *(uint *)(*(long *)(lVar4 + (ulong)uVar1 * 8) + 8) < param_2;
      if (bVar3) {
        uVar5 = uVar1 + 1;
      }
      uVar6 = (ulong)uVar5;
      uVar8 = uVar7 - bVar3;
      uVar7 = uVar8 >> 1;
    } while (1 < uVar8);
  }
  lVar2 = (ulong)*(uint *)(param_1 + 1) << 3;
  if (lVar4 != 0) {
    lVar2 = lVar4 + (uVar6 & 0xffffffff) * 8;
  }
  return lVar2;
}


