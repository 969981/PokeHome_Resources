/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00220d38; name: FUN_.text__00220d38
 */


void FUN__text__00220d38(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long local_50 [3];
  long local_38;
  
  lVar1 = param_1 + 0x110;
  lVar3 = FUN__text__0012cb14(lVar1,0x7293a8);
  *(undefined1 *)(lVar3 + 0x110) = 0;
  *(undefined8 *)(lVar3 + 0x108) = 0x200000000;
  FUN__text__005e927c(local_50,0x871d70);
  FUN__text__003a1de4(lVar3,local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  FUN__text__00128ca0(param_1,0,1);
  FUN__text__0012bcbc(lVar1,0);
  FUN__text__001156d0(local_50,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar3 = *(long *)(local_50[0] + 0x60);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x6c0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x6c0) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x6c0) = lVar3;
  if (local_50[0] != 0) {
    (**(code **)(*(long *)(local_50[0] + 0x48) + 0x18))();
  }
  lVar3 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),0x7293b0);
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) & 0xfe;
  uVar4 = FUN__text__0012cbe0(lVar1,0x70ee35);
  local_50[0] = 0;
  FUN__text__003a8304(uVar4,local_50,1,0);
  lVar3 = FUN__text__0012cb14(lVar1,0x7293b8);
  *(undefined1 *)(lVar3 + 0x110) = 0;
  *(undefined8 *)(lVar3 + 0x108) = 0x200000000000000;
  lVar3 = *(long *)(param_1 + 0x6c0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_50[0] = -0x347910529e70974d;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar3,local_50,lVar5);
  uVar4 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x7293c0,uVar4,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  lVar3 = *(long *)(param_1 + 0x6c0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_50[0] = 0x68fad02e6b8472fb;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar3,local_50,lVar5);
  uVar4 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x7293c8,uVar4,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  lVar3 = *(long *)(param_1 + 0x6c0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_50[0] = 0x68facf2e6b847148;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar3,local_50,lVar5);
  uVar4 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x7293d0,uVar4,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  lVar3 = *(long *)(param_1 + 0x6c0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_50[0] = 0x68c8516a21551bfa;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar3,local_50,lVar5);
  uVar4 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x7293d8,uVar4,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  lVar3 = *(long *)(param_1 + 0x6c0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_50[0] = 0x68c4cb6a21520271;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar3,local_50,lVar5);
  uVar4 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x7293e0,uVar4,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  lVar3 = *(long *)(param_1 + 0x6c0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_50[0] = 0x68fad22e6b847661;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar3,local_50,lVar5);
  uVar4 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x7293e8,uVar4,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  lVar3 = *(long *)(param_1 + 0x6c0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_50[0] = 0x3b867679fe0cd7ae;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar3,local_50,lVar5);
  uVar4 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x7293f0,uVar4,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  lVar3 = *(long *)(param_1 + 0x6c0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_50[0] = 0x3b82f079fe09be25;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar3,local_50,lVar5);
  uVar4 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x7293f8,uVar4,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  uVar2 = FUN__text__00323880();
  FUN__text__0022170c(param_1,uVar2);
  uVar2 = FUN__text__003238a0();
  FUN__text__0022182c(param_1,uVar2);
  lVar3 = *(long *)(param_1 + 0x6c0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_50[0] = 0x68f0be2e6b7bffe0;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar3,local_50,lVar5);
  uVar4 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x729400,uVar4,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  lVar3 = *(long *)(param_1 + 0x6c0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_50[0] = 0x68f0bf2e6b7c0193;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar3,local_50,lVar5);
  uVar4 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x729408,uVar4,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  lVar3 = *(long *)(param_1 + 0x6c0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_50[0] = 0x17f21c1f27d89f74;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar3,local_50,lVar5);
  uVar4 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x729410,uVar4,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  lVar3 = *(long *)(param_1 + 0x6c0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_50[0] = 0x17fc0e1f27e0dc2f;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar3,local_50,lVar5);
  uVar4 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x729418,uVar4,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  FUN__text__0022194c(param_1,0,0);
  lVar3 = *(long *)(param_1 + 0x6c0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_50[0] = 0x14cc139dfb8cf9e0;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar3,local_50,lVar5);
  uVar4 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x729420,uVar4,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  lVar3 = *(long *)(param_1 + 0x6c0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_50[0] = 0x14cc149dfb8cfb93;
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar3,local_50,lVar5);
  uVar4 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(lVar1,0x729428,uVar4,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


