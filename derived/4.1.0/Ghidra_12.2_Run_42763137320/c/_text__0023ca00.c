/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0023ca00; name: FUN_.text__0023ca00
 */


void FUN__text__0023ca00(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined *local_c0;
  code *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  long local_a0 [12];
  
  FUN__text__001156d0(&local_c0,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar4 = *(long *)(local_c0 + 0x60);
  if (lVar4 == 0) {
LAB__text__0023ca54:
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
  }
  else {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    if (local_c0 != (undefined *)0x0) goto LAB__text__0023ca54;
  }
  lVar7 = *(long *)(param_1 + 0x2d0);
  if (lVar7 != 0) {
    plVar5 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  lVar1 = param_1 + 0x110;
  FUN__text__003c7c60(lVar7,0x72b9e8,1);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x72b9f8,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x72b9f0,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x72ba08,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x72ba00,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  plVar5 = (long *)(lVar4 + 0x48);
  (**(code **)(*plVar5 + 0x18))(plVar5);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x72ba18,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x72ba10,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar5);
  FUN__text__003c7c60(lVar7,0x72ba20,1);
  lVar6 = FUN__text__0012cb14(lVar1,0x72ba28);
  *(undefined1 *)(lVar6 + 0x110) = 0;
  *(undefined8 *)(lVar6 + 0x108) = 0x200000000;
  uVar2 = FUN__text__0012cb14(lVar1,0x72ba28);
  FUN__text__005e927c(&local_c0,0x873b28);
  FUN__text__003a1de4(uVar2,&local_c0);
  if (local_a8 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_a8 + 0x48) + 0x18))();
  }
  (**(code **)(*plVar5 + 0x10))(plVar5);
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x72ba38,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x72ba30,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar5);
  FUN__text__003c7c60(lVar7,0x72ba40,1);
  lVar7 = FUN__text__0012cb14(lVar1,0x72ba48);
  *(undefined1 *)(lVar7 + 0x110) = 0;
  *(undefined8 *)(lVar7 + 0x108) = 0x200000000000000;
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(plVar5);
  lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x72ba58,lVar7);
  uVar2 = FUN__text__005f3244(lVar7);
  FUN__text__0012c9f0(lVar1,0x72ba50,uVar2,0xb);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar5);
  local_c0 = (undefined *)0x598d0e60e0a45d28;
  uVar2 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),&local_c0);
  *(undefined8 *)(param_1 + 0x640) = uVar2;
  uVar2 = FUN__text__0012cf48(lVar1,0x72ba60);
  *(undefined8 *)(param_1 + 0x648) = uVar2;
  FUN__text__0012bcbc(lVar1,0);
  lVar4 = FUN__text__0012cce4(lVar1,0x72ba68);
  *(long *)(param_1 + 0x660) = lVar4;
  pcVar3 = *(code **)(lVar4 + 0xb8);
  local_c0 = &DAT__text__0023d898;
  local_b8 = FUN__text__0023d8a4;
  local_b0 = FUN__text__0023d8a8;
  local_a8 = &LAB__text__0023d8b4;
  local_a0[0] = param_1;
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(lVar4 + 0xc0) = 0;
    *(undefined8 *)(lVar4 + 200) = 0;
    *(undefined8 *)(lVar4 + 0xb0) = 0;
    *(undefined8 *)(lVar4 + 0xb8) = 0;
    (*pcVar3)(lVar4 + 0xd0);
    if (local_b0 == (code *)0x0) goto LAB__text__0023cea8;
  }
  (*local_b0)(local_a0,lVar4 + 0xd0);
  *(undefined8 *)(lVar4 + 0xb0) = local_c0;
  *(code **)(lVar4 + 0xb8) = local_b8;
  *(code **)(lVar4 + 0xc0) = local_b0;
  *(undefined1 **)(lVar4 + 200) = local_a8;
LAB__text__0023cea8:
  pcVar3 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (undefined *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar3)(local_a0);
  }
  (**(code **)(*plVar5 + 0x18))(plVar5);
  return;
}


