/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044686c; name: FUN_.text__0044686c
 */


void FUN__text__0044686c(long param_1,long param_2,long param_3,undefined8 param_4,
                        undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  undefined8 local_370;
  undefined4 local_368 [2];
  long local_360;
  undefined8 local_358;
  undefined1 *puStack_350;
  int *local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 uStack_330;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined4 local_240;
  undefined8 local_23c;
  undefined8 local_234;
  undefined4 local_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined5 uStack_68;
  undefined3 local_63;
  undefined5 uStack_60;
  undefined1 local_58;
  
  iVar1 = (**(code **)(*(long *)(param_2 + 0x10) + 0x10))();
  if (iVar1 != 0xb) {
    local_2d8 = 0;
    local_2d0 = CONCAT62(local_2d0._2_6_,0xff00);
    local_88 = 0;
    local_218 = 0xf000000006000018;
    uStack_210 = 0x3f;
    local_240 = 0x3f800000;
    local_360 = 0;
    if (param_3 != 0) {
      local_360 = param_3 + 0x10;
    }
    local_348 = (int *)*param_5;
    uStack_340 = param_5[1];
    uStack_60 = 0;
    local_80 = 0;
    local_234 = 0;
    local_23c = 0;
    local_22c = 0;
    local_1f8 = 0;
    local_1d0 = 0;
    local_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_63 = 0;
    local_2ec = 0;
    local_368[0] = 0;
    local_338 = *(undefined4 *)(param_5 + 2);
    local_334 = *(undefined4 *)((long)param_5 + 0x14);
    uStack_330 = 0;
    local_250 = 0;
    uStack_248 = 0;
    local_228 = 0;
    uStack_220 = 0;
    uStack_2b8 = 0;
    local_2b0 = 0;
    uStack_2a8 = 0;
    local_2a0 = 0;
    uStack_298 = 0;
    local_290 = 0;
    uStack_288 = 0;
    local_280 = 0;
    uStack_278 = 0;
    local_270 = 0;
    uStack_268 = 0;
    local_260 = 0;
    uStack_258 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_1e0 = 0;
    uStack_1d8 = 0;
    if (local_348 != (int *)0x0) {
      *local_348 = *local_348 + 1;
    }
    uStack_2e4 = *(undefined4 *)(param_1 + 0x34);
    local_58 = 3;
    local_370 = 0x400000000;
    local_2e0 = 0;
    local_2e8 = 0;
    if (*(char *)(param_1 + 0x28) != -2) {
      local_2d0 = *param_6;
      local_2c8 = *(undefined4 *)(param_6 + 1);
    }
    local_2c0 = *(undefined8 *)(param_1 + 0x10);
    local_358 = param_4;
    puStack_350 = (undefined1 *)&local_370;
    FUN__text__00446a1c(param_2,local_368);
    FUN__text__004967d0();
    FUN__text__00446c60(&uStack_2b8);
    if (local_348 != (int *)0x0) {
      FUN__text__0040c060();
    }
  }
  return;
}


