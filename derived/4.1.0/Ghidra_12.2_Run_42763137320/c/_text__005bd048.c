/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005bd048; name: FUN_.text__005bd048
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005bd048(long *param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong local_1a8;
  undefined4 *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  long local_188;
  long local_180;
  long local_170;
  long local_168;
  long local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 auStack_140 [96];
  long local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [111];
  undefined1 uStack_51;
  undefined4 local_38;
  undefined4 uStack_34;
  
  *(undefined4 *)(param_1 + 3) = 0;
  lVar5 = _DAT_008a5868;
  *(undefined4 *)(param_1 + 200) = 4;
  param_1[0xc4] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcf] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd4] = 0;
  param_1[0xce] = 0x3f800000;
  param_1[0xd3] = 0x3f800000;
  param_1[0xdc] = 0;
  param_1[0xdb] = 0x3f800000;
  param_1[0xda] = 0;
  param_1[0xd9] = 0;
  param_1[0xd7] = 0;
  param_1[0xd6] = 0x3f800000;
  *(undefined4 *)(param_1 + 0xdf) = 0x3f800000;
  *param_1 = lVar5 + 0x10;
  param_1[1] = 0;
  param_1[0xcc] = 0x2d0050000000001;
  param_1[0xd0] = 0x3f80000000000000;
  param_1[0xd5] = 0x3f80000000000000;
  param_1[0xdd] = 0x3f80000000000000;
  param_1[0xd8] = 0x3f80000000000000;
  param_1[0xde] = 0xffffffff;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  param_1[0xe2] = 0;
  param_1[0xe1] = 0;
  param_1[0xe0] = 0;
  if (((uVar1 == 0) || (*(long *)(uVar1 + 0x98) == 0)) ||
     (lVar5 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar5 == 0)) {
    lVar5 = FUN__text__005f52b0();
    param_1[0xe4] = 0;
    param_1[0xe3] = lVar5;
    *(undefined4 *)(param_1 + 0xe5) = 0;
    param_1[0xe6] = 0;
    param_1[0xe7] = 0;
    if (uVar1 != 0) goto LAB__text__005bd168;
LAB__text__005bd194:
    lVar5 = FUN__text__005f52b0();
    param_1[0xeb] = 0;
    param_1[0xe8] = lVar5;
    param_1[0xe9] = 0;
    *(undefined4 *)(param_1 + 0xea) = 0;
    if (uVar1 != 0) goto LAB__text__005bd1ac;
LAB__text__005bd1c0:
    lVar5 = FUN__text__005f52b0();
  }
  else {
    param_1[0xe3] = lVar5;
    param_1[0xe4] = 0;
    *(undefined4 *)(param_1 + 0xe5) = 0;
    param_1[0xe6] = 0;
    param_1[0xe7] = 0;
LAB__text__005bd168:
    if ((*(long *)(uVar1 + 0x98) == 0) ||
       (lVar5 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar5 == 0))
    goto LAB__text__005bd194;
    param_1[0xe8] = lVar5;
    param_1[0xe9] = 0;
    *(undefined4 *)(param_1 + 0xea) = 0;
    param_1[0xeb] = 0;
LAB__text__005bd1ac:
    if ((*(long *)(uVar1 + 0x98) == 0) ||
       (lVar5 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar5 == 0))
    goto LAB__text__005bd1c0;
  }
  param_1[0xec] = lVar5;
  param_1[0xed] = 0;
  *(undefined4 *)(param_1 + 0xee) = 0;
  param_1[0xef] = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0x3f800000;
  param_1[0xf3] = 0;
  param_1[0xf2] = 0;
  param_1[0xf1] = 0;
  if (((uVar1 == 0) || (*(long *)(uVar1 + 0x98) == 0)) ||
     (lVar5 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar5 == 0)) {
    lVar5 = FUN__text__005f52b0();
    param_1[0xf5] = 0;
    param_1[0xf4] = lVar5;
    *(undefined4 *)(param_1 + 0xf6) = 0;
    param_1[0xf7] = 0;
    param_1[0xf8] = 0;
    param_1[0xf9] = 0;
    if (uVar1 != 0) goto LAB__text__005bd240;
LAB__text__005bd274:
    lVar5 = FUN__text__005f52b0();
    param_1[0xfa] = lVar5;
    param_1[0xfb] = 0;
    *(undefined4 *)(param_1 + 0xfc) = 0;
    param_1[0xfd] = 0;
    param_1[0xfe] = 0;
    param_1[0xff] = 0;
    if (uVar1 != 0) goto LAB__text__005bd294;
LAB__text__005bd2c8:
    lVar5 = FUN__text__005f52b0();
    param_1[0x100] = lVar5;
    param_1[0x101] = 0;
    *(undefined4 *)(param_1 + 0x102) = 0;
    param_1[0x103] = 0;
    param_1[0x104] = 0;
    param_1[0x105] = 0;
    if (uVar1 != 0) goto LAB__text__005bd2e8;
  }
  else {
    param_1[0xf4] = lVar5;
    param_1[0xf5] = 0;
    *(undefined4 *)(param_1 + 0xf6) = 0;
    param_1[0xf7] = 0;
    param_1[0xf8] = 0;
    param_1[0xf9] = 0;
LAB__text__005bd240:
    if ((*(long *)(uVar1 + 0x98) == 0) ||
       (lVar5 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar5 == 0))
    goto LAB__text__005bd274;
    param_1[0xfa] = lVar5;
    param_1[0xfb] = 0;
    *(undefined4 *)(param_1 + 0xfc) = 0;
    param_1[0xfd] = 0;
    param_1[0xfe] = 0;
    param_1[0xff] = 0;
LAB__text__005bd294:
    if ((*(long *)(uVar1 + 0x98) == 0) ||
       (lVar5 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar5 == 0))
    goto LAB__text__005bd2c8;
    param_1[0x100] = lVar5;
    param_1[0x101] = 0;
    *(undefined4 *)(param_1 + 0x102) = 0;
    param_1[0x103] = 0;
    param_1[0x104] = 0;
    param_1[0x105] = 0;
LAB__text__005bd2e8:
    if ((*(long *)(uVar1 + 0x98) != 0) &&
       (lVar5 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10), lVar5 != 0))
    goto LAB__text__005bd300;
  }
  lVar5 = FUN__text__005f52b0();
