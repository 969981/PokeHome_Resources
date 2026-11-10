/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001fd030; name: FUN_.text__001fd030
 */


void FUN__text__001fd030(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long local_788;
  undefined *local_780;
  undefined *puStack_778;
  undefined1 *local_770;
  undefined1 *local_768;
  long lStack_760;
  undefined4 local_758;
  undefined4 uStack_754;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined1 *local_680;
  undefined *puStack_678;
  undefined *local_670;
  undefined *puStack_668;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined1 *local_580;
  undefined *local_578;
  undefined1 *local_570;
  undefined1 *local_568;
  long local_560;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined1 *local_400;
  undefined *local_3f8;
  undefined *local_3f0;
  undefined *local_3e8;
  undefined8 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  long local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  int local_1d8;
  code *local_1d0;
  undefined *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  long local_1b0;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_50;
  undefined1 local_4c;
  long local_48;
  
  uVar1 = FUN__text__00196b70();
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar2 = (long *)(**(code **)*puVar5)(puVar5);
  plVar3 = (long *)FUN__text__0012615c();
  if (plVar3 != plVar2) {
    do {
      plVar2 = (long *)*plVar2;
    } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
  }
  local_780 = (undefined *)0x30e317e01e0d8d12;
  puStack_778 = (undefined *)0x7126a1;
  local_770 = (undefined1 *)0x16;
  local_768 = (undefined1 *)0x0;
  lVar4 = FUN__text__0013bb90(puVar5[0xaf],&local_780);
  if (local_768 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_768 + 0x48) + 0x18))();
  }
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar6 = *(long *)(param_1 + 0xa0);
  local_1f0 = 0xe98bd2f9c79e70f;
  local_50 = 0xffffffff;
  local_780 = &DAT__text__00201794;
  puStack_778 = &DAT__text__002017d0;
  local_680 = &LAB__text__002017ec;
  puStack_678 = &DAT__text__002017f4;
  local_580 = &LAB__text__00201800;
  local_578 = &DAT__text__0020180c;
  local_570 = &LAB__text__00201810;
  local_568 = &LAB__text__0020181c;
  local_400 = &LAB__text__00201828;
  local_3f8 = &DAT__text__00201830;
  local_3f0 = &DAT__text__00201834;
  local_3e8 = &DAT__text__00201838;
  local_1d0 = FUN__text__00201840;
  local_1c8 = &DAT__text__00201a98;
  local_770 = &LAB__text__002017d4;
  local_768 = &LAB__text__002017e0;
  local_1c0 = &LAB__text__00201a9c;
  local_6f0 = 0;
  uStack_6e8 = 0;
  local_700 = 0;
  uStack_6f8 = 0;
  local_500 = 0;
  local_4f8 = 0;
  local_4f0 = 0;
  local_4e8 = 0;
  local_480 = 0;
  local_478 = 0;
  local_470 = 0;
  local_468 = 0;
  local_368 = 0;
  local_370 = 0;
  local_378 = 0;
  local_380 = 0;
  local_2e8 = 0;
  local_2f0 = 0;
  local_2f8 = 0;
  local_300 = 0;
  local_280 = 0;
  local_278 = 0;
  local_270 = 0;
  local_268 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_1e8 = 0;
  local_4c = 0;
  local_48 = 0;
  local_1b8 = &LAB__text__00201aa8;
  local_600 = 0;
  uStack_5f8 = 0;
  local_5f0 = 0;
  uStack_5e8 = 0;
  local_670 = &DAT__text__002017f8;
  puStack_668 = &DAT__text__002017fc;
  lStack_760 = param_1;
  local_758 = param_2;
  uStack_754 = uVar1;
  local_560 = param_1;
  local_1b0 = param_1;
  if (lVar6 == 0) {
  }
  else {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    if (local_200 != 0) {
      plVar2 = (long *)(local_200 + 0x48);
      local_200 = lVar6;
      (**(code **)(*plVar2 + 0x18))();
      lVar6 = local_200;
    }
  }
  local_200 = lVar6;
  local_1e8 = 0;
  local_1f0 = 0xe6c0730acf4f10ae;
  local_1d8 = FUN__text__00196b70();
  local_1d8 = local_1d8 + -1;
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  if (local_48 != 0) {
    plVar2 = (long *)(local_48 + 0x48);
    local_48 = lVar4;
    (**(code **)(*plVar2 + 0x18))();
    lVar4 = local_48;
  }
  local_48 = lVar4;
  local_4c = 1;
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar2 = (long *)(**(code **)*puVar5)(puVar5);
  plVar3 = (long *)FUN__text__0012615c();
  if (plVar3 != plVar2) {
    do {
      plVar2 = (long *)*plVar2;
    } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
  }
  FUN__text__0013bab0(&local_788,0x71ffe1,puVar5[0xaf],&local_780);
  if (local_788 != 0) {
    (**(code **)(*(long *)(local_788 + 0x48) + 0x18))();
    local_788 = 0;
  }
  FUN__text__0013e7fc(&local_780);
  return;
}


