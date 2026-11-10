/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a0140; name: FUN_.text__004a0140
 */


ulong FUN__text__004a0140(long param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  long local_378;
  undefined4 local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  long local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  int *local_338;
  undefined8 local_330;
  int local_328;
  int iStack_324;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined1 *local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_22c;
  undefined8 local_224;
  undefined4 local_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined2 local_1e8;
  ushort local_1e6;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48;
  
  uVar4 = *(ushort *)(param_1 + 0x13d);
  *(ushort *)(param_1 + 0x13d) = uVar4 | 0x100;
  if ((uVar4 >> 6 & 1) == 0) {
    lVar7 = FUN__text__0049e9e0(param_1,*(undefined8 *)(param_2 + 4),&local_390,&local_358);
    if (lVar7 == 0) {
      if (*param_2 == 0) {
        return 2;
      }
      uVar8 = FUN__text__004953c0(param_1,param_2);
      return uVar8 & 0xffffffff;
    }
    uVar3 = param_2[0xe];
    if (uVar3 < 0x20) {
      param_2[0x1f] = param_2[0x1f] & ((uint)(1L << ((ulong)uVar3 & 0x3f)) ^ 0xffffffff);
      *(undefined2 *)((long)(param_2 + 0xe) + (ulong)uVar3 * 2 + 4) = (undefined2)local_390;
    }
    param_2[0xe] = uVar3 + 1;
    uVar8 = FUN__text__00446a1c(lVar7,param_2);
    piVar1 = (int *)(lVar7 + 0x24);
    do {
      iVar2 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar2 + -1 == 0) {
      (**(code **)(*(long *)(lVar7 + 0x10) + 0x20))((long *)(lVar7 + 0x10));
      return uVar8 & 0xffffffff;
    }
    return uVar8 & 0xffffffff;
  }
  if (*param_2 != 0) {
    lVar7 = *(long *)(param_2 + 0x22);
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0x18) == 0)) {
      uVar9 = FUN__text__0049db9c();
      lVar10 = *(long *)(lVar7 + 0x18);
      *(undefined8 *)(lVar7 + 0x18) = uVar9;
      if (lVar10 != 0) {
        FUN__text__0049dbf0();
      }
      if (*(long *)(*(long *)(param_2 + 0x22) + 0x18) == 0) {
        return 2;
      }
    }
    if ((*(byte *)(param_1 + 0x13c) & 0xf) == 5) {
      uVar8 = FUN__text__004a04a0();
      return uVar8;
    }
    uVar8 = FUN__text__004a0930(param_1,param_2);
    return uVar8;
  }
  local_358 = *(undefined8 *)param_2;
  local_350 = *(long *)(param_2 + 2);
  local_348 = *(undefined8 *)(param_2 + 4);
  uStack_340 = *(undefined8 *)(param_2 + 6);
  local_338 = *(int **)(param_2 + 8);
  local_330 = *(undefined8 *)(param_2 + 10);
  local_328 = param_2[0xc];
  iStack_324 = param_2[0xd];
  if (local_338 == (int *)0x0) {
    local_1e6 = 0;
  }
  else {
    *local_338 = *local_338 + 1;
    local_1e6 = local_1e6 & 0xf800;
  }
  uStack_2c0 = *(undefined8 *)(param_2 + 0x26);
  local_2b8 = *(undefined8 *)(param_2 + 0x28);
  local_2d0 = *(undefined1 **)(param_2 + 0x22);
  local_2c8 = *(undefined8 *)(param_2 + 0x24);
  local_68 = *(undefined8 *)(param_2 + 0xbc);
  uStack_2b0 = *(undefined8 *)(param_2 + 0x2a);
  uStack_2f0 = *(undefined8 *)(param_2 + 0x1a);
  local_2e8 = *(undefined8 *)(param_2 + 0x1c);
  local_60 = *(undefined8 *)(param_2 + 0xbe);
  local_238 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_224 = 0;
  uStack_2e0 = *(undefined8 *)(param_2 + 0x1e);
  local_2d8 = *(undefined8 *)(param_2 + 0x20);
  local_22c = 0;
  local_21c = 0;
  local_1e8 = 0;
  local_70 = 0;
  local_78 = 0;
  local_1c0 = 0;
  uStack_300 = *(undefined8 *)(param_2 + 0x16);
  local_2f8 = *(undefined8 *)(param_2 + 0x18);
  local_310 = *(undefined8 *)(param_2 + 0x12);
  local_308 = *(undefined8 *)(param_2 + 0x14);
  local_320 = *(undefined8 *)(param_2 + 0xe);
  uStack_318 = *(undefined8 *)(param_2 + 0x10);
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_208 = 0xf000000006000018;
  uStack_200 = 0x3f;
  local_230 = 0x3f800000;
  local_58 = *(undefined8 *)(param_2 + 0xc0);
  local_298 = 0;
  uStack_290 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  FUN__text__0049c600(&local_2a8,param_2 + 0x2c);
  local_48 = (undefined1)param_2[0xc4];
  local_370 = 0;
  local_50 = *(undefined8 *)(param_2 + 0xc2);
  local_368 = 0;
  uStack_360 = 0;
  local_390 = 0;
  uStack_388 = 0;
  local_358 = CONCAT44(local_358._4_4_,1);
  local_350 = param_1 + 0x10;
  local_380 = 0;
  local_378 = 0;
  local_378 = FUN__text__0049db9c();
  if (local_378 == 0) {
    uVar8 = 2;
    FUN__text__00458000(&local_368);
  }
  else {
    if ((*(byte *)(param_1 + 0x13c) & 0xf) == 5) {
      local_2d0 = (undefined1 *)&local_390;
      uVar8 = FUN__text__004a04a0();
    }
    else {
      local_2d0 = (undefined1 *)&local_390;
      uVar8 = FUN__text__004a0930(param_1,&local_358);
    }
    uVar8 = uVar8 & 0xffffffff;
    FUN__text__00458000(&local_368);
  }
  if (local_378 != 0) {
    FUN__text__0049dbf0();
  }
  FUN__text__00446c60(&local_2a8);
  if (local_338 == (int *)0x0) {
    return uVar8;
  }
  FUN__text__0040c060();
  return uVar8;
}


