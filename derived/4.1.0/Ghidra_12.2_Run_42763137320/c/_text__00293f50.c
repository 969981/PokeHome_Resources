/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00293f50; name: FUN_.text__00293f50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00293f50(long param_1)

{
  long lVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long local_100 [3];
  long local_e8;
  code *local_e0;
  code *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  long local_c0 [12];
  
  FUN__text__00128ca0(param_1,0,1);
  FUN__text__00128db0(param_1,0,1);
  local_100[0] = CONCAT44(local_100[0]._4_4_,0x80);
  FUN__text__00111970(&local_e0,*(undefined8 *)(param_1 + 8),local_100);
  if (*(long *)(param_1 + 0x888) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x888) + 0x48) + 0x18))();
  }
  pbVar2 = _DAT_0089fa70;
  lVar10 = 0;
  *(code **)(param_1 + 0x888) = local_e0;
  puVar3 = _DAT_0089fa78;
  do {
    uVar8 = *(undefined8 *)(param_1 + 8);
    plVar5 = (long *)FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),lVar10 * 0x18 + 0x7320a0);
    if (((*pbVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(pbVar2), iVar4 != 0)) {
      if (((*_DAT_0089f898 & 1) == 0) && (iVar4 = __cxa_guard_acquire(_DAT_0089f898), iVar4 != 0)) {
        *_DAT_0089f8a0 = 0;
        __cxa_guard_release(_DAT_0089f898);
      }
      *puVar3 = _DAT_0089f8a0;
      __cxa_guard_release(pbVar2);
    }
    if (plVar5 == (long *)0x0) {
LAB__text__00294068:
      plVar5 = (long *)0x0;
    }
    else {
      puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5);
      if (puVar6 != puVar3) {
        do {
          puVar6 = (undefined8 *)*puVar6;
        } while (puVar6 != puVar3 && puVar6 != (undefined8 *)0x0);
        if (puVar6 == (undefined8 *)0x0) goto LAB__text__00294068;
      }
    }
    FUN__text__003d13e8(param_1 + lVar10 * 0x1320 + 0xef0,uVar8,plVar5,0);
    uVar8 = *(undefined8 *)(param_1 + 8);
    plVar5 = (long *)FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),lVar10 * 0x18 + 0x7320a8);
    if (((*pbVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(pbVar2), iVar4 != 0)) {
      if (((*_DAT_0089f898 & 1) == 0) && (iVar4 = __cxa_guard_acquire(_DAT_0089f898), iVar4 != 0)) {
        *_DAT_0089f8a0 = 0;
        __cxa_guard_release(_DAT_0089f898);
      }
      *puVar3 = _DAT_0089f8a0;
      __cxa_guard_release(pbVar2);
    }
    if (plVar5 == (long *)0x0) {
LAB__text__00293ff0:
      plVar5 = (long *)0x0;
    }
    else {
      puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5);
      if (puVar6 != puVar3) {
        do {
          puVar6 = (undefined8 *)*puVar6;
        } while (puVar6 != puVar3 && puVar6 != (undefined8 *)0x0);
        if (puVar6 == (undefined8 *)0x0) goto LAB__text__00293ff0;
      }
    }
    FUN__text__003d13e8(param_1 + lVar10 * 0x1320 + 0x1550,uVar8,plVar5,0);
    lVar10 = lVar10 + 1;
  } while (lVar10 != 9);
  local_e0 = (code *)0xa7649e0ad180b01a;
  local_d8 = (code *)0x71a942;
  local_d0 = (code *)0x1b;
  local_c8 = (undefined1 *)0x0;
  FUN__text__00115650(local_100,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),&local_e0,0xb);
  lVar10 = *(long *)(local_100[0] + 0x60);
  if ((lVar10 == 0) || ((**(code **)(*(long *)(lVar10 + 0x48) + 0x10))(), local_100[0] != 0)) {
    (**(code **)(*(long *)(local_100[0] + 0x48) + 0x18))();
    local_100[0] = 0;
  }
  if (local_c8 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_c8 + 0x48) + 0x18))();
  }
  lVar1 = param_1 + 0x110;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  local_e0 = (code *)0x531a9f8dfb41f4f7;
  lVar9 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar10,&local_e0,lVar9);
  uVar8 = FUN__text__005f3244(lVar9);
  FUN__text__0012c9f0(lVar1,0x732170,uVar8,0xb);
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  plVar5 = (long *)(lVar10 + 0x48);
  (**(code **)(*plVar5 + 0x18))(plVar5);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  local_e0 = (code *)0x2d10f332335c4ed6;
  lVar9 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar10,&local_e0,lVar9);
  uVar8 = FUN__text__005f3244(lVar9);
  FUN__text__0012c9f0(lVar1,0x732178,uVar8,0xb);
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))(plVar5);
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))(plVar5);
  local_e0 = (code *)0x2d10f432335c5089;
  lVar9 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar10,&local_e0,lVar9);
  uVar8 = FUN__text__005f3244(lVar9);
  FUN__text__0012c9f0(lVar1,0x732180,uVar8,0xb);
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))(plVar5);
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))(plVar5);
  lVar10 = FUN__text__0012cb14(lVar1,0x732188);
  pcVar7 = *(code **)(lVar10 + 0x288);
  *(undefined8 *)(lVar10 + 0x108) = 0x200000000;
  *(undefined1 *)(lVar10 + 0x110) = 0;
  local_e0 = (code *)&LAB__text__0029658c;
  local_d8 = FUN__text__00296604;
  local_d0 = FUN__text__00296608;
  local_c8 = &LAB__text__00296614;
  local_c0[0] = param_1;
  if (pcVar7 == (code *)0x0) {
LAB__text__00294460:
    (*local_d0)(local_c0,lVar10 + 0x2a0);
    *(undefined8 *)(lVar10 + 0x280) = local_e0;
    *(code **)(lVar10 + 0x288) = local_d8;
    *(code **)(lVar10 + 0x290) = local_d0;
    *(undefined1 **)(lVar10 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar10 + 0x290) = 0;
    *(undefined8 *)(lVar10 + 0x298) = 0;
    *(undefined8 *)(lVar10 + 0x280) = 0;
    *(undefined8 *)(lVar10 + 0x288) = 0;
    (*pcVar7)(lVar10 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__00294460;
  }
  FUN__text__003a14e8(lVar10,1);
  FUN__text__005e927c(local_100,0x878318);
  FUN__text__003a1de4(lVar10,local_100);
  if (local_e8 != 0) {
    (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
  }
  pcVar7 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar7)(local_c0);
  }
  lVar10 = FUN__text__0012cb14(lVar1,0x732190);
  *(undefined8 *)(lVar10 + 0x108) = 0x200000000000000;
  pcVar7 = *(code **)(lVar10 + 0x288);
  *(undefined1 *)(lVar10 + 0x110) = 0;
  local_e0 = FUN__text__00296620;
  local_d8 = FUN__text__002966c4;
  local_d0 = FUN__text__00296728;
  local_c8 = &LAB__text__00296734;
  local_c0[0] = param_1;
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(lVar10 + 0x290) = 0;
    *(undefined8 *)(lVar10 + 0x298) = 0;
    *(undefined8 *)(lVar10 + 0x280) = 0;
    *(undefined8 *)(lVar10 + 0x288) = 0;
    (*pcVar7)(lVar10 + 0x2a0);
    if (local_d0 == (code *)0x0) goto LAB__text__00294564;
  }
  (*local_d0)(local_c0,lVar10 + 0x2a0);
  *(undefined8 *)(lVar10 + 0x280) = local_e0;
  *(code **)(lVar10 + 0x288) = local_d8;
  *(code **)(lVar10 + 0x290) = local_d0;
  *(undefined1 **)(lVar10 + 0x298) = local_c8;
LAB__text__00294564:
  pcVar7 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar7)(local_c0);
  }
  return;
}


