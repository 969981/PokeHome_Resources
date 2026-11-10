/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c0554; name: FUN_.text__003c0554
 */


void FUN__text__003c0554(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (*(char *)(param_1 + 0x62) != '\0') {
    return;
  }
  uVar11 = FUN__text__00119a44(param_2);
  uVar12 = FUN__text__00119a5c(param_2);
  uVar13 = FUN__text__00119a64(param_2);
  uVar14 = FUN__text__00119a84(param_2);
  *(undefined8 *)(param_1 + 0x70) = uVar11;
  *(undefined8 *)(param_1 + 0x78) = uVar12;
  *(undefined8 *)(param_1 + 0x80) = uVar13;
  *(undefined8 *)(param_1 + 0x88) = uVar14;
  if (*(char *)(param_1 + 0xb8) != '\0') {
    uVar11 = *(undefined8 *)(param_2 + 0x120);
    bVar1 = FUN__text__0011b4d8(uVar11);
    bVar2 = FUN__text__0011b4e0(uVar11);
    bVar3 = FUN__text__0011b4f8(uVar11);
    bVar4 = FUN__text__0011b510(uVar11);
    iVar5 = FUN__text__0011b528(uVar11);
    iVar6 = FUN__text__0011b530(uVar11);
    iVar7 = FUN__text__0011b548(uVar11);
    iVar8 = FUN__text__0011b550(uVar11);
    iVar9 = FUN__text__0011b538(uVar11);
    iVar10 = FUN__text__0011b540(uVar11);
    *(byte *)(param_1 + 0x9a) = bVar3 & 1;
    *(byte *)(param_1 + 0x9b) = bVar4 & 1;
    *(int *)(param_1 + 0x9c) = iVar5 + -0x280;
    *(int *)(param_1 + 0xa0) = 0x168 - iVar6;
    *(int *)(param_1 + 0xa4) = iVar7 + -0x280;
    *(int *)(param_1 + 0xa8) = 0x168 - iVar8;
    *(byte *)(param_1 + 0x98) = bVar1 & 1;
    *(byte *)(param_1 + 0x99) = bVar2 & 1;
    *(int *)(param_1 + 0xac) = iVar9 + -0x280;
    *(int *)(param_1 + 0xb0) = 0x168 - iVar10;
  }
  return;
}


