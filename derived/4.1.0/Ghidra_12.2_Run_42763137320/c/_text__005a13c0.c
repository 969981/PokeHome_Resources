/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a13c0; name: FUN_.text__005a13c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a13c0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  lVar3 = *(long *)(param_1 + 0xe8);
  if (lVar3 != *(long *)(param_1 + 0xf0)) {
    FUN__text__006ee53c(param_1 + 0x58,_DAT_008a0448);
    lVar3 = *(long *)(param_1 + 0xe8);
  }
  if (lVar3 != 0) {
    lVar5 = *(long *)(param_1 + 0xf0);
    lVar1 = lVar3;
    if (lVar5 != lVar3) {
      do {
        if (*(long *)(lVar5 + -0x20) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar5 + -0x20) + 0x48) + 0x18))();
          *(undefined8 *)(lVar5 + -0x20) = 0;
        }
        if (*(long *)(lVar5 + -0x40) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar5 + -0x40) + 0x48) + 0x18))();
          *(undefined8 *)(lVar5 + -0x40) = 0;
        }
        lVar5 = lVar5 + -0x40;
      } while (lVar5 != lVar3);
      lVar1 = *(long *)(param_1 + 0xe8);
    }
    *(long *)(param_1 + 0xf0) = lVar3;
    (**(code **)(**(long **)(param_1 + 0x100) + 0x18))
              (*(long **)(param_1 + 0x100),lVar1,*(long *)(param_1 + 0xf8) - lVar1,8);
  }
  plVar4 = *(long **)(param_1 + 0xb8);
  if (plVar4 != (long *)0x0) {
    plVar2 = plVar4;
    if (*(long **)(param_1 + 0xc0) != plVar4) {
      plVar2 = *(long **)(param_1 + 0xc0);
      do {
        plVar6 = plVar2 + -2;
        if (*plVar6 != 0) {
          (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
          plVar2[-2] = 0;
        }
        plVar2 = plVar6;
      } while (plVar6 != plVar4);
      plVar2 = *(long **)(param_1 + 0xb8);
    }
    *(long **)(param_1 + 0xc0) = plVar4;
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x18))
              (*(long **)(param_1 + 0xd0),plVar2,*(long *)(param_1 + 200) - (long)plVar2,8);
  }
  FUN__text__005b509c(param_1 + 0x98);
  if (*(long *)(param_1 + 0xa0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  FUN__text__006ee430(param_1 + 0x58);
  FUN__text__005b5108(param_1);
  return;
}


