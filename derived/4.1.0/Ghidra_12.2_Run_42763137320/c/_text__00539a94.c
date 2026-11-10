/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00539a94; name: FUN_.text__00539a94
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN__text__00539a94(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                   undefined8 *param_4,long param_5,long param_6)

{
  float fVar1;
  ulong uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  long local_90;
  undefined4 local_88;
  undefined4 local_84;
  long local_80;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_18;
  
  uVar6 = param_3._4_4_;
  fVar5 = param_3._0_4_;
  uVar4 = param_2._4_4_;
  fVar3 = param_2._0_4_;
  local_18 = 0;
  local_38 = 0;
  *param_4 = *(undefined8 *)(param_6 + 0xb0);
  FUN__text__00521214(param_5,&local_18,&local_38);
  uVar2 = (ulong)(local_18 != param_6);
  local_50 = FUN__text__00521904(param_5,uVar2);
  local_40 = CONCAT44(uVar6,fVar5);
  uStack_48 = CONCAT44(uVar4,fVar3);
  local_60 = (float)FUN__text__00521a20(param_5,uVar2);
  local_84 = 0x40c90fdb;
  fStack_6c = 0.0;
  local_80 = param_5 + uVar2 * 0x90 + 0x468;
  fVar7 = local_60;
  fVar1 = -fVar3;
  if (ABS(local_60) <= ABS(fVar5)) {
    fVar7 = -fVar5;
    fVar1 = 0.0;
  }
  fVar8 = 0.0;
  if (ABS(local_60) <= ABS(fVar5)) {
    fVar8 = fVar3;
  }
  fStack_64 = 0.0;
  local_90 = _DAT_008a4298 + 0x10;
  fVar9 = SQRT(fVar1 * fVar1 + fVar7 * fVar7 + fVar8 * fVar8);
  local_68 = 0.0;
  if (fVar9 != 0.0) {
    fVar9 = 1.0 / fVar9;
    fStack_6c = fVar1 * fVar9;
    local_68 = fVar7 * fVar9;
    fStack_64 = fVar8 * fVar9;
  }
  local_78 = local_68 * fVar5 - fStack_64 * fVar3;
  fStack_74 = fStack_64 * local_60 - fStack_6c * fVar5;
  local_70 = fStack_6c * fVar3 - local_68 * local_60;
  local_88 = 0x3f800000;
  fStack_5c = fVar3;
  local_58 = fVar5;
  FUN__text__005394c0(param_4,&local_50,param_5 + uVar2 * 0x90 + 0x418,0,
                      *(undefined4 *)((long)param_4 + 0x1c),&local_90);
  return ZEXT816(0);
}


