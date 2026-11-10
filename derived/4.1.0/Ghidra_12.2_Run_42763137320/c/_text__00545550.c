/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00545550; name: FUN_.text__00545550
 */


bool FUN__text__00545550(long param_1,undefined8 *param_2,long param_3,undefined8 *param_4,
                        int *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *__s;
  long lVar7;
  long lVar8;
  int local_5b8 [17];
  int local_574;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_70 [2];
  
  iVar4 = *(int *)(param_3 + 0x380);
  if (iVar4 < 0x10) {
    uVar1 = param_2[5];
    puVar5 = (undefined8 *)(param_3 + (long)iVar4 * 0x30);
    uVar6 = param_2[2];
    uVar2 = param_2[3];
    puVar5[4] = param_2[4];
    puVar5[5] = uVar1;
    uVar1 = *param_2;
    uVar3 = param_2[1];
    puVar5[2] = uVar6;
    puVar5[3] = uVar2;
    *puVar5 = uVar1;
    puVar5[1] = uVar3;
    puVar5 = param_2 + 6;
    if (*(int *)(param_3 + 900) < 1) {
      puVar5 = param_2 + 7;
    }
    *(undefined8 *)(param_3 + (long)iVar4 * 8 + 0x300) = *puVar5;
    *(int *)(param_3 + 0x380) = *(int *)(param_3 + 0x380) + 1;
    return false;
  }
  local_388 = 0;
  local_390 = 0;
  local_510 = 0;
  uStack_508 = 0;
  local_398 = 0;
  local_3a0 = 0;
  local_3a8 = 0;
  local_3b0 = 0;
  local_348 = 0;
  local_350 = 0;
  local_358 = 0;
  local_360 = 0;
  local_368 = 0;
  local_370 = 0;
  local_308 = 0;
  local_310 = 0;
  local_318 = 0;
  local_320 = 0;
  local_328 = 0;
  local_330 = 0;
  local_2c8 = 0;
  local_2d0 = 0;
  local_2d8 = 0;
  local_2e0 = 0;
  local_2e8 = 0;
  local_2f0 = 0;
  local_288 = 0;
  local_290 = 0;
  local_298 = 0;
  local_2a0 = 0;
  local_2a8 = 0;
  local_2b0 = 0;
  local_248 = 0;
  local_250 = 0;
  local_258 = 0;
  local_260 = 0;
  local_268 = 0;
  local_270 = 0;
  local_208 = 0;
  local_210 = 0;
  local_218 = 0;
  local_220 = 0;
  local_228 = 0;
  local_230 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1e8 = 0;
  local_1f0 = 0;
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  local_160 = 0;
  local_168 = 0;
  local_170 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_520 = 0;
  uStack_518 = 0;
  local_530 = 0;
  uStack_528 = 0;
  local_540 = 0;
  uStack_538 = 0;
  local_550 = 0;
  uStack_548 = 0;
  local_560 = 0;
  uStack_558 = 0;
  local_4f0 = 0;
  uStack_4e8 = 0;
  local_4e0 = 0;
  uStack_4d8 = 0;
  local_4d0 = 0;
  uStack_4c8 = 0;
  local_490 = 0;
  uStack_488 = 0;
  local_4a0 = 0;
  uStack_498 = 0;
  local_4b0 = 0;
  uStack_4a8 = 0;
  local_450 = 0;
  uStack_448 = 0;
  local_460 = 0;
  uStack_458 = 0;
  local_470 = 0;
  uStack_468 = 0;
  local_410 = 0;
  uStack_408 = 0;
  local_420 = 0;
  uStack_418 = 0;
  local_430 = 0;
  uStack_428 = 0;
  local_3d0 = 0;
  uStack_3c8 = 0;
  local_3e0 = 0;
  uStack_3d8 = 0;
  local_3f0 = 0;
  uStack_3e8 = 0;
  FUN__text__00545aa0(param_1,param_3,param_2,local_5b8);
  FUN__text__00545fc0(param_1,local_5b8,4);
  for (puVar5 = *(undefined8 **)(param_1 + 0x10); puVar5 != (undefined8 *)0x0;
      puVar5 = (undefined8 *)puVar5[0x1c4]) {
    if (puVar5[0x1c6] != 0) goto LAB__text__005457f4;
  }
  puVar5 = (undefined8 *)FUN__text__00400f90(10,0xe38,0x10);
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[0x1c4] = 0;
    puVar5[0xe2] = puVar5 + 0x71;
    *puVar5 = 0;
    puVar5[0x1c6] = puVar5 + 0x153;
    puVar5[0x71] = puVar5;
    puVar5[0x153] = puVar5 + 0xe2;
    *(undefined4 *)(puVar5 + 0x1c5) = 4;
    if (*(long *)(param_1 + 0x10) == 0) {
      *(undefined8 **)(param_1 + 0x10) = puVar5;
      puVar5[0x1c4] = 0;
      __s = (undefined8 *)puVar5[0x1c6];
    }
    else {
      puVar5[0x1c4] = *(long *)(param_1 + 0x10);
      *(undefined8 **)(param_1 + 0x10) = puVar5;
LAB__text__005457f4:
      __s = (undefined8 *)puVar5[0x1c6];
    }
    if (__s != (undefined8 *)0x0) {
      puVar5[0x1c6] = *__s;
      *__s = 0;
      *(int *)(puVar5 + 0x1c5) = *(int *)(puVar5 + 0x1c5) + -1;
      memset(__s,0,0x300);
      __s[0x70] = 0xffffffff00000000;
      *param_4 = __s;
      iVar4 = *param_5;
      goto joined_r0x00545870;
    }
  }
  __s = (undefined8 *)0x0;
  *param_5 = 0x34;
  *param_4 = 0;
  iVar4 = *param_5;
joined_r0x00545870:
  if (iVar4 == 1) {
    *(undefined4 *)((long)__s + 900) = *(undefined4 *)(param_3 + 900);
    *(undefined4 *)(param_3 + 0x380) = 0;
    if (0 < local_574) {
      uVar6 = *param_4;
      lVar7 = 0;
      lVar8 = 200;
      do {
        local_70[0] = param_3;
        local_70[1] = uVar6;
        FUN__text__00545550(param_1,(long)local_5b8 + lVar8,local_70[local_5b8[lVar7]],0,param_5);
        lVar7 = lVar7 + 1;
        lVar8 = lVar8 + 0x40;
      } while (lVar7 < local_574);
    }
  }
  return iVar4 == 1;
}


