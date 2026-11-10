/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044c390; name: FUN_.text__0044c390
 */


undefined4 FUN__text__0044c390(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  ulong uVar8;
  
  uVar5 = *(uint *)(param_1 + 0x28);
  if (uVar5 != 0) {
    iVar6 = 0;
    do {
      iVar1 = (uVar5 >> 1) + iVar6;
      puVar7 = (ulong *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 0x18);
      uVar8 = *puVar7;
      uVar2 = (uint)puVar7[1];
      if (uVar8 == param_2 && uVar2 == param_3) {
        return *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar1 * 0x18 + 0x10);
      }
      if ((uVar8 < param_2) ||
         (uVar4 = uVar5, uVar3 = uVar5 >> 1, uVar8 == param_2 && uVar2 < param_3)) {
        uVar4 = uVar5 - 1;
        iVar6 = iVar1 + 1;
        uVar3 = uVar4 >> 1;
      }
      uVar5 = uVar3;
    } while (1 < uVar4);
  }
  return 0x3f800000;
}


