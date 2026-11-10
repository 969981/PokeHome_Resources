/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0058fdd0; name: FUN_.text__0058fdd0
 */


undefined8 FUN__text__0058fdd0(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  if (*(uint *)(param_1 + 0x24) <= param_2) {
    uVar4 = *(uint *)(param_1 + 0x28);
    param_2 = 0;
    uVar8 = 2;
    goto LAB__text__0058fe28;
  }
  if (param_2 == 0) {
LAB__text__0058fdfc:
    uVar5 = *(uint *)(param_1 + 0xd8);
    uVar4 = 0;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0xd4);
    if (uVar5 < 4) goto LAB__text__0058fdfc;
    uVar7 = 0;
    iVar6 = 0;
    uVar4 = 0;
    do {
      uVar1 = uVar4 + *(ushort *)(*(long *)(param_1 + 0xf8) + uVar7);
      if (param_2 < uVar1) {
        if (uVar7 == 0) goto LAB__text__0058fdfc;
        uVar5 = iVar6 + uVar5;
        goto LAB__text__0058fe04;
      }
      lVar2 = *(long *)(param_1 + 0xf8) + uVar7;
      uVar7 = uVar7 + 4;
      iVar6 = iVar6 + (uint)*(ushort *)(lVar2 + 2);
      uVar4 = uVar1;
    } while (((ulong)uVar5 & 0xfffffffc) != uVar7);
    uVar5 = iVar6 + uVar5;
  }
LAB__text__0058fe04:
  uVar8 = 1;
  *(ulong *)(param_1 + 0x108) = *(long *)(param_1 + 0x110) + (ulong)uVar5;
  param_2 = param_2 - uVar4;
LAB__text__0058fe28:
  *(uint *)(param_1 + 0x28) = uVar4 + param_2;
  puVar3 = (undefined2 *)(param_1 + 0xde);
  if (*(short *)(param_1 + 0x54) != 1) {
    puVar3 = (undefined2 *)(param_1 + 0xd2);
  }
  FUN__text__00585d70(param_1 + 0x68,param_2 & 0xffff,*puVar3);
  *(undefined4 *)(param_1 + 0x60) = 3;
  return uVar8;
}


