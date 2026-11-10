/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a8780; name: FUN_.text__005a8780
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a8780(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  
  plVar2 = _DAT_008a0228;
  lVar4 = *_DAT_008a0228;
  plVar1 = *(long **)(lVar4 + 0x30);
  *(undefined8 *)(lVar4 + 0x30) = 0;
  if (plVar1 != (long *)0x0) {
    if (plVar1[1] != 0) {
      (**(code **)(*(long *)(plVar1[1] + 0x48) + 0x18))();
      plVar1[1] = 0;
    }
    if (*plVar1 != 0) {
      (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
      *plVar1 = 0;
    }
    (**(code **)(**(long **)(lVar4 + 0x38) + 0x18))
              (*(long **)(lVar4 + 0x38),plVar1,*(undefined8 *)(lVar4 + 0x40),
               *(undefined8 *)(lVar4 + 0x48));
    lVar4 = *plVar2;
  }
  plVar2 = *(long **)(lVar4 + 0x10);
  *(undefined8 *)(lVar4 + 0x10) = 0;
  if (plVar2 != (long *)0x0) {
    if (plVar2[1] != 0) {
      (**(code **)(*(long *)(plVar2[1] + 0x48) + 0x18))();
      plVar2[1] = 0;
    }
    if (*plVar2 != 0) {
      (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
      *plVar2 = 0;
    }
    (**(code **)(**(long **)(lVar4 + 0x18) + 0x18))
              (*(long **)(lVar4 + 0x18),plVar2,*(undefined8 *)(lVar4 + 0x20),
               *(undefined8 *)(lVar4 + 0x28));
  }
  FUN__text__005a7ac4();
  FUN__text__006f5dc0();
  if (*(long *)(param_1 + 0x8590) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x8590) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x8590) = 0;
  }
  lVar4 = *(long *)(param_1 + 0x8580);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    *(long *)(param_1 + 0x8580) = 0;
  }
  FUN__text__0011bfb0(param_1 + 0x84e0);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 34000));
  FUN__text__006f5614(param_1 + 0x4260);
  FUN__text__006f5614(param_1 + 0x4208);
  FUN__text__006f2bd0(param_1 + 0x21e0);
  if (*(long *)(param_1 + 0x1d8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1d8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x1a0));
  plVar2 = *(long **)(param_1 + 0x170);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2;
    if (*(long **)(param_1 + 0x178) != plVar2) {
      plVar1 = *(long **)(param_1 + 0x178);
      do {
        plVar5 = plVar1 + -1;
        if (*plVar5 != 0) {
          (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
          plVar1[-1] = 0;
        }
        plVar1 = plVar5;
      } while (plVar5 != plVar2);
      plVar1 = *(long **)(param_1 + 0x170);
    }
    *(long **)(param_1 + 0x178) = plVar2;
    (**(code **)(**(long **)(param_1 + 0x188) + 0x18))
              (*(long **)(param_1 + 0x188),plVar1,*(long *)(param_1 + 0x180) - (long)plVar1,8);
  }
  if (*(long *)(param_1 + 0x168) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x168) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  if (*(long *)(param_1 + 0x160) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x160) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  lVar4 = *(long *)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x140) = 0;
  if (lVar4 != 0) {
    (**(code **)(**(long **)(param_1 + 0x148) + 0x18))
              (*(long **)(param_1 + 0x148),lVar4,*(undefined8 *)(param_1 + 0x150),
               *(undefined8 *)(param_1 + 0x158));
  }
  puVar3 = *(undefined8 **)(param_1 + 0x100);
  *_DAT_008a0228 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)(*(long *)*puVar3 + 0x58))();
    (**(code **)(*(long *)puVar3[1] + 0x58))();
  }
  puVar3 = *(undefined8 **)(param_1 + 0x120);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x120) = 0;
    plVar2 = *(long **)(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  else {
    (**(code **)(*(long *)*puVar3 + 0x58))();
    (**(code **)(*(long *)puVar3[1] + 0x58))();
    plVar2 = *(long **)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0x120) = 0;
    if (plVar2 != (long *)0x0) {
      if (plVar2[1] != 0) {
        (**(code **)(*(long *)(plVar2[1] + 0x48) + 0x18))();
        plVar2[1] = 0;
      }
      if (*plVar2 != 0) {
        (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
        *plVar2 = 0;
      }
      (**(code **)(**(long **)(param_1 + 0x128) + 0x18))
                (*(long **)(param_1 + 0x128),plVar2,*(undefined8 *)(param_1 + 0x130),
                 *(undefined8 *)(param_1 + 0x138));
    }
    plVar2 = *(long **)(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  if (plVar2 == (long *)0x0) {
    FUN__text__005aab80(param_1 + 0xf0);
    return;
  }
  if (plVar2[1] != 0) {
    (**(code **)(*(long *)(plVar2[1] + 0x48) + 0x18))();
    plVar2[1] = 0;
  }
  if (*plVar2 != 0) {
    (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
    *plVar2 = 0;
  }
  (**(code **)(**(long **)(param_1 + 0x108) + 0x18))
            (*(long **)(param_1 + 0x108),plVar2,*(undefined8 *)(param_1 + 0x110),
             *(undefined8 *)(param_1 + 0x118));
  FUN__text__005aab80(param_1 + 0xf0);
  return;
}


