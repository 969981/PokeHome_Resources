/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028f63c; name: FUN_.text__0028f63c
 */


void FUN__text__0028f63c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long local_e0 [4];
  code *local_c0;
  code *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  long local_a0 [12];
  
  FUN__text__00128ca0(param_1,0,1);
  FUN__text__00128db0(param_1,0,1);
  local_e0[0] = CONCAT44(local_e0[0]._4_4_,0x80);
  FUN__text__00111970(local_e0 + 4,*(undefined8 *)(param_1 + 8),local_e0);
  if (*(long *)(param_1 + 0x888) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x888) + 0x48) + 0x18))();
  }
  *(code **)(param_1 + 0x888) = local_c0;
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),0x730fe0);
  FUN__text__003d13e8(param_1 + 0x890,uVar4,uVar2,0);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),0x730fe8);
  FUN__text__003d13e8(param_1 + 0xef0,uVar4,uVar2,0);
  local_c0 = (code *)0xa7649e0ad180b01a;
  local_b8 = (code *)0x71a942;
  local_b0 = (code *)0x1b;
  local_a8 = (undefined1 *)0x0;
  FUN__text__00115650(local_e0,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),local_e0 + 4,0xb);
  lVar5 = *(long *)(local_e0[0] + 0x60);
  if (lVar5 == 0) {
LAB__text__0028f760:
    (**(code **)(*(long *)(local_e0[0] + 0x48) + 0x18))();
    local_e0[0] = 0;
  }
  else {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    if (local_e0[0] != 0) goto LAB__text__0028f760;
  }
  if (local_a8 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_a8 + 0x48) + 0x18))();
  }
  lVar1 = param_1 + 0x110;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_c0 = (code *)0x2d10f332335c4ed6;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_e0 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x730ff0,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_c0 = (code *)0x2d10f432335c5089;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_e0 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x730ff8,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_c0 = (code *)0x2d2c0332337331be;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_e0 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x731000,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_c0 = (code *)0x2d2c0332337331be;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_e0 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x731008,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_c0 = (code *)0x2d2c02323373300b;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_e0 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x731010,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_c0 = (code *)0x2d2c02323373300b;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_e0 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x731018,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  plVar7 = (long *)(lVar5 + 0x48);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  local_c0 = (code *)0x2d2c043233733371;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_e0 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x731020,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))(plVar7);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(plVar7);
  local_c0 = (code *)0x53108f8dfb398542;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_e0 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x731028,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))(plVar7);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(plVar7);
  local_c0 = (code *)0xcecdbe77dc8628aa;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_e0 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x731030,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))(plVar7);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))(plVar7);
  FUN__text__0012c300(lVar1,0x7189f5);
  local_c0 = FUN__text__00292cb4;
  local_b8 = FUN__text__00293090;
  local_b0 = FUN__text__00293874;
  local_a8 = &LAB__text__00293880;
  local_a0[0] = param_1;
  lVar5 = FUN__text__0012cb14(lVar1,0x731038);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  *(undefined8 *)(lVar5 + 0x108) = 0x400000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
  }
  if (local_b0 != (code *)0x0) {
    (*local_b0)(local_a0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_c0;
    *(code **)(lVar5 + 0x288) = local_b8;
    *(code **)(lVar5 + 0x290) = local_b0;
    *(undefined1 **)(lVar5 + 0x298) = local_a8;
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x731040);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  *(undefined8 *)(lVar5 + 0x108) = 0x400000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
  }
  if (local_b0 != (code *)0x0) {
    (*local_b0)(local_a0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_c0;
    *(code **)(lVar5 + 0x288) = local_b8;
    *(code **)(lVar5 + 0x290) = local_b0;
    *(undefined1 **)(lVar5 + 0x298) = local_a8;
  }
  pcVar3 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar3)(local_a0);
  }
  local_c0 = FUN__text__0029388c;
  local_b8 = FUN__text__00293b0c;
  local_b0 = FUN__text__00293c34;
  local_a8 = &LAB__text__00293c40;
  local_a0[0] = param_1;
  lVar5 = FUN__text__0012cb14(lVar1,0x731048);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  *(undefined8 *)(lVar5 + 0x108) = 0x800000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
  }
  if (local_b0 != (code *)0x0) {
    (*local_b0)(local_a0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_c0;
    *(code **)(lVar5 + 0x288) = local_b8;
    *(code **)(lVar5 + 0x290) = local_b0;
    *(undefined1 **)(lVar5 + 0x298) = local_a8;
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x731050);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  *(undefined8 *)(lVar5 + 0x108) = 0x800000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
  }
  if (local_b0 != (code *)0x0) {
    (*local_b0)(local_a0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_c0;
    *(code **)(lVar5 + 0x288) = local_b8;
    *(code **)(lVar5 + 0x290) = local_b0;
    *(undefined1 **)(lVar5 + 0x298) = local_a8;
  }
  pcVar3 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar3)(local_a0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x731058);
  *(undefined8 *)(lVar5 + 0x108) = 0x100000000000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  local_c0 = FUN__text__00293c4c;
  local_b8 = FUN__text__00293c9c;
  local_b0 = FUN__text__00293ca0;
  local_a8 = &LAB__text__00293cac;
  local_a0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__0028ff58:
    (*local_b0)(local_a0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_c0;
    *(code **)(lVar5 + 0x288) = local_b8;
    *(code **)(lVar5 + 0x290) = local_b0;
    *(undefined1 **)(lVar5 + 0x298) = local_a8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_b0 != (code *)0x0) goto LAB__text__0028ff58;
  }
  local_e0[0] = -0x2982d3ceaf9f0937;
  local_e0[1] = 0x717b6f;
  local_e0[2] = 0x16;
  local_e0[3] = 0;
  FUN__text__003a1de4(lVar5,local_e0);
  if (local_e0[3] != 0) {
    (**(code **)(*(long *)(local_e0[3] + 0x48) + 0x18))();
  }
  pcVar3 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar3)(local_a0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x731060);
  *(undefined8 *)(lVar5 + 0x108) = 0x200000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  local_c0 = FUN__text__00293cb8;
  local_b8 = FUN__text__00293d48;
  local_b0 = FUN__text__00293d4c;
  local_a8 = &LAB__text__00293d58;
  local_a0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__00290048:
    (*local_b0)(local_a0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_c0;
    *(code **)(lVar5 + 0x288) = local_b8;
    *(code **)(lVar5 + 0x290) = local_b0;
    *(undefined1 **)(lVar5 + 0x298) = local_a8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_b0 != (code *)0x0) goto LAB__text__00290048;
  }
  FUN__text__003a14e8(lVar5,1);
  FUN__text__005e927c(local_e0,0x878160);
  FUN__text__003a1de4(lVar5,local_e0);
  if (local_e0[3] != 0) {
    (**(code **)(*(long *)(local_e0[3] + 0x48) + 0x18))();
  }
  pcVar3 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar3)(local_a0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x731068);
  *(undefined8 *)(lVar5 + 0x108) = 0x200000000000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  local_c0 = FUN__text__00293d64;
  local_b8 = FUN__text__00293e08;
  local_b0 = FUN__text__00293e94;
  local_a8 = &LAB__text__00293ea0;
  local_a0[0] = param_1;
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_b0 == (code *)0x0) goto LAB__text__0029014c;
  }
  (*local_b0)(local_a0,lVar5 + 0x2a0);
  *(undefined8 *)(lVar5 + 0x280) = local_c0;
  *(code **)(lVar5 + 0x288) = local_b8;
  *(code **)(lVar5 + 0x290) = local_b0;
  *(undefined1 **)(lVar5 + 0x298) = local_a8;
LAB__text__0029014c:
  pcVar3 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined1 *)0x0;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar3)(local_a0);
  }
  return;
}


