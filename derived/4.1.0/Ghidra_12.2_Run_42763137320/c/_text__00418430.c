/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00418430; name: FUN_.text__00418430
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00418430(long param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  float *pfVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  FUN__text__004d3e64();
  *(undefined4 *)(param_1 + 0x1b8) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1c0) = 0xc5800000c5800000;
  *(undefined8 *)(param_1 + 0x1c8) = 0xc5800000;
  *(byte *)(param_1 + 0x1bc) = *(byte *)(param_1 + 0x1bc) & 0xe8 | 4;
  FUN__text__004185c0(param_2,param_1 + 0x1d0,&local_54);
  local_38 = 0xff;
  local_30 = 0xff;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_28 = 0;
  *(float *)(param_1 + 0x1d4) = 1.0 - 1.0 / local_54;
  if ((*(ulong **)(param_2 + 0x58) == (ulong *)0x0) ||
     ((**(ulong **)(param_2 + 0x58) >> ((ulong)_DAT_0073b324 & 0x3f) & 1) == 0)) {
    pbVar3 = *(byte **)(param_2 + 0x90);
    fVar6 = _DAT_0073b1fc;
    if (pbVar3 != (byte *)0x0) {
      bVar1 = *pbVar3;
      uVar5 = (uint)bVar1;
      if (bVar1 < 2) {
        uVar5 = 1;
      }
      uVar2 = (ulong)uVar5;
      pfVar4 = (float *)(pbVar3 + ((ulong)bVar1 & 0xfc));
      do {
        pfVar4 = pfVar4 + 1;
        pbVar3 = pbVar3 + 1;
        if (*pbVar3 == 0x1d) {
          fVar6 = *pfVar4;
          break;
        }
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  else {
    fVar6 = (float)FUN__text__00419e90(*_DAT_008a45f0,param_2 + 0x48,(ulong)_DAT_0073b324,&local_50)
    ;
  }
  bVar1 = *(byte *)(param_2 + 0x19c);
  fVar7 = 0.0;
  *(byte *)(param_2 + 0x19c) = bVar1 & 0xef;
  *(byte *)(param_1 + 0x1bc) = *(byte *)(param_1 + 0x1bc) & 0xf7 | bVar1 & 8;
  if (0.0 < fVar6) {
    fVar7 = (float)NEON_ucvtf(_DAT_008ab030);
    fVar7 = expf((float)(int)-(uint)_DAT_008ab03c / (fVar6 * fVar7));
  }
  *(float *)(param_1 + 0x1cc) = fVar7;
  return;
}


