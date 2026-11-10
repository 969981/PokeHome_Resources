/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0058fc80; name: FUN_.text__0058fc80
 */


undefined8 FUN__text__0058fc80(long param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  
  uVar3 = FUN__text__004ddcf4();
  if (*(uint *)(param_1 + 0x24) <= uVar3) {
    return 2;
  }
  if (uVar3 != 0) {
    uVar5 = *(uint *)(param_1 + 0xd4);
    if (3 < uVar5) {
      uVar8 = 0;
      iVar7 = 0;
      uVar4 = 0;
      do {
        uVar2 = uVar4 + *(ushort *)(*(long *)(param_1 + 0xf8) + uVar8);
        if (uVar3 < uVar2) {
          if (uVar8 == 0) goto LAB__text__0058fcb0;
          uVar5 = iVar7 + uVar5;
          goto LAB__text__0058fcb8;
        }
        lVar6 = *(long *)(param_1 + 0xf8) + uVar8;
        uVar8 = uVar8 + 4;
        iVar7 = iVar7 + (uint)*(ushort *)(lVar6 + 2);
        uVar4 = uVar2;
      } while (((ulong)uVar5 & 0xfffffffc) != uVar8);
      uVar5 = iVar7 + uVar5;
      goto LAB__text__0058fcb8;
    }
  }
LAB__text__0058fcb0:
  uVar5 = *(uint *)(param_1 + 0xd8);
  uVar4 = 0;
LAB__text__0058fcb8:
  *(uint *)(param_1 + 0x28) = uVar4;
  *(ulong *)(param_1 + 0x108) = *(long *)(param_1 + 0x110) + (ulong)uVar5;
  lVar6 = *(long *)(param_1 + 0x18);
  *(uint *)(lVar6 + 0x30c) = uVar3 - uVar4;
  puVar1 = (uint *)(lVar6 + 0x313);
  *puVar1 = *puVar1 & 0xfe3fffff;
  return 1;
}


