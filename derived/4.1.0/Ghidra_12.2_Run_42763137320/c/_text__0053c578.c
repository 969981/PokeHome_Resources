/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053c578; name: FUN_.text__0053c578
 */


undefined1 FUN__text__0053c578(long *param_1,double *param_2,double *param_3,undefined8 *param_4)

{
  long lVar1;
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
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  double local_120;
  double dStack_118;
  double local_110;
  float local_108;
  float fStack_104;
  float local_100;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_88;
  undefined8 local_80;
  undefined2 local_78;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  double dStack_48;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  undefined1 *local_8;
  
  local_8 = (undefined1 *)&local_1f0;
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_68 = *param_2;
  dStack_60 = param_2[1];
  local_58 = param_2[2];
  local_120 = *param_2;
  dStack_118 = param_2[1];
  local_160 = 0;
  uStack_158 = 0;
  local_108 = (float)(*param_3 - *param_2);
  local_110 = param_2[2];
  local_50 = (double)local_108;
  fStack_104 = (float)(param_3[1] - param_2[1]);
  local_c0 = param_4[2];
  uStack_b8 = param_4[3];
  local_170 = 0;
  uStack_168 = 0;
  local_78 = 0;
  local_180 = 0;
  uStack_178 = 0;
  dStack_38 = 1.0 / local_50;
  local_100 = (float)(param_3[2] - param_2[2]);
  dStack_48 = (double)fStack_104;
  local_b0 = param_4[4];
  local_d0 = *param_4;
  uStack_c8 = param_4[1];
  local_190 = 0;
  uStack_188 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_40 = (double)local_100;
  local_88 = 0;
  local_80 = 0x3f80000000000000;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_30 = 1.0 / dStack_48;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  dStack_28 = 1.0 / local_40;
  lVar1 = *(long *)(*param_1 + 0x10);
  if (lVar1 != 0) {
    FUN__text__0051ae70(*param_1 + 8,lVar1,&local_68,&local_8);
    if ((int)local_80 != 0) {
      FUN__text__0051b7d0(&local_1f0);
    }
  }
  return (undefined1)local_78;
}


