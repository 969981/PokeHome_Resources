/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053a26c; name: FUN_.text__0053a26c
 */


undefined1  [16]
FUN__text__0053a26c(undefined1 param_1 [16],double param_2,double param_3,undefined8 *param_4,
                   long param_5,long param_6,long param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double local_1a0;
  double dStack_198;
  double local_190;
  undefined8 *puStack_188;
  long *local_180;
  undefined8 uStack_178;
  float local_170;
  undefined2 local_16c;
  long local_168;
  ulong local_160;
  long local_158;
  ulong local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  long local_100;
  ulong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined1 auStack_70 [8];
  long local_68;
  
  *param_4 = *(undefined8 *)(param_7 + 0xb0);
  FUN__text__00521214(param_5,&local_68,auStack_70);
  uVar1 = (ulong)(local_68 != param_7);
  dVar3 = (double)FUN__text__00521904(param_5,uVar1);
  dVar4 = param_2;
  dVar5 = param_3;
  local_88 = dVar3;
  dStack_80 = param_2;
  local_78 = param_3;
  FUN__text__00521214(param_6,&local_68,auStack_70);
  uVar2 = (ulong)(local_68 != param_7);
  local_a0 = (double)FUN__text__00521904(param_6,uVar2);
  local_e8 = 0;
  uStack_e0 = 1;
  local_c8 = 7;
  uStack_c0 = 1;
  local_148 = 0xffffffffffffffff;
  uStack_140 = 0xffffffffffffffff;
  local_d8 = 3;
  uStack_d0 = 5;
  local_b8 = 3;
  uStack_b0 = 5;
  local_f0 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_110 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_a8 = 7;
  local_120 = 0;
  uStack_118 = 0;
  local_138 = 0;
  local_158 = 0;
  local_150 = 0;
  local_168 = 0;
  local_160 = 0;
  local_170 = (float)SQRT((dVar3 - local_a0) * (dVar3 - local_a0) +
                          (param_2 - dVar4) * (param_2 - dVar4) +
                          (param_3 - dVar5) * (param_3 - dVar5)) * 8.0;
  uStack_178 = param_8;
  dStack_98 = dVar4;
  local_90 = dVar5;
  if (*(ulong *)(param_6 + uVar2 * 0x90 + 0x460) < *(ulong *)(param_5 + uVar1 * 0x90 + 0x460)) {
    puStack_188 = &local_130;
    local_180 = &local_168;
    local_16c = 0x100;
    local_1a0 = local_a0;
    dStack_198 = dVar4;
    local_190 = dVar5;
    FUN__text__00539e90(param_4,&local_88,param_5 + uVar1 * 0x90 + 0x418,&local_1a0);
    FUN__text__0052c820(param_8);
  }
  else {
    puStack_188 = &local_130;
    local_180 = &local_168;
    local_1a0 = local_88;
    dStack_198 = dStack_80;
    local_16c = 0x100;
    local_190 = local_78;
    FUN__text__00539e90(param_4,&local_a0,param_6 + uVar2 * 0x90 + 0x418,&local_1a0);
  }
  if (local_168 != 0) {
    local_160 = local_160 & 0xffffffff00000000;
    FUN__text__00400fc0(9);
    local_168 = 0;
    local_160 = local_160 & 0xffffffff;
  }
  if (local_158 != 0) {
    local_150 = local_150 & 0xffffffff00000000;
    FUN__text__00400fc0(9);
    local_158 = 0;
    local_150 = local_150 & 0xffffffff;
  }
  FUN__text__00507b30(&local_130);
  FUN__text__00507b30(&local_130);
  if (local_100 != 0) {
    local_f8 = local_f8 & 0xffffffff00000000;
    FUN__text__00400fc0(0xb);
    local_100 = 0;
    local_f8 = local_f8 & 0xffffffff;
  }
  FUN__text__0051cae0(&local_120);
  return ZEXT816(0);
}


