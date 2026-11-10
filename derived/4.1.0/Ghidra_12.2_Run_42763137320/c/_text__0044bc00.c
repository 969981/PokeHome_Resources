/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044bc00; name: FUN_.text__0044bc00
 */


undefined8 FUN__text__0044bc00(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar5 = *(uint *)(param_2 + 0x28);
  uVar10 = (ulong)uVar5;
  iVar6 = uVar5 - *(uint *)(param_1 + 0x2c);
  if (uVar5 < *(uint *)(param_1 + 0x2c) || iVar6 == 0) {
    if (uVar5 == 0) goto LAB__text__0044bc84;
  }
  else {
    uVar7 = FUN__text__0044d9c0(param_1,iVar6);
    if ((uVar7 & 1) == 0) {
      return 2;
    }
  }
  lVar9 = *(long *)(param_1 + 0x20);
  if (lVar9 != 0) {
    lVar8 = 0;
    while( true ) {
      uVar10 = uVar10 - 1;
      if (lVar9 != 0) {
        puVar1 = (undefined8 *)(lVar9 + lVar8);
        *puVar1 = 0xffffffffffffffff;
        *(undefined4 *)(puVar1 + 1) = 0;
        *(undefined4 *)(puVar1 + 2) = 0x3f800000;
      }
      if (uVar10 == 0) break;
      lVar9 = *(long *)(param_1 + 0x20);
      lVar8 = lVar8 + 0x18;
    }
  }
LAB__text__0044bc84:
  *(uint *)(param_1 + 0x28) = uVar5;
  if (*(int *)(param_2 + 0x28) != 0) {
    lVar9 = 0;
    uVar10 = 0;
    do {
      uVar10 = uVar10 + 1;
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0x20) + lVar9);
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x20) + lVar9);
      lVar9 = lVar9 + 0x18;
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
    } while (uVar10 < *(uint *)(param_2 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  uVar5 = *(uint *)(param_2 + 0x48);
  iVar6 = uVar5 - *(uint *)(param_1 + 0x4c);
  if ((*(uint *)(param_1 + 0x4c) <= uVar5 && iVar6 != 0) &&
     (uVar10 = FUN__text__0040b2e0(param_1 + 0x30,iVar6), (uVar10 & 1) == 0)) {
    return 2;
  }
  *(uint *)(param_1 + 0x48) = uVar5;
  if (*(int *)(param_2 + 0x48) != 0) {
    uVar10 = 0;
    do {
      lVar9 = uVar10 * 8;
      uVar10 = uVar10 + 1;
      *(undefined8 *)(*(long *)(param_1 + 0x40) + lVar9) =
           *(undefined8 *)(*(long *)(param_2 + 0x40) + lVar9);
    } while (uVar10 < *(uint *)(param_2 + 0x48));
  }
  return 1;
}


