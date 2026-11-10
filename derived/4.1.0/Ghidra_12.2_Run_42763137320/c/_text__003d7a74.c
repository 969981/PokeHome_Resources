/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d7a74; name: FUN_.text__003d7a74
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__003d7a74(long *param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  long lVar4;
  
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    return 0xffffffff;
  }
  pbVar3 = *(byte **)(lVar4 + 0x208);
  if (pbVar3 == *(byte **)(lVar4 + 0x210)) {
    (**(code **)(*param_1 + 0x10))();
    pbVar3 = *(byte **)(lVar4 + 0x208);
    if (pbVar3 == *(byte **)(lVar4 + 0x210)) {
      return 0xffffffff;
    }
  }
  bVar1 = *pbVar3;
  if (-1 < (char)bVar1) {
    return (uint)bVar1;
  }
  if (*(uint *)(lVar4 + 0x200) != 0xffffffff) {
    return *(uint *)(lVar4 + 0x200);
  }
  bVar1 = *(byte *)(_DAT_00885000 + (ulong)(uint)bVar1);
  *(uint *)(lVar4 + 0x218) = (uint)bVar1;
  if (bVar1 == 4) {
    uVar2 = (*pbVar3 & 7) << 0x12 | (pbVar3[1] & 0x3f) << 0xc | (pbVar3[2] & 0x3f) << 6 |
            pbVar3[3] & 0x3f;
    *(uint *)(lVar4 + 0x200) = uVar2;
    return uVar2;
  }
  if (bVar1 == 3) {
    uVar2 = (*pbVar3 & 0xf) << 0xc | (pbVar3[1] & 0x3f) << 6 | pbVar3[2] & 0x3f;
    *(uint *)(lVar4 + 0x200) = uVar2;
    return uVar2;
  }
  uVar2 = (*pbVar3 & 0x1f) << 6 | pbVar3[1] & 0x3f;
  *(uint *)(lVar4 + 0x200) = uVar2;
  return uVar2;
}


