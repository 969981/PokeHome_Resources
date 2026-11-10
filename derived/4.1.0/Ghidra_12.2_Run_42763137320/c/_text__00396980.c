/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00396980; name: FUN_.text__00396980
 */


void FUN__text__00396980(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x78));
  if ((*(byte *)(param_1 + 0x98) & 1) == 0) {
    plVar7 = (long *)(param_1 + 8);
    lVar8 = *plVar7;
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar8 != lVar1) {
      do {
        (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
                  (*(long **)(param_1 + 0x38),*(undefined8 *)(lVar8 + 8),
                   *(undefined8 *)(lVar8 + 0x10));
        lVar8 = lVar8 + 0x20;
      } while (lVar8 != lVar1);
      lVar8 = *plVar7;
    }
    *(long *)(param_1 + 0x10) = lVar8;
    FUN__text__003986e0(plVar7);
  }
  else if (*(long **)(param_1 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x60))();
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x78));
  puVar6 = *(undefined8 **)(param_1 + 0x140);
  if (puVar6 != (undefined8 *)0x0) {
    puVar2 = puVar6;
    puVar4 = *(undefined8 **)(param_1 + 0x148);
    if (*(undefined8 **)(param_1 + 0x148) != puVar6) {
      do {
        pcVar5 = (code *)puVar4[-0xf];
        puVar2 = puVar4 + -0x10;
        if (pcVar5 != (code *)0x0) {
          puVar4[-0xe] = 0;
          puVar4[-0xd] = 0;
          *puVar2 = 0;
          puVar4[-0xf] = 0;
          (*pcVar5)(puVar4 + -0xc);
        }
        puVar4 = puVar2;
      } while (puVar2 != puVar6);
      puVar2 = *(undefined8 **)(param_1 + 0x140);
    }
    *(undefined8 **)(param_1 + 0x148) = puVar6;
    (**(code **)(**(long **)(param_1 + 0x158) + 0x18))
              (*(long **)(param_1 + 0x158),puVar2,*(long *)(param_1 + 0x150) - (long)puVar2,0x10);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x110);
  if (puVar6 != (undefined8 *)0x0) {
    puVar2 = puVar6;
    puVar4 = *(undefined8 **)(param_1 + 0x118);
    if (*(undefined8 **)(param_1 + 0x118) != puVar6) {
      do {
        pcVar5 = (code *)puVar4[-0xf];
        puVar2 = puVar4 + -0x10;
        if (pcVar5 != (code *)0x0) {
          puVar4[-0xe] = 0;
          puVar4[-0xd] = 0;
          *puVar2 = 0;
          puVar4[-0xf] = 0;
          (*pcVar5)(puVar4 + -0xc);
        }
        puVar4 = puVar2;
      } while (puVar2 != puVar6);
      puVar2 = *(undefined8 **)(param_1 + 0x110);
    }
    *(undefined8 **)(param_1 + 0x118) = puVar6;
    (**(code **)(**(long **)(param_1 + 0x128) + 0x18))
              (*(long **)(param_1 + 0x128),puVar2,*(long *)(param_1 + 0x120) - (long)puVar2,0x10);
  }
  puVar6 = *(undefined8 **)(param_1 + 0xe0);
  if (puVar6 != (undefined8 *)0x0) {
    puVar2 = puVar6;
    puVar4 = *(undefined8 **)(param_1 + 0xe8);
    if (*(undefined8 **)(param_1 + 0xe8) != puVar6) {
      do {
        pcVar5 = (code *)puVar4[-0xf];
        puVar2 = puVar4 + -0x10;
        if (pcVar5 != (code *)0x0) {
          puVar4[-0xe] = 0;
          puVar4[-0xd] = 0;
          *puVar2 = 0;
          puVar4[-0xf] = 0;
          (*pcVar5)(puVar4 + -0xc);
        }
        puVar4 = puVar2;
      } while (puVar2 != puVar6);
      puVar2 = *(undefined8 **)(param_1 + 0xe0);
    }
    *(undefined8 **)(param_1 + 0xe8) = puVar6;
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x18))
              (*(long **)(param_1 + 0xf8),puVar2,*(long *)(param_1 + 0xf0) - (long)puVar2,0x10);
  }
  plVar7 = *(long **)(param_1 + 0xb0);
  if (plVar7 != (long *)0x0) {
    plVar3 = plVar7;
    if (*(long **)(param_1 + 0xb8) != plVar7) {
      plVar3 = *(long **)(param_1 + 0xb8);
      do {
        plVar9 = plVar3 + -1;
        if (*plVar9 != 0) {
          (**(code **)(*(long *)(*plVar9 + 0x48) + 0x18))();
          plVar3[-1] = 0;
        }
        plVar3 = plVar9;
      } while (plVar9 != plVar7);
      plVar3 = *(long **)(param_1 + 0xb0);
    }
    *(long **)(param_1 + 0xb8) = plVar7;
    (**(code **)(**(long **)(param_1 + 200) + 0x18))
              (*(long **)(param_1 + 200),plVar3,*(long *)(param_1 + 0xc0) - (long)plVar3,8);
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  FUN__text__00398484(param_1);
  return;
}


