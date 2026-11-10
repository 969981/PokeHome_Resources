/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00282b7c; name: FUN_.text__00282b7c
 */


void FUN__text__00282b7c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long local_100 [4];
  code *local_e0;
  code *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  long alStack_c0 [12];
  
  FUN__text__00128ca0(param_1,0,1);
  FUN__text__00128db0(param_1,0,1);
  local_100[0] = CONCAT44(local_100[0]._4_4_,0x200);
  FUN__text__00111970(local_100 + 4,*(undefined8 *)(param_1 + 8),local_100);
  if (*(long *)(param_1 + 0x988) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x988) + 0x48) + 0x18))();
  }
  *(code **)(param_1 + 0x988) = local_e0;
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),0x7304e0);
  FUN__text__003d13e8(param_1 + 0x990,uVar4,uVar2,0);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),0x7304e8);
  FUN__text__003d13e8(param_1 + 0xff0,uVar4,uVar2,0);
  local_e0 = (code *)0xa7649e0ad180b01a;
  local_d8 = (code *)0x71a942;
  local_d0 = (code *)0x1b;
  local_c8 = (undefined1 *)0x0;
  FUN__text__00115650(local_100,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),local_100 + 4,0xb)
  ;
  lVar5 = *(long *)(local_100[0] + 0x60);
  if ((lVar5 == 0) || ((**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(), local_100[0] != 0)) {
    (**(code **)(*(long *)(local_100[0] + 0x48) + 0x18))();
    local_100[0] = 0;
  }
  if (local_c8 != (undefined1 *)0x0) {
    (**(code **)(*(long *)((long)local_c8 + 0x48) + 0x18))();
  }
  lVar1 = param_1 + 0x110;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_e0 = (code *)0x53108f8dfb398542;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x7304f0,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_e0 = (code *)0x2d10f332335c4ed6;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x7304f8,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_e0 = (code *)0x2d10f432335c5089;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x730500,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_e0 = (code *)0x4d9fdf9b58e603c0;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x730508,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_e0 = (code *)0x4daa719b58ef505b;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x730510,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_e0 = (code *)0x2d0d6e3233593700;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x730518,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_e0 = (code *)0x2d147a32335f6a12;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x730520,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_e0 = (code *)0x2d257332336dd160;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x730528,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_e0 = (code *)0x2d1800323362839b;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x730530,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_e0 = (code *)0x2d1b06323364c3a4;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x730538,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_e0 = (code *)0x2d257832336dd9df;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x730540,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_e0 = (code *)0x2d0d6e3233593700;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x730548,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_e0 = (code *)0x2d1e8c323367dd2d;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x730550,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_e0 = (code *)0x2d257332336dd160;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x730558,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_e0 = (code *)0x2d1800323362839b;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x730560,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_e0 = (code *)0x2d1b06323364c3a4;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x730568,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_e0 = (code *)0x2d257832336dd9df;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x730570,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_e0 = (code *)0x2d0d6e3233593700;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x730578,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_e0 = (code *)0x2d147a32335f6a12;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x730580,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_e0 = (code *)0x2d257332336dd160;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x730588,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_e0 = (code *)0x2d1800323362839b;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x730590,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_e0 = (code *)0x2d1b06323364c3a4;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x730598,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_e0 = (code *)0x2d257832336dd9df;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x7305a0,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_e0 = (code *)0x2d0d6e3233593700;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x7305a8,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_e0 = (code *)0x2d1e8c323367dd2d;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x7305b0,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  local_e0 = (code *)0x2d257332336dd160;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x7305b8,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  plVar7 = (long *)(lVar5 + 0x48);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  local_e0 = (code *)0x2d1800323362839b;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x7305c0,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))(plVar7);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(plVar7);
  local_e0 = (code *)0x2d1b06323364c3a4;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x7305c8,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))(plVar7);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))(plVar7);
  local_e0 = (code *)0x2d257832336dd9df;
  lVar6 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar5,local_100 + 4,lVar6);
  uVar2 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar1,0x7305d0,uVar2,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))(plVar7);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))(plVar7);
  FUN__text__00285330(param_1);
  lVar5 = FUN__text__0012cb14(lVar1,0x7305d8);
  pcVar3 = *(code **)(lVar5 + 0x288);
  local_e0 = (code *)&LAB__text__0028bf44;
  local_d8 = FUN__text__0028bf64;
  local_d0 = FUN__text__0028bf68;
  local_c8 = &LAB__text__0028bf74;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__00283d74:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__00283d74;
  }
  pcVar3 = local_d8;
  *(undefined1 *)(lVar5 + 0x159) = 1;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  local_100[0] = -0x2fd90a6256837e76;
  lVar5 = FUN__text__0012cb14(lVar1,local_100);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  *(undefined8 *)(lVar5 + 0x108) = 0x100000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  local_d0 = FUN__text__0028bfa4;
  local_e0 = (code *)&LAB__text__0028bf80;
  local_d8 = FUN__text__0028bfa0;
  local_c8 = &LAB__text__0028bfb0;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__00283e40:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__00283e40;
  }
  pcVar3 = local_d8;
  *(undefined1 *)(lVar5 + 0x159) = 1;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  local_100[0] = -0x1f4babbae5d2c7b9;
  lVar5 = FUN__text__0012cb14(lVar1,local_100);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  *(undefined8 *)(lVar5 + 0x108) = 0x100000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  local_c8 = &LAB__text__0028bfb0;
  local_d0 = FUN__text__0028bfa4;
  local_e0 = (code *)&LAB__text__0028bf80;
  local_d8 = FUN__text__0028bfa0;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__00283ee4:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__00283ee4;
  }
  pcVar3 = local_d8;
  *(undefined1 *)(lVar5 + 0x159) = 1;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  local_100[0] = 0x5b55307b93dc7c7f;
  lVar5 = FUN__text__0012cb14(lVar1,local_100);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  *(undefined8 *)(lVar5 + 0x108) = 0x100000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  local_c8 = &LAB__text__0028bfb0;
  local_d0 = FUN__text__0028bfa4;
  local_e0 = (code *)&LAB__text__0028bf80;
  local_d8 = FUN__text__0028bfa0;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__00283f88:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__00283f88;
  }
  pcVar3 = local_d8;
  *(undefined1 *)(lVar5 + 0x159) = 1;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  local_100[0] = 0x126b59872cf395e4;
  lVar5 = FUN__text__0012cb14(lVar1,local_100);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  *(undefined8 *)(lVar5 + 0x108) = 0x100000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  local_c8 = &LAB__text__0028bfb0;
  local_d0 = FUN__text__0028bfa4;
  local_e0 = (code *)&LAB__text__0028bf80;
  local_d8 = FUN__text__0028bfa0;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__00284024:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__00284024;
  }
  pcVar3 = local_d8;
  *(undefined1 *)(lVar5 + 0x159) = 1;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x7305e0);
  *(undefined8 *)(lVar5 + 0x108) = 0x4000000000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 1;
  local_e0 = FUN__text__0028bfbc;
  local_d8 = FUN__text__0028c07c;
  local_d0 = FUN__text__0028c080;
  local_c8 = &LAB__text__0028c08c;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__002840d8:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__002840d8;
  }
  FUN__text__005e927c(local_100,0x877cc8);
  FUN__text__003a1de4(lVar5,local_100);
  if (local_100[3] != 0) {
    (**(code **)(*(long *)(local_100[3] + 0x48) + 0x18))();
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x7305e8);
  *(undefined8 *)(lVar5 + 0x108) = 0x8000000000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 1;
  local_d0 = FUN__text__0028c15c;
  local_e0 = FUN__text__0028c098;
  local_d8 = FUN__text__0028c158;
  local_c8 = &LAB__text__0028c168;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__002841b8:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__002841b8;
  }
  FUN__text__005e927c(local_100,0x877cc8);
  FUN__text__003a1de4(lVar5,local_100);
  if (local_100[3] != 0) {
    (**(code **)(*(long *)(local_100[3] + 0x48) + 0x18))();
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x7305f0);
  *(undefined8 *)(lVar5 + 0x108) = 0x10000000000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 1;
  local_d0 = FUN__text__0028c1e8;
  local_e0 = (code *)&LAB__text__0028c174;
  local_d8 = FUN__text__0028c1e4;
  local_c8 = &LAB__text__0028c1f4;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__00284298:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__00284298;
  }
  FUN__text__003a14e8(lVar5,1);
  local_100[0] = -0x13b9d955e6e63ae9;
  local_100[1] = 0x710422;
  local_100[2] = 0x15;
  local_100[3] = 0;
  FUN__text__003a1de4(lVar5,local_100);
  if (local_100[3] != 0) {
    (**(code **)(*(long *)(local_100[3] + 0x48) + 0x18))();
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x7305f8);
  *(undefined8 *)(lVar5 + 0x108) = 0x20000000000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 1;
  local_d0 = FUN__text__0028c258;
  local_e0 = (code *)&LAB__text__0028c200;
  local_d8 = FUN__text__0028c254;
  local_c8 = &LAB__text__0028c264;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__00284398:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__00284398;
  }
  FUN__text__003a14e8(lVar5,1);
  local_100[0] = -0x13b9d955e6e63ae9;
  local_100[1] = 0x710422;
  local_100[2] = 0x15;
  local_100[3] = 0;
  FUN__text__003a1de4(lVar5,local_100);
  if (local_100[3] != 0) {
    (**(code **)(*(long *)(local_100[3] + 0x48) + 0x18))();
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x730600);
  *(undefined8 *)(lVar5 + 0x108) = 0x800000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  local_e0 = FUN__text__0028c270;
  local_d8 = FUN__text__0028c360;
  local_d0 = FUN__text__0028c364;
  local_c8 = &LAB__text__0028c370;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__0028447c:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__0028447c;
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x730608);
  *(undefined8 *)(lVar5 + 0x108) = 0x400000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  local_e0 = (code *)&DAT__text__0028c37c;
  local_d8 = FUN__text__0028c384;
  local_d0 = FUN__text__0028c388;
  local_c8 = &LAB__text__0028c394;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__00284528:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__00284528;
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x730610);
  *(undefined8 *)(lVar5 + 0x108) = 0x40000000000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  local_e0 = FUN__text__0028c3a0;
  local_d8 = FUN__text__0028c3e4;
  local_d0 = FUN__text__0028c3e8;
  local_c8 = &LAB__text__0028c3f4;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__002845d4:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__002845d4;
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x730618);
  *(undefined8 *)(lVar5 + 0x108) = 0x40000000000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  local_e0 = FUN__text__0028c400;
  local_d8 = FUN__text__0028c444;
  local_d0 = FUN__text__0028c448;
  local_c8 = &LAB__text__0028c454;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__00284680:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__00284680;
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x730620);
  *(undefined8 *)(lVar5 + 0x108) = 0x100000000000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  local_e0 = FUN__text__0028c460;
  local_d8 = FUN__text__0028c4a4;
  local_d0 = FUN__text__0028c4a8;
  local_c8 = &LAB__text__0028c4b4;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__0028472c:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__0028472c;
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x730628);
  *(undefined8 *)(lVar5 + 0x108) = 0x800000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  local_e0 = FUN__text__0028c4c0;
  local_d8 = FUN__text__0028c5ac;
  local_d0 = FUN__text__0028c5b0;
  local_c8 = &LAB__text__0028c5bc;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__002847d8:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__002847d8;
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x730630);
  *(undefined8 *)(lVar5 + 0x108) = 0x400000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  local_e0 = (code *)&DAT__text__0028c5c8;
  local_d8 = FUN__text__0028c5d0;
  local_d0 = FUN__text__0028c5d4;
  local_c8 = &LAB__text__0028c5e0;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__00284884:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__00284884;
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x730638);
  *(undefined8 *)(lVar5 + 0x108) = 0x40000000000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  local_e0 = FUN__text__0028c5ec;
  local_d8 = FUN__text__0028c630;
  local_d0 = FUN__text__0028c634;
  local_c8 = &LAB__text__0028c640;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__00284930:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__00284930;
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x730640);
  *(undefined8 *)(lVar5 + 0x108) = 0x40000000000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  local_e0 = FUN__text__0028c64c;
  local_d8 = FUN__text__0028c690;
  local_d0 = FUN__text__0028c694;
  local_c8 = &LAB__text__0028c6a0;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__002849dc:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__002849dc;
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x730648);
  *(undefined8 *)(lVar5 + 0x108) = 0x100000000000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  local_e0 = FUN__text__0028c6ac;
  local_d8 = FUN__text__0028c6f0;
  local_d0 = FUN__text__0028c6f4;
  local_c8 = &LAB__text__0028c700;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__00284a88:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__00284a88;
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x730650);
  *(undefined8 *)(lVar5 + 0x108) = 0x800000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  local_e0 = FUN__text__0028c70c;
  local_d8 = FUN__text__0028c7fc;
  local_d0 = FUN__text__0028c800;
  local_c8 = &LAB__text__0028c80c;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__00284b34:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__00284b34;
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x730658);
  *(undefined8 *)(lVar5 + 0x108) = 0x400000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  local_e0 = (code *)&DAT__text__0028c818;
  local_d8 = FUN__text__0028c820;
  local_d0 = FUN__text__0028c824;
  local_c8 = &LAB__text__0028c830;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__00284be0:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__00284be0;
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x730660);
  *(undefined8 *)(lVar5 + 0x108) = 0x40000000000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  local_e0 = FUN__text__0028c83c;
  local_d8 = FUN__text__0028c880;
  local_d0 = FUN__text__0028c884;
  local_c8 = &LAB__text__0028c890;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__00284c8c:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__00284c8c;
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x730668);
  *(undefined8 *)(lVar5 + 0x108) = 0x40000000000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  local_e0 = FUN__text__0028c89c;
  local_d8 = FUN__text__0028c8e0;
  local_d0 = FUN__text__0028c8e4;
  local_c8 = &LAB__text__0028c8f0;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__00284d38:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__00284d38;
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x730670);
  *(undefined8 *)(lVar5 + 0x108) = 0x100000000000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  local_e0 = FUN__text__0028c8fc;
  local_d8 = FUN__text__0028c940;
  local_d0 = FUN__text__0028c944;
  local_c8 = &LAB__text__0028c950;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__00284de4:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__00284de4;
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x730678);
  *(undefined8 *)(lVar5 + 0x108) = 0x800000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  local_e0 = FUN__text__0028c95c;
  local_d8 = FUN__text__0028ca48;
  local_d0 = FUN__text__0028ca4c;
  local_c8 = &LAB__text__0028ca58;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__00284e90:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__00284e90;
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x730680);
  *(undefined8 *)(lVar5 + 0x108) = 0x400000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  local_e0 = (code *)&DAT__text__0028ca64;
  local_d8 = FUN__text__0028ca6c;
  local_d0 = FUN__text__0028ca70;
  local_c8 = &LAB__text__0028ca7c;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__00284f3c:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__00284f3c;
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x730688);
  *(undefined8 *)(lVar5 + 0x108) = 0x40000000000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  local_e0 = FUN__text__0028ca88;
  local_d8 = FUN__text__0028cacc;
  local_d0 = FUN__text__0028cad0;
  local_c8 = &LAB__text__0028cadc;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__00284fe8:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__00284fe8;
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x730690);
  *(undefined8 *)(lVar5 + 0x108) = 0x40000000000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  local_e0 = FUN__text__0028cae8;
  local_d8 = FUN__text__0028cb2c;
  local_d0 = FUN__text__0028cb30;
  local_c8 = &LAB__text__0028cb3c;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__00285094:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__00285094;
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x730698);
  *(undefined8 *)(lVar5 + 0x108) = 0x100000000000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  local_e0 = FUN__text__0028cb48;
  local_d8 = FUN__text__0028cb8c;
  local_d0 = FUN__text__0028cb90;
  local_c8 = &LAB__text__0028cb9c;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__00285140:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__00285140;
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x7306a0);
  *(undefined8 *)(lVar5 + 0x108) = 0x200000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  local_e0 = FUN__text__0028cba8;
  local_d8 = FUN__text__0028cc20;
  local_d0 = FUN__text__0028cc24;
  local_c8 = &LAB__text__0028cc30;
  alStack_c0[0] = param_1;
  if (pcVar3 == (code *)0x0) {
LAB__text__002851ec:
    (*local_d0)(alStack_c0,lVar5 + 0x2a0);
    *(undefined8 *)(lVar5 + 0x280) = local_e0;
    *(code **)(lVar5 + 0x288) = local_d8;
    *(code **)(lVar5 + 0x290) = local_d0;
    *(undefined1 **)(lVar5 + 0x298) = local_c8;
  }
  else {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 != (code *)0x0) goto LAB__text__002851ec;
  }
  FUN__text__005e927c(local_100,0x877ce0);
  FUN__text__003a1de4(lVar5,local_100);
  if (local_100[3] != 0) {
    (**(code **)(*(long *)(local_100[3] + 0x48) + 0x18))();
  }
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  lVar5 = FUN__text__0012cb14(lVar1,0x7306a8);
  *(undefined8 *)(lVar5 + 0x108) = 0x200000000000000;
  pcVar3 = *(code **)(lVar5 + 0x288);
  *(undefined1 *)(lVar5 + 0x110) = 0;
  local_e0 = FUN__text__0028cc3c;
  local_d8 = FUN__text__0028cce0;
  local_d0 = FUN__text__0028cd44;
  local_c8 = &LAB__text__0028cd50;
  alStack_c0[0] = param_1;
  if (pcVar3 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x290) = 0;
    *(undefined8 *)(lVar5 + 0x298) = 0;
    *(undefined8 *)(lVar5 + 0x280) = 0;
    *(undefined8 *)(lVar5 + 0x288) = 0;
    (*pcVar3)(lVar5 + 0x2a0);
    if (local_d0 == (code *)0x0) goto LAB__text__002852e4;
  }
  (*local_d0)(alStack_c0,lVar5 + 0x2a0);
  *(undefined8 *)(lVar5 + 0x280) = local_e0;
  *(code **)(lVar5 + 0x288) = local_d8;
  *(code **)(lVar5 + 0x290) = local_d0;
  *(undefined1 **)(lVar5 + 0x298) = local_c8;
LAB__text__002852e4:
  pcVar3 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (code *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar3)(alStack_c0);
  }
  FUN__text__00285880(param_1);
  return;
}


