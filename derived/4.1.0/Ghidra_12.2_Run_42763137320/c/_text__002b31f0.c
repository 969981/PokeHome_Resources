/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002b31f0; name: FUN_.text__002b31f0
 */


void FUN__text__002b31f0(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  
  FUN__text__002b3400();
  puVar5 = *(undefined8 **)(param_1 + 0x160);
  if (puVar5 != (undefined8 *)0x0) {
    puVar1 = puVar5;
    puVar3 = *(undefined8 **)(param_1 + 0x168);
    if (*(undefined8 **)(param_1 + 0x168) != puVar5) {
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
      puVar1 = *(undefined8 **)(param_1 + 0x160);
    }
    *(undefined8 **)(param_1 + 0x168) = puVar5;
    (**(code **)(**(long **)(param_1 + 0x178) + 0x18))
              (*(long **)(param_1 + 0x178),puVar1,*(long *)(param_1 + 0x170) - (long)puVar1,0x10);
  }
  puVar5 = *(undefined8 **)(param_1 + 0x130);
  if (puVar5 != (undefined8 *)0x0) {
    puVar1 = puVar5;
    puVar3 = *(undefined8 **)(param_1 + 0x138);
    if (*(undefined8 **)(param_1 + 0x138) != puVar5) {
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
      puVar1 = *(undefined8 **)(param_1 + 0x130);
    }
    *(undefined8 **)(param_1 + 0x138) = puVar5;
    (**(code **)(**(long **)(param_1 + 0x148) + 0x18))
              (*(long **)(param_1 + 0x148),puVar1,*(long *)(param_1 + 0x140) - (long)puVar1,0x10);
  }
  puVar5 = *(undefined8 **)(param_1 + 0x100);
  if (puVar5 != (undefined8 *)0x0) {
    puVar1 = puVar5;
    puVar3 = *(undefined8 **)(param_1 + 0x108);
    if (*(undefined8 **)(param_1 + 0x108) != puVar5) {
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
      puVar1 = *(undefined8 **)(param_1 + 0x100);
    }
    *(undefined8 **)(param_1 + 0x108) = puVar5;
    (**(code **)(**(long **)(param_1 + 0x118) + 0x18))
              (*(long **)(param_1 + 0x118),puVar1,*(long *)(param_1 + 0x110) - (long)puVar1,0x10);
  }
  plVar6 = *(long **)(param_1 + 0xd0);
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6;
    if (*(long **)(param_1 + 0xd8) != plVar6) {
      plVar2 = *(long **)(param_1 + 0xd8);
      do {
        plVar7 = plVar2 + -1;
        if (*plVar7 != 0) {
          (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
          plVar2[-1] = 0;
        }
        plVar2 = plVar7;
      } while (plVar7 != plVar6);
      plVar2 = *(long **)(param_1 + 0xd0);
    }
    *(long **)(param_1 + 0xd8) = plVar6;
    (**(code **)(**(long **)(param_1 + 0xe8) + 0x18))
              (*(long **)(param_1 + 0xe8),plVar2,*(long *)(param_1 + 0xe0) - (long)plVar2,8);
  }
  if (*(long *)(param_1 + 200) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 200) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 200) = 0;
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xc0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  FUN__text__002b4b20(param_1);
  return;
}


