/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005927c4; name: FUN_.text__005927c4
 */


undefined8 FUN__text__005927c4(long param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  
  if ((*(byte *)(*(long *)(param_1 + 0x18) + 0x315) >> 6 & 1) != 0) {
    uVar8 = FUN__text__004ddcf4();
    if (*(uint *)(param_1 + 0x24) <= uVar8) {
      return 2;
    }
    uVar3 = *(uint *)(param_1 + 0x70);
    uVar4 = *(uint *)(param_1 + 0x58);
    uVar6 = 0;
    if (uVar3 != 0) {
      uVar6 = uVar8 / uVar3;
    }
    uVar5 = *(int *)(param_1 + 0x88) - 1;
    uVar7 = 0;
    if (uVar4 != 0) {
      uVar7 = (uVar3 * 1000) / uVar4;
    }
    uVar2 = uVar6;
    if (uVar5 <= uVar6) {
      uVar2 = uVar5;
    }
    uVar5 = 0;
    if (uVar7 != 0) {
      uVar5 = 0x50 / uVar7;
    }
    if (uVar2 <= uVar5) {
      uVar5 = uVar2;
    }
    *(uint *)(param_1 + 0x7c) = uVar2 - uVar5;
    *(uint *)(param_1 + 0x8c) = (int)uVar4 / 400 + uVar5 * uVar3 + (uVar8 - uVar6 * uVar3);
    uVar3 = *(uint *)(*(long *)(param_1 + 0x98) + (ulong)(uVar2 - uVar5) * 4);
    *(uint *)(param_1 + 0x28) = uVar8;
    *(ulong *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb8) + (ulong)uVar3;
    lVar9 = *(long *)(param_1 + 0x18);
    *(undefined4 *)(lVar9 + 0x30c) = 0;
    puVar1 = (uint *)(lVar9 + 0x313);
    *puVar1 = *puVar1 & 0xfe3fffff;
  }
  return 1;
}


