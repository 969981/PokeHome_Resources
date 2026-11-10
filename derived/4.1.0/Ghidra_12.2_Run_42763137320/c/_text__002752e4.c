/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002752e4; name: FUN_.text__002752e4
 */


void FUN__text__002752e4(long *param_1,ulong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_18;
  
  lVar5 = *param_1;
  uVar4 = *param_2 & 0xffffffff;
  iVar2 = (int)(*param_2 >> 0x20);
  if (uVar4 == 0 && iVar2 == 0) {
    lVar3 = *(long *)(lVar5 + 0x6e0);
    *(undefined8 *)(lVar3 + 0x108) = 0;
    *(undefined1 *)(lVar3 + 0x110) = 0;
    lVar3 = *(long *)(lVar5 + 0x6e8);
    *(undefined8 *)(lVar3 + 0x108) = 0;
    *(undefined1 *)(lVar3 + 0x110) = 0;
    lVar3 = *(long *)(lVar5 + 0x6d0);
    *(undefined8 *)(lVar3 + 0x108) = 0x80000000;
    *(undefined1 *)(lVar3 + 0x110) = 1;
    lVar3 = *(long *)(lVar5 + 0x6d8);
    *(undefined8 *)(lVar3 + 0x108) = 0x20000000;
    *(undefined1 *)(lVar3 + 0x110) = 1;
    lVar3 = *(long *)(lVar5 + 0x728);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_18 = 0xa01fce44cb875827;
    lVar6 = *(long *)(*(long *)(lVar5 + 0x2d0) + 0x2e8);
  }
  else if ((uVar4 == 0) && (iVar2 == 1)) {
    lVar3 = *(long *)(lVar5 + 0x6d0);
    *(undefined8 *)(lVar3 + 0x108) = 0;
    *(undefined1 *)(lVar3 + 0x110) = 0;
    lVar3 = *(long *)(lVar5 + 0x6d8);
    *(undefined8 *)(lVar3 + 0x108) = 0;
    *(undefined1 *)(lVar3 + 0x110) = 0;
    lVar3 = *(long *)(lVar5 + 0x6e0);
    *(undefined8 *)(lVar3 + 0x108) = 0x80000000;
    *(undefined1 *)(lVar3 + 0x110) = 1;
    lVar3 = *(long *)(lVar5 + 0x6e8);
    *(undefined8 *)(lVar3 + 0x108) = 0x20000000;
    *(undefined1 *)(lVar3 + 0x110) = 1;
    lVar3 = *(long *)(lVar5 + 0x728);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_18 = 0xa01fcf44cb8759da;
    lVar6 = *(long *)(*(long *)(lVar5 + 0x2d0) + 0x2e8);
  }
  else if ((uVar4 == 0) && (iVar2 == 2)) {
    lVar3 = *(long *)(lVar5 + 0x6e0);
    *(undefined8 *)(lVar3 + 0x108) = 0;
    *(undefined1 *)(lVar3 + 0x110) = 0;
    lVar3 = *(long *)(lVar5 + 0x6e8);
    *(undefined8 *)(lVar3 + 0x108) = 0;
    *(undefined1 *)(lVar3 + 0x110) = 0;
    lVar3 = *(long *)(lVar5 + 0x6d0);
    *(undefined8 *)(lVar3 + 0x108) = 0;
    *(undefined1 *)(lVar3 + 0x110) = 0;
    lVar3 = *(long *)(lVar5 + 0x6d8);
    *(undefined8 *)(lVar3 + 0x108) = 0;
    *(undefined1 *)(lVar3 + 0x110) = 0;
    lVar3 = *(long *)(lVar5 + 0x728);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_18 = 0xa01fd044cb875b8d;
    lVar6 = *(long *)(*(long *)(lVar5 + 0x2d0) + 0x2e8);
  }
  else if ((uVar4 == 0) && (iVar2 == 3)) {
    lVar3 = *(long *)(lVar5 + 0x6e0);
    *(undefined8 *)(lVar3 + 0x108) = 0;
    *(undefined1 *)(lVar3 + 0x110) = 0;
    lVar3 = *(long *)(lVar5 + 0x6e8);
    *(undefined8 *)(lVar3 + 0x108) = 0;
    *(undefined1 *)(lVar3 + 0x110) = 0;
    lVar3 = *(long *)(lVar5 + 0x6d0);
    *(undefined8 *)(lVar3 + 0x108) = 0;
    *(undefined1 *)(lVar3 + 0x110) = 0;
    lVar3 = *(long *)(lVar5 + 0x6d8);
    *(undefined8 *)(lVar3 + 0x108) = 0;
    *(undefined1 *)(lVar3 + 0x110) = 0;
    lVar3 = *(long *)(lVar5 + 0x728);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_18 = 0xa01fc944cb874fa8;
    lVar6 = *(long *)(*(long *)(lVar5 + 0x2d0) + 0x2e8);
  }
  else {
    if (uVar4 != 0) {
      return;
    }
    if (iVar2 != 4) {
      return;
    }
    lVar3 = *(long *)(lVar5 + 0x6e0);
    *(undefined8 *)(lVar3 + 0x108) = 0;
    *(undefined1 *)(lVar3 + 0x110) = 0;
    lVar3 = *(long *)(lVar5 + 0x6e8);
    *(undefined8 *)(lVar3 + 0x108) = 0;
    *(undefined1 *)(lVar3 + 0x110) = 0;
    lVar3 = *(long *)(lVar5 + 0x6d0);
    *(undefined8 *)(lVar3 + 0x108) = 0;
    *(undefined1 *)(lVar3 + 0x110) = 0;
    lVar3 = *(long *)(lVar5 + 0x6d8);
    *(undefined8 *)(lVar3 + 0x108) = 0;
    *(undefined1 *)(lVar3 + 0x110) = 0;
    lVar3 = *(long *)(lVar5 + 0x728);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    local_18 = 0x21d4273a24e5744d;
    lVar6 = *(long *)(*(long *)(lVar5 + 0x2d0) + 0x2e8);
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar3,&local_18,lVar6);
  uVar1 = FUN__text__005f3244(lVar6);
  FUN__text__0012c9f0(lVar5 + 0x110,0x72d168,uVar1,0xb);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


