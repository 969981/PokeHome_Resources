/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004bd720; name: FUN_.text__004bd720
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN__text__004bd720(long param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  MutexType *pMVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  char cVar6;
  bool bVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  long *plVar11;
  int *piVar12;
  undefined4 local_3b0 [2];
  long local_3a8;
  undefined8 local_3a0;
  undefined4 *puStack_398;
  int *local_390;
  undefined8 uStack_388;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 local_334;
  undefined4 local_330;
  int iStack_32c;
  undefined8 *local_328;
  undefined8 local_320;
  undefined2 local_318;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined8 local_284;
  undefined8 local_27c;
  undefined4 local_274;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined2 local_240;
  ushort local_23e;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  byte local_a4;
  byte local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_48;
  undefined4 uStack_44;
  
  if (*(long *)(param_1 + 0x50) == 0) {
    return 2;
  }
  piVar12 = (int *)*_DAT_008a45c8;
  pMVar1 = (MutexType *)(piVar12 + 4);
  while( true ) {
    while (iVar3 = *piVar12, -1 < iVar3) {
      while (*piVar12 == iVar3) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar7) {
          *piVar12 = iVar3 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') goto LAB__text__004bd7c8;
      }
      ClearExclusiveLocal();
    }
    nn::os::LockMutex(pMVar1);
    if (*piVar12 < 0) break;
    nn::os::UnlockMutex(pMVar1);
  }
LAB__text__004bd7c8:
  uVar4 = piVar12[0x1a];
  if (uVar4 == 0) {
    plVar11 = (long *)0x0;
  }
  else {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = param_2 / uVar4;
    }
    plVar11 = *(long **)(*(long *)(piVar12 + 0x18) + (ulong)(param_2 - uVar8 * uVar4) * 8);
    if (plVar11 != (long *)0x0) {
LAB__text__004bd7e4:
      if (*(uint *)(plVar11 + 2) != param_2) goto code_r0x004bd7f0;
      piVar2 = (int *)((long)plVar11 + 0x14);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = *piVar2 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
  }
LAB__text__004bd828:
  while (iVar3 = *piVar12, -1 < iVar3) {
    while (*piVar12 == iVar3) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar7) {
        *piVar12 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') {
        if ((iVar3 + -1 == 0) && (0 < piVar12[0xc])) {
          nn::os::SignalEvent((EventType *)(piVar12 + 0xe));
        }
        goto joined_r0x004bd86c;
      }
    }
    ClearExclusiveLocal();
  }
  nn::os::UnlockMutex(pMVar1);
joined_r0x004bd86c:
  if (plVar11 == (long *)0x0) {
    return 0xf;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_48 = param_4;
  uStack_44 = param_5;
  lVar10 = FUN__text__0049db9c();
  local_80 = lVar10;
  if (lVar10 == 0) {
    piVar12 = (int *)((long)plVar11 + 0x14);
    do {
      iVar3 = *piVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar7) {
        *piVar12 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 != 1) {
      uVar9 = 1;
      FUN__text__00458000(&local_70);
      goto joined_r0x004bdadc;
    }
    (**(code **)(*plVar11 + 0x20))(plVar11);
    uVar9 = 1;
  }
  else {
    local_318 = 0xff00;
    local_d0 = 0;
    local_260 = 0xf000000006000018;
    uStack_258 = 0x3f;
    local_23e = local_23e & 0xf800;
    local_288 = 0x3f800000;
    local_298 = 0;
    uStack_290 = 0;
    local_c8 = 0;
    local_27c = 0;
    local_284 = 0;
    local_274 = 0;
    local_240 = 0;
    local_218 = 0;
    local_a4 = local_a4 & 0xfe;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_334 = 0;
    local_378 = 0;
    local_3b0[0] = 2;
    local_390 = *(int **)(param_1 + 0x58);
    uStack_388 = *(undefined8 *)(param_1 + 0x60);
    local_270 = 0;
    uStack_268 = 0;
    local_308 = 0;
    uStack_300 = 0;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_2e8 = 0;
    uStack_2e0 = 0;
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_380 = *(undefined4 *)(param_1 + 0x68);
    uStack_37c = *(undefined4 *)(param_1 + 0x6c);
    local_2c8 = 0;
    uStack_2c0 = 0;
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_250 = 0;
    uStack_248 = 0;
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
    uStack_220 = 0;
    if (local_390 != (int *)0x0) {
      *local_390 = *local_390 + 1;
    }
    local_a0 = local_a0 & 0xf0 | 3;
    local_328 = &local_98;
    auVar5 = SEXT816((long)((ulong)*_DAT_008a4b68 * (long)param_3)) * SEXT816(0x20c49ba5e353f7cf);
    local_3a0 = *(undefined8 *)(param_1 + 0x50);
    puStack_398 = &local_48;
    iStack_32c = (int)(auVar5._8_8_ >> 7) - (auVar5._12_4_ >> 0x1f);
    local_330 = 0;
    iVar3 = *(int *)(param_1 + 0xb4);
    if (*(int *)(param_1 + 0x74) == 0 && *(int *)(param_1 + 0xb4) == 0) {
      if (_DAT_008ab090 == 0) {
        _DAT_008ab090 = 1;
      }
      *(int *)(param_1 + 0xb4) = _DAT_008ab090;
      iVar3 = _DAT_008ab090;
      _DAT_008ab090 = _DAT_008ab090 + 1;
    }
    local_320 = CONCAT44(param_2,iVar3);
    local_3a8 = param_1;
    uVar9 = FUN__text__00446a1c(plVar11 + -2,local_3b0);
    piVar12 = (int *)((long)plVar11 + 0x14);
    do {
      iVar3 = *piVar12;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar7) {
        *piVar12 = iVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 + -1 == 0) {
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
    FUN__text__00446c60(&uStack_300);
    if (local_390 != (int *)0x0) {
      FUN__text__0040c060();
      FUN__text__00458000(&local_70);
      goto joined_r0x004bdadc;
    }
  }
  FUN__text__00458000(&local_70);
joined_r0x004bdadc:
  if (local_80 != 0) {
    FUN__text__0049dbf0();
  }
  if (lVar10 == 0) {
    return 2;
  }
  return uVar9;
code_r0x004bd7f0:
  plVar11 = (long *)plVar11[1];
  if (plVar11 == (long *)0x0) goto LAB__text__004bd828;
  goto LAB__text__004bd7e4;
}


