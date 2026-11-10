/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00592600; name: FUN_.text__00592600
 */


undefined8 FUN__text__00592600(long param_1,int param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined2 uVar11;
  long lVar12;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (*(long *)(param_1 + 0x18) == 0) {
      uVar11 = 1;
    }
    else {
      uVar11 = *(undefined2 *)(*(long *)(param_1 + 0x18) + 0x310);
    }
    *(undefined2 *)(param_1 + 0x54) = uVar11;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0xb8);
  }
  else {
    if (param_2 != 1) {
      return 1;
    }
    if ((param_3 & 1) == 0) {
      uVar3 = *(uint *)(param_1 + 0x70);
      uVar9 = 0;
      if (uVar3 != 0) {
        uVar9 = *(uint *)(param_1 + 0x28) / uVar3;
      }
      uVar4 = *(int *)(param_1 + 0x88) - 1;
      iVar5 = *(uint *)(param_1 + 0x28) - uVar9 * uVar3;
      lVar12 = *(long *)(param_1 + 0x18);
      if (uVar4 <= uVar9) {
        uVar9 = uVar4;
      }
      *(uint *)(param_1 + 0x7c) = uVar9;
      *(ulong *)(param_1 + 0xb0) =
           *(long *)(param_1 + 0xb8) +
           (ulong)*(uint *)(*(long *)(param_1 + 0x98) + (ulong)uVar9 * 4);
      *(int *)(lVar12 + 0x30c) = iVar5;
      puVar1 = (uint *)(lVar12 + 0x313);
      *puVar1 = *puVar1 & 0xfe3fffff;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) - iVar5;
    }
    else if ((*(byte *)(*(long *)(param_1 + 0x18) + 0x315) >> 6 & 1) != 0) {
      uVar9 = FUN__text__004ddcf4(param_1);
      if (*(uint *)(param_1 + 0x24) <= uVar9) {
        return 2;
      }
      uVar3 = *(uint *)(param_1 + 0x70);
      uVar4 = *(uint *)(param_1 + 0x58);
      uVar7 = 0;
      if (uVar3 != 0) {
        uVar7 = uVar9 / uVar3;
      }
      uVar6 = *(int *)(param_1 + 0x88) - 1;
      uVar8 = 0;
      if (uVar4 != 0) {
        uVar8 = (uVar3 * 1000) / uVar4;
      }
      uVar2 = uVar7;
      if (uVar6 <= uVar7) {
        uVar2 = uVar6;
      }
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar6 = 0x50 / uVar8;
      }
      if (uVar2 <= uVar6) {
        uVar6 = uVar2;
      }
      *(uint *)(param_1 + 0x7c) = uVar2 - uVar6;
      *(uint *)(param_1 + 0x8c) = (int)uVar4 / 400 + uVar6 * uVar3 + (uVar9 - uVar7 * uVar3);
      uVar3 = *(uint *)(*(long *)(param_1 + 0x98) + (ulong)(uVar2 - uVar6) * 4);
      *(uint *)(param_1 + 0x28) = uVar9;
      *(ulong *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb8) + (ulong)uVar3;
      lVar12 = *(long *)(param_1 + 0x18);
      *(undefined4 *)(lVar12 + 0x30c) = 0;
      puVar1 = (uint *)(lVar12 + 0x313);
      *puVar1 = *puVar1 & 0xfe3fffff;
    }
  }
  uVar10 = FUN__text__00591f5c(param_1);
  if ((int)uVar10 == 1) {
    *(byte *)(param_1 + 0x20) =
         (byte)(*(uint *)(*(long *)(param_1 + 0x18) + 0x313) >> 0x14) & 2 |
         *(byte *)(param_1 + 0x20) & 0xfd;
    return uVar10;
  }
  return uVar10;
}


