/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00312f90; name: FUN_.text__00312f90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00312f90(long param_1,undefined4 param_2,undefined8 *param_3)

{
  int *piVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_528;
  undefined8 local_520;
  undefined6 uStack_518;
  undefined2 local_512;
  undefined6 uStack_510;
  undefined8 local_508;
  undefined4 uStack_500;
  undefined2 local_4fc;
  undefined2 uStack_4fa;
  undefined6 uStack_4f8;
  undefined2 local_4f2;
  undefined8 local_4f0;
  undefined1 local_4e8;
  undefined4 local_4e4;
  undefined2 local_4e0;
  undefined8 local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined2 local_498;
  undefined8 local_494;
  undefined8 local_488;
  undefined6 uStack_480;
  undefined2 local_47a;
  undefined6 uStack_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined1 local_3e8;
  undefined2 local_3e6;
  undefined4 local_3e4;
  long local_70;
  
  plVar2 = _DAT_0089f3d8;
  piVar1 = (int *)(param_1 + 0x39674dc);
  lVar5 = 0;
  do {
    uStack_478 = 0;
    local_488 = 0;
    uStack_480 = 0;
    local_47a = 0;
    FUN__text__00213f20(&local_470);
    local_70 = 0;
    FUN__text__00213f84(&local_488,param_3,0xb,*(undefined1 *)(lVar5 + 0x734868));
    FUN__text__00213f98(&local_488,3,*(undefined8 *)(*plVar2 + 0x2a8));
    uVar3 = FUN__text__00214438(&local_488,2);
    if ((uVar3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x39674eb) = 1;
      uStack_510 = 0;
      local_4f2 = 0x101;
      local_528 = 0;
      local_494 = 0;
      local_520 = 0;
      uStack_518 = 0;
      local_512 = 0;
      local_4e4 = 0;
      local_4e0 = 0;
      local_4f0 = 0;
      local_4e8 = 0;
      local_498 = 0;
      local_508 = 0;
      uStack_500 = 0;
      local_4fc = 0;
      uStack_4fa = 0;
      uStack_4f8 = 0;
      local_4d8 = 0;
      uStack_4d0 = 0;
      local_4c8 = 0;
      uStack_4c0 = 0;
      local_4b8 = 0;
      uStack_4b0 = 0;
      local_4a8 = 0;
      uStack_4a0 = 0;
      uVar3 = FUN__text__002174a0(*(undefined8 *)(*plVar2 + 0x2a8),local_70,&local_528);
      if ((uVar3 & 1) != 0) {
        local_4fc = 0xb;
        uStack_4fa = 0;
        local_4d8 = *param_3;
        uStack_4d0 = param_3[1];
        local_508 = CONCAT44(local_508._4_4_,param_2);
        FUN__text__00327140(param_2,&local_528,param_3);
      }
    }
    uVar3 = FUN__text__00214438(&local_488,1);
    if ((uVar3 & 1) != 0) {
      lVar4 = param_1 + (long)*piVar1 * 0x90;
      *(char *)(lVar4 + 0x3963f61) = (char)lVar5;
      *(undefined8 *)(lVar4 + 0x3963f08) = uStack_440;
      *(undefined8 *)(lVar4 + 0x3963f10) = local_438;
      *(undefined8 *)(lVar4 + 0x3963ed8) = local_470;
      *(undefined8 *)(lVar4 + 0x3963ee0) = local_468;
      *(undefined8 *)(lVar4 + 0x3963ee8) = uStack_460;
      *(undefined8 *)(lVar4 + 0x3963ef0) = local_458;
      *(undefined8 *)(lVar4 + 0x3963ef8) = uStack_450;
      *(undefined8 *)(lVar4 + 0x3963f00) = local_448;
      *(undefined8 *)(lVar4 + 0x3963f58) = uStack_3f0;
      *(undefined8 *)(lVar4 + 0x3963f48) = uStack_400;
      *(undefined8 *)(lVar4 + 0x3963f50) = local_3f8;
      *(undefined8 *)(lVar4 + 0x3963f18) = uStack_430;
      *(undefined8 *)(lVar4 + 0x3963f20) = local_428;
      *(undefined8 *)(lVar4 + 0x3963f38) = uStack_410;
      *(undefined8 *)(lVar4 + 0x3963f40) = local_408;
      *(undefined8 *)(lVar4 + 0x3963f28) = uStack_420;
      *(undefined8 *)(lVar4 + 0x3963f30) = local_418;
      *(undefined1 *)(lVar4 + 0x3963f60) = local_3e8;
      *(undefined2 *)(lVar4 + 0x3963f62) = local_3e6;
      *(undefined4 *)(lVar4 + 0x3963f64) = local_3e4;
      *piVar1 = *piVar1 + 1;
    }
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 6);
  lVar5 = 0;
  do {
    uStack_478 = 0;
    local_488 = 0;
    uStack_480 = 0;
    local_47a = 0;
    FUN__text__00213f20(&local_470);
    local_70 = 0;
    FUN__text__00213f84(&local_488,param_3,0xc,*(undefined1 *)(lVar5 + 0x734868));
    FUN__text__00213f98(&local_488,3,*(undefined8 *)(*plVar2 + 0x2a8));
    uVar3 = FUN__text__00214438(&local_488,2);
    if ((uVar3 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x39674ec) = 1;
      uStack_510 = 0;
      local_4f2 = 0x101;
      local_528 = 0;
      local_494 = 0;
      local_520 = 0;
      uStack_518 = 0;
      local_512 = 0;
      local_4e4 = 0;
      local_4e0 = 0;
      local_4f0 = 0;
      local_4e8 = 0;
      local_498 = 0;
      local_508 = 0;
      uStack_500 = 0;
      local_4fc = 0;
      uStack_4fa = 0;
      uStack_4f8 = 0;
      local_4d8 = 0;
      uStack_4d0 = 0;
      local_4c8 = 0;
      uStack_4c0 = 0;
      local_4b8 = 0;
      uStack_4b0 = 0;
      local_4a8 = 0;
      uStack_4a0 = 0;
      uVar3 = FUN__text__002174a0(*(undefined8 *)(*plVar2 + 0x2a8),local_70,&local_528);
      if ((uVar3 & 1) != 0) {
        local_4fc = 0xc;
        uStack_4fa = 0;
        local_4d8 = *param_3;
        uStack_4d0 = param_3[1];
        local_508 = CONCAT44(local_508._4_4_,param_2);
        FUN__text__00327140(param_2,&local_528,param_3);
      }
    }
    uVar3 = FUN__text__00214438(&local_488,1);
    if ((uVar3 & 1) != 0) {
      lVar4 = param_1 + (long)*piVar1 * 0x90;
      *(undefined8 *)(lVar4 + 0x3963f08) = uStack_440;
      *(undefined8 *)(lVar4 + 0x3963f10) = local_438;
      *(undefined8 *)(lVar4 + 0x3963ed8) = local_470;
      *(undefined8 *)(lVar4 + 0x3963ee0) = local_468;
      *(undefined8 *)(lVar4 + 0x3963ee8) = uStack_460;
      *(undefined8 *)(lVar4 + 0x3963ef0) = local_458;
      *(undefined8 *)(lVar4 + 0x3963ef8) = uStack_450;
      *(undefined8 *)(lVar4 + 0x3963f00) = local_448;
      *(undefined8 *)(lVar4 + 0x3963f58) = uStack_3f0;
      *(undefined8 *)(lVar4 + 0x3963f48) = uStack_400;
      *(undefined8 *)(lVar4 + 0x3963f50) = local_3f8;
      *(undefined8 *)(lVar4 + 0x3963f18) = uStack_430;
      *(undefined8 *)(lVar4 + 0x3963f20) = local_428;
      *(undefined8 *)(lVar4 + 0x3963f38) = uStack_410;
      *(undefined8 *)(lVar4 + 0x3963f40) = local_408;
      *(undefined8 *)(lVar4 + 0x3963f28) = uStack_420;
      *(undefined8 *)(lVar4 + 0x3963f30) = local_418;
      *(char *)(lVar4 + 0x3963f61) = (char)lVar5 + '\x06';
      *(undefined1 *)(lVar4 + 0x3963f60) = local_3e8;
      *(undefined2 *)(lVar4 + 0x3963f62) = local_3e6;
      *(undefined4 *)(lVar4 + 0x3963f64) = local_3e4;
      *piVar1 = *piVar1 + 1;
    }
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 6);
  return;
}


