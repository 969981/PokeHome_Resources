/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016bb1c; name: FUN_.text__0016bb1c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0016bb1c(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long local_58;
  long local_50;
  long lStack_48;
  
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar2 = *(long **)(*_DAT_0089f3d8 + 0x88);
  *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = plVar2;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  lVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,0x4b8,8);
  if (lVar1 == 0) {
    (**(code **)(*plVar2 + 0xb8))(plVar2);
    FUN__text__0016bcec(0,*param_3);
    _DAT_00000010 = 0;
    _DAT_00000018 = 0x4b8;
    _DAT_00000020 = 8;
    _DAT_00000008 = plVar2;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    lVar3 = _DAT_00000070;
  }
  else {
    FUN__text__0016bcec(lVar1,*param_3);
    *(long **)(lVar1 + 8) = plVar2;
    *(long *)(lVar1 + 0x10) = lVar1;
    *(undefined8 *)(lVar1 + 0x18) = 0x4b8;
    *(undefined8 *)(lVar1 + 0x20) = 8;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    lVar3 = *(long *)(lVar1 + 0x70);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(lVar1 + 0x78);
  if (lVar5 != 0) {
    plVar2 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  local_50 = lVar3;
  lStack_48 = lVar5;
  FUN__text__0016f650(param_2,&local_50);
  lVar3 = *(long *)(lVar1 + 0x58);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_58 = lVar1;
  FUN__text__001157d8(param_2,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  *param_1 = lVar3;
  return;
}


