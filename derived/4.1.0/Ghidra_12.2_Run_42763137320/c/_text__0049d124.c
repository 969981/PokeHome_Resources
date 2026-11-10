/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0049d124; name: FUN_.text__0049d124
 */


undefined4 FUN__text__0049d124(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_388 [24];
  long local_370 [5];
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  int *local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined1 *local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_21c;
  undefined8 local_214;
  undefined4 local_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined2 local_1d8;
  ushort local_1d6;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  
  local_348 = *param_2;
  uStack_340 = param_2[1];
  local_338 = param_2[2];
  uStack_330 = param_2[3];
  local_328 = (int *)param_2[4];
  local_320 = param_2[5];
  local_318 = *(undefined4 *)(param_2 + 6);
  uStack_314 = *(undefined4 *)((long)param_2 + 0x34);
  if (local_328 == (int *)0x0) {
    local_1d6 = 0;
  }
  else {
    *local_328 = *local_328 + 1;
    local_1d6 = local_1d6 & 0xf800;
  }
  uStack_2b0 = param_2[0x13];
  local_2a8 = param_2[0x14];
  local_2c0 = (undefined1 *)param_2[0x11];
  local_2b8 = param_2[0x12];
  local_58 = param_2[0x5e];
  uStack_2a0 = param_2[0x15];
  uStack_2e0 = param_2[0xd];
  local_2d8 = param_2[0xe];
  local_50 = param_2[0x5f];
  local_228 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_214 = 0;
  uStack_2d0 = param_2[0xf];
  local_2c8 = param_2[0x10];
  local_21c = 0;
  local_20c = 0;
  local_1d8 = 0;
  local_60 = 0;
  local_68 = 0;
  local_1b0 = 0;
  uStack_2f0 = param_2[0xb];
  local_2e8 = param_2[0xc];
  local_300 = param_2[9];
  local_2f8 = param_2[10];
  local_310 = param_2[7];
  uStack_308 = param_2[8];
  local_298 = 0;
  uStack_290 = 0;
  local_1f8 = 0xf000000006000018;
  uStack_1f0 = 0x3f;
  local_220 = 0x3f800000;
  local_48 = param_2[0x60];
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  FUN__text__0049c600(&local_298,param_2 + 0x16);
  local_40 = param_2[0x61];
  local_38 = *(undefined1 *)(param_2 + 0x62);
  FUN__text__0049cb6c(auStack_388,local_2c0);
  FUN__text__0049cd50(param_1,*(undefined8 *)(local_2c0 + 0x18),local_370);
  if (local_370[0] == 0) {
    uVar1 = 2;
    FUN__text__0049cbe8(auStack_388);
    FUN__text__00446c60(&local_298);
  }
  else {
    local_2c0 = auStack_388;
    uVar1 = FUN__text__004953c0(param_1,&local_348);
    FUN__text__0049cbe8(auStack_388);
    FUN__text__00446c60(&local_298);
  }
  if (local_328 != (int *)0x0) {
    FUN__text__0040c060();
  }
  return uVar1;
}


