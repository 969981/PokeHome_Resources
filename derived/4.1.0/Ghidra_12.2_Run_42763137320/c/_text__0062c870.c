/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0062c870; name: FUN_.text__0062c870
 */


void FUN__text__0062c870(long param_1,long param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  code *pcVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 uVar7;
  uint uVar8;
  code **local_588;
  code *local_580;
  code *local_578;
  undefined *local_570;
  undefined *puStack_568;
  undefined1 auStack_560 [96];
  code *local_500;
  code *local_4f8;
  undefined *local_4f0;
  undefined *puStack_4e8;
  undefined1 auStack_4e0 [96];
  undefined1 *local_480;
  code *local_478;
  undefined *local_470;
  undefined *puStack_468;
  undefined1 auStack_460 [96];
  code *local_400;
  code *local_3f8;
  undefined *local_3f0;
  undefined *puStack_3e8;
  undefined1 auStack_3e0 [96];
  undefined1 *local_380;
  code *local_378;
  undefined *local_370;
  undefined *local_368;
  undefined1 auStack_360 [96];
  code *local_300;
  code *local_2f8;
  undefined *local_2f0;
  undefined *local_2e8;
  undefined1 auStack_2e0 [96];
  code *local_280;
  code *local_278;
  undefined *local_270;
  undefined *local_268;
  undefined1 auStack_260 [96];
  code *local_200;
  code *local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined1 auStack_1e0 [96];
  code *local_180;
  code *local_178;
  undefined *local_170;
  undefined *local_168;
  undefined1 auStack_160 [96];
  code *local_100;
  code *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined1 auStack_e0 [108];
  undefined1 local_74 [4];
  undefined2 local_70 [2];
  uint local_6c [3];
  
  *(undefined8 *)(param_1 + 1) = 0;
  uVar2 = *(ushort *)(param_2 + 0xd);
  local_580 = FUN__text__0062ffd4;
  local_578 = FUN__text__0062ffe8;
  local_570 = &DAT__text__0062ffec;
  puStack_568 = &DAT__text__0062fff0;
  local_500 = FUN__text__0062fff4;
  local_4f8 = FUN__text__0063000c;
  local_4f0 = &DAT__text__00630010;
  puStack_4e8 = &DAT__text__00630014;
  local_480 = &LAB__text__00630018;
  local_478 = FUN__text__00630020;
  local_470 = &DAT__text__00630024;
  puStack_468 = &DAT__text__00630028;
  local_400 = FUN__text__0063002c;
  local_3f8 = FUN__text__00630030;
  local_3f0 = &DAT__text__00630034;
  puStack_3e8 = &DAT__text__00630038;
  local_380 = &LAB__text__0063003c;
  local_378 = FUN__text__00630044;
  local_370 = &DAT__text__00630048;
  local_368 = &DAT__text__0063004c;
  local_300 = FUN__text__00630050;
  local_2f8 = FUN__text__00630054;
  local_2f0 = &DAT__text__00630058;
  local_2e8 = &DAT__text__0063005c;
  local_280 = FUN__text__00630060;
  local_278 = FUN__text__00630070;
  local_270 = &DAT__text__00630074;
  local_268 = &DAT__text__00630078;
  local_200 = FUN__text__0063007c;
  local_1f8 = FUN__text__00630094;
  local_1f0 = &DAT__text__00630098;
  local_1e8 = &DAT__text__0063009c;
  local_180 = FUN__text__006300a0;
  local_178 = FUN__text__006300b8;
  local_170 = &DAT__text__006300bc;
  uVar1 = *(undefined2 *)(param_2 + 0x22);
  local_168 = &DAT__text__006300c0;
  local_100 = FUN__text__006300c4;
  local_f8 = FUN__text__006300d4;
  local_588 = &local_580;
  local_f0 = &DAT__text__006300d8;
  local_e8 = &DAT__text__006300dc;
  uVar4 = FUN__text__00637870(uVar2,uVar1,*(undefined4 *)(param_2 + 0x13));
  local_70[0] = uVar1;
  local_6c[0] = (uint)uVar2;
  uVar5 = (*local_280)(auStack_260,local_6c,local_70);
  if (uVar5 != 0) {
    uVar8 = 0;
    do {
      local_74[0] = (char)uVar8;
      local_70[0] = uVar1;
      local_6c[0] = (uint)uVar2;
      uVar6 = (*local_200)(auStack_1e0,local_6c,local_70,local_74);
      local_6c[0] = (uint)uVar2;
      local_74[0] = (char)uVar8;
      local_70[0] = uVar1;
      uVar7 = (*local_180)(auStack_160,local_6c,local_70,local_74);
      if ((uVar4 & 0xff) < uVar6) break;
      FUN__text__0062cc70(&local_588,param_1,uVar7);
      uVar8 = uVar8 + 1;
    } while (uVar5 != uVar8);
  }
  pcVar3 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (undefined *)0x0;
    local_e8 = (undefined *)0x0;
    local_100 = (code *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar3)(auStack_e0);
  }
  pcVar3 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = (undefined *)0x0;
    local_168 = (undefined *)0x0;
    local_180 = (code *)0x0;
    local_178 = (code *)0x0;
    (*pcVar3)(auStack_160);
  }
  pcVar3 = local_1f8;
  if (local_1f8 != (code *)0x0) {
    local_1f0 = (undefined *)0x0;
    local_1e8 = (undefined *)0x0;
    local_200 = (code *)0x0;
    local_1f8 = (code *)0x0;
    (*pcVar3)(auStack_1e0);
  }
  pcVar3 = local_278;
  if (local_278 != (code *)0x0) {
    local_270 = (undefined *)0x0;
    local_268 = (undefined *)0x0;
    local_280 = (code *)0x0;
    local_278 = (code *)0x0;
    (*pcVar3)(auStack_260);
  }
  pcVar3 = local_2f8;
  if (local_2f8 != (code *)0x0) {
    local_2f0 = (undefined *)0x0;
    local_2e8 = (undefined *)0x0;
    local_300 = (code *)0x0;
    local_2f8 = (code *)0x0;
    (*pcVar3)(auStack_2e0);
  }
  pcVar3 = local_378;
  if (local_378 != (code *)0x0) {
    local_370 = (undefined *)0x0;
    local_368 = (undefined *)0x0;
    local_380 = (undefined1 *)0x0;
    local_378 = (code *)0x0;
    (*pcVar3)(auStack_360);
  }
  pcVar3 = local_3f8;
  if (local_3f8 != (code *)0x0) {
    local_3f0 = (undefined *)0x0;
    puStack_3e8 = (undefined *)0x0;
    local_400 = (code *)0x0;
    local_3f8 = (code *)0x0;
    (*pcVar3)(auStack_3e0);
  }
  pcVar3 = local_478;
  if (local_478 != (code *)0x0) {
    local_470 = (undefined *)0x0;
    puStack_468 = (undefined *)0x0;
    local_480 = (undefined1 *)0x0;
    local_478 = (code *)0x0;
    (*pcVar3)(auStack_460);
  }
  pcVar3 = local_4f8;
  if (local_4f8 != (code *)0x0) {
    local_4f0 = (undefined *)0x0;
    puStack_4e8 = (undefined *)0x0;
    local_500 = (code *)0x0;
    local_4f8 = (code *)0x0;
    (*pcVar3)(auStack_4e0);
  }
  pcVar3 = local_578;
  if (local_578 != (code *)0x0) {
    local_570 = (undefined *)0x0;
    puStack_568 = (undefined *)0x0;
    local_580 = (code *)0x0;
    local_578 = (code *)0x0;
    (*pcVar3)(auStack_560);
  }
  return;
}


