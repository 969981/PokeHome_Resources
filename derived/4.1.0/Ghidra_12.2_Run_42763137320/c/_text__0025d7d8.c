/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0025d7d8; name: FUN_.text__0025d7d8
 */


void FUN__text__0025d7d8(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined1 *local_510;
  code *local_508;
  code *local_500;
  undefined1 *local_4f8;
  undefined1 auStack_4f0 [96];
  code *local_490;
  code *local_488;
  code *local_480;
  undefined1 *puStack_478;
  undefined1 auStack_470 [96];
  code *local_410;
  code *local_408;
  code *local_400;
  undefined1 *puStack_3f8;
  undefined1 auStack_3f0 [96];
  code *local_390;
  code *local_388;
  code *local_380;
  undefined1 *puStack_378;
  undefined1 auStack_370 [96];
  undefined8 local_310;
  code *local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined1 auStack_2f0 [96];
  long local_290;
  undefined8 local_288;
  undefined8 local_280;
  code *local_270;
  code *local_268;
  code *local_260;
  undefined1 *local_258;
  long local_250;
  undefined4 local_248;
  code *local_1f0;
  code *local_1e8;
  code *local_1e0;
  undefined1 *local_1d8;
  long local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  code *local_170;
  code *local_168;
  code *local_160;
  undefined1 *local_158;
  long local_150 [12];
  undefined1 *local_f0;
  code *local_e8;
  code *local_e0;
  undefined1 *puStack_d8;
  long local_d0;
  undefined4 local_c8;
  long local_70 [2];
  
  local_510 = (undefined1 *)0x94f0ab6b70e7ac3f;
  local_508 = (code *)0x719f5d;
  local_500 = (code *)0x1c;
  local_4f8 = (undefined1 *)0x0;
  FUN__text__00115650(local_70,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),&local_510,0xb);
  if (local_4f8 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_4f8 + 0x48) + 0x18))();
  }
  lVar11 = *(long *)(param_1 + 0x640);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x6ec);
  local_510 = *(undefined1 **)(param_1 + 0xfe0);
  if (local_510 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_510 + 0x48) + 0x10))();
  }
  FUN__text__0024efa0(lVar11,&local_510,param_1 + 0x1004,uVar2);
  if (local_510 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_510 + 0x48) + 0x18))();
  }
  iVar3 = *(int *)(param_1 + 0x1004);
  local_f0 = &LAB__text__0025efc4;
  local_e8 = FUN__text__0025f06c;
  *(bool *)(param_1 + 0x1008) = iVar3 == 0;
  iVar1 = 3;
  if (iVar3 != 0) {
    iVar1 = iVar3;
  }
  *(int *)(param_1 + 0x1000) = iVar1;
  local_170 = FUN__text__0025f088;
  local_e0 = FUN__text__0025f070;
  puStack_d8 = &LAB__text__0025f07c;
  local_168 = FUN__text__0025f0c4;
  local_160 = FUN__text__0025f0c8;
  local_158 = &LAB__text__0025f0d4;
  local_1d8 = (undefined1 *)0x0;
  local_1e0 = (code *)0x0;
  local_1e8 = (code *)0x0;
  local_1f0 = (code *)0x0;
  local_150[0] = param_1;
  local_d0 = param_1;
  local_c8 = uVar2;
  uVar6 = FUN__text__003069a8(*(undefined8 *)(param_1 + 0xfe0),0);
  uVar7 = FUN__text__003069a8(*(undefined8 *)(param_1 + 0xfe0),1);
  uVar8 = FUN__text__003069a8(*(undefined8 *)(param_1 + 0xfe0),2);
  uVar9 = FUN__text__003069a8(*(undefined8 *)(param_1 + 0xfe0),3);
  uVar10 = FUN__text__003069a8(*(undefined8 *)(param_1 + 0xfe0),4);
  local_1b0 = FUN__text__003069a8(*(undefined8 *)(param_1 + 0xfe0),5);
  pcVar4 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1d8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    local_1f0 = (code *)0x0;
    (*pcVar4)(&local_1d0);
  }
  local_1f0 = FUN__text__0025f0e0;
  local_1e0 = FUN__text__0025f234;
  local_1e8 = FUN__text__0025f230;
  local_270 = FUN__text__0025f26c;
  local_1d8 = &LAB__text__0025f250;
  local_268 = FUN__text__0025f30c;
  local_260 = FUN__text__0025f310;
  local_258 = &LAB__text__0025f31c;
  local_2f8 = 0;
  local_300 = 0;
  local_308 = (code *)0x0;
  local_310 = 0;
  local_290 = 0;
  local_288 = 0xe98bd2f9c79e70f;
  local_280 = 0xe98bd2f9c79e70f;
  local_500 = (code *)0x0;
  local_4f8 = (undefined1 *)0x0;
  local_510 = (undefined1 *)0x0;
  local_508 = (code *)0x0;
  local_490 = (code *)0x0;
  local_488 = (code *)0x0;
  local_480 = (code *)0x0;
  puStack_478 = (undefined1 *)0x0;
  local_410 = (code *)0x0;
  local_408 = (code *)0x0;
  local_400 = (code *)0x0;
  puStack_3f8 = (undefined1 *)0x0;
  local_390 = (code *)0x0;
  local_388 = (code *)0x0;
  local_380 = (code *)0x0;
  puStack_378 = (undefined1 *)0x0;
  local_250 = param_1;
  local_248 = uVar2;
  local_1d0 = param_1;
  local_1c8 = uVar2;
  local_1c4 = uVar6;
  local_1c0 = uVar7;
  local_1bc = uVar8;
  local_1b8 = uVar9;
  local_1b4 = uVar10;
  if (local_e0 != (code *)0x0) {
    (*local_e0)(&local_d0,auStack_4f0);
    pcVar4 = local_488;
    local_510 = local_f0;
    local_508 = local_e8;
    local_500 = local_e0;
    local_4f8 = puStack_d8;
    if (local_488 != (code *)0x0) {
      local_480 = (code *)0x0;
      puStack_478 = (undefined1 *)0x0;
      local_490 = (code *)0x0;
      local_488 = (code *)0x0;
      (*pcVar4)(auStack_470);
    }
  }
  if (local_160 != (code *)0x0) {
    (*local_160)(local_150,auStack_470);
    local_490 = local_170;
    local_488 = local_168;
    local_480 = local_160;
    puStack_478 = local_158;
  }
  pcVar4 = local_408;
  if (local_408 != (code *)0x0) {
    local_400 = (code *)0x0;
    puStack_3f8 = (undefined1 *)0x0;
    local_410 = (code *)0x0;
    local_408 = (code *)0x0;
    (*pcVar4)(auStack_3f0);
  }
  if (local_1e0 != (code *)0x0) {
    (*local_1e0)(&local_1d0,auStack_3f0);
    local_410 = local_1f0;
    local_408 = local_1e8;
    local_400 = local_1e0;
    puStack_3f8 = local_1d8;
  }
  pcVar4 = local_388;
  if (local_388 != (code *)0x0) {
    local_380 = (code *)0x0;
    puStack_378 = (undefined1 *)0x0;
    local_390 = (code *)0x0;
    local_388 = (code *)0x0;
    (*pcVar4)(auStack_370);
  }
  if (local_260 != (code *)0x0) {
    (*local_260)(&local_250,auStack_370);
    local_390 = local_270;
    local_388 = local_268;
    local_380 = local_260;
    puStack_378 = local_258;
  }
  lVar11 = local_70[0];
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x10))();
  }
  lVar5 = local_290;
  local_290 = lVar11;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  local_288 = 0xd88d7203dc39151;
  local_280 = 0x54fd4328f89d4d3a;
  FUN__text__00140ef0(0x71e3ba,*(undefined8 *)(param_1 + 0x60),&local_510);
  if (local_290 != 0) {
    (**(code **)(*(long *)(local_290 + 0x48) + 0x18))();
    local_290 = 0;
  }
  pcVar4 = local_308;
  if (local_308 != (code *)0x0) {
    local_300 = 0;
    local_2f8 = 0;
    local_310 = 0;
    local_308 = (code *)0x0;
    (*pcVar4)(auStack_2f0);
  }
  pcVar4 = local_388;
  if (local_388 != (code *)0x0) {
    local_380 = (code *)0x0;
    puStack_378 = (undefined1 *)0x0;
    local_390 = (code *)0x0;
    local_388 = (code *)0x0;
    (*pcVar4)(auStack_370);
  }
  pcVar4 = local_408;
  if (local_408 != (code *)0x0) {
    local_400 = (code *)0x0;
    puStack_3f8 = (undefined1 *)0x0;
    local_410 = (code *)0x0;
    local_408 = (code *)0x0;
    (*pcVar4)(auStack_3f0);
  }
  pcVar4 = local_488;
  if (local_488 != (code *)0x0) {
    local_480 = (code *)0x0;
    puStack_478 = (undefined1 *)0x0;
    local_490 = (code *)0x0;
    local_488 = (code *)0x0;
    (*pcVar4)(auStack_470);
  }
  pcVar4 = local_508;
  if (local_508 != (code *)0x0) {
    local_500 = (code *)0x0;
    local_4f8 = (undefined1 *)0x0;
    local_510 = (undefined1 *)0x0;
    local_508 = (code *)0x0;
    (*pcVar4)(auStack_4f0);
  }
  pcVar4 = local_268;
  if (local_268 != (code *)0x0) {
    local_258 = (undefined1 *)0x0;
    local_260 = (code *)0x0;
    local_268 = (code *)0x0;
    local_270 = (code *)0x0;
    (*pcVar4)(&local_250);
  }
  pcVar4 = local_1e8;
  if (local_1e8 != (code *)0x0) {
    local_1d8 = (undefined1 *)0x0;
    local_1e0 = (code *)0x0;
    local_1e8 = (code *)0x0;
    local_1f0 = (code *)0x0;
    (*pcVar4)(&local_1d0);
  }
  pcVar4 = local_168;
  if (local_168 != (code *)0x0) {
    local_158 = (undefined1 *)0x0;
    local_160 = (code *)0x0;
    local_168 = (code *)0x0;
    local_170 = (code *)0x0;
    (*pcVar4)(local_150);
  }
  pcVar4 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    puStack_d8 = (undefined1 *)0x0;
    local_f0 = (undefined1 *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar4)(&local_d0);
  }
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
  }
  return;
}


