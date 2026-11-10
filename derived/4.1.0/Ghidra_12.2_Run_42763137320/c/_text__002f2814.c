/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002f2814; name: FUN_.text__002f2814
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__002f2814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  long local_238;
  long lStack_230;
  undefined1 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  long local_208;
  long lStack_200;
  long local_1f8;
  long lStack_1f0;
  long local_1e8;
  long lStack_1e0;
  long local_1d8;
  long lStack_1d0;
  long local_1c8 [2];
  Sha256Impl aSStack_1b8 [120];
  long local_140;
  long local_138;
  undefined8 local_130;
  code *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 auStack_110 [96];
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [96];
  
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = (code *)0x0;
  local_128 = (code *)0x0;
  local_120 = 0;
  local_140 = _DAT_0089f6e0 + 0x10;
  local_130 = 0;
  local_b0 = 0;
  local_118 = 0;
  FUN__text__00113bb0(local_1c8,DAT_008e1540,0,param_3,0,param_2,0);
  local_138 = local_1c8[0];
  if (local_1c8[0] == 0) {
    uVar2 = 0;
    local_140 = _DAT_0089f718 + 0x10;
    local_138 = 0;
    pcVar1 = local_a8;
  }
  else {
    plVar4 = (long *)(local_1c8[0] + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN__text__005d8de0(local_1c8[0]);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    FUN__text__002ffeb0(local_1c8);
    FUN__text__002ffec0(local_1c8);
    FUN__text__002fff2c(local_1c8,*(undefined8 *)(local_138 + 400),
                        *(long *)(local_138 + 0x180) + -0x20,0);
    FUN__text__002fff78(&local_1e8,local_1c8);
    lVar3 = *(long *)(local_138 + 0x180) + -0x20;
    plVar4 = (long *)(*(long *)(local_138 + 400) + lVar3);
    local_1f8 = plVar4[2];
    lStack_1f0 = plVar4[3];
    local_208 = *plVar4;
    lStack_200 = plVar4[1];
    if (((local_208 == local_1e8 && lStack_200 == lStack_1e0) && local_1f8 == local_1d8) &&
        lStack_1f0 == lStack_1d0) {
      local_228 = 0;
      local_220 = 0x73399a;
      uStack_218 = 0x7f;
      local_258 = _DAT_008a28e8 + 0x10;
      local_210 = 0;
      local_248 = 0;
      uStack_240 = 0x87add8;
      uStack_250 = 0x87c3a8;
      local_238 = *(long *)(local_138 + 400);
      lStack_230 = lVar3;
      uVar2 = FUN__text__002f2a70(param_1,&local_258);
    }
    else {
      uVar2 = 0;
    }
    nn::crypto::detail::Sha256Impl::~Sha256Impl(aSStack_1b8);
    local_140 = 0x867958;
    if (local_138 == 0) {
      local_138 = 0;
      pcVar1 = local_a8;
    }
    else {
      FUN__text__005d9290(local_138,&local_140);
      lVar3 = local_138;
      local_138 = 0;
      pcVar1 = local_a8;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
        pcVar1 = local_a8;
      }
    }
  }
  local_a8 = pcVar1;
  if (pcVar1 != (code *)0x0) {
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    (*pcVar1)(auStack_90);
  }
  pcVar1 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = 0;
    local_118 = 0;
    local_130 = 0;
    local_128 = (code *)0x0;
    (*pcVar1)(auStack_110);
  }
  if (local_138 != 0) {
    (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
  }
  return uVar2 & 1;
}


