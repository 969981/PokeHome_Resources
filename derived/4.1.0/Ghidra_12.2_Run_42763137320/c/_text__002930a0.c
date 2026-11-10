/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002930a0; name: FUN_.text__002930a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002930a0(long *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 local_668;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined8 local_650;
  long local_648;
  code *local_5e0;
  undefined *puStack_5d8;
  undefined1 *local_5d0;
  undefined1 *local_5c8;
  long lStack_5c0;
  uint local_5b8;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  code *local_4e0;
  undefined *puStack_4d8;
  undefined1 *local_4d0;
  undefined1 *local_4c8;
  long lStack_4c0;
  uint local_4b8;
  ulong local_4b4;
  undefined8 local_4ac;
  undefined8 local_4a4;
  undefined8 local_49c;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  long local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined1 *local_230;
  undefined *local_228;
  undefined1 *local_220;
  undefined1 *local_218;
  long local_210;
  uint local_208;
  undefined8 local_1b0;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_90;
  undefined1 local_8c;
  long local_88;
  uint local_80 [4];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  long local_28;
  
  lVar7 = *param_1;
  uVar1 = *param_2;
  uVar8 = (ulong)uVar1;
  local_660 = 0xa7649e0ad180b01a;
  uStack_658 = 0x71a942;
  uVar6 = *(undefined8 *)(*(long *)(lVar7 + 0x60) + 0xb0);
  local_650 = 0x1b;
  local_648 = 0;
  FUN__text__00115650(&local_28,uVar6,&local_660,0xb);
  if (local_648 != 0) {
    (**(code **)(*(long *)(local_648 + 0x48) + 0x18))();
  }
  lVar3 = local_28;
  lVar4 = *(long *)(lVar7 + 0x640);
  local_660 = 0;
  uStack_658 = 0;
  local_80[0] = (uint)*(byte *)(lVar4 + 0x13c);
  local_80[1] = (uint)*(byte *)(lVar4 + 0x13d);
  local_80[2] = (uint)*(byte *)(lVar4 + 0x13e);
  local_80[3] = *(undefined4 *)(lVar4 + 0x140);
  local_650 = 0;
  local_648 = 0;
  local_560 = 0;
  uStack_558 = 0;
  local_70 = *(undefined4 *)(lVar4 + 0x144);
  local_4a4 = *(undefined8 *)(lVar4 + 0x144);
  local_448 = 0;
  local_550 = 0;
  uStack_548 = 0;
  local_450 = 0;
  local_458 = 0;
  local_460 = 0;
  local_3c8 = 0;
  local_3d0 = 0;
  local_3d8 = 0;
  local_3e0 = 0;
  local_360 = 0;
  local_358 = 0;
  local_350 = 0;
  local_348 = 0;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2d0 = 0;
  local_2c8 = 0;
  local_260 = 0;
  local_258 = 0;
  local_248 = 0;
  local_240 = 0;
  local_238 = 0;
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_8c = 0;
  local_88 = 0;
  uStack_6c = (undefined4)*(undefined8 *)(lVar4 + 0x148);
  uStack_68 = (undefined4)((ulong)*(undefined8 *)(lVar4 + 0x148) >> 0x20);
  local_64 = *(undefined4 *)(lVar4 + 0x150);
  local_4b4 = (ulong)CONCAT14(*(byte *)(lVar4 + 0x13d),(uint)*(byte *)(lVar4 + 0x13c));
  local_4ac = CONCAT44(*(undefined4 *)(lVar4 + 0x140),(uint)*(byte *)(lVar4 + 0x13e));
  local_49c = CONCAT44(*(undefined4 *)(lVar4 + 0x150),uStack_68);
  local_4d0 = &LAB__text__00293624;
  local_250 = 0xe98bd2f9c79e70f;
  local_1b0 = 0xcbf29ce484222645;
  local_120 = 0xcbf29ce484222645;
  local_90 = 0xffffffff;
  local_5e0 = FUN__text__002934f0;
  puStack_5d8 = &DAT__text__00293544;
  local_5d0 = &LAB__text__00293548;
  local_230 = &LAB__text__0029365c;
  local_228 = &DAT__text__00293680;
  local_220 = &LAB__text__00293684;
  local_218 = &LAB__text__00293690;
  local_5c8 = &LAB__text__00293554;
  local_4e0 = FUN__text__00293560;
  puStack_4d8 = &DAT__text__00293620;
  local_4c8 = &LAB__text__00293640;
  lStack_5c0 = lVar7;
  local_5b8 = uVar1;
  lStack_4c0 = lVar7;
  local_4b8 = uVar1;
  local_210 = lVar7;
  local_208 = uVar1;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  local_260 = lVar3;
  if (uVar1 - 1 < 2) {
    local_60 = 0x1d6021ebfcbdd9ae;
    uStack_58 = 0x720c77;
    local_50 = 0x17;
  }
  else {
    if (uVar1 != 0) goto LAB__text__00293368;
    local_60 = 0x153e92b540c06ce1;
    uStack_58 = 0x71ccbf;
    local_50 = 0x16;
  }
  local_48 = 0;
  FUN__text__00115650(&local_668,uVar6,&local_60,0xb);
  local_258 = local_668;
  local_668 = 0;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
LAB__text__00293368:
  local_250 = *(undefined8 *)(uVar8 * 8 + 0x731e48);
  local_248 = *(undefined8 *)(uVar8 * 8 + 0x878178);
  local_238 = *(undefined4 *)(uVar8 * 4 + 0x724ed0);
  if (uVar1 == 0) {
    uVar2 = FUN__text__0016ae08(DAT_008e1560);
    uVar1 = uRam00000000008aac88;
    if (uVar2 < 10) {
      local_248 = *(undefined8 *)((long)(int)uVar2 * 8 + 0x8781b8);
      local_238 = *(undefined4 *)((long)(int)uVar2 * 4 + 0x732068);
    }
    else {
      local_238 = 0x1c;
      local_248 = 0x7314b8;
    }
  }
  else {
    uVar1 = *(uint *)(uVar8 * 4 + 0x8aac88);
  }
  if (uVar1 != 0) {
    uVar5 = 0;
    do {
      if (*(uint *)(*(long *)(_DAT_008a2140 + uVar8 * 8) + uVar5 * 4) == local_80[uVar8]) {
        local_90 = (undefined4)uVar5;
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  local_60 = 0xad268b19e4645f59;
  uStack_58 = 0x71ced0;
  local_50 = 0x16;
  local_48 = 0;
  lVar3 = FUN__text__00137c10(*(undefined8 *)(lVar7 + 0x60),&local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_88 = lVar3;
  FUN__text__00137b30(0x70b982,*(undefined8 *)(lVar7 + 0x60),&local_660);
  FUN__text__0013aa2c(&local_660);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


