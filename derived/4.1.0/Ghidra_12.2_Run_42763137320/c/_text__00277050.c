/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00277050; name: FUN_.text__00277050
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00277050(long param_1)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined1 *local_730;
  code *pcStack_728;
  code *local_720;
  undefined1 *puStack_718;
  undefined1 auStack_710 [96];
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined1 *local_630;
  code *local_628;
  code *local_620;
  undefined1 *puStack_618;
  undefined1 auStack_610 [96];
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  long local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 *local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_280;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_1f0;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_160;
  undefined1 local_15c;
  undefined8 local_158;
  undefined1 *local_150;
  code *local_148;
  code *local_140;
  undefined1 *local_138;
  long alStack_130 [12];
  undefined1 *local_d0;
  code *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  long alStack_b0 [12];
  undefined8 local_38;
  
  local_d0 = &LAB__text__002778d0;
  local_c8 = FUN__text__002779c0;
  local_c0 = FUN__text__002779c4;
  local_b8 = &LAB__text__002779d0;
  local_150 = &LAB__text__002779dc;
  local_148 = FUN__text__002779ec;
  local_140 = FUN__text__002779f0;
  local_138 = &LAB__text__002779fc;
  alStack_130[0] = param_1;
  alStack_b0[0] = param_1;
  iVar2 = FUN__text__003230b0();
  local_720 = (code *)0x0;
  puStack_718 = (undefined1 *)0x0;
  local_730 = (undefined1 *)0x0;
  pcStack_728 = (code *)0x0;
  piVar5 = (int *)(_DAT_008a1760 + (long)iVar2 * 0x2c);
  local_518 = 0;
  local_6b0 = 0;
  uStack_6a8 = 0;
  local_6a0 = 0;
  uStack_698 = 0;
  local_520 = 0;
  local_528 = 0;
  local_630 = (undefined1 *)0x0;
  local_628 = (code *)0x0;
  local_530 = 0;
  local_498 = 0;
  local_4a0 = 0;
  local_4a8 = 0;
  local_4b0 = 0;
  local_430 = 0;
  local_428 = 0;
  local_420 = 0;
  local_418 = 0;
  local_3b0 = 0;
  local_3a8 = 0;
  local_3a0 = 0;
  local_398 = 0;
  local_330 = 0;
  local_328 = 0;
  local_300 = 0;
  local_2f8 = 0;
  local_2f0 = 0;
  local_2e8 = 0;
  local_308 = 0;
  local_310 = 0;
  local_318 = (undefined8 *)0x0;
  local_258 = 0;
  local_260 = 0;
  local_268 = 0;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)((long)*piVar5 * 8 + 0x72d1b8);
  local_270 = 0;
  local_1c8 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1e0 = 0;
  local_15c = 0;
  local_158 = 0;
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)((long)piVar5[1] * 8 + 0x72d1b8);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)((long)piVar5[2] * 8 + 0x72d1b8);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)((long)piVar5[3] * 8 + 0x72d1b8);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)((long)piVar5[4] * 8 + 0x72d1b8);
  local_620 = (code *)0x0;
  puStack_618 = (undefined1 *)0x0;
  local_5b0 = 0;
  uStack_5a8 = 0;
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)((long)piVar5[5] * 8 + 0x72d1b8);
  local_5a0 = 0;
  uStack_598 = 0;
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)((long)piVar5[6] * 8 + 0x72d1b8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)((long)piVar5[7] * 8 + 0x72d1b8);
  local_320 = 0xe98bd2f9c79e70f;
  local_280 = 0xcbf29ce484222645;
  local_1f0 = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)((long)piVar5[8] * 8 + 0x72d1b8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)((long)piVar5[9] * 8 + 0x72d1b8);
  local_160 = 0xffffffff;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)((long)piVar5[10] * 8 + 0x72d1b8);
  if (local_c0 != (code *)0x0) {
    (*local_c0)(alStack_b0,auStack_710);
    pcVar1 = local_628;
    local_730 = local_d0;
    pcStack_728 = local_c8;
    local_720 = local_c0;
    puStack_718 = local_b8;
    if (local_628 != (code *)0x0) {
      local_620 = (code *)0x0;
      puStack_618 = (undefined1 *)0x0;
      local_630 = (undefined1 *)0x0;
      local_628 = (code *)0x0;
      (*pcVar1)(auStack_610);
    }
  }
  if (local_140 != (code *)0x0) {
    (*local_140)(alStack_130,auStack_610);
    local_630 = local_150;
    local_628 = local_148;
    local_620 = local_140;
    puStack_618 = local_138;
  }
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar3 = (long *)(**(code **)*puVar6)(puVar6);
  plVar4 = (long *)FUN__text__0012615c();
  if (plVar4 != plVar3) {
    do {
      plVar3 = (long *)*plVar3;
    } while (plVar3 != plVar4 && plVar3 != (long *)0x0);
  }
  FUN__text__001156d0(&local_38,*(undefined8 *)(puVar6[0xaf] + 0xb0),0);
  if (local_330 != 0) {
    (**(code **)(*(long *)(local_330 + 0x48) + 0x18))();
  }
  local_160 = 0;
  local_330 = local_38;
  local_320 = 0xcf260b0e11c2df7d;
  local_308 = 0xb;
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  local_318 = (undefined8 *)(param_1 + 0x78);
  plVar3 = (long *)(**(code **)*puVar6)(puVar6);
  plVar4 = (long *)FUN__text__0012615c();
  if (plVar4 != plVar3) {
    do {
      plVar3 = (long *)*plVar3;
    } while (plVar3 != plVar4 && plVar3 != (long *)0x0);
  }
  FUN__text__00137b30(0x70eeac,puVar6[0xaf],&local_730);
  FUN__text__0013aa2c(&local_730);
  pcVar1 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = (code *)0x0;
    local_138 = (undefined1 *)0x0;
    local_150 = (undefined1 *)0x0;
    local_148 = (code *)0x0;
    (*pcVar1)(alStack_130);
  }
  pcVar1 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar1)(alStack_b0);
  }
  return;
}


