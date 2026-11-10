/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d7b98; name: FUN_.text__003d7b98
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__003d7b98(long *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = param_1[1];
  if (lVar6 == 0) {
    return 0xffffffff;
  }
  pbVar3 = *(byte **)(lVar6 + 0x208);
  if (pbVar3 == *(byte **)(lVar6 + 0x210)) {
    (**(code **)(*param_1 + 0x10))();
    pbVar3 = *(byte **)(lVar6 + 0x208);
    if (pbVar3 == *(byte **)(lVar6 + 0x210)) {
      return 0xffffffff;
    }
  }
  bVar2 = *pbVar3;
  if (-1 < (char)bVar2) {
    *(byte **)(lVar6 + 0x208) = pbVar3 + 1;
    if (bVar2 == 10) {
      *(byte **)(lVar6 + 0x230) = pbVar3 + 1 + (*(long *)(lVar6 + 0x238) - lVar6);
      *(int *)(lVar6 + 0x22c) = *(int *)(lVar6 + 0x22c) + 1;
    }
    return (ulong)bVar2;
  }
  uVar4 = *(uint *)(lVar6 + 0x200);
  if (uVar4 != 0xffffffff) {
    *(undefined4 *)(lVar6 + 0x200) = 0xffffffff;
    *(byte **)(lVar6 + 0x208) = pbVar3 + *(uint *)(lVar6 + 0x218);
    return (ulong)uVar4;
  }
  bVar2 = *(byte *)(_DAT_00885000 + (ulong)bVar2);
  *(uint *)(lVar6 + 0x218) = (uint)bVar2;
  if (bVar2 == 4) {
    uVar4 = (*pbVar3 & 7) << 0x12 | (pbVar3[1] & 0x3f) << 0xc | (pbVar3[2] & 0x3f) << 6;
    lVar5 = 3;
  }
  else if (bVar2 == 3) {
    uVar4 = (*pbVar3 & 0xf) << 0xc | (pbVar3[1] & 0x3f) << 6;
    lVar5 = 2;
  }
  else {
    lVar5 = 1;
    uVar4 = (*pbVar3 & 0x1f) << 6;
  }
  bVar1 = pbVar3[lVar5];
  *(undefined4 *)(lVar6 + 0x200) = 0xffffffff;
  *(byte **)(lVar6 + 0x208) = pbVar3 + (uint)bVar2;
  return (ulong)(uVar4 | bVar1 & 0x3f);
}


