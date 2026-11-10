/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0020fde0; name: FUN_.text__0020fde0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0020fde0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  
  *(undefined8 *)(param_1 + 0x18) = 0x43e189f9d663f36;
  lVar3 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0xad4e4cff9756f613;
  *(undefined8 *)(param_1 + 0x28) = 0x2f4542f489ac0aba;
  *(undefined8 *)(param_1 + 0x30) = 0x84cdf78283baf80f;
  *(undefined8 *)(param_1 + 0x88) = 0x4c951aa131d5d94c;
  *(undefined8 *)(param_1 + 0xa0) = 0x3711aee02ecf8f01;
  *(undefined8 *)(param_1 + 0x90) = 0x265ac97af5318b82;
  *(undefined8 *)(param_1 + 0x98) = 0x3e0e1b60317f5d6e;
  lVar2 = *(long *)(lVar3 + 0x2d0);
  if (lVar2 == 0) {
    lVar4 = lVar3;
  }
  else {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    lVar4 = *(long *)(param_1 + 8);
  }
  uVar1 = FUN__text__001281d4(lVar4);
  local_88 = 0xdea628247f0687a9;
  uStack_80 = _DAT_008a11a0;
  local_78 = 0x19;
  local_70 = 0;
  FUN__text__00115650(&local_68,uVar1,&local_88,0xb);
  lVar4 = *(long *)(local_68 + 0x60);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    if (local_68 == 0) goto LAB__text__0020ff40;
  }
  (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  local_68 = 0;
LAB__text__0020ff40:
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  if (lVar4 != 0) {
    lVar6 = *(long *)(param_1 + 8);
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    local_88 = 0x1d0104c5be3ee746;
    lVar7 = *(long *)(*(long *)(lVar6 + 0x2d0) + 0x2e8);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    FUN__text__005f2d98(lVar4,&local_88,lVar7);
    uVar1 = FUN__text__005f3244(lVar7);
    FUN__text__0012c9f0(lVar6 + 0x110,(undefined8 *)(param_1 + 0x30),uVar1,0xb);
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar5);
    lVar6 = *(long *)(param_1 + 8);
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(plVar5);
    local_88 = 0x1d0105c5be3ee8f9;
    lVar7 = *(long *)(*(long *)(lVar6 + 0x2d0) + 0x2e8);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    FUN__text__005f2d98(lVar4,&local_88,lVar7);
    uVar1 = FUN__text__005f3244(lVar7);
    FUN__text__0012c9f0(lVar6 + 0x110,(undefined8 *)(param_1 + 0xa0),uVar1,0xb);
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar5);
  }
  lVar6 = FUN__text__0012cb14(lVar3 + 0x110,(undefined8 *)(param_1 + 0x18));
  FUN__text__003a14c4(lVar6,1);
  *(undefined1 *)(lVar6 + 0x110) = 0;
  *(undefined8 *)(lVar6 + 0x108) = 0x200000000000000;
  lVar3 = FUN__text__0012cb14(lVar3 + 0x110,(undefined8 *)(param_1 + 0x88));
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  FUN__text__003a14e8(lVar3,1);
  FUN__text__003a14c4(lVar3,1);
  *(undefined1 *)(lVar3 + 0x110) = 0;
  *(undefined8 *)(lVar3 + 0x108) = 0x100000000000000;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}


