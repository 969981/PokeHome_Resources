/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004965f0; name: FUN_.text__004965f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004965f0(long param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  float *pfVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined8 local_30;
  float local_24;
  
  if ((*(byte *)(param_2 + 0x310) >> 2 & 1) != 0) {
    return 1;
  }
  if ((*(byte *)(param_2 + 0x30c) & 1) != 0) {
    *(byte *)(param_2 + 0x30c) = *(byte *)(param_2 + 0x30c) & 0xfe;
    return 1;
  }
  local_58 = *(undefined8 *)(param_2 + 0x10);
  local_50 = *(undefined4 *)(param_2 + 0x34);
  local_24 = 0.0;
  local_40 = 0xff;
  local_38 = 0xff;
  local_30 = 0;
  local_48 = 0;
  FUN__text__00467430(param_1,&local_24,0x3b,&local_58);
  pbVar3 = *(byte **)(param_1 + 0xd8);
  if (pbVar3 != (byte *)0x0) {
    bVar1 = *pbVar3;
    uVar7 = (uint)bVar1;
    if (bVar1 < 2) {
      uVar7 = 1;
    }
    uVar5 = (ulong)uVar7;
    pfVar4 = (float *)(pbVar3 + ((ulong)bVar1 & 0xfc) + 4);
    do {
      pbVar3 = pbVar3 + 1;
      if (*pbVar3 == 0x3b) {
        fVar8 = *pfVar4;
        fVar9 = pfVar4[1];
        if (fVar9 - fVar8 == 0.0) {
          fVar9 = 0.0;
        }
        else {
          lVar6 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
          *_DAT_008a45e8 = lVar6;
          fVar9 = (fVar9 - fVar8) * 4.656613e-10 * (float)(uint)((ulong)lVar6 >> 0x21);
          fVar8 = *pfVar4;
        }
        local_24 = fVar9 + fVar8 + local_24;
        break;
      }
      pfVar4 = pfVar4 + 2;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (local_24 <= 0.0) {
    return 1;
  }
  if (*(int *)(param_2 + 0x90) == 0) {
    uVar2 = FUN__text__004948b0(param_1,param_2);
    if ((int)uVar2 == 1) {
      return 3;
    }
  }
  else {
    uVar2 = 1;
    dVar10 = (double)NEON_ucvtf((ulong)*_DAT_008a4b68);
    dVar11 = 0.5;
    if (dVar10 * (double)local_24 <= 0.0) {
      dVar11 = -0.5;
    }
    *(int *)(param_2 + 0x84) = *(int *)(param_2 + 0x84) + (int)(dVar11 + dVar10 * (double)local_24);
  }
  return uVar2;
}


