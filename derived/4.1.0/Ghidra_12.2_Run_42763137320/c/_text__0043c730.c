/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043c730; name: FUN_.text__0043c730
 */


byte * FUN__text__0043c730(long *param_1,byte param_2,undefined1 *param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined1 *__src;
  uint uVar8;
  long lVar9;
  
  uVar7 = *(uint *)(param_1 + 1);
  if (uVar7 == 0) {
    uVar8 = 0;
    *param_3 = 0;
    uVar7 = *(uint *)(param_1 + 1);
    uVar3 = *(uint *)((long)param_1 + 0xc);
    lVar9 = *param_1;
    bVar4 = uVar3 <= uVar7;
  }
  else {
    uVar8 = 0;
    do {
      iVar1 = uVar8 + (uVar7 >> 1);
      bVar2 = *(byte *)(*param_1 + (long)iVar1 * 0x18);
      if (bVar2 == param_2) {
        *param_3 = 1;
        return (byte *)(*param_1 + (long)iVar1 * 0x18);
      }
      if (bVar2 < param_2) {
        uVar8 = iVar1 + 1;
      }
      uVar3 = uVar7 - (bVar2 < param_2);
      uVar7 = uVar3 >> 1;
    } while (1 < uVar3);
    *param_3 = 0;
    uVar7 = *(uint *)(param_1 + 1);
    uVar3 = *(uint *)((long)param_1 + 0xc);
    lVar9 = *param_1;
    bVar4 = uVar3 <= uVar7;
  }
  if (lVar9 == 0) {
    if (!bVar4) {
      *(uint *)(param_1 + 1) = uVar7 + 1;
      return (byte *)0x0;
    }
    iVar1 = uVar3 + (uVar3 >> 1);
    if (uVar3 == 0) {
      iVar1 = 1;
    }
    uVar5 = FUN__text__0043c940(param_1,iVar1);
    if ((uVar5 & 1) == 0) {
      return (byte *)0x0;
    }
    if (*(uint *)((long)param_1 + 0xc) <= uVar7) {
      return (byte *)0x0;
    }
    uVar7 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar7 + 1;
    if (*param_1 == 0) {
      return (byte *)0x0;
    }
    pbVar6 = (byte *)(*param_1 + (ulong)uVar7 * 0x18);
    *pbVar6 = 0;
    pbVar6[4] = 0;
    pbVar6[8] = 0;
    pbVar6[9] = 0;
    pbVar6[10] = 0;
    pbVar6[0xb] = 0;
    pbVar6[0xc] = 0;
    pbVar6[0xd] = 0;
    pbVar6[0xe] = 0;
    pbVar6[0xf] = 0;
    pbVar6[0x10] = 0;
    pbVar6[0x11] = 0;
    pbVar6[0x12] = 0;
    pbVar6[0x13] = 0;
    pbVar6[0x14] = 0;
    pbVar6[0x15] = 0;
    pbVar6[0x16] = 0;
    pbVar6[0x17] = 0;
  }
  else {
    if (bVar4) {
      iVar1 = uVar3 + (uVar3 >> 1);
      if (uVar3 == 0) {
        iVar1 = 1;
      }
      uVar5 = FUN__text__0043c940(param_1,iVar1);
      if ((uVar5 & 1) == 0) {
        return (byte *)0x0;
      }
      if (*(uint *)((long)param_1 + 0xc) <= uVar7) {
        return (byte *)0x0;
      }
      uVar7 = *(uint *)(param_1 + 1);
      lVar9 = *param_1;
    }
    __src = (undefined1 *)(lVar9 + (ulong)uVar8 * 0x18);
    if (uVar8 <= uVar7 && uVar7 - uVar8 != 0) {
      memmove(__src + 0x18,__src,(ulong)((uVar7 - uVar8) * 0x18));
    }
    if (lVar9 != 0) {
      *__src = 0;
      lVar9 = lVar9 + (ulong)uVar8 * 0x18;
      *(undefined1 *)(lVar9 + 4) = 0;
      *(undefined8 *)(lVar9 + 8) = 0;
      *(undefined8 *)(lVar9 + 0x10) = 0;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    if (*param_1 == 0) {
      return (byte *)0x0;
    }
    pbVar6 = (byte *)(*param_1 + (ulong)uVar8 * 0x18);
  }
  *pbVar6 = param_2;
  return pbVar6;
}


