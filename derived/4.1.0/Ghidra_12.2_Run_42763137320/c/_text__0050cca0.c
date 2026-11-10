/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0050cca0; name: FUN_.text__0050cca0
 */


undefined4 FUN__text__0050cca0(long param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulong *puVar9;
  
  uVar8 = *(uint *)(param_1 + 0x50);
  uVar2 = param_2;
  if (param_3 <= param_2) {
    uVar2 = param_3;
  }
  if (param_2 <= param_3) {
    param_2 = param_3;
  }
  if (uVar8 != 0) {
    iVar7 = 0;
    do {
      iVar1 = iVar7 + (uVar8 >> 1);
      puVar9 = (ulong *)(*(long *)(param_1 + 0x48) + (long)iVar1 * 0x18);
      uVar3 = *puVar9;
      uVar4 = puVar9[1];
      if (uVar3 == uVar2 && uVar4 == param_2) {
        return *(undefined4 *)(*(long *)(param_1 + 0x48) + (long)iVar1 * 0x18 + 0x10);
      }
      bVar6 = uVar4 < param_2;
      if (uVar3 != uVar2) {
        bVar6 = uVar3 < uVar2;
      }
      uVar5 = uVar8 - bVar6;
      if (bVar6 != 0) {
        iVar7 = iVar1 + 1;
      }
      uVar8 = uVar5 >> 1;
    } while (1 < uVar5);
  }
  return 0;
}


