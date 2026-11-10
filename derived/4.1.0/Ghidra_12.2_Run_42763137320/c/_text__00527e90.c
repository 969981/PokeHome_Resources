/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00527e90; name: FUN_.text__00527e90
 */


undefined8 FUN__text__00527e90(long param_1,long param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong *puVar10;
  
  uVar6 = *(ulong *)(param_2 + 0x70);
  uVar8 = *(ulong *)(param_3 + 0x70);
  uVar9 = *(uint *)(param_1 + 0x90);
  uVar2 = uVar6;
  if (uVar8 <= uVar6) {
    uVar2 = uVar8;
  }
  if (uVar6 <= uVar8) {
    uVar6 = uVar8;
  }
  if (uVar9 != 0) {
    iVar7 = 0;
    do {
      iVar1 = iVar7 + (uVar9 >> 1);
      puVar10 = *(ulong **)(*(long *)(param_1 + 0x88) + (long)iVar1 * 8);
      uVar8 = *puVar10;
      if (uVar8 == uVar2 && puVar10[1] == uVar6) {
        uVar5 = FUN__text__0052c760(puVar10 + 2);
        return uVar5;
      }
      bVar4 = puVar10[1] < uVar6;
      if (uVar8 != uVar2) {
        bVar4 = uVar8 < uVar2;
      }
      uVar3 = uVar9 - bVar4;
      if (bVar4 != 0) {
        iVar7 = iVar1 + 1;
      }
      uVar9 = uVar3 >> 1;
    } while (1 < uVar3);
  }
  return 0;
}


