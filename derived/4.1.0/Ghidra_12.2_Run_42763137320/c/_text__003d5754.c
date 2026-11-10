/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d5754; name: FUN_.text__003d5754
 */


ulong FUN__text__003d5754(long param_1,long param_2)

{
  ushort *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ushort uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  
  puVar1 = (ushort *)(*(long *)(param_1 + 0x1a0) + param_2 * 4);
  uVar5 = puVar1[1];
  uVar7 = (uint)uVar5;
  bVar6 = uVar7 == 0x3e;
  if (bVar6) {
    uVar7 = 1;
  }
  uVar3 = 0;
  if (bVar6) {
    uVar3 = 0x1000000000000;
  }
  uVar8 = (uint)uVar5;
  uVar2 = 0;
  if (uVar8 != 0x3f) {
    uVar2 = uVar7;
  }
  uVar4 = 0x1000000000000;
  if (uVar8 != 0x3f) {
    uVar4 = uVar3;
  }
  bVar6 = *(int *)(param_1 + 0x1a8) == 1;
  if (bVar6) {
    uVar8 = uVar2;
  }
  uVar3 = 0;
  if (bVar6) {
    uVar3 = uVar4;
  }
  return uVar3 | (ulong)uVar8 << 0x20 | (ulong)*puVar1;
}


