/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004bbd84; name: FUN_.text__004bbd84
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004bbd84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined4 *local_38;
  undefined1 local_30;
  undefined1 local_2f;
  undefined4 local_28;
  uint uStack_24;
  
  local_28 = FUN__text__004ba030();
  local_38 = &local_28;
  uStack_24 = *(byte *)(param_1 + 0x36) & 0x1f;
  local_30 = *(undefined1 *)(param_1 + 0x58);
  fVar5 = *(float *)(param_1 + 0x4c);
  fVar4 = *(float *)(param_1 + 0x48);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  local_2f = 1;
  local_60 = 0;
  local_58 = 0;
  local_40 = 0;
  local_50 = 0xff;
  local_48 = 0xff;
  uVar2 = *_DAT_008a45f0;
  fVar6 = *(float *)(param_1 + 0x50) - fVar5;
  if (fVar6 == 0.0) {
    fVar6 = 0.0;
  }
  else {
    lVar3 = *_DAT_008a45e8 * 0x5851f42d4c957f2d + 1;
    *_DAT_008a45e8 = lVar3;
    fVar6 = fVar6 * 4.656613e-10 * (float)(uint)((ulong)lVar3 >> 0x21);
  }
  local_68 = param_3;
  FUN__text__00434a40(fVar5 + fVar4 + fVar6,uVar2,uVar1,&local_68,&local_38,
                      *(undefined4 *)(param_1 + 0x54),0);
  return;
}


