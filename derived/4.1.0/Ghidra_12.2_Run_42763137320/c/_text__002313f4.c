/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002313f4; name: FUN_.text__002313f4
 */


void FUN__text__002313f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long local_60 [3];
  long local_48;
  
  pcVar3 = *(code **)(param_1 + 0x668);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x670) = 0;
    *(undefined8 *)(param_1 + 0x678) = 0;
    *(undefined8 *)(param_1 + 0x660) = 0;
    *(undefined8 *)(param_1 + 0x668) = 0;
    (*pcVar3)(param_1 + 0x680);
  }
  *(long *)(param_1 + 0x680) = param_1;
  *(code **)(param_1 + 0x660) = FUN__text__00234bd4;
  *(undefined1 **)(param_1 + 0x670) = &LAB__text__00234c98;
  pcVar3 = *(code **)(param_1 + 0x6e8);
  *(undefined **)(param_1 + 0x668) = &DAT__text__00234c94;
  *(undefined1 **)(param_1 + 0x678) = &LAB__text__00234ca4;
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x6f0) = 0;
    *(undefined8 *)(param_1 + 0x6f8) = 0;
    *(undefined8 *)(param_1 + 0x6e0) = 0;
    *(undefined8 *)(param_1 + 0x6e8) = 0;
    (*pcVar3)(param_1 + 0x700);
  }
  *(code **)(param_1 + 0x6e0) = FUN__text__00234cb0;
  *(undefined1 **)(param_1 + 0x6f8) = &LAB__text__00234d90;
  *(long *)(param_1 + 0x700) = param_1;
  *(undefined **)(param_1 + 0x6e8) = &DAT__text__00234d80;
  *(undefined1 **)(param_1 + 0x6f0) = &LAB__text__00234d84;
  FUN__text__0023211c(local_60,*(undefined8 *)(param_1 + 8),0x7296fc);
  if (*(long *)(param_1 + 0x7f0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x7f0) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x7f0) = local_60[0];
  FUN__text__001156d0(local_60,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar4 = *(long *)(local_60[0] + 0x60);
  if ((lVar4 == 0) || ((**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(), local_60[0] != 0)) {
    (**(code **)(*(long *)(local_60[0] + 0x48) + 0x18))();
  }
  lVar6 = *(long *)(param_1 + 0x2d0);
  if (lVar6 != 0) {
    plVar5 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  lVar1 = param_1 + 0x110;
  FUN__text__003c7c60(lVar6,0x729708,1);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x729718,lVar7);
  uVar2 = FUN__text__005f3244(lVar7);
  FUN__text__0012c9f0(lVar1,0x729710,uVar2,0xb);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x729728,lVar7);
  uVar2 = FUN__text__005f3244(lVar7);
  FUN__text__0012c9f0(lVar1,0x729720,uVar2,0xb);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x729738,lVar7);
  uVar2 = FUN__text__005f3244(lVar7);
  FUN__text__0012c9f0(lVar1,0x729730,uVar2,0xb);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x729748,lVar7);
  uVar2 = FUN__text__005f3244(lVar7);
  FUN__text__0012c9f0(lVar1,0x729740,uVar2,0xb);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x729758,lVar7);
  uVar2 = FUN__text__005f3244(lVar7);
  FUN__text__0012c9f0(lVar1,0x729750,uVar2,0xb);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x729768,lVar7);
  uVar2 = FUN__text__005f3244(lVar7);
  FUN__text__0012c9f0(lVar1,0x729760,uVar2,0xb);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x729778,lVar7);
  uVar2 = FUN__text__005f3244(lVar7);
  FUN__text__0012c9f0(lVar1,0x729770,uVar2,0xb);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x729728,lVar7);
  uVar2 = FUN__text__005f3244(lVar7);
  FUN__text__0012c9f0(lVar1,0x729780,uVar2,0xb);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x729738,lVar7);
  uVar2 = FUN__text__005f3244(lVar7);
  FUN__text__0012c9f0(lVar1,0x729788,uVar2,0xb);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x729748,lVar7);
  uVar2 = FUN__text__005f3244(lVar7);
  FUN__text__0012c9f0(lVar1,0x729790,uVar2,0xb);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x729758,lVar7);
  uVar2 = FUN__text__005f3244(lVar7);
  FUN__text__0012c9f0(lVar1,0x729798,uVar2,0xb);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x729768,lVar7);
  uVar2 = FUN__text__005f3244(lVar7);
  FUN__text__0012c9f0(lVar1,0x7297a0,uVar2,0xb);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x729778,lVar7);
  uVar2 = FUN__text__005f3244(lVar7);
  FUN__text__0012c9f0(lVar1,0x7297a8,uVar2,0xb);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if (lVar4 == 0) {
    FUN__text__003c7c60(lVar6,0x7297b0,1);
    lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    FUN__text__003c7c60(lVar6,0x7297b0,1);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x7297c0,lVar7);
  uVar2 = FUN__text__005f3244(lVar7);
  FUN__text__0012c9f0(lVar1,0x7297b8,uVar2,0xb);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  lVar7 = FUN__text__0012cb14(lVar1,0x7297c8);
  *(undefined1 *)(lVar7 + 0x110) = 0;
  *(undefined8 *)(lVar7 + 0x108) = 0x200000000;
  uVar2 = FUN__text__0012cb14(lVar1,0x7297c8);
  FUN__text__005e927c(local_60,0x8734f8);
  FUN__text__003a1de4(uVar2,local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  FUN__text__003c7c60(lVar6,0x7297d0,1);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x7297e0,lVar7);
  uVar2 = FUN__text__005f3244(lVar7);
  FUN__text__0012c9f0(lVar1,0x7297d8,uVar2,0xb);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  plVar5 = (long *)(lVar4 + 0x48);
  (**(code **)(*plVar5 + 0x18))(plVar5);
  lVar7 = FUN__text__0012cb14(lVar1,0x7297e8);
  *(undefined1 *)(lVar7 + 0x110) = 0;
  *(undefined8 *)(lVar7 + 0x108) = 0x200000000000000;
  FUN__text__003c7c60(lVar6,0x7297f0,1);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x729800,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x7297f8,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar5);
  lVar6 = FUN__text__0012cb14(lVar1,0x729808);
  *(undefined1 *)(lVar6 + 0x110) = 0;
  *(undefined8 *)(lVar6 + 0x108) = 0x100000000000000;
  lVar6 = FUN__text__0012cb14(lVar1,0x729810);
  *(long *)(param_1 + 0x7f8) = lVar6;
  *(undefined1 *)(lVar6 + 0x110) = 1;
  *(undefined8 *)(lVar6 + 0x108) = 0x4000080000000;
  uVar2 = *(undefined8 *)(param_1 + 0x7f8);
  FUN__text__005e927c(local_60,0x873510);
  FUN__text__003a1de4(uVar2,local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)(param_1 + 0x7f8);
  *(undefined1 *)(lVar6 + 0x15a) = 0;
  FUN__text__003a14e8(lVar6,0);
  lVar6 = FUN__text__0012cb14(lVar1,0x729818);
  *(long *)(param_1 + 0x800) = lVar6;
  *(undefined8 *)(lVar6 + 0x108) = 0x8000020000000;
  *(undefined1 *)(lVar6 + 0x110) = 1;
  uVar2 = *(undefined8 *)(param_1 + 0x800);
  FUN__text__005e927c(local_60,0x873510);
  FUN__text__003a1de4(uVar2,local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)(param_1 + 0x800);
  *(undefined1 *)(lVar6 + 0x15a) = 0;
  FUN__text__003a14e8(lVar6,0);
  local_60[0] = 0x598d0e60e0a45d28;
  uVar2 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),local_60);
  *(undefined8 *)(param_1 + 0x760) = uVar2;
  uVar2 = FUN__text__0012cf48(lVar1,0x729820);
  *(undefined8 *)(param_1 + 0x768) = uVar2;
  (**(code **)(*plVar5 + 0x10))(plVar5);
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x729830,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x729828,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar5);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(plVar5);
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar4,0x729830,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x729838,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar5);
  FUN__text__0012bcbc(lVar1,0);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(plVar5);
  return;
}


