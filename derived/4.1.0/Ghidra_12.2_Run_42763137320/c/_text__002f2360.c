/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002f2360; name: FUN_.text__002f2360
 */


void FUN__text__002f2360(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  
  FUN__text__002f25e0();
  puVar5 = *(undefined8 **)(param_1 + 0x158);
  if (puVar5 != (undefined8 *)0x0) {
    puVar1 = puVar5;
    puVar3 = *(undefined8 **)(param_1 + 0x160);
    if (*(undefined8 **)(param_1 + 0x160) != puVar5) {
      do {
        pcVar4 = (code *)puVar3[-0xf];
        puVar1 = puVar3 + -0x10;
        if (pcVar4 != (code *)0x0) {
          puVar3[-0xe] = 0;
          puVar3[-0xd] = 0;
          *puVar1 = 0;
          puVar3[-0xf] = 0;
          (*pcVar4)(puVar3 + -0xc);
        }
        puVar3 = puVar1;
      } while (puVar1 != puVar5);
      puVar1 = *(undefined8 **)(param_1 + 0x158);
    }
    *(undefined8 **)(param_1 + 0x160) = puVar5;
    (**(code **)(**(long **)(param_1 + 0x170) + 0x18))
              (*(long **)(param_1 + 0x170),puVar1,*(long *)(param_1 + 0x168) - (long)puVar1,0x10);
  }
  puVar5 = *(undefined8 **)(param_1 + 0x128);
  if (puVar5 != (undefined8 *)0x0) {
    puVar1 = puVar5;
    puVar3 = *(undefined8 **)(param_1 + 0x130);
    if (*(undefined8 **)(param_1 + 0x130) != puVar5) {
      do {
        pcVar4 = (code *)puVar3[-0xf];
        puVar1 = puVar3 + -0x10;
        if (pcVar4 != (code *)0x0) {
          puVar3[-0xe] = 0;
          puVar3[-0xd] = 0;
          *puVar1 = 0;
          puVar3[-0xf] = 0;
          (*pcVar4)(puVar3 + -0xc);
        }
        puVar3 = puVar1;
      } while (puVar1 != puVar5);
      puVar1 = *(undefined8 **)(param_1 + 0x128);
    }
    *(undefined8 **)(param_1 + 0x130) = puVar5;
    (**(code **)(**(long **)(param_1 + 0x140) + 0x18))
              (*(long **)(param_1 + 0x140),puVar1,*(long *)(param_1 + 0x138) - (long)puVar1,0x10);
  }
  puVar5 = *(undefined8 **)(param_1 + 0xf8);
  if (puVar5 != (undefined8 *)0x0) {
    puVar1 = puVar5;
    puVar3 = *(undefined8 **)(param_1 + 0x100);
    if (*(undefined8 **)(param_1 + 0x100) != puVar5) {
      do {
        pcVar4 = (code *)puVar3[-0xf];
        puVar1 = puVar3 + -0x10;
        if (pcVar4 != (code *)0x0) {
          puVar3[-0xe] = 0;
          puVar3[-0xd] = 0;
          *puVar1 = 0;
          puVar3[-0xf] = 0;
          (*pcVar4)(puVar3 + -0xc);
        }
        puVar3 = puVar1;
      } while (puVar1 != puVar5);
      puVar1 = *(undefined8 **)(param_1 + 0xf8);
    }
    *(undefined8 **)(param_1 + 0x100) = puVar5;
    (**(code **)(**(long **)(param_1 + 0x110) + 0x18))
              (*(long **)(param_1 + 0x110),puVar1,*(long *)(param_1 + 0x108) - (long)puVar1,0x10);
  }
  puVar5 = *(undefined8 **)(param_1 + 200);
  if (puVar5 != (undefined8 *)0x0) {
    puVar1 = puVar5;
    puVar3 = *(undefined8 **)(param_1 + 0xd0);
    if (*(undefined8 **)(param_1 + 0xd0) != puVar5) {
      do {
        pcVar4 = (code *)puVar3[-0xf];
        puVar1 = puVar3 + -0x10;
        if (pcVar4 != (code *)0x0) {
          puVar3[-0xe] = 0;
          puVar3[-0xd] = 0;
          *puVar1 = 0;
          puVar3[-0xf] = 0;
          (*pcVar4)(puVar3 + -0xc);
        }
        puVar3 = puVar1;
      } while (puVar1 != puVar5);
      puVar1 = *(undefined8 **)(param_1 + 200);
    }
    *(undefined8 **)(param_1 + 0xd0) = puVar5;
    (**(code **)(**(long **)(param_1 + 0xe0) + 0x18))
              (*(long **)(param_1 + 0xe0),puVar1,*(long *)(param_1 + 0xd8) - (long)puVar1,0x10);
  }
  plVar6 = *(long **)(param_1 + 0x98);
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6;
    if (*(long **)(param_1 + 0xa0) != plVar6) {
      plVar2 = *(long **)(param_1 + 0xa0);
      do {
        plVar7 = plVar2 + -1;
        if (*plVar7 != 0) {
          (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
          plVar2[-1] = 0;
        }
        plVar2 = plVar7;
      } while (plVar7 != plVar6);
      plVar2 = *(long **)(param_1 + 0x98);
    }
    *(long **)(param_1 + 0xa0) = plVar6;
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x18))
              (*(long **)(param_1 + 0xb0),plVar2,*(long *)(param_1 + 0xa8) - (long)plVar2,8);
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  FUN__text__002f4714(param_1);
  return;
}


