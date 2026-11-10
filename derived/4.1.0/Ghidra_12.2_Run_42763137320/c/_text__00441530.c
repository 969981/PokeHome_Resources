/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00441530; name: FUN_.text__00441530
 */


byte * FUN__text__00441530(long param_1,byte *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  
  bVar2 = *param_2;
  uVar5 = *(ulong *)(param_2 + 8);
  if (bVar2 != 0xff || uVar5 != 0) {
    uVar7 = *(uint *)(param_1 + 0x20);
    if (uVar7 != 0) {
      iVar8 = 0;
      do {
        iVar1 = iVar8 + (uVar7 >> 1);
        pbVar6 = (byte *)(*(long *)(param_1 + 0x18) + (long)iVar1 * 0x28);
        bVar3 = *pbVar6;
        if (bVar3 == bVar2) goto LAB__text__004415dc;
        if (bVar3 < bVar2) {
          iVar8 = iVar1 + 1;
        }
        uVar4 = uVar7 - (bVar3 < bVar2);
        uVar7 = uVar4 >> 1;
      } while (1 < uVar4);
    }
    if (bVar2 != 0xff) {
      *param_2 = 0xff;
      uVar7 = *(uint *)(param_1 + 0x20);
      if (uVar7 != 0) {
        iVar8 = 0;
        do {
          iVar8 = iVar8 + (uVar7 >> 1);
          pbVar6 = (byte *)(*(long *)(param_1 + 0x18) + (long)iVar8 * 0x28);
          if (*pbVar6 == 0xff) goto LAB__text__004415dc;
          iVar8 = iVar8 + 1;
          uVar4 = uVar7 - 1;
          uVar7 = uVar4 >> 1;
        } while (1 < uVar4);
      }
    }
  }
LAB__text__00441634:
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *param_2 = 0xff;
  pbVar6 = (byte *)0x0;
  if (*(char *)(param_1 + 0x10) != '\0') {
    pbVar6 = (byte *)(param_1 + 8);
  }
  return pbVar6;
LAB__text__004415dc:
  if ((uVar5 != 0) && (uVar7 = *(uint *)(pbVar6 + 0x20), uVar7 != 0)) {
    iVar8 = 0;
    do {
      uVar4 = iVar8 + (uVar7 >> 1);
      uVar9 = *(ulong *)(*(long *)(pbVar6 + 0x18) +
                        (-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar4 << 4));
      if (uVar9 == uVar5) {
        return (byte *)(*(long *)(pbVar6 + 0x18) + (long)(int)uVar4 * 0x10 + 8);
      }
      if (uVar9 < uVar5) {
        iVar8 = uVar4 + 1;
      }
      uVar4 = uVar7 - (uVar9 < uVar5);
      uVar7 = uVar4 >> 1;
    } while (1 < uVar4);
  }
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  if (pbVar6[0x10] != 0) {
    return pbVar6 + 8;
  }
  goto LAB__text__00441634;
}


