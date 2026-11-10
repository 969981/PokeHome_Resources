/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00442310; name: FUN_.text__00442310
 */


byte * FUN__text__00442310(long *param_1,byte param_2,undefined1 *param_3)

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
      bVar2 = *(byte *)(*param_1 + (long)iVar1 * 0x28);
      if (bVar2 == param_2) {
        *param_3 = 1;
        return (byte *)(*param_1 + (long)iVar1 * 0x28);
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
    uVar5 = FUN__text__00442520(param_1,iVar1);
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
    pbVar6 = (byte *)(*param_1 + (ulong)uVar7 * 0x28);
    *pbVar6 = 0;
    pbVar6[8] = 0;
    pbVar6[9] = 0;
    pbVar6[10] = 0;
    pbVar6[0xb] = 0;
    pbVar6[0xc] = 0;
    pbVar6[0xd] = 0;
    pbVar6[0xe] = 0;
    pbVar6[0xf] = 0;
    pbVar6[0x10] = 0;
    pbVar6[0x18] = 0;
    pbVar6[0x19] = 0;
    pbVar6[0x1a] = 0;
    pbVar6[0x1b] = 0;
    pbVar6[0x1c] = 0;
    pbVar6[0x1d] = 0;
    pbVar6[0x1e] = 0;
    pbVar6[0x1f] = 0;
    pbVar6[0x20] = 0;
    pbVar6[0x21] = 0;
    pbVar6[0x22] = 0;
    pbVar6[0x23] = 0;
    pbVar6[0x24] = 0;
    pbVar6[0x25] = 0;
    pbVar6[0x26] = 0;
    pbVar6[0x27] = 0;
  }
  else {
    if (bVar4) {
      iVar1 = uVar3 + (uVar3 >> 1);
      if (uVar3 == 0) {
        iVar1 = 1;
      }
      uVar5 = FUN__text__00442520(param_1,iVar1);
      if ((uVar5 & 1) == 0) {
        return (byte *)0x0;
      }
      if (*(uint *)((long)param_1 + 0xc) <= uVar7) {
        return (byte *)0x0;
      }
      uVar7 = *(uint *)(param_1 + 1);
      lVar9 = *param_1;
    }
    __src = (undefined1 *)(lVar9 + (ulong)uVar8 * 0x28);
    if (uVar8 <= uVar7 && uVar7 - uVar8 != 0) {
      memmove(__src + 0x28,__src,(ulong)((uVar7 - uVar8) * 0x28));
    }
    if (lVar9 != 0) {
      *__src = 0;
      lVar9 = lVar9 + (ulong)uVar8 * 0x28;
      *(undefined8 *)(lVar9 + 8) = 0;
      *(undefined1 *)(lVar9 + 0x10) = 0;
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(undefined8 *)(lVar9 + 0x20) = 0;
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    if (*param_1 == 0) {
      return (byte *)0x0;
    }
    pbVar6 = (byte *)(*param_1 + (ulong)uVar8 * 0x28);
  }
  *pbVar6 = param_2;
  return pbVar6;
}


