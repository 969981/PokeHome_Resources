/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052c820; name: FUN_.text__0052c820
 */


void FUN__text__0052c820(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar6 = *(long *)(param_1 + 0x30);
    do {
      uVar4 = *(uint *)(lVar6 + 0xf8);
      if (1 < uVar4) {
        uVar7 = 0;
        iVar8 = -1;
        lVar10 = 0x20;
        do {
          puVar1 = (undefined8 *)(lVar6 + lVar10);
          lVar12 = lVar6 + (ulong)(uVar4 + iVar8) * 0x18;
          uVar2 = *puVar1;
          uVar11 = puVar1[1];
          uVar5 = puVar1[2];
          uVar7 = uVar7 + 1;
          lVar10 = lVar10 + 0x18;
          iVar8 = iVar8 + -1;
          uVar9 = *(undefined8 *)(lVar12 + 0x28);
          uVar3 = *(undefined8 *)(lVar12 + 0x30);
          *puVar1 = *(undefined8 *)(lVar12 + 0x20);
          puVar1[1] = uVar9;
          puVar1[2] = uVar3;
          *(undefined8 *)(lVar12 + 0x28) = uVar11;
          *(undefined8 *)(lVar12 + 0x30) = uVar5;
          *(undefined8 *)(lVar12 + 0x20) = uVar2;
          uVar4 = *(uint *)(lVar6 + 0xf8);
        } while (uVar7 < uVar4 >> 1);
      }
      uVar9 = *(undefined8 *)(lVar6 + 8);
      uVar2 = *(undefined8 *)(lVar6 + 0x10);
      *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(lVar6 + 0xe0);
      *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar6 + 0xe8);
      uVar11 = *(undefined8 *)(lVar6 + 0xf0);
      *(undefined8 *)(lVar6 + 0xe0) = uVar9;
      *(undefined8 *)(lVar6 + 0xe8) = uVar2;
      *(undefined8 *)(lVar6 + 0xf0) = *(undefined8 *)(lVar6 + 0x18);
      *(undefined8 *)(lVar6 + 0x18) = uVar11;
      lVar6 = lVar6 + 0x118;
    } while (lVar6 != *(long *)(param_1 + 0x30) + (ulong)*(uint *)(param_1 + 0x38) * 0x118);
  }
  return;
}


