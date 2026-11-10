/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00461c40; name: FUN_.text__00461c40
 */


void FUN__text__00461c40(long param_1,float *param_2)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  float *pfVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  
  pbVar3 = *(byte **)(param_1 + 0x90);
  if (pbVar3 == (byte *)0x0) {
    fVar9 = (float)NEON_fminnm(*param_2,0x43480000);
    fVar8 = 0.0;
    if (0.0 <= *param_2) {
      fVar8 = fVar9;
    }
    *param_2 = fVar8;
    return;
  }
  bVar1 = *pbVar3;
  uVar4 = (uint)bVar1;
  if (bVar1 < 2) {
    uVar4 = 1;
  }
  uVar2 = (ulong)uVar4;
  pfVar6 = (float *)(pbVar3 + ((ulong)bVar1 & 0xfc));
  uVar7 = uVar2;
  pbVar5 = pbVar3;
  do {
    pfVar6 = pfVar6 + 1;
    pbVar5 = pbVar5 + 1;
    if (*pbVar5 == 0x1f) {
      fVar8 = *pfVar6;
      goto LAB__text__00461cb8;
    }
    uVar7 = uVar7 - 1;
  } while (uVar7 != 0);
  fVar8 = 0.0;
LAB__text__00461cb8:
  pbVar5 = pbVar3 + ((ulong)bVar1 & 0xfc);
  do {
    pbVar5 = pbVar5 + 4;
    pbVar3 = pbVar3 + 1;
    if (*pbVar3 == 0x20) {
      fVar9 = (float)NEON_fminnm(*param_2,*(undefined4 *)pbVar5);
      if (fVar8 <= *param_2) {
        fVar8 = fVar9;
      }
      *param_2 = fVar8;
      return;
    }
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  fVar9 = (float)NEON_fminnm(*param_2,0x43480000);
  if (fVar8 <= *param_2) {
    fVar8 = fVar9;
  }
  *param_2 = fVar8;
  return;
}


