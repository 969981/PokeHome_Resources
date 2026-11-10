/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a1164; name: FUN_.text__006a1164
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__006a1164(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 param_5,undefined8 param_6,long param_7,undefined1 *param_8,
                        undefined1 param_9)

{
  size_t __n;
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  undefined1 auStack_1a0 [8];
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  long local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  long *plStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  uStack_c8 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_160 = 0x3f8000003f800000;
  uStack_158 = 0;
  local_140 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  lVar3 = (long)*_DAT_008a6978 * 0x30 + (long)*_DAT_008a6990 * 8 + (long)*_DAT_008a6980 * 0x18 +
          (long)*_DAT_008a6988 * 0x68;
  __n = lVar3 + 0x40;
  local_d0 = 0xffffffff00000000;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_c0 = (undefined8 *)0x0;
  local_198 = param_4;
  local_150 = param_5;
  uStack_148 = param_6;
  plStack_138 = param_1;
  memset(auStack_1a0 + -(lVar3 + 0x4fU & 0xfffffffffffffff0),0,__n);
  local_170 = 0;
  local_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  uStack_188 = 0;
  FUN__text__006a4df0(&local_190,auStack_1a0 + -(lVar3 + 0x4fU & 0xfffffffffffffff0),__n);
  local_80 = local_80 & 0xffffffff00000000;
  local_b8 = CONCAT71(local_b8._1_7_,param_8[0x19]);
  local_90 = CONCAT71(CONCAT61(local_90._2_6_,param_9),*param_8);
  uVar1 = local_90;
  local_90 = CONCAT44(*(undefined4 *)(param_7 + 8),(undefined4)local_90);
  local_90._0_3_ = CONCAT12(param_8[0x18],(short)uVar1);
  local_b0 = *(undefined8 *)(param_8 + 8);
  local_a8 = *(undefined8 *)(param_8 + 0x10);
  local_88 = *(undefined8 *)(param_8 + 0x1a);
  local_78 = *(undefined8 *)(param_8 + 0x28);
  uStack_70 = *(undefined8 *)(param_8 + 0x30);
  local_c0 = &local_190;
  uVar2 = (**(code **)(*param_1 + 0x80))(param_1,param_2,param_3,param_7,local_198,&local_160,0);
  if (local_170 != 0) {
    FUN__text__006a1380(&local_190,param_3);
    if (local_170 != 0) {
      FUN__text__006a4560();
      local_170 = 0;
    }
    local_180 = 0;
    local_190 = 0;
    local_168 = 0;
  }
  FUN__text__006a4e04(&local_190);
  return uVar2 & 1;
}