LAB__text__005bd300:
  param_1[0x106] = lVar5;
  param_1[0x107] = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  param_1[0x109] = -0x100000000;
  *(undefined4 *)(param_1 + 0x10a) = 0;
  *(undefined1 *)((long)param_1 + 0x854) = 0;
  param_1[0x10b] = -0x100000000;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined1 *)((long)param_1 + 0x864) = 0;
  param_1[0x10d] = -0x100000000;
  *(undefined4 *)(param_1 + 0x10e) = 0;
  *(undefined1 *)((long)param_1 + 0x874) = 0;
  param_1[0x10f] = -0x100000000;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined1 *)((long)param_1 + 0x884) = 0;
  param_1[0x111] = -0x100000000;
  *(undefined4 *)(param_1 + 0x112) = 0;
  *(undefined1 *)((long)param_1 + 0x894) = 0;
  param_1[0x113] = -0x100000000;
  *(undefined4 *)(param_1 + 0x114) = 0;
  *(undefined1 *)((long)param_1 + 0x8a4) = 0;
  param_1[0x115] = 0;
  if (uVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(uVar1 + 0x98) != 0) {
      lVar5 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  param_1[2] = lVar5;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  local_d8 = (code *)0x0;
  local_160 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  local_148 = 0;
  local_170 = _DAT_0089f4c8 + 0x10;
  local_168 = 0;
  FUN__text__00109dd0(&local_1a0,_DAT_0089f558,0x714e03,0x70f683);
  plVar6 = _DAT_0089f550;
  lVar4 = *_DAT_0089f550;
  local_1a8 = *(ulong *)(*_DAT_008a0228 + 0x10);
  lVar5 = *(long *)(lVar4 + 8);
  if (*(long *)(lVar4 + 0x1c8) != 0) {
    lVar5 = *(long *)(lVar4 + 0x1c8);
  }
  FUN__text__00598360(&local_38,lVar4,0,&local_1a0,0,lVar5,0,&local_1a8);
  if (local_168 != 0) {
    (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
  }
  lVar5 = CONCAT44(uStack_34,local_38);
  local_168 = lVar5;
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    if (local_160 != 0 || local_e0 != 0) {
      FUN__text__005d9010(lVar5,&local_170,1);
    }
    FUN__text__005d8de0(lVar5);
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))(plVar7);
  }
  if ((local_188 != 0) && (local_1a0 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)(local_1a0 + 0x12) + 0x18))();
  }
  local_1a0 = (undefined4 *)0x0;
  uStack_198 = 0xcbf29ce484222645;
  local_190 = 0x70f683;
  local_188 = 0;
  if (local_180 != 0) {
    (**(code **)(*(long *)(local_180 + 0x48) + 0x18))();
  }
  local_1a8 = local_1a8 & 0xffffffff00000000;
  local_38 = FUN__text__005bd8c0(param_1,&local_170,&local_1a8);
  local_1a0 = &local_38;
  lVar5 = FUN__text__005c1080(param_1 + 0xe6,&local_38,_DAT_008a01d8,&local_1a0,&uStack_51);
  lVar5 = *(long *)(lVar5 + 0x18);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar4 = param_1[0xc6];
  param_1[0xc6] = lVar5;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  FUN__text__005bdde0(param_1 + 4,param_1[2]);
  local_170 = _DAT_0089f4a8 + 0x10;
  if (local_168 == 0) {
    local_168 = 0;
    pcVar2 = local_d8;
  }
  else {
    FUN__text__005d9290(local_168,&local_170);
    lVar5 = local_168;
    local_168 = 0;
    pcVar2 = local_d8;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      pcVar2 = local_d8;
    }
  }
  local_d8 = pcVar2;
  if (pcVar2 != (code *)0x0) {
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar2)(auStack_c0);
  }
  pcVar2 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    local_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar2)(auStack_140);
  }
  if (local_168 != 0) {
    (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
  }
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  local_d8 = (code *)0x0;
  local_148 = 0;
  local_158 = (code *)0x0;
  local_150 = 0;
  local_170 = _DAT_0089f4c0 + 0x10;
  local_160 = 0;
  FUN__text__0010b800(&local_1a0,_DAT_0089f558,0x71914f,0x70f683);
  lVar4 = *plVar6;
  lVar5 = *(long *)(lVar4 + 8);
  if (*(long *)(lVar4 + 0x1c8) != 0) {
    lVar5 = *(long *)(lVar4 + 0x1c8);
  }
  FUN__text__0010ba10(&local_38,lVar4,0,&local_1a0,0,lVar5,0);
  lVar5 = CONCAT44(uStack_34,local_38);
  local_168 = lVar5;
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN__text__005d8de0(lVar5);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if ((local_188 != 0) && (local_1a0 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)(local_1a0 + 0x12) + 0x18))();
  }
  local_1a0 = (undefined4 *)0x0;
  uStack_198 = 0xcbf29ce484222645;
  local_190 = 0x70f683;
  local_188 = 0;
  if (local_180 != 0) {
    (**(code **)(*(long *)(local_180 + 0x48) + 0x18))();
  }
  local_1a0 = (undefined4 *)0x5bae12b9d510ec90;
  uStack_198 = 0x70e277;
  local_190 = 8;
  local_188 = 0;
  uVar3 = FUN__text__005bdea0(param_1,&local_170,&local_1a0);
  if (local_188 != 0) {
    (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
  }
  local_1a0 = (undefined4 *)CONCAT44(local_1a0._4_4_,uVar3);
  local_38 = 0;
  FUN__text__005bdfd0(param_1,&local_38,&local_1a0);
  local_38 = 1;
  FUN__text__005bdfd0(param_1,&local_38,&local_1a0);
  local_38 = 2;
  FUN__text__005bdfd0(param_1,&local_38,&local_1a0);
  local_170 = _DAT_0089f4b0 + 0x10;
  if (local_168 == 0) {
    local_168 = 0;
    pcVar2 = local_d8;
  }
  else {
    FUN__text__005d9290(local_168,&local_170);
    lVar5 = local_168;
    local_168 = 0;
    pcVar2 = local_d8;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      pcVar2 = local_d8;
    }
  }
  local_d8 = pcVar2;
  if (pcVar2 != (code *)0x0) {
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar2)(auStack_c0);
  }
  pcVar2 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    local_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar2)(auStack_140);
  }
  if (local_168 != 0) {
    (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x109) = 2;
  *(undefined4 *)(param_1 + 0x10d) = 2;
  *(undefined4 *)(param_1 + 0x10b) = 3;
  *(undefined4 *)(param_1 + 0x10f) = 1;
  *(undefined4 *)(param_1 + 0x111) = 1;
  *(undefined4 *)(param_1 + 0x113) = 1;
  FUN__text__005c4bc8(param_1);
  FUN__text__005c3ad0(param_1);
  return;
}


