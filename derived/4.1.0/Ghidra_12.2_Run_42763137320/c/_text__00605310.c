/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00605310; name: FUN_.text__00605310
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00605310(undefined8 param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
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
  
  uVar2 = FUN__text__006290a0();
  local_b0[0] = _DAT_008a5f00;
  local_d0 = _DAT_008a5f08;
  local_c8 = _DAT_008a5f10;
  local_c0 = _DAT_008a5f18;
  uStack_b8 = _DAT_008a5f20;
  uVar4 = FUN__text__0062e6c0(param_1,&local_d0);
  if ((uVar4 & 1) == 0) {
    local_130[0] = _DAT_008a5f28;
    local_150 = _DAT_008a5f30;
    local_148 = _DAT_008a5f38;
    local_140 = _DAT_008a5f40;
    uStack_138 = _DAT_008a5f48;
    uVar4 = FUN__text__0062e4e0(param_1,&local_150);
    if ((uVar4 & 1) == 0) {
      local_1b0[0] = _DAT_008a5f50;
      local_1d0 = _DAT_008a5f58;
      local_1c8 = _DAT_008a5f60;
      local_1c0 = _DAT_008a5f68;
      uStack_1b8 = _DAT_008a5f70;
      uVar4 = FUN__text__0062e300(param_1,&local_1d0);
      if ((uVar4 & 1) == 0) {
        local_230[0] = _DAT_008a5f78;
        local_250 = _DAT_008a5f80;
        local_248 = _DAT_008a5f88;
        local_240 = _DAT_008a5f90;
        uStack_238 = _DAT_008a5f98;
        uVar3 = FUN__text__0062e120(param_1,&local_250);
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
    local_2b0[0] = _DAT_008a5fa0;
    local_2d0 = _DAT_008a5fa8;
    local_2c8 = _DAT_008a5fb0;
    local_2c0 = _DAT_008a5fb8;
    uStack_2b8 = _DAT_008a5fc0;
    FUN__text__006281f0(param_1,&local_2d0);
    pcVar1 = local_2c8;
    if (local_2c8 != (code *)0x0) {
      local_2c0 = 0;
      uStack_2b8 = 0;
      local_2d0 = 0;
      local_2c8 = (code *)0x0;
      (*pcVar1)(local_2b0);
    }
  }
  uVar3 = FUN__text__006290a0(param_1);
  if (((uVar2 | uVar3 ^ 0xffffffff) & 1) == 0) {
    uVar4 = FUN__text__0062aba0(param_1);
    if ((uVar4 & 1) != 0) {
      FUN__text__0062914c(param_1);
    }
    FUN__text__006291e4(param_1);
  }
  return;
}


