/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00110d70; name: FUN_.text__00110d70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00110d70(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  long local_2a8;
  uint local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 local_294;
  undefined1 auStack_290 [24];
  long local_278;
  undefined1 auStack_270 [24];
  long local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined1 local_240;
  undefined1 local_238;
  undefined4 local_234;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  long local_218;
  undefined8 local_210;
  undefined1 local_208;
  undefined4 local_204;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  long local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  long local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  long local_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  long local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  long local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  long local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long local_c8;
  undefined8 local_c0;
  long local_b8 [6];
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  long *local_48;
  
  param_1[7] = 0;
  lVar6 = _DAT_0089f690;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar6 + 0x10;
  lVar6 = _DAT_0089fc70;
  if (uVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(uVar1 + 0x98) != 0) {
      lVar5 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  lVar7 = _DAT_0089fc78;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = lVar6 + 0x10;
  param_1[1] = lVar5;
  param_1[9] = lVar6 + 0x48;
  param_1[0x10] = lVar7 + 0x10;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  lVar6 = _DAT_0089f818 + 0x10;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x12] = lVar6;
  param_1[0x13] = 0;
  lVar6 = _DAT_0089fc80 + 0x10;
  param_1[0x34] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x36] = lVar6;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  lVar6 = _DAT_0089f6e0 + 0x10;
  param_1[0x5a] = 0;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)((long)param_1 + 0x2e2) = 0;
  param_1[0x5d] = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined8 *)((long)param_1 + 0x4cc) = 0;
  *(undefined8 *)((long)param_1 + 0x4c4) = 0;
  *(undefined8 *)((long)param_1 + 0x4bc) = 0;
  *(undefined8 *)((long)param_1 + 0x4b4) = 0;
  *(undefined1 *)((long)param_1 + 0x324) = 0;
  *(undefined8 *)((long)param_1 + 0x31c) = 0;
  *(undefined8 *)((long)param_1 + 0x314) = 0;
  *(undefined8 *)((long)param_1 + 0x30c) = 0;
  *(undefined8 *)((long)param_1 + 0x304) = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  *(undefined1 *)((long)param_1 + 0x36c) = 0;
  *(undefined8 *)((long)param_1 + 0x364) = 0;
  *(undefined8 *)((long)param_1 + 0x35c) = 0;
  *(undefined8 *)((long)param_1 + 0x354) = 0;
  *(undefined8 *)((long)param_1 + 0x34c) = 0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  param_1[0x6f] = 0;
  param_1[0x6e] = 0;
  *(undefined1 *)((long)param_1 + 0x3b4) = 0;
  *(undefined8 *)((long)param_1 + 0x3ac) = 0;
  *(undefined8 *)((long)param_1 + 0x3a4) = 0;
  *(undefined8 *)((long)param_1 + 0x39c) = 0;
  *(undefined8 *)((long)param_1 + 0x394) = 0;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  *(undefined1 *)((long)param_1 + 0x3fc) = 0;
  *(undefined8 *)((long)param_1 + 0x3f4) = 0;
  *(undefined8 *)((long)param_1 + 0x3ec) = 0;
  *(undefined8 *)((long)param_1 + 0x3e4) = 0;
  *(undefined8 *)((long)param_1 + 0x3dc) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  *(undefined1 *)((long)param_1 + 0x444) = 0;
  *(undefined8 *)((long)param_1 + 0x43c) = 0;
  *(undefined8 *)((long)param_1 + 0x434) = 0;
  *(undefined8 *)((long)param_1 + 0x42c) = 0;
  *(undefined8 *)((long)param_1 + 0x424) = 0;
  *(undefined1 *)(param_1 + 0x8d) = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  *(undefined1 *)((long)param_1 + 0x48c) = 0;
  *(undefined8 *)((long)param_1 + 0x484) = 0;
  *(undefined8 *)((long)param_1 + 0x47c) = 0;
  *(undefined8 *)((long)param_1 + 0x474) = 0;
  *(undefined8 *)((long)param_1 + 0x46c) = 0;
  *(undefined1 *)(param_1 + 0x96) = 0;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0xb5] = 0;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  param_1[0xa3] = 0;
  param_1[0xa2] = 0;
  param_1[0xa1] = 0;
  param_1[0xa0] = lVar6;
  param_1[0xd7] = 0;
  param_1[0xd6] = 0;
  param_1[0xd5] = 0;
  param_1[0xd4] = 0;
  param_1[199] = 0;
  param_1[0xc6] = 0;
  param_1[0xc5] = 0;
  param_1[0xc4] = 0;
  param_1[0xc3] = 0;
  param_1[0xc2] = lVar6;
  *(undefined2 *)((long)param_1 + 0x724) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x38] = lVar6;
  param_1[0x39] = 0;
  local_48 = param_2;
  memset(param_1 + 0xe5,0,0x2408);
  FUN__text__001115f0(&local_2a0,param_2,&local_48);
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
  }
  plVar2 = _DAT_0089f3d8;
  param_1[0xb] = CONCAT44(uStack_29c,local_2a0);
  lVar7 = *_DAT_0089f4f0;
  FUN__text__0011170c(*(undefined8 *)(*plVar2 + 8));
  local_80 = 0x10000;
  local_b8[2] = 0;
  local_b8[3] = 0;
  local_74 = 0;
  local_b8[0] = _DAT_0089fc88 + 0x10;
  local_b8[4] = 0x100000001;
  local_b8[5] = 0x100000001;
  local_b8[1] = 0;
  local_70 = 0x10000000001;
  uStack_68 = 1;
  lVar5 = *_DAT_0089fc90;
  local_78 = 1;
  local_88 = 1;
  FUN__text__005f0cd0(lVar5,local_b8,0);
  local_2a0 = local_2a0 & 0xffffff00;
  local_294 = 4;
  uStack_29c = 1;
  uStack_298 = 2;
  FUN__text__005e927c(auStack_290,_DAT_0089fc98);
  FUN__text__005e927c(auStack_270,_DAT_0089fca0);
  local_238 = 0;
  local_240 = 0;
  local_210 = 0;
  local_230 = 0xcbf29ce484222645;
  uStack_228 = 0x70f683;
  local_208 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_180 = 0;
  local_178 = 0;
  local_150 = 0;
  local_148 = 0;
  local_120 = 0;
  local_118 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_c0 = 0;
  local_2a0 = CONCAT31(local_2a0._1_3_,1);
  local_200 = 0xcbf29ce484222645;
  uStack_1f8 = 0x70f683;
  local_1d0 = 0xcbf29ce484222645;
  uStack_1c8 = 0x70f683;
  local_1a0 = 0xcbf29ce484222645;
  uStack_198 = 0x70f683;
  local_170 = 0xcbf29ce484222645;
  uStack_168 = 0x70f683;
  local_140 = 0xcbf29ce484222645;
  uStack_138 = 0x70f683;
  local_110 = 0xcbf29ce484222645;
  uStack_108 = 0x70f683;
  local_e0 = 0xcbf29ce484222645;
  uStack_d8 = 0x70f683;
  local_220 = 0;
  local_218 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_190 = 0;
  local_188 = 0;
  local_160 = 0;
  local_158 = 0;
  local_130 = 0;
  local_128 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_250 = 0;
  uStack_248 = 0x1f8000000000;
  FUN__text__005e927c(&local_2c0,_DAT_0089fca8);
  lVar6 = local_2a8;
  local_238 = 1;
  local_234 = 8;
  local_220 = local_2b0;
  local_230 = local_2c0;
  uStack_228 = uStack_2b8;
  if (local_2a8 != 0) {
    (**(code **)(*(long *)(local_2a8 + 0x48) + 0x10))();
  }
  lVar3 = local_218;
  local_218 = lVar6;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  local_210 = 0x1fa000000000;
  if (local_2a8 != 0) {
    (**(code **)(*(long *)(local_2a8 + 0x48) + 0x18))();
  }
  FUN__text__005e927c(&local_2c0,_DAT_0089fcb0);
  lVar6 = local_2a8;
  local_208 = 1;
  local_204 = 0x10;
  local_1f0 = local_2b0;
  local_200 = local_2c0;
  uStack_1f8 = uStack_2b8;
  if (local_2a8 != 0) {
    (**(code **)(*(long *)(local_2a8 + 0x48) + 0x10))();
  }
  lVar3 = local_1e8;
  local_1e8 = lVar6;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  local_1e0 = 0x1fe000000000;
  if (local_2a8 != 0) {
    (**(code **)(*(long *)(local_2a8 + 0x48) + 0x18))();
  }
  FUN__text__005e927c(&local_2c0,_DAT_0089fcb8);
  lVar6 = local_2a8;
  local_1d8 = 1;
  local_1d4 = 0x20;
  local_1c0 = local_2b0;
  local_1d0 = local_2c0;
  uStack_1c8 = uStack_2b8;
  if (local_2a8 != 0) {
    (**(code **)(*(long *)(local_2a8 + 0x48) + 0x10))();
  }
  lVar3 = local_1b8;
  local_1b8 = lVar6;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  local_1b0 = 0x1fc000000000;
  if (local_2a8 != 0) {
    (**(code **)(*(long *)(local_2a8 + 0x48) + 0x18))();
  }
  local_240 = 1;
  FUN__text__001131f0(lVar5 + 0x50,&local_2a0);
  FUN__text__005ec3b0(*(undefined8 *)(lVar5 + 0x238),*(undefined1 *)(lVar5 + 0xb0));
  FUN__text__005ec550(*(undefined8 *)(lVar5 + 0x238),0xffffffff,_DAT_0089fcc0);
  FUN__text__005f0f64(lVar5);
  lVar6 = *(long *)(lVar7 + 0x60);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005ec290(*(undefined8 *)(lVar5 + 0x238),*(undefined8 *)(lVar6 + 0x130));
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  lVar6 = *(long *)(lVar7 + 0x68);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005ec290(*(undefined8 *)(lVar5 + 0x238),*(undefined8 *)(lVar6 + 0x70));
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  FUN__text__00144b50();
  if (local_c8 != 0) {
    (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
    local_c8 = 0;
  }
  if (local_f8 != 0) {
    (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
    local_f8 = 0;
  }
  if (local_128 != 0) {
    (**(code **)(*(long *)(local_128 + 0x48) + 0x18))();
    local_128 = 0;
  }
  if (local_158 != 0) {
    (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
    local_158 = 0;
  }
  if (local_188 != 0) {
    (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
    local_188 = 0;
  }
  if (local_1b8 != 0) {
    (**(code **)(*(long *)(local_1b8 + 0x48) + 0x18))();
    local_1b8 = 0;
  }
  if (local_1e8 != 0) {
    (**(code **)(*(long *)(local_1e8 + 0x48) + 0x18))();
    local_1e8 = 0;
  }
  if (local_218 != 0) {
    (**(code **)(*(long *)(local_218 + 0x48) + 0x18))();
    local_218 = 0;
  }
  if (local_258 != 0) {
    (**(code **)(*(long *)(local_258 + 0x48) + 0x18))();
    local_258 = 0;
  }
  if (local_278 != 0) {
    (**(code **)(*(long *)(local_278 + 0x48) + 0x18))();
  }
  plVar4 = local_48;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  if (*(long *)(uVar1 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x18) = local_48;
  *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
  lVar6 = (**(code **)(*local_48 + 0x10))(local_48,0x250,0x10);
  if (lVar6 == 0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4);
  }
  FUN__text__00163a24(lVar6,1,1,local_48);
  *(long **)(lVar6 + 8) = plVar4;
  *(long *)(lVar6 + 0x10) = lVar6;
  *(undefined8 *)(lVar6 + 0x18) = 0x250;
  *(undefined8 *)(lVar6 + 0x20) = 0x10;
  *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + -1;
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  lVar5 = param_1[0xd];
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  param_1[0xd] = lVar6;
  local_b8[0] = CONCAT44(local_b8[0]._4_4_,0x800);
  FUN__text__00111970(&local_2a0,local_48,local_b8);
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
  }
  local_b8[0] = CONCAT44(local_b8[0]._4_4_,0x800);
  param_1[0xe] = CONCAT44(uStack_29c,local_2a0);
  FUN__text__00111970(&local_2a0,local_48,local_b8);
  if (param_1[0xf] != 0) {
    (**(code **)(*(long *)(param_1[0xf] + 0x48) + 0x18))();
  }
  param_1[0xf] = CONCAT44(uStack_29c,local_2a0);
  FUN__text__00114990(param_1 + 0x36,*(undefined8 *)(*plVar2 + 0x208));
  return;
}


