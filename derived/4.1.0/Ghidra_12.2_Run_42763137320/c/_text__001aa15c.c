/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001aa15c; name: FUN_.text__001aa15c
 */


uint FUN__text__001aa15c(long param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  int local_4c;
  long local_48;
  undefined1 local_28 [4];
  undefined4 local_24;
  
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  lVar7 = *(long *)(param_1 + 0x158);
  local_48 = lVar7;
  local_24 = param_3;
  if (lVar7 == 0) {
    local_28[0] = 0;
    uVar2 = FUN__text__001969a8(param_3,local_28);
  }
  else {
    plVar9 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    local_28[0] = 0;
    uVar2 = FUN__text__001969a8(param_3,local_28);
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  FUN__text__001916b0(uVar8,&local_48,param_2,0);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  uVar5 = FUN__text__00306588(lVar7);
  uVar4 = 0;
  if (((uVar5 & 1) == 0) && (((uVar2 ^ 1) & 1) == 0)) {
    iVar3 = FUN__text__00307afc(lVar7);
    local_4c = iVar3;
    lVar6 = FUN__text__00325bc0();
    cVar1 = FUN__text__00194b7c(*(undefined4 *)(lVar6 + 0x2c));
    if ((cVar1 == '\x01') ||
       (((1 < iVar3 - 1U || (uVar5 = FUN__text__00307b78(lVar7), (uVar5 & 1) != 0)) ||
        (uVar5 = FUN__text__00307ba4(lVar7), (uVar5 & 1) != 0)))) {
      uVar4 = FUN__text__00196a40(&local_4c,&local_24);
    }
    else {
      uVar4 = 1;
    }
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  return uVar4 & 1;
}


