/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005185c0; name: FUN_.text__005185c0
 */


uint FUN__text__005185c0(undefined1 param_1 [16],double param_2,double param_3,long *param_4,
                        long param_5,double *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  double local_170;
  double dStack_168;
  double local_160;
  float local_158;
  float fStack_154;
  float local_150;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_e8;
  undefined8 local_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined2 local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined1 *local_68;
  
  uVar4 = (uint)*(byte *)(param_5 + 0x6f);
  if ((*(byte *)(param_5 + 0x6f) & 1) == 0) {
    uStack_118 = *(undefined8 *)(param_5 + 0x38);
    lVar3 = *(long *)(param_5 + 0x40);
    local_120 = *(undefined8 *)(param_5 + 0x30);
    if (lVar3 == 0) {
      local_170 = (double)FUN__text__00518834(param_5,(long)*(char *)(param_5 + 0x6c));
      local_d8 = local_d8 & 0xffffffffffff0000;
      fStack_154 = (float)(param_6[1] - param_2);
      local_e8 = 0;
      local_e0 = 0x3f80000000000000;
      local_190 = 0;
      uStack_188 = 0;
      local_158 = (float)(*param_6 - local_170);
      local_150 = (float)(param_6[2] - param_3);
      dStack_a0 = (double)local_158;
      local_98 = (double)fStack_154;
      dStack_90 = (double)local_150;
      local_88 = 1.0 / dStack_a0;
      dStack_80 = 1.0 / local_98;
      local_1a0 = 0;
      uStack_198 = 0;
      local_78 = 1.0 / dStack_90;
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_1c0 = 0;
      uStack_1b8 = 0;
      local_1d0 = 0;
      uStack_1c8 = 0;
      local_1e0 = 0;
      uStack_1d8 = 0;
      local_1f0 = 0;
      uStack_1e8 = 0;
      local_200 = 0;
      uStack_1f8 = 0;
      local_210 = 0;
      uStack_208 = 0;
      local_220 = 0;
      uStack_218 = 0;
      local_230 = 0;
      uStack_228 = 0;
      lVar3 = *(long *)(*param_4 + 0x10);
      local_240 = 0;
      uStack_238 = 0;
      if (lVar3 != 0) {
        dStack_168 = param_2;
        local_160 = param_3;
        local_b8 = local_170;
        dStack_b0 = param_2;
        local_a8 = param_3;
        local_68 = (undefined1 *)&local_240;
        FUN__text__0051a160(*param_4 + 8,lVar3,&local_b8,&local_68);
        if ((int)local_e0 != 0) {
          FUN__text__0051a9cc(&local_240);
        }
      }
      local_c8._0_1_ = (char)local_d8;
    }
    else {
      uVar1 = *(undefined8 *)(lVar3 + 0x30);
      uVar2 = *(undefined8 *)(lVar3 + 0x38);
      dVar5 = (double)FUN__text__00518834(param_5,(long)*(char *)(param_5 + 0x6c));
      dVar7 = param_2;
      dVar8 = param_3;
      dVar6 = (double)FUN__text__00518834(lVar3,*(char *)(lVar3 + 0x6c) == '\0');
      local_d8 = 0;
      local_d0 = 0x3f80000000000000;
      local_190 = 0;
      uStack_188 = 0;
      local_158 = (float)(dVar6 - dVar5);
      fStack_154 = (float)(dVar7 - param_2);
      local_150 = (float)(dVar8 - param_3);
      local_1a0 = 0;
      uStack_198 = 0;
      local_c8 = 0;
      dStack_a0 = (double)local_158;
      local_98 = (double)fStack_154;
      dStack_90 = (double)local_150;
      local_88 = 1.0 / dStack_a0;
      local_1b0 = 0;
      uStack_1a8 = 0;
      dStack_80 = 1.0 / local_98;
      local_1c0 = 0;
      uStack_1b8 = 0;
      local_1d0 = 0;
      uStack_1c8 = 0;
      local_1e0 = 0;
      uStack_1d8 = 0;
      local_1f0 = 0;
      uStack_1e8 = 0;
      local_200 = 0;
      uStack_1f8 = 0;
      local_210 = 0;
      uStack_208 = 0;
      local_220 = 0;
      uStack_218 = 0;
      local_230 = 0;
      uStack_228 = 0;
      local_240 = 0;
      uStack_238 = 0;
      local_78 = 1.0 / dStack_90;
      lVar3 = *(long *)(*param_4 + 0x10);
      if (lVar3 != 0) {
        local_170 = dVar5;
        dStack_168 = param_2;
        local_160 = param_3;
        local_110 = uVar1;
        uStack_108 = uVar2;
        local_b8 = dVar5;
        dStack_b0 = param_2;
        local_a8 = param_3;
        local_68 = (undefined1 *)&local_240;
        FUN__text__0051ae70(*param_4 + 8,lVar3,&local_b8,&local_68);
        if ((int)local_d0 != 0) {
          FUN__text__0051b7d0(&local_240);
        }
      }
    }
    uVar4 = *(byte *)(param_5 + 0x6f) & 0xfffffffd | (uint)((char)local_c8 == '\0') << 1 | 1;
    *(char *)(param_5 + 0x6f) = (char)uVar4;
  }
  return uVar4 >> 1 & 1;
}


