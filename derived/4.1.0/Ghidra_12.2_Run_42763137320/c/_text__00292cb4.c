/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00292cb4; name: FUN_.text__00292cb4
 */


void FUN__text__00292cb4(long *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *local_620;
  undefined *puStack_618;
  undefined1 *local_610;
  undefined1 *local_608;
  long lStack_600;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  code *local_520;
  undefined *puStack_518;
  undefined1 *local_510;
  undefined1 *puStack_508;
  long local_500;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined1 *local_2a0;
  undefined *local_298;
  undefined1 *local_290;
  undefined1 *local_288;
  long local_280;
  long local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  long local_1d0;
  undefined8 local_170;
  code *local_160;
  code *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  long local_140 [12];
  undefined8 local_e0;
  code *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  long local_b0 [12];
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  long local_38;
  
  lVar5 = *param_1;
  local_620 = (code *)0xa7649e0ad180b01a;
  puStack_618 = (undefined *)0x71a942;
  local_610 = (undefined1 *)0x1b;
  local_608 = (undefined1 *)0x0;
  FUN__text__00115650(&local_38,*(undefined8 *)(*(long *)(lVar5 + 0x60) + 0xb0),&local_620,0xb);
  if (local_608 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_608 + 0x48) + 0x18))();
  }
  local_620 = (code *)0x431e779ffc1ad503;
  uVar2 = FUN__text__0012ce7c(lVar5 + 0x110,&local_620);
  FUN__text__003a14e8(uVar2,0);
  lVar3 = FUN__text__003c79c0(*(undefined8 *)(lVar5 + 0x2d0),0x731e30);
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
  lVar3 = FUN__text__003c79c0(*(undefined8 *)(lVar5 + 0x2d0),0x731e38);
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
  lVar4 = FUN__text__003c79c0(*(undefined8 *)(lVar5 + 0x2d0),0x731e40);
  lVar3 = local_38;
  *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
  local_598 = 0;
  uStack_590 = 0;
  local_4a0 = 0;
  uStack_498 = 0;
  local_420 = 0;
  local_418 = 0;
  local_410 = 0;
  local_408 = 0;
  local_3a0 = 0;
  local_210 = 0xe98bd2f9c79e70f;
  local_398 = 0;
  local_170 = 0xcbf29ce484222645;
  local_e0 = 0xcbf29ce484222645;
  local_50 = 0xffffffff;
  local_390 = 0;
  local_388 = 0;
  local_308 = 0;
  local_310 = 0;
  local_318 = 0;
  local_320 = 0;
  local_218 = 0;
  local_220 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_160 = (code *)0x0;
  local_158 = (code *)0x0;
  local_150 = (undefined1 *)0x0;
  local_148 = (undefined1 *)0x0;
  local_d0 = (code *)0x0;
  local_c8 = (code *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_b8 = (undefined1 *)0x0;
  local_4c = 0;
  local_48 = 0;
  local_5a0 = 0;
  local_588 = 0;
  local_620 = FUN__text__002930a0;
  puStack_618 = &DAT__text__002934ec;
  local_610 = &LAB__text__0029369c;
  local_608 = &LAB__text__002936a8;
  local_520 = FUN__text__002936b4;
  puStack_518 = &DAT__text__00293728;
  local_510 = &LAB__text__0029372c;
  puStack_508 = &LAB__text__00293738;
  local_1f0 = &DAT__text__00293744;
  local_1e8 = &DAT__text__00293758;
  local_1e0 = &LAB__text__0029375c;
  local_1d8 = &LAB__text__00293768;
  local_2a0 = &LAB__text__00293840;
  local_298 = &DAT__text__00293858;
  local_290 = &LAB__text__0029385c;
  local_288 = &LAB__text__00293868;
  local_490 = 0;
  uStack_488 = 0;
  lStack_600 = lVar5;
  local_500 = lVar5;
  local_280 = lVar5;
  local_1d0 = lVar5;
  if (local_38 == 0) {
    local_220 = 0;
  }
  else {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    lVar4 = local_220;
    local_220 = lVar3;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
  }
  pcVar1 = local_158;
  local_210 = 0x16395a443366ec8b;
  local_208 = 0x731ff8;
  local_1f8 = 8;
  local_4c = 1;
  local_e0 = 0x2d2c043233733371;
  local_170 = 0x2d21f232336ac056;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined1 *)0x0;
    local_148 = (undefined1 *)0x0;
    local_160 = (code *)0x0;
    local_158 = (code *)0x0;
    (*pcVar1)(local_140);
  }
  pcVar1 = local_c8;
  local_160 = FUN__text__00293774;
  local_150 = &LAB__text__002937c8;
  local_158 = (code *)&DAT__text__002937c4;
  local_148 = &LAB__text__002937d4;
  local_140[0] = lVar5;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar1)(local_b0);
  }
  local_d0 = FUN__text__002937e0;
  local_c8 = (code *)&DAT__text__00293824;
  local_c0 = &LAB__text__00293828;
  local_b8 = &LAB__text__00293834;
  local_b0[0] = lVar5;
  FUN__text__00137b30(0x71ced0,*(undefined8 *)(lVar5 + 0x60),&local_620);
  FUN__text__0013aa2c(&local_620);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


