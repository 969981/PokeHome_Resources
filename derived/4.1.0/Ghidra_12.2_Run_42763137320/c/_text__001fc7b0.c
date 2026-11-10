/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001fc7b0; name: FUN_.text__001fc7b0
 */


void FUN__text__001fc7b0(long param_1,undefined4 param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  code *local_790;
  undefined *puStack_788;
  undefined1 *local_780;
  undefined1 *local_778;
  long lStack_770;
  undefined4 local_768;
  undefined8 local_760;
  int local_758;
  code *local_710;
  undefined *puStack_708;
  undefined1 *local_700;
  undefined1 *local_6f8;
  long lStack_6f0;
  undefined4 local_6e8;
  undefined8 *local_6e0;
  undefined1 *local_690;
  undefined *local_688;
  undefined *puStack_680;
  undefined *local_678;
  undefined8 local_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined *local_590;
  undefined *local_588;
  undefined *local_580;
  undefined *local_578;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined1 *local_410;
  undefined *local_408;
  undefined *local_400;
  undefined *local_3f8;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  long local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  int local_1e8;
  code *local_1e0;
  undefined *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  long local_1c0;
  undefined4 local_1b8;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_60;
  undefined1 local_5c;
  long local_58;
  long local_38;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar4 == (undefined8 *)0x0)) {
LAB__text__001fc820:
    puVar4 = (undefined8 *)0x0;
  }
  else {
    plVar2 = (long *)(**(code **)*puVar4)(puVar4);
    plVar3 = (long *)FUN__text__0018d6a0();
    if (plVar3 != plVar2) {
      do {
        plVar2 = (long *)*plVar2;
      } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
      if (plVar2 == (long *)0x0) goto LAB__text__001fc820;
    }
    puVar4 = puVar4 + -10;
  }
  iVar1 = *(int *)(param_1 + 0x2c2d4) + 3;
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar2 = (long *)(**(code **)*puVar5)(puVar5);
  plVar3 = (long *)FUN__text__0012615c();
  if (plVar3 != plVar2) {
    do {
      plVar2 = (long *)*plVar2;
    } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
  }
  local_790 = (code *)0x30e317e01e0d8d12;
  puStack_788 = (undefined *)0x7126a1;
  local_780 = (undefined1 *)0x16;
  local_778 = (undefined1 *)0x0;
  local_760 = FUN__text__0013bb90(puVar5[0xaf],&local_790);
  if (local_778 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_778 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)(param_1 + 0xa0);
  local_200 = 0xe98bd2f9c79e70f;
  local_60 = 0xffffffff;
  local_790 = FUN__text__002009c0;
  puStack_788 = &DAT__text__00200c60;
  local_690 = &LAB__text__00200c8c;
  local_700 = &LAB__text__00200994;
  local_410 = &LAB__text__00200cb0;
  local_408 = &DAT__text__00200cb8;
  local_780 = &LAB__text__00200c64;
  local_400 = &DAT__text__00200cbc;
  local_688 = &DAT__text__00200c94;
  puStack_680 = &DAT__text__00200c98;
  local_3f8 = &DAT__text__00200cc0;
  local_678 = &DAT__text__00200c9c;
  local_1e0 = FUN__text__00200cd0;
  local_590 = &DAT__text__00200ca0;
  local_588 = &DAT__text__00200ca4;
  local_1d8 = &DAT__text__00201174;
  local_580 = &DAT__text__00200ca8;
  local_778 = &LAB__text__00200c78;
  local_578 = &DAT__text__00200cac;
  local_1d0 = &LAB__text__00201178;
  local_608 = 0;
  uStack_600 = 0;
  local_510 = 0;
  local_508 = 0;
  local_500 = 0;
  local_4f8 = 0;
  local_490 = 0;
  local_488 = 0;
  local_480 = 0;
  local_478 = 0;
  local_390 = 0;
  local_388 = 0;
  local_380 = 0;
  local_378 = 0;
  local_2f8 = 0;
  local_300 = 0;
  local_308 = 0;
  local_310 = 0;
  local_278 = 0;
  local_280 = 0;
  local_288 = 0;
  local_290 = 0;
  local_210 = 0;
  local_208 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_5c = 0;
  local_58 = 0;
  local_610 = 0;
  local_5f8 = 0;
  local_1c8 = &LAB__text__00201184;
  local_710 = FUN__text__002008b8;
  puStack_708 = &DAT__text__00200990;
  local_6f8 = &LAB__text__002009a8;
  lStack_770 = param_1;
  local_768 = param_2;
  local_758 = iVar1;
  lStack_6f0 = param_1;
  local_6e8 = param_2;
  local_6e0 = puVar4;
  local_1c0 = param_1;
  local_1b8 = param_2;
  if (lVar6 == 0) {
  }
  else {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    if (local_210 != 0) {
      plVar2 = (long *)(local_210 + 0x48);
      local_210 = lVar6;
      (**(code **)(*plVar2 + 0x18))();
      lVar6 = local_210;
    }
  }
  local_210 = lVar6;
  lVar6 = *(long *)(param_1 + 0xd0);
  local_1f8 = 0;
  local_200 = 0xe6c0730acf4f10ae;
  local_1e8 = iVar1;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (local_58 != 0) {
    plVar2 = (long *)(local_58 + 0x48);
    local_58 = lVar6;
    (**(code **)(*plVar2 + 0x18))();
    lVar6 = local_58;
  }
  local_58 = lVar6;
  local_5c = 1;
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar2 = (long *)(**(code **)*puVar4)(puVar4);
  plVar3 = (long *)FUN__text__0012615c();
  if (plVar3 != plVar2) {
    do {
      plVar2 = (long *)*plVar2;
    } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
  }
  FUN__text__0013bab0(&local_38,0x7126a1,puVar4[0xaf],&local_790);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  FUN__text__0013e7fc(&local_790);
  return;
}


