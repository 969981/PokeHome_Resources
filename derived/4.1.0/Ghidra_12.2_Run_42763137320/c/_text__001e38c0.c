/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001e38c0; name: FUN_.text__001e38c0
 */


void FUN__text__001e38c0(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *local_630;
  undefined *puStack_628;
  undefined1 *local_620;
  undefined1 *puStack_618;
  long local_610;
  undefined1 *local_5b0;
  undefined *puStack_5a8;
  undefined1 *local_5a0;
  undefined1 *puStack_598;
  long local_590;
  undefined1 *local_530;
  undefined *puStack_528;
  undefined1 *local_520;
  undefined1 *local_518;
  long lStack_510;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined1 *local_430;
  undefined *local_428;
  undefined1 *local_420;
  undefined1 *local_418;
  long local_410;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  long local_230;
  undefined8 local_228;
  undefined8 local_220;
  long local_218;
  undefined8 local_210;
  uint local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  FUN__text__00109fd4(&local_630,0x71d96d);
  if (*(long *)(param_1 + 0x70) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x70) + 0x48) + 0x18))();
  }
  *(undefined1 **)(param_1 + 0x70) = local_630;
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar2 = (long *)(**(code **)*puVar4)(puVar4);
  plVar3 = (long *)FUN__text__0012615c();
  if (plVar3 != plVar2) {
    do {
      plVar2 = (long *)*plVar2;
    } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
  }
  FUN__text__001156d0(&local_630,puVar4[0xd],0);
  if (*(long *)(param_1 + 0x78) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x78) + 0x48) + 0x18))();
  }
  *(undefined1 **)(param_1 + 0x78) = local_630;
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar2 = (long *)(**(code **)*puVar4)(puVar4);
  plVar3 = (long *)FUN__text__0018d6a0();
  if (plVar3 != plVar2) {
    do {
      plVar2 = (long *)*plVar2;
    } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
  }
  uVar1 = *(undefined4 *)((long)puVar4 + 0x15c);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  FUN__text__001e3c90(param_1);
  local_3b0 = 0;
  *(undefined1 *)(param_1 + 0x180) = 1;
  lVar5 = *(long *)(param_1 + 0x78);
  local_220 = 0xe98bd2f9c79e70f;
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x84);
  local_180 = 0xcbf29ce484222645;
  local_f0 = 0xcbf29ce484222645;
  local_60 = 0xffffffff;
  local_3a8 = 0;
  local_630 = &LAB__text__001e4100;
  puStack_628 = &DAT__text__001e41d0;
  local_620 = &LAB__text__001e41d4;
  puStack_618 = &LAB__text__001e41e0;
  local_5b0 = &LAB__text__001e41f0;
  puStack_5a8 = &DAT__text__001e42dc;
  local_5a0 = &LAB__text__001e42e0;
  puStack_598 = &LAB__text__001e42ec;
  local_530 = &LAB__text__001e4300;
  puStack_528 = &DAT__text__001e43d0;
  local_520 = &LAB__text__001e43d4;
  local_430 = &LAB__text__001e43ec;
  local_428 = &DAT__text__001e43fc;
  local_420 = &LAB__text__001e4400;
  local_4a8 = 0;
  uStack_4a0 = 0;
  local_3a0 = 0;
  local_398 = 0;
  local_330 = 0;
  local_328 = 0;
  local_320 = 0;
  local_318 = 0;
  local_2b0 = 0;
  local_2a8 = 0;
  local_2a0 = 0;
  local_298 = 0;
  local_228 = 0;
  local_230 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_5c = 0;
  local_58 = 0;
  local_4b0 = 0;
  local_498 = 0;
  local_418 = &LAB__text__001e440c;
  local_518 = &LAB__text__001e43e0;
  local_610 = param_1;
  local_590 = param_1;
  lStack_510 = param_1;
  local_410 = param_1;
  if (lVar5 == 0) {
  }
  else {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    if (local_230 != 0) {
      plVar2 = (long *)(local_230 + 0x48);
      local_230 = lVar5;
      (**(code **)(*plVar2 + 0x18))();
      lVar5 = local_230;
    }
  }
  local_230 = lVar5;
  local_220 = 0xbe838c473ec4af0e;
  local_218 = param_1 + 0xe0;
  local_208 = (uint)*(byte *)(param_1 + 0xdc);
  local_60 = *(undefined4 *)(param_1 + 0x84);
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar2 = (long *)(**(code **)*puVar4)(puVar4);
  plVar3 = (long *)FUN__text__0012615c();
  if (plVar3 != plVar2) {
    do {
      plVar2 = (long *)*plVar2;
    } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
  }
  FUN__text__00137b30(0x70ad35,puVar4[0xaf],&local_630);
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar2 = (long *)(**(code **)*puVar4)(puVar4);
  plVar3 = (long *)FUN__text__0012615c();
  if (plVar3 != plVar2) {
    do {
      plVar2 = (long *)*plVar2;
    } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
  }
  local_50 = 0x6741161af454b321;
  uStack_48 = 0x715c42;
  local_40 = 9;
  local_38 = 0;
  lVar5 = FUN__text__0018ebb0(puVar4[0xaf],&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  FUN__text__001dc054(*(undefined8 *)(lVar5 + 0x6d0));
  FUN__text__0013aa2c(&local_630);
  return;
}


