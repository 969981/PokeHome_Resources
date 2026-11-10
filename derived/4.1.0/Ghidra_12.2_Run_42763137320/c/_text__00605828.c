/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00605828; name: FUN_.text__00605828
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00605828(undefined8 param_1)

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
  
  uVar2 = FUN__text__0062aba0();
  local_b0[0] = _DAT_008a6090;
  local_d0 = _DAT_008a6098;
  local_c8 = _DAT_008a60a0;
  local_c0 = _DAT_008a60a8;
  uStack_b8 = _DAT_008a60b0;
  uVar5 = FUN__text__0062ea80(param_1,&local_d0);
  if ((uVar5 & 1) == 0) {
    local_130[0] = _DAT_008a60b8;
    local_150 = _DAT_008a60c0;
    local_148 = _DAT_008a60c8;
    local_140 = _DAT_008a60d0;
    uStack_138 = _DAT_008a60d8;
    uVar5 = FUN__text__0062ec60(param_1,&local_150);
    if ((uVar5 & 1) == 0) {
      local_1b0[0] = _DAT_008a60e0;
      local_1d0 = _DAT_008a60e8;
      local_1c8 = _DAT_008a60f0;
      local_1c0 = _DAT_008a60f8;
      uStack_1b8 = _DAT_008a6100;
      uVar5 = FUN__text__0062e8a0(param_1,&local_1d0);
      if ((uVar5 & 1) == 0) {
        local_230[0] = _DAT_008a6108;
        local_250 = _DAT_008a6110;
        local_248 = _DAT_008a6118;
        local_240 = _DAT_008a6120;
        uStack_238 = _DAT_008a6128;
        uVar3 = FUN__text__0062ee40(param_1,&local_250);
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
    local_2b0[0] = _DAT_008a6130;
    local_2d0 = _DAT_008a6138;
    local_2c8 = _DAT_008a6140;
    local_2c0 = _DAT_008a6148;
    uStack_2b8 = _DAT_008a6150;
    FUN__text__00629cf0(param_1,&local_2d0);
    pcVar1 = local_2c8;
    if (local_2c8 != (code *)0x0) {
      local_2c0 = 0;
      uStack_2b8 = 0;
      local_2d0 = 0;
      local_2c8 = (code *)0x0;
      (*pcVar1)(local_2b0);
    }
  }
  uVar3 = FUN__text__0062aba0(param_1);
  if (((uVar2 | uVar3 ^ 0xffffffff) & 1) == 0) {
    uVar5 = FUN__text__00625b50(param_1);
    if (((uVar5 & 1) != 0) && (uVar5 = FUN__text__006290a0(param_1), (uVar5 & 1) != 0)) {
      FUN__text__0060eea4(auStack_2f0);
      FUN__text__0060efe0(auStack_2f0,param_1);
      uVar4 = FUN__text__00618c30(auStack_2f0);
      FUN__text__00620030(auStack_2f0,uVar4);
      FUN__text__0060eef8(auStack_2f0);
    }
    FUN__text__0062ac4c(param_1);
  }
  return;
}


