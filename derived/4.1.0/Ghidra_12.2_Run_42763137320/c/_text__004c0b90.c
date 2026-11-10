/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c0b90; name: FUN_.text__004c0b90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004c0b90(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined8 local_28;
  long local_20;
  float local_18;
  byte local_14;
  
  fVar3 = *(float *)(param_1 + 0x4c);
  local_28 = 0;
  local_30 = 0;
  fVar2 = *(float *)(param_1 + 0x48);
  local_38 = *(byte *)(param_1 + 0x36) & 0x1f;
  uStack_3c = 0;
  fVar4 = *(float *)(param_1 + 0x50) - fVar3;
  uStack_34 = 0;
  local_14 = *(byte *)(param_1 + 0x54);
  if (local_14 == 0) {
    if (fVar4 == 0.0) {
      fVar4 = 0.0;
    }
    else {
      lVar1 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
      *_DAT_008a45e8 = lVar1;
      fVar4 = fVar4 * 4.656613e-10 * (float)(uint)((ulong)lVar1 >> 0x21);
    }
    local_18 = (float)(int)(fVar3 + fVar2 + fVar4);
  }
  else {
    if (fVar4 == 0.0) {
      local_18 = 0.0;
    }
    else {
      lVar1 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
      *_DAT_008a45e8 = lVar1;
      local_18 = fVar4 * 4.656613e-10 * (float)(uint)((ulong)lVar1 >> 0x21);
    }
    local_18 = fVar3 + fVar2 + local_18;
  }
  local_14 = local_14 | *(char *)(param_1 + 0x55) << 1;
  local_50[0] = 4;
  local_20 = param_1 + 0x38;
  local_48 = param_2;
  local_40 = param_3;
  FUN__text__0045da60(local_50);
  return;
}


