/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00605ac4; name: FUN_.text__00605ac4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00605ac4(undefined8 param_1)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auStack_370 [32];
  undefined8 local_350;
  code *local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330 [12];
  undefined8 local_2d0;
  code *local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0 [12];
  undefined8 local_250;
  code *local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230 [12];
  undefined8 local_1d0;
  code *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0 [12];
  undefined8 local_150;
  code *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130 [12];
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0 [12];
  
  uVar3 = FUN__text__0062c660();
  if ((uVar3 & 1) == 0) {
    local_b0[0] = _DAT_008a6158;
    local_d0 = _DAT_008a6160;
    local_c8 = _DAT_008a6168;
    local_c0 = _DAT_008a6170;
    uStack_b8 = _DAT_008a6178;
    uVar3 = FUN__text__0062f7a0(param_1,&local_d0);
    if ((uVar3 & 1) == 0) {
      local_130[0] = _DAT_008a6180;
      local_150 = _DAT_008a6188;
      local_148 = _DAT_008a6190;
      local_140 = _DAT_008a6198;
      uStack_138 = _DAT_008a61a0;
      uVar3 = FUN__text__0062f200(param_1,&local_150);
      if ((uVar3 & 1) == 0) {
        local_1b0[0] = _DAT_008a61a8;
        local_1d0 = _DAT_008a61b0;
        local_1c8 = _DAT_008a61b8;
        local_1c0 = _DAT_008a61c0;
        uStack_1b8 = _DAT_008a61c8;
        uVar3 = FUN__text__0062f3e0(param_1,&local_1d0);
        if ((uVar3 & 1) == 0) {
          local_230[0] = _DAT_008a61d0;
          local_250 = _DAT_008a61d8;
          local_248 = _DAT_008a61e0;
          local_240 = _DAT_008a61e8;
          uStack_238 = _DAT_008a61f0;
          uVar3 = FUN__text__0062f020(param_1,&local_250);
          if ((uVar3 & 1) == 0) {
            local_2b0[0] = _DAT_008a61f8;
            local_2d0 = _DAT_008a6200;
            local_2c8 = _DAT_008a6208;
            local_2c0 = _DAT_008a6210;
            uStack_2b8 = _DAT_008a6218;
            uVar2 = FUN__text__0062f5c0(param_1,&local_2d0);
            pcVar1 = local_2c8;
            uVar2 = uVar2 ^ 1;
            if (local_2c8 != (code *)0x0) {
              local_2c0 = 0;
              uStack_2b8 = 0;
              local_2d0 = 0;
              local_2c8 = (code *)0x0;
              (*pcVar1)(local_2b0);
            }
          }
          else {
            uVar2 = 0;
          }
          pcVar1 = local_248;
          if (local_248 != (code *)0x0) {
            local_240 = 0;
            uStack_238 = 0;
            local_250 = 0;
            local_248 = (code *)0x0;
            (*pcVar1)(local_230);
          }
        }
        else {
          uVar2 = 0;
        }
        pcVar1 = local_1c8;
        if (local_1c8 != (code *)0x0) {
          local_1c0 = 0;
          uStack_1b8 = 0;
          local_1d0 = 0;
          local_1c8 = (code *)0x0;
          (*pcVar1)(local_1b0);
        }
      }
      else {
        uVar2 = 0;
      }
      pcVar1 = local_148;
      if (local_148 != (code *)0x0) {
        local_140 = 0;
        uStack_138 = 0;
        local_150 = 0;
        local_148 = (code *)0x0;
        (*pcVar1)(local_130);
      }
    }
    else {
      uVar2 = 0;
    }
    pcVar1 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      (*pcVar1)(local_b0);
    }
    if ((uVar2 & 1) != 0) {
      local_330[0] = _DAT_008a6220;
      local_350 = _DAT_008a6228;
      local_348 = _DAT_008a6230;
      local_340 = _DAT_008a6238;
      uStack_338 = _DAT_008a6240;
      FUN__text__0062b7b0(param_1,&local_350);
      pcVar1 = local_348;
      if (local_348 != (code *)0x0) {
        local_340 = 0;
        uStack_338 = 0;
        local_350 = 0;
        local_348 = (code *)0x0;
        (*pcVar1)(local_330);
      }
    }
    uVar3 = FUN__text__0062c660(param_1);
    if ((uVar3 & 1) != 0) {
      FUN__text__0062c70c(param_1);
    }
    uVar3 = FUN__text__0062c660(param_1);
    if (((uVar3 & 1) != 0) && (uVar3 = FUN__text__006290a0(param_1), (uVar3 & 1) != 0)) {
      FUN__text__0060eea4(auStack_370);
      FUN__text__0060efe0(auStack_370,param_1);
      uVar3 = FUN__text__00614740(auStack_370);
      if ((uVar3 & 1) != 0) {
        FUN__text__006219d0(auStack_370,1);
      }
      FUN__text__0060eef8(auStack_370);
    }
  }
  return;
}


