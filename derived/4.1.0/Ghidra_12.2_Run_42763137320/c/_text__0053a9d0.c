/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0053a9d0; name: FUN_.text__0053a9d0
 */


void FUN__text__0053a9d0(long *param_1,undefined8 *param_2,double *param_3,float *param_4,
                        undefined8 param_5,undefined8 *param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  undefined1 *puVar13;
  double dVar14;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  double local_418;
  undefined1 *local_410;
  double local_408;
  double local_400;
  double local_3f8;
  undefined1 *local_3f0;
  double local_3e8;
  double local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  double local_350;
  double dStack_348;
  double local_340;
  undefined8 local_338;
  float local_330;
  long local_300;
  long lStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2c8;
  ulong local_2c0;
  ulong local_2b8;
  ulong local_2b0;
  undefined2 local_2a8;
  float local_294;
  float fStack_290;
  float local_28c;
  undefined8 local_288;
  float local_280;
  float local_278;
  float fStack_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  undefined8 local_260;
  long local_258;
  undefined1 auStack_250 [8];
  undefined8 local_248;
  undefined8 local_240;
  double local_238;
  double local_230;
  double local_228;
  undefined8 local_220;
  float local_218;
  long local_1e0;
  ulong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  undefined1 *local_a8;
  double local_a0;
  undefined1 *local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined8 *local_68;
  
  *(undefined1 *)param_2 = 0;
  if (param_6 == (undefined8 *)0x0) {
    local_240 = 0;
    local_248 = 0;
  }
  else {
    local_248 = *param_6;
    local_240 = param_6[1];
  }
  local_238 = *param_3;
  local_230 = param_3[1];
  local_1e0 = 0;
  local_420 = *param_3;
  local_418 = param_3[1];
  local_1d8 = 0;
  local_400 = (double)param_4[1];
  local_220 = *(undefined8 *)param_4;
  local_408 = (double)*param_4;
  local_3f8 = (double)param_4[2];
  local_228 = param_3[2];
  local_1d0 = 0;
  puVar13 = (undefined1 *)(1.0 / local_408);
  local_218 = param_4[2];
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_c0 = *param_3;
  local_b8 = param_3[1];
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_3e8 = 1.0 / local_400;
  local_b0 = param_3[2];
  local_a8 = *(undefined1 **)param_4;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  local_160 = 0;
  local_168 = 0;
  local_170 = 0;
  local_178 = 0;
  local_180 = 0;
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_a0 = (double)CONCAT44(local_a0._4_4_,param_4[2]);
  local_98 = auStack_250;
  local_410 = (undefined1 *)param_3[2];
  dVar10 = 1.0 / local_3f8;
  lVar5 = *(long *)(*param_1 + 0x10);
  local_3f0 = puVar13;
  local_3e0 = dVar10;
  if (lVar5 != 0) {
    FUN__text__00540060(*param_1 + 8,lVar5,&local_420,&local_c0);
    if (param_6 == (undefined8 *)0x0) {
      if ((int)local_1d8 != 0) {
        lVar5 = 0;
        uVar7 = 0;
        do {
          plVar2 = (long *)(local_1e0 + lVar5);
          lVar6 = *plVar2;
          uVar9 = FUN__text__0051da68(plVar2,param_3);
          local_260 = CONCAT44(SUB84(dVar10,0),uVar9);
          local_258 = CONCAT44(local_258._4_4_,(int)puVar13);
          iVar4 = FUN__text__00516f44(lVar6,&local_260);
          if (-2 < iVar4) {
            lVar1 = local_1e0 + lVar5;
            fVar12 = *(float *)(lVar6 + 0x10) * (*(float *)(lVar1 + 0x10) - *(float *)(lVar6 + 4)) +
                     (*(float *)(lVar1 + 0x14) - *(float *)(lVar6 + 8)) * *(float *)(lVar6 + 0x14) +
                     (*(float *)(lVar1 + 0x18) - *(float *)(lVar6 + 0xc)) * *(float *)(lVar6 + 0x18)
            ;
            dVar14 = (double)(ulong)(uint)fVar12;
            local_26c = *(float *)(lVar6 + 4) + *(float *)(lVar6 + 0x10) * fVar12;
            local_268 = *(float *)(lVar6 + 8) + *(float *)(lVar6 + 0x14) * fVar12;
            dVar11 = (double)(ulong)(uint)local_268;
            local_264 = *(float *)(lVar6 + 0xc) + *(float *)(lVar6 + 0x18) * fVar12;
            dVar10 = (double)FUN__text__0051d9b8(plVar2,&local_26c);
            local_300 = *plVar2;
            lStack_2f8 = plVar2[1];
            local_2c8 = 0;
            local_350 = *param_3;
            dStack_348 = param_3[1];
            local_2b8 = local_2b8 & 0xffffffffffff0000;
            local_340 = param_3[2];
            local_288 = &local_420;
            local_2c0 = 0x3f80000000000000;
            local_370 = 0;
            uStack_368 = 0;
            local_278 = (float)(dVar10 - *param_3);
            fStack_274 = (float)(dVar11 - param_3[1]);
            local_380 = 0;
            uStack_378 = 0;
            local_330 = (float)(dVar14 - param_3[2]);
            puVar13 = (undefined1 *)(double)local_278;
            local_a0 = (double)fStack_274;
            local_390 = 0;
            uStack_388 = 0;
            local_3a0 = 0;
            uStack_398 = 0;
            local_338 = CONCAT44(fStack_274,local_278);
            local_3b0 = 0;
            uStack_3a8 = 0;
            dStack_90 = 1.0 / (double)puVar13;
            local_98 = (undefined1 *)(double)local_330;
            local_3c0 = 0;
            uStack_3b8 = 0;
            local_b8 = param_3[1];
            local_b0 = param_3[2];
            local_88 = 1.0 / local_a0;
            local_3d0 = 0;
            uStack_3c8 = 0;
            local_3e0 = 0.0;
            uStack_3d8 = 0;
            local_3f0 = (undefined1 *)0x0;
            local_3e8 = 0.0;
            local_400 = 0.0;
            local_3f8 = 0.0;
            local_410 = (undefined1 *)0x0;
            local_408 = 0.0;
            local_420 = 0.0;
            local_418 = 0.0;
            local_c0 = *param_3;
            dVar10 = 1.0 / (double)local_98;
            lVar6 = *(long *)(*param_1 + 0x10);
            local_270 = local_330;
            local_a8 = puVar13;
            dStack_80 = dVar10;
            if (lVar6 != 0) {
              FUN__text__0051a160(*param_1 + 8,lVar6,&local_c0,&local_288);
              if ((int)local_2c0 != 0) {
                FUN__text__0051a9cc(&local_420);
                local_2c0 = local_2c0 & 0xffffffff00000000;
              }
            }
            if (((char)local_2b8 == '\0') &&
               (FUN__text__0051c6f4(param_8 + 0x10,plVar2), -1 < iVar4)) {
              local_460 = *param_2;
              uStack_458 = param_2[1];
              local_450 = param_2[2];
              uStack_448 = param_2[3];
              FUN__text__0053b220(param_1,&local_460);
            }
          }
          uVar7 = uVar7 + 1;
          lVar5 = lVar5 + 0x20;
        } while (uVar7 < (local_1d8 & 0xffffffff));
      }
    }
    else if ((int)local_1d8 != 0) {
      lVar5 = 0;
      uVar7 = 0;
      do {
        lVar6 = *(long *)(local_1e0 + lVar5);
        local_258 = ((long *)(local_1e0 + lVar5))[1];
        local_260 = lVar6;
        local_26c = (float)FUN__text__0051da68(&local_260,param_3);
        local_268 = SUB84(dVar10,0);
        local_264 = SUB84(puVar13,0);
        iVar4 = FUN__text__00516f44(lVar6,&local_26c);
        if (-1 < iVar4) {
          lVar1 = local_1e0 + lVar5;
          fVar12 = *(float *)(lVar6 + 0x10) * (*(float *)(lVar1 + 0x10) - *(float *)(lVar6 + 4)) +
                   (*(float *)(lVar1 + 0x14) - *(float *)(lVar6 + 8)) * *(float *)(lVar6 + 0x14) +
                   (*(float *)(lVar1 + 0x18) - *(float *)(lVar6 + 0xc)) * *(float *)(lVar6 + 0x18);
          local_278 = *(float *)(lVar6 + 4) + *(float *)(lVar6 + 0x10) * fVar12;
          fStack_274 = *(float *)(lVar6 + 8) + *(float *)(lVar6 + 0x14) * fVar12;
          dVar10 = (double)(ulong)(uint)fStack_274;
          local_270 = *(float *)(lVar6 + 0xc) + *(float *)(lVar6 + 0x18) * fVar12;
          puVar13 = (undefined1 *)(ulong)(uint)local_270;
          uVar9 = FUN__text__005171a0(lVar6,iVar4);
          uVar8 = *param_6;
          local_288 = (undefined8 *)CONCAT44(SUB84(dVar10,0),uVar9);
          local_280 = SUB84(puVar13,0);
          local_420 = (double)FUN__text__0051d9b8(&local_260,&local_288);
          local_418 = dVar10;
          local_410 = puVar13;
          uVar9 = FUN__text__0051da68(param_6,&local_420);
          local_c0 = (double)CONCAT44(SUB84(dVar10,0),uVar9);
          local_b8 = (double)CONCAT44(local_b8._4_4_,(int)puVar13);
          iVar4 = FUN__text__00516f44(uVar8,&local_c0);
          if (-1 < iVar4) {
            local_420 = (double)CONCAT44(local_288._4_4_ - local_268,(float)local_288 - local_26c);
            local_418 = (double)CONCAT44(local_418._4_4_,local_280 - local_264);
            fVar12 = local_288._4_4_ - local_268;
            fVar3 = local_26c;
            local_294 = (float)FUN__text__0051dafc(&local_260,&local_420);
            local_330 = fVar3;
            fStack_290 = fVar12;
            local_a8 = (undefined1 *)(double)local_294;
            local_a0 = (double)fStack_290;
            puVar13 = (undefined1 *)(double)local_330;
            dStack_90 = 1.0 / (double)local_a8;
            local_2b8 = 0;
            local_350 = *param_3;
            dStack_348 = param_3[1];
            local_2a8 = 0;
            local_340 = param_3[2];
            local_2f0 = *param_6;
            uStack_2e8 = param_6[1];
            local_c0 = *param_3;
            local_b8 = param_3[1];
            local_300 = local_260;
            lStack_2f8 = local_258;
            local_b0 = param_3[2];
            local_338 = CONCAT44(fStack_290,local_294);
            local_370 = 0;
            uStack_368 = 0;
            local_380 = 0;
            uStack_378 = 0;
            local_2b0 = 0x3f80000000000000;
            local_390 = 0;
            uStack_388 = 0;
            local_68 = &local_420;
            local_3a0 = 0;
            uStack_398 = 0;
            local_3b0 = 0;
            uStack_3a8 = 0;
            local_3c0 = 0;
            uStack_3b8 = 0;
            local_3d0 = 0;
            uStack_3c8 = 0;
            local_88 = 1.0 / local_a0;
            local_3e0 = 0.0;
            uStack_3d8 = 0;
            dVar10 = 1.0 / (double)puVar13;
            local_3f0 = (undefined1 *)0x0;
            local_3e8 = 0.0;
            local_400 = 0.0;
            local_3f8 = 0.0;
            local_410 = (undefined1 *)0x0;
            local_408 = 0.0;
            local_420 = 0.0;
            local_418 = 0.0;
            lVar6 = *(long *)(*param_1 + 0x10);
            local_28c = local_330;
            local_98 = puVar13;
            dStack_80 = dVar10;
            if (lVar6 != 0) {
              FUN__text__0051ae70(*param_1 + 8,lVar6,&local_c0,&local_68);
              if ((int)local_2b0 != 0) {
                FUN__text__0051b7d0(&local_420);
                local_2b0 = local_2b0 & 0xffffffff00000000;
              }
            }
            if ((char)local_2a8 == '\0') {
              local_440 = *param_2;
              uStack_438 = param_2[1];
              local_430 = param_2[2];
              uStack_428 = param_2[3];
              FUN__text__0053b220(param_1,&local_440);
            }
          }
        }
        uVar7 = uVar7 + 1;
        lVar5 = lVar5 + 0x20;
      } while (uVar7 < (local_1d8 & 0xffffffff));
    }
  }
  if (local_1e0 != 0) {
    local_1d8 = local_1d8 & 0xffffffff00000000;
    FUN__text__00400fc0(0xb);
  }
  return;
}


