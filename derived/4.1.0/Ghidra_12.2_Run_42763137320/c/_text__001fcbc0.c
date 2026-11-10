/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001fcbc0; name: FUN_.text__001fcbc0
 */


void FUN__text__001fcbc0(long param_1,uint param_2,uint param_3,byte *param_4,undefined4 param_5)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *local_7a0;
  byte *pbStack_798;
  undefined1 *local_790;
  undefined1 *local_788;
  long local_780;
  uint local_778;
  long local_770;
  code *local_720;
  undefined *puStack_718;
  undefined1 *local_710;
  undefined1 *puStack_708;
  long local_700;
  undefined8 *local_6f8;
  long lStack_6f0;
  undefined1 *local_6a0;
  undefined *puStack_698;
  undefined *local_690;
  undefined *puStack_688;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined1 *local_5a0;
  undefined *local_598;
  undefined1 *local_590;
  undefined1 *local_588;
  long local_580;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined1 *local_4a0;
  undefined *local_498;
  undefined1 *local_490;
  undefined1 *local_488;
  undefined4 local_480;
  undefined1 *local_420;
  undefined *local_418;
  undefined *local_410;
  undefined *local_408;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  long local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  code *local_1f0;
  undefined *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  long local_1d0;
  long local_1c8;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_70;
  undefined1 local_6c;
  long local_68;
  long local_48;
  
  if ((3 < param_2) || (0x2e < param_3)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 == (undefined8 *)0x0)) {
LAB__text__001fcc50:
    puVar7 = (undefined8 *)0x0;
  }
  else {
    plVar2 = (long *)(**(code **)*puVar7)(puVar7);
    plVar3 = (long *)FUN__text__0018d6a0();
    if (plVar3 != plVar2) {
      do {
        plVar2 = (long *)*plVar2;
      } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
      if (plVar2 == (long *)0x0) goto LAB__text__001fcc50;
    }
    puVar7 = puVar7 + -10;
  }
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar2 = (long *)(**(code **)*puVar8)(puVar8);
  plVar3 = (long *)FUN__text__0012615c();
  if (plVar3 != plVar2) {
    do {
      plVar2 = (long *)*plVar2;
    } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
  }
  uVar9 = puVar8[0xaf];
  local_790 = (undefined1 *)strlen((char *)param_4);
  bVar1 = *param_4;
  local_7a0 = (code *)0xcbf29ce484222645;
  pbVar5 = param_4;
  while (bVar1 != 0) {
    pbVar5 = pbVar5 + 1;
    local_7a0 = (code *)(((ulong)local_7a0 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *pbVar5;
  }
  local_788 = (undefined1 *)0x0;
  pbStack_798 = param_4;
  lVar4 = FUN__text__0013bb90(uVar9,&local_7a0);
  if (local_788 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_788 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)(param_1 + 0xa0);
  local_210 = 0xe98bd2f9c79e70f;
  local_70 = 0xffffffff;
  local_7a0 = FUN__text__00201250;
  pbStack_798 = &DAT__text__00201474;
  local_790 = &LAB__text__00201478;
  local_788 = &LAB__text__0020148c;
  local_6a0 = &LAB__text__002014a0;
  puStack_698 = &DAT__text__002014a8;
  local_690 = &DAT__text__002014ac;
  puStack_688 = &DAT__text__002014b0;
  local_5a0 = &LAB__text__002014b4;
  local_598 = &DAT__text__002014c0;
  local_590 = &LAB__text__002014c4;
  local_588 = &LAB__text__002014d0;
  local_4a0 = &LAB__text__002014dc;
  local_498 = &DAT__text__002014f0;
  local_490 = &LAB__text__002014f4;
  local_488 = &LAB__text__00201500;
  local_770 = param_1 + (ulong)param_3 * 0xe68 + 0xf58;
  local_720 = FUN__text__00201190;
  puStack_718 = &DAT__text__00201218;
  local_710 = &LAB__text__0020121c;
  puStack_708 = &LAB__text__00201230;
  local_420 = &LAB__text__0020150c;
  local_1f0 = FUN__text__00201520;
  local_418 = &DAT__text__00201514;
  local_1e8 = &DAT__text__00201778;
  local_410 = &DAT__text__00201518;
  local_1e0 = &LAB__text__0020177c;
  local_610 = 0;
  uStack_608 = 0;
  local_520 = 0;
  local_518 = 0;
  local_510 = 0;
  local_508 = 0;
  local_3a0 = 0;
  local_398 = 0;
  local_390 = 0;
  local_388 = 0;
  local_320 = 0;
  local_318 = 0;
  local_310 = 0;
  local_308 = 0;
  local_288 = 0;
  local_290 = 0;
  local_298 = 0;
  local_2a0 = 0;
  local_218 = 0;
  local_220 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_6c = 0;
  local_68 = 0;
  local_408 = &DAT__text__0020151c;
  local_1d8 = &LAB__text__00201788;
  local_620 = 0;
  uStack_618 = 0;
  local_780 = param_1;
  local_778 = param_2;
  local_700 = param_1;
  local_6f8 = puVar7;
  lStack_6f0 = local_770;
  local_580 = param_1;
  local_480 = param_5;
  local_1d0 = param_1;
  local_1c8 = local_770;
  if (lVar6 == 0) {
  }
  else {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    if (local_220 != 0) {
      plVar2 = (long *)(local_220 + 0x48);
      local_220 = lVar6;
      (**(code **)(*plVar2 + 0x18))();
      lVar6 = local_220;
    }
  }
  local_220 = lVar6;
  local_208 = 0;
  local_210 = 0xe6c0730acf4f10ae;
  local_1f8 = *(undefined4 *)(param_1 + (ulong)param_3 * 0xe68 + 0x1dbc);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (local_68 != 0) {
    plVar2 = (long *)(local_68 + 0x48);
    local_68 = lVar4;
    (**(code **)(*plVar2 + 0x18))();
    lVar4 = local_68;
  }
  local_68 = lVar4;
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar2 = (long *)(**(code **)*puVar7)(puVar7);
  plVar3 = (long *)FUN__text__0012615c();
  if (plVar3 != plVar2) {
    do {
      plVar2 = (long *)*plVar2;
    } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
  }
  FUN__text__0013bab0(&local_48,0x7167e8,puVar7[0xaf],&local_7a0);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  FUN__text__0013e7fc(&local_7a0);
  return;
}


