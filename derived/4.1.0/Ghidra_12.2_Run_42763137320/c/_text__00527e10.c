/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00527e10; name: FUN_.text__00527e10
 */


ulong * FUN__text__00527e10(long param_1,long param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  ulong *puVar9;
  
  uVar5 = *(ulong *)(param_2 + 0x70);
  uVar7 = *(ulong *)(param_3 + 0x70);
  uVar8 = *(uint *)(param_1 + 0x90);
  uVar2 = uVar5;
  if (uVar7 <= uVar5) {
    uVar2 = uVar7;
  }
  if (uVar5 <= uVar7) {
    uVar5 = uVar7;
  }
  if (uVar8 != 0) {
    iVar6 = 0;
    do {
      iVar1 = iVar6 + (uVar8 >> 1);
      puVar9 = *(ulong **)(*(long *)(param_1 + 0x88) + (long)iVar1 * 8);
      uVar7 = *puVar9;
      if (uVar7 == uVar2 && puVar9[1] == uVar5) {
        return puVar9 + 2;
      }
      bVar4 = puVar9[1] < uVar5;
      if (uVar7 != uVar2) {
        bVar4 = uVar7 < uVar2;
      }
      uVar3 = uVar8 - bVar4;
      if (bVar4 != 0) {
        iVar6 = iVar1 + 1;
      }
      uVar8 = uVar3 >> 1;
    } while (1 < uVar3);
  }
  return (ulong *)0x0;
}


