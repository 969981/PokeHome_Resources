/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00473c80; name: FUN_.text__00473c80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00473c80(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar9;
  undefined8 *puVar8;
  
  uVar3 = FUN__text__0047822c(param_1 + 0x18);
  if ((int)uVar3 != 1) {
    return uVar3;
  }
  FUN__text__00478584(param_1 + 0x18);
  if ((*(ushort *)(param_1 + 0x220) >> 6 & 1) != 0) goto LAB__text__00473d44;
  uVar6 = *(uint *)(param_1 + 0x378);
  uVar2 = *(uint *)(param_1 + 0x37c);
  uVar5 = uVar6;
  if (uVar6 < uVar2) {
LAB__text__00473cf0:
    uVar6 = uVar5 + 1;
    *(uint *)(param_1 + 0x378) = uVar6;
    if (*(long *)(param_1 + 0x370) != 0) {
      *(undefined8 **)(*(long *)(param_1 + 0x370) + (ulong)uVar5 * 8) = &DAT_00aea7c0;
      puVar7 = (undefined8 *)(ulong)*(uint *)(param_1 + 0x378);
      goto LAB__text__00473d10;
    }
    puVar7 = (undefined8 *)(ulong)uVar6;
  }
  else {
    iVar1 = uVar2 + (uVar2 >> 1);
    if (uVar2 == 0) {
      iVar1 = 1;
    }
    uVar4 = FUN__text__0046b710(param_1 + 0x368,iVar1);
    uVar5 = *(uint *)(param_1 + 0x378);
    puVar7 = (undefined8 *)(ulong)uVar5;
    if (((uVar4 & 1) != 0) && (uVar6 < *(uint *)(param_1 + 0x37c))) goto LAB__text__00473cf0;
LAB__text__00473d10:
    uVar6 = (uint)puVar7;
  }
  if (uVar6 != 0) {
    puVar8 = *(undefined8 **)(param_1 + 0x370);
    do {
      puVar9 = puVar8 + 1;
      FUN__text__0046348c(puVar7,*puVar8,param_1);
      puVar7 = (undefined8 *)(*(long *)(param_1 + 0x370) + (ulong)*(uint *)(param_1 + 0x378) * 8);
      puVar8 = puVar9;
    } while (puVar9 != puVar7);
  }
LAB__text__00473d44:
  if (*(int *)(param_1 + 0x280) == 0) {
    return 2;
  }
  uVar3 = FUN__text__0048de00(*_DAT_008a45d8,*(int *)(param_1 + 0x280),param_1,
                              *(undefined8 *)(param_1 + 0x20),param_1 + 8);
  if ((int)uVar3 == 1) {
    FUN__text__004c5aa0(*(undefined8 *)(param_1 + 0x2a0),param_1 + 0x338);
    uVar3 = 1;
  }
  return uVar3;
}


