/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00533100; name: FUN_.text__00533100
 */


bool FUN__text__00533100(undefined8 *param_1,double param_2,double param_3,double param_4,
                        double param_5,double param_6,long param_7,long param_8,long param_9)

{
  double dVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  undefined8 *local_380;
  double dStack_378;
  double local_370;
  double dStack_368;
  double local_360;
  double dStack_358;
  double local_350;
  double dStack_348;
  double local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  float local_2c0;
  float fStack_2bc;
  float local_2b8;
  undefined8 *local_2b0;
  double dStack_2a8;
  double local_2a0;
  float local_298;
  float local_294;
  float local_290;
  long local_238;
  undefined8 uStack_230;
  undefined2 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  float local_160;
  float local_15c;
  float local_158;
  undefined8 *local_150;
  double local_148;
  double local_140;
  float local_138;
  float local_134;
  float local_130;
  long local_d8;
  undefined8 local_d0;
  undefined2 local_c8;
  undefined8 *local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double dStack_88;
  double local_80;
  undefined8 **local_78;
  
  if (DAT_008ab25c == '\0') {
    return true;
  }
  local_d0 = 0x3f80000000000000;
  local_c0 = &local_220;
  local_168 = 0;
  local_170 = 0;
  fVar4 = (float)(param_4 - (double)param_1);
  fVar2 = (float)(param_5 - param_2);
  fVar18 = (float)(param_6 - param_3);
  local_178 = 0;
  local_180 = 0;
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  dVar19 = (double)fVar4;
  dVar20 = (double)fVar2;
  dVar16 = (double)fVar18;
  local_220 = 0;
  dVar3 = 1.0 / dVar19;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_c8 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_d8 = 0;
  local_218 = 0;
  uStack_210 = 0;
  dVar10 = 1.0 / dVar20;
  dVar1 = 1.0 / dVar16;
  local_380 = param_1;
  dStack_378 = param_2;
  local_370 = param_3;
  dStack_368 = dVar19;
  local_360 = dVar20;
  dStack_358 = dVar16;
  local_350 = dVar3;
  dStack_348 = dVar10;
  local_340 = dVar1;
  local_150 = param_1;
  local_148 = param_2;
  local_140 = param_3;
  local_138 = fVar4;
  local_134 = fVar2;
  local_130 = fVar18;
  if (*(long *)(param_7 + 0x10) == 0) {
    fVar17 = 0.0;
  }
  else {
    FUN__text__00534d00(param_7 + 8,*(long *)(param_7 + 0x10),&local_380,&local_c0);
    if ((char)local_c8 == '\0') {
      fVar17 = 0.0;
    }
    else {
      fVar17 = 1.0;
      local_15c = *(float *)(local_d8 + 0x3c) * local_15c;
      fVar14 = *(float *)(local_d8 + 0x18);
      fVar15 = *(float *)(local_d8 + 0x1c);
      local_160 = *(float *)(local_d8 + 0x38) * local_160;
      local_158 = *(float *)(local_d8 + 0x40) * local_158;
      fVar8 = *(float *)(local_d8 + 0x10);
      fVar5 = *(float *)(local_d8 + 0x14);
      fVar12 = fVar5 * local_160 + local_15c * fVar14 + local_158 * fVar15;
      fVar9 = fVar8 * fVar8 - (fVar5 * fVar5 + fVar14 * fVar14 + fVar15 * fVar15);
      fVar6 = (fVar14 * local_158 - fVar15 * local_15c) * fVar8 + fVar5 * fVar12;
      fVar21 = (fVar15 * local_160 - local_158 * fVar5) * fVar8 + fVar14 * fVar12;
      fVar5 = (fVar5 * local_15c - fVar14 * local_160) * fVar8 + fVar15 * fVar12;
      dVar7 = *(double *)(local_d8 + 0x20);
      dVar11 = *(double *)(local_d8 + 0x28);
      dVar13 = *(double *)(local_d8 + 0x30);
      *(undefined1 *)(param_9 + 0x2b) = 1;
      *(double *)(param_9 + 8) = dVar7 + (double)(fVar6 + fVar6 + local_160 * fVar9);
      *(double *)(param_9 + 0x10) = dVar11 + (double)(fVar21 + fVar21 + local_15c * fVar9);
      *(double *)(param_9 + 0x18) = dVar13 + (double)(fVar5 + fVar5 + local_158 * fVar9);
    }
  }
  if ((param_8 != 0) && (param_8 != param_7)) {
    local_238 = 0;
    uStack_230 = 0x3f80000000000000;
    local_78 = &local_380;
    local_228 = 0;
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    local_2f0 = 0;
    uStack_2e8 = 0;
    local_300 = 0;
    uStack_2f8 = 0;
    local_310 = 0;
    uStack_308 = 0;
    local_320 = 0;
    uStack_318 = 0;
    local_330 = 0;
    uStack_328 = 0;
    local_340 = 0.0;
    uStack_338 = 0;
    local_350 = 0.0;
    dStack_348 = 0.0;
    local_360 = 0.0;
    dStack_358 = 0.0;
    local_370 = 0.0;
    dStack_368 = 0.0;
    local_380 = (undefined8 *)0x0;
    dStack_378 = 0.0;
    local_2b0 = param_1;
    dStack_2a8 = param_2;
    local_2a0 = param_3;
    local_298 = fVar4;
    local_294 = fVar2;
    local_290 = fVar18;
    local_c0 = param_1;
    dStack_b8 = param_2;
    local_b0 = param_3;
    dStack_a8 = dVar19;
    local_a0 = dVar20;
    dStack_98 = dVar16;
    local_90 = dVar3;
    dStack_88 = dVar10;
    local_80 = dVar1;
    if (*(long *)(param_8 + 0x10) != 0) {
      FUN__text__00534d00(param_8 + 8,*(long *)(param_8 + 0x10),&local_c0,&local_78);
      if (fVar17 < 1.0 && (char)local_228 != '\0') {
        fVar17 = 1.0;
        fStack_2bc = *(float *)(local_238 + 0x3c) * fStack_2bc;
        fVar8 = *(float *)(local_238 + 0x18);
        fVar9 = *(float *)(local_238 + 0x1c);
        local_2c0 = *(float *)(local_238 + 0x38) * local_2c0;
        local_2b8 = *(float *)(local_238 + 0x40) * local_2b8;
        fVar18 = *(float *)(local_238 + 0x10);
        fVar2 = *(float *)(local_238 + 0x14);
        fVar6 = fVar2 * local_2c0 + fStack_2bc * fVar8 + local_2b8 * fVar9;
        fVar5 = fVar18 * fVar18 - (fVar2 * fVar2 + fVar8 * fVar8 + fVar9 * fVar9);
        fVar4 = (fVar8 * local_2b8 - fVar9 * fStack_2bc) * fVar18 + fVar2 * fVar6;
        fVar12 = (fVar9 * local_2c0 - local_2b8 * fVar2) * fVar18 + fVar8 * fVar6;
        fVar2 = (fVar2 * fStack_2bc - fVar8 * local_2c0) * fVar18 + fVar9 * fVar6;
        dVar1 = *(double *)(local_238 + 0x20);
        dVar3 = *(double *)(local_238 + 0x28);
        dVar10 = *(double *)(local_238 + 0x30);
        *(undefined1 *)(param_9 + 0x2b) = 1;
        *(double *)(param_9 + 8) = dVar1 + (double)(fVar4 + fVar4 + local_2c0 * fVar5);
        *(double *)(param_9 + 0x10) = dVar3 + (double)(fVar12 + fVar12 + fStack_2bc * fVar5);
        *(double *)(param_9 + 0x18) = dVar10 + (double)(fVar2 + fVar2 + local_2b8 * fVar5);
      }
    }
  }
  if (*(float *)(param_9 + 0x20) < fVar17) {
    *(float *)(param_9 + 0x20) = fVar17;
    *(undefined1 *)(param_9 + 0x28) = 0;
  }
  if ((int)local_d0 != 0) {
    FUN__text__005354bc(&local_220);
  }
  return (char)local_c8 == '\0';
}


