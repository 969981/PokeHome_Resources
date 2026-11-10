/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014a620; name: FUN_.text__0014a620
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0014a620(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_28;
  
  lVar1 = FUN__text__00147dec(&local_28,param_2,0x867eb0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0xf0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xf0) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0xf0) = lVar1;
  lVar3 = *(long *)(param_3 + 0x48);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar1 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar1 + 0xb0) + 0x48) + 0x18))();
  }
  *(long *)(lVar1 + 0xb0) = lVar3;
  lVar1 = *(long *)(param_1 + 0xf0);
  lVar3 = *(long *)(param_3 + 0x50);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar1 + 0x130);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  *(long *)(lVar1 + 0x130) = lVar3;
  if (*(char *)(param_1 + 0xd0) == '\0') {
    *(undefined1 *)(*(long *)(param_1 + 0xf0) + 0xb8) = 1;
  }
  *(undefined1 *)(*(long *)(param_1 + 0xf0) + 0x1ac) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0xf0) + 0x208) = 1;
  FUN__text__005c5e00(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0xf0));
  lVar1 = FUN__text__00147dec(&local_28,param_2,_DAT_008a0160);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0xf8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xf8) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0xf8) = lVar1;
  lVar3 = *(long *)(param_3 + 0x48);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar1 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar1 + 0xb0) + 0x48) + 0x18))();
  }
  *(long *)(lVar1 + 0xb0) = lVar3;
  lVar1 = *(long *)(param_1 + 0xf8);
  lVar3 = *(long *)(param_3 + 0x58);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar1 + 0xc0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  *(long *)(lVar1 + 0xc0) = lVar3;
  lVar1 = *(long *)(param_1 + 0xf8);
  lVar3 = *(long *)(param_3 + 0x60);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar1 + 0xd0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  *(long *)(lVar1 + 0xd0) = lVar3;
  lVar1 = *(long *)(param_1 + 0xf8);
  lVar3 = *(long *)(param_3 + 0x50);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar1 + 0x130);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  *(long *)(lVar1 + 0x130) = lVar3;
  *(undefined1 *)(*(long *)(param_1 + 0xf8) + 0xb8) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0xf8) + 200) = 1;
  *(undefined1 *)(*(long *)(param_1 + 0xf8) + 0xd8) = 1;
  *(undefined1 *)(*(long *)(param_1 + 0xf8) + 0x1ac) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0xf8) + 0x208) = 1;
  FUN__text__005c5e00(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0xf8));
  FUN__text__00147cfc(&local_28,param_2,_DAT_0089fca0);
  if (*(long *)(param_1 + 0x100) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x100) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x100) = local_28;
  *(undefined4 *)(local_28 + 0x1a8) = 1;
  lVar1 = *(long *)(param_1 + 0xf8);
  lVar3 = *(long *)(lVar1 + 0xb0);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x100);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    lVar1 = *(long *)(lVar2 + 0xb0);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    *(long *)(lVar2 + 0xb0) = lVar3;
    lVar1 = *(long *)(param_1 + 0xf8);
  }
  lVar3 = *(long *)(lVar1 + 0xc0);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x100);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    lVar1 = *(long *)(lVar2 + 0xc0);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    *(long *)(lVar2 + 0xc0) = lVar3;
    lVar1 = *(long *)(param_1 + 0xf8);
  }
  lVar3 = *(long *)(lVar1 + 0xd0);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x100);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    lVar1 = *(long *)(lVar2 + 0xd0);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    *(long *)(lVar2 + 0xd0) = lVar3;
    lVar1 = *(long *)(param_1 + 0xf8);
  }
  lVar3 = *(long *)(lVar1 + 0xe0);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x100);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    lVar1 = *(long *)(lVar2 + 0xe0);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    *(long *)(lVar2 + 0xe0) = lVar3;
    lVar1 = *(long *)(param_1 + 0xf8);
  }
  lVar3 = *(long *)(lVar1 + 0xf0);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x100);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    lVar1 = *(long *)(lVar2 + 0xf0);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    *(long *)(lVar2 + 0xf0) = lVar3;
    lVar1 = *(long *)(param_1 + 0xf8);
  }
  lVar3 = *(long *)(lVar1 + 0x100);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x100);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    lVar1 = *(long *)(lVar2 + 0x100);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    *(long *)(lVar2 + 0x100) = lVar3;
    lVar1 = *(long *)(param_1 + 0xf8);
  }
  lVar3 = *(long *)(lVar1 + 0x110);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x100);
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    lVar1 = *(long *)(lVar2 + 0x110);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
    }
    *(long *)(lVar2 + 0x110) = lVar3;
    lVar1 = *(long *)(param_1 + 0xf8);
  }
  lVar1 = *(long *)(lVar1 + 0x120);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x100);
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    lVar3 = *(long *)(lVar2 + 0x120);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    *(long *)(lVar2 + 0x120) = lVar1;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xf0) + 0x130);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x100);
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    lVar3 = *(long *)(lVar2 + 0x130);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    *(long *)(lVar2 + 0x130) = lVar1;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x100) + 0x208) = 1;
  FUN__text__005c5e00(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x100));
  FUN__text__0014c6f0(&local_28,param_2);
  if (*(long *)(param_1 + 0x108) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x108) + 0x48) + 0x18))();
  }
  lVar1 = local_28;
  *(long *)(param_1 + 0x108) = local_28;
  lVar3 = *(long *)(*(long *)(param_1 + 0xf8) + 0xb0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar1 + 0xb0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  *(long *)(lVar1 + 0xb0) = lVar3;
  lVar1 = *(long *)(param_3 + 0x30);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar2 = *(long *)(param_1 + 0x108);
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  lVar3 = *(long *)(lVar2 + 0x130);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  *(long *)(lVar2 + 0x130) = lVar1;
  FUN__text__005c5e00(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x108));
  lVar1 = *(long *)(param_1 + 0xf8);
  FUN__text__005ef168(*(undefined8 *)(param_1 + 0x108),*(undefined8 *)(lVar1 + 0xc0),
                      *(undefined8 *)(lVar1 + 0xd0),*(undefined8 *)(lVar1 + 0x130));
  FUN__text__005ef918(*(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x60));
  *(undefined1 *)(*(long *)(param_1 + 0x108) + 0x208) = 1;
  *(undefined1 *)(param_1 + 0x110) = 1;
  FUN__text__00147cfc(&local_28,param_2,_DAT_0089fca8);
  if (*(long *)(param_1 + 0x118) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x118) + 0x48) + 0x18))();
  }
  lVar1 = local_28;
  *(long *)(param_1 + 0x118) = local_28;
  lVar3 = *(long *)(*(long *)(param_1 + 0x108) + 0xb0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar1 + 0xb0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  *(long *)(lVar1 + 0xb0) = lVar3;
  lVar1 = *(long *)(param_1 + 0x118);
  lVar3 = *(long *)(*(long *)(param_1 + 0x108) + 0x130);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar1 + 0x130);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  *(long *)(lVar1 + 0x130) = lVar3;
  *(undefined1 *)(*(long *)(param_1 + 0x118) + 0x208) = 1;
  FUN__text__005c5e00(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x118));
  if ((*(long *)(param_1 + 0x70) != 0) && (*(long *)(param_1 + 0x78) != 0)) {
    FUN__text__00147cfc(&local_28,param_2,_DAT_008a0168);
    if (*(long *)(param_1 + 0x120) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x120) + 0x48) + 0x18))();
    }
    *(long *)(param_1 + 0x120) = local_28;
    lVar1 = *(long *)(*(long *)(param_1 + 0x108) + 0xb0);
    if (lVar1 != 0) {
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
    }
    if (*(long *)(local_28 + 0xb0) != 0) {
      (**(code **)(*(long *)(*(long *)(local_28 + 0xb0) + 0x48) + 0x18))();
    }
    *(long *)(local_28 + 0xb0) = lVar1;
    lVar1 = *(long *)(param_1 + 0x120);
    lVar3 = *(long *)(*(long *)(param_1 + 0x108) + 0x130);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(lVar1 + 0x130);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    *(long *)(lVar1 + 0x130) = lVar3;
    lVar1 = *(long *)(param_1 + 0x120);
    lVar3 = *(long *)(param_1 + 0x70);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(lVar1 + 0x1e0);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    *(long *)(lVar1 + 0x1e0) = lVar3;
    lVar1 = *(long *)(param_1 + 0x120);
    lVar3 = *(long *)(param_1 + 0x78);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(lVar1 + 0x1e8);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    *(long *)(lVar1 + 0x1e8) = lVar3;
    *(undefined1 *)(*(long *)(param_1 + 0x120) + 0x208) = 1;
    lVar1 = *(long *)(param_1 + 0x100);
    lVar3 = *(long *)(param_1 + 0x70);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(lVar1 + 0x1e0);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    *(long *)(lVar1 + 0x1e0) = lVar3;
    lVar1 = *(long *)(param_1 + 0x100);
    lVar3 = *(long *)(param_1 + 0x78);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar2 = *(long *)(lVar1 + 0x1e8);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    *(long *)(lVar1 + 0x1e8) = lVar3;
    FUN__text__005c5e00(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x120));
  }
  return;
}


