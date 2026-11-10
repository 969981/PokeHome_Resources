/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b8b70; name: FUN_.text__004b8b70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__004b8b70(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined4 local_3a8 [2];
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 *local_390;
  int *local_388;
  undefined8 uStack_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined8 *local_320;
  ulong local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined4 local_280;
  undefined8 local_27c;
  undefined8 local_274;
  undefined4 local_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  byte local_98;
  undefined8 local_90;
  undefined8 local_88;
  long *plStack_80;
  long local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  lVar6 = *(long *)(param_1 + 0xb0);
  local_58 = CONCAT44(4,*(undefined4 *)(param_1 + 0xb8));
  if (lVar6 == 0) {
    local_58 = *(undefined8 *)(param_1 + 0xf8);
    lVar6 = FUN__text__004ba560(param_1);
  }
  else {
    if ((*(byte *)(lVar6 + 0x3e0) & 0xf) == 2) {
      local_58 = CONCAT44(1,*(undefined4 *)(param_1 + 0xb8));
    }
    FUN__text__00474488(lVar6,&local_58,1);
    lVar6 = FUN__text__004ba560(param_1);
  }
  if (lVar6 == 0) {
    uVar4 = 0xf;
  }
  else {
    local_90 = *(undefined8 *)(param_1 + 0x40);
    local_88 = *(undefined8 *)(param_1 + 0x48);
    local_70 = *(undefined4 *)(param_1 + 0xe8);
    plVar8 = (long *)(param_1 + 0x50);
    lVar9 = *(long *)(param_1 + 0x60);
    local_68 = 0;
    uStack_60 = 0;
    plStack_80 = plVar8;
    if (lVar9 != 0) {
      FUN__text__0049dbd4(lVar9);
    }
    local_340 = *(undefined8 *)(param_1 + 0x98);
    uStack_338 = *(undefined8 *)(param_1 + 0xa0);
    local_258 = 0xf000000006000018;
    uStack_250 = 0x3f;
    local_280 = 0x3f800000;
    uStack_380 = *(undefined8 *)(param_2 + 0x24);
    local_360 = *(undefined8 *)(param_1 + 0x78);
    uStack_358 = *(undefined8 *)(param_1 + 0x80);
    uStack_398 = *(undefined8 *)(param_2 + 0x40);
    local_3a0 = *(undefined8 *)(param_1 + 0xe0);
    local_3a8[0] = *(undefined4 *)(param_1 + 0xd0);
    local_98 = 3;
    local_a0 = *(undefined4 *)(param_1 + 200);
    local_9c = *(undefined1 *)(param_1 + 0xcc);
    local_c8 = 0;
    local_350 = *(undefined8 *)(param_1 + 0x88);
    uStack_348 = *(undefined8 *)(param_1 + 0x90);
    local_c0 = 0;
    local_26c = 0;
    local_238 = 0;
    local_210 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_370 = *(undefined8 *)(param_1 + 0x68);
    uStack_368 = *(undefined8 *)(param_1 + 0x70);
    local_290 = 0;
    uStack_288 = 0;
    local_330 = *(undefined8 *)(param_1 + 0xa8);
    local_388 = *(int **)(param_2 + 0x1c);
    local_378 = *(undefined4 *)(param_2 + 0x2c);
    uStack_374 = *(undefined4 *)(param_2 + 0x30);
    local_274 = 0;
    local_27c = 0;
    local_268 = 0;
    uStack_260 = 0;
    uStack_2f8 = 0;
    local_2f0 = 0;
    uStack_2e8 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    local_2d0 = 0;
    uStack_2c8 = 0;
    local_2c0 = 0;
    uStack_2b8 = 0;
    local_2b0 = 0;
    uStack_2a8 = 0;
    local_2a0 = 0;
    uStack_298 = 0;
    local_248 = 0;
    uStack_240 = 0;
    local_230 = 0;
    uStack_228 = 0;
    local_220 = 0;
    uStack_218 = 0;
    if (local_388 != (int *)0x0) {
      *local_388 = *local_388 + 1;
    }
    uStack_324 = *(undefined4 *)(param_2 + 0x14);
    local_328 = *(undefined4 *)(param_1 + 0xbc);
    local_310 = *(undefined8 *)(param_1 + 0x100);
    cVar2 = *(char *)(param_1 + 0xc5);
    local_318 = (ulong)*(uint *)(param_1 + 0xc0);
    local_308 = *(undefined4 *)(param_1 + 0x108);
    local_300 = *(undefined8 *)(param_1 + 0x110);
    local_320 = &local_90;
    local_390 = &local_58;
    local_78 = lVar9;
    uVar7 = FUN__text__004ba7cc(*(undefined8 *)(param_2 + 8));
    local_98 = 4;
    if ((uVar7 & 1) == 0) {
      local_98 = 0;
    }
    local_98 = cVar2 << 1 | 1U | local_98;
    uVar4 = FUN__text__00446a1c(lVar6,local_3a8);
    piVar1 = _DAT_008a48e0;
    lVar9 = *(long *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    *piVar1 = *piVar1 + 1;
    if (lVar9 != 0) {
      FUN__text__0049dbf0();
    }
    if (*plVar8 != 0) {
      FUN__text__0047c0c0(DAT_00ae9a68);
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    lVar9 = *(long *)(param_1 + 0xf0);
    if (lVar9 != 0) {
      piVar1 = (int *)(lVar9 + 0x24);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        (**(code **)(*(long *)(lVar9 + 0x10) + 0x20))();
      }
      *(undefined8 *)(param_1 + 0xf0) = 0;
    }
    piVar1 = (int *)(lVar6 + 0x24);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      (**(code **)(*(long *)(lVar6 + 0x10) + 0x20))((long *)(lVar6 + 0x10));
    }
    FUN__text__00446c60(&uStack_2f8);
    if (local_388 != (int *)0x0) {
      FUN__text__0040c060();
    }
    FUN__text__00458000(&local_68);
    if (local_78 != 0) {
      FUN__text__0049dbf0();
    }
  }
  iVar5 = (**(code **)(**(long **)(param_1 + 0xe0) + 0x10))();
  if (iVar5 != 0xc) {
    plVar8 = (long *)(*(long *)(param_1 + 0xe0) + -0x10);
    (**(code **)(*plVar8 + 0x130))(plVar8,1);
    *(undefined1 *)(param_1 + 0xc6) = 1;
  }
  return uVar4;
}


