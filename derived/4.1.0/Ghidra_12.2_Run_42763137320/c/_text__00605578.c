/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00605578; name: FUN_.text__00605578
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00605578(undefined8 param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined1 auStack_2f0 [32];
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
  
  uVar2 = FUN__text__00627550();
  local_b0[0] = _DAT_008a5fc8;
  local_d0 = _DAT_008a5fd0;
  local_c8 = _DAT_008a5fd8;
  local_c0 = _DAT_008a5fe0;
  uStack_b8 = _DAT_008a5fe8;
  uVar5 = FUN__text__0062df40(param_1,&local_d0);
  if ((uVar5 & 1) == 0) {
    local_130[0] = _DAT_008a5ff0;
    local_150 = _DAT_008a5ff8;
    local_148 = _DAT_008a6000;
    local_140 = _DAT_008a6008;
    uStack_138 = _DAT_008a6010;
    uVar5 = FUN__text__0062db80(param_1,&local_150);
    if ((uVar5 & 1) == 0) {
      local_1b0[0] = _DAT_008a6018;
      local_1d0 = _DAT_008a6020;
      local_1c8 = _DAT_008a6028;
      local_1c0 = _DAT_008a6030;
      uStack_1b8 = _DAT_008a6038;
      uVar5 = FUN__text__0062d9a0(param_1,&local_1d0);
      if ((uVar5 & 1) == 0) {
        local_230[0] = _DAT_008a6040;
        local_250 = _DAT_008a6048;
        local_248 = _DAT_008a6050;
        local_240 = _DAT_008a6058;
        uStack_238 = _DAT_008a6060;
        uVar3 = FUN__text__0062dd60(param_1,&local_250);
        pcVar1 = local_248;
        uVar3 = uVar3 ^ 1;
        if (local_248 != (code *)0x0) {
          local_240 = 0;
          uStack_238 = 0;
          local_250 = 0;
          local_248 = (code *)0x0;
          (*pcVar1)(local_230);
        }
      }
      else {
        uVar3 = 0;
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
      uVar3 = 0;
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
    uVar3 = 0;
  }
  pcVar1 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar1)(local_b0);
  }
  if ((uVar3 & 1) != 0) {
    local_2b0[0] = _DAT_008a6068;
    local_2d0 = _DAT_008a6070;
    local_2c8 = _DAT_008a6078;
    local_2c0 = _DAT_008a6080;
    uStack_2b8 = _DAT_008a6088;
    FUN__text__006266a0(param_1,&local_2d0);
    pcVar1 = local_2c8;
    if (local_2c8 != (code *)0x0) {
      local_2c0 = 0;
      uStack_2b8 = 0;
      local_2d0 = 0;
      local_2c8 = (code *)0x0;
      (*pcVar1)(local_2b0);
    }
  }
  uVar3 = FUN__text__00627550(param_1);
  if (((uVar2 | uVar3 ^ 0xffffffff) & 1) == 0) {
    uVar5 = FUN__text__00625b50(param_1);
    if (((uVar5 & 1) != 0) && (uVar5 = FUN__text__006290a0(param_1), (uVar5 & 1) != 0)) {
      FUN__text__0060eea4(auStack_2f0);
      FUN__text__0060efe0(auStack_2f0,param_1);
      uVar4 = FUN__text__00618c30(auStack_2f0);
      FUN__text__0061fe50(auStack_2f0,uVar4);
      FUN__text__0060eef8(auStack_2f0);
    }
    uVar5 = FUN__text__0062aba0(param_1);
    if ((uVar5 & 1) != 0) {
      FUN__text__006275fc(param_1);
    }
    FUN__text__00627694(param_1);
  }
  return;
}


