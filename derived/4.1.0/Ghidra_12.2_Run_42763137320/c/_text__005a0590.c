/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a0590; name: FUN_.text__005a0590
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__005a0590(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  FUN__text__006ec848(param_1,_DAT_008a0448);
  plVar4 = *(long **)(param_1 + 0x110);
  if (plVar4 != (long *)0x0) {
    plVar2 = plVar4;
    if (*(long **)(param_1 + 0x118) != plVar4) {
      plVar2 = *(long **)(param_1 + 0x118);
      do {
        plVar6 = plVar2 + -4;
        lVar1 = *plVar6;
        *plVar6 = 0;
        if (lVar1 != 0) {
          (**(code **)(*(long *)plVar2[-3] + 0x18))((long *)plVar2[-3],lVar1,plVar2[-2],plVar2[-1]);
        }
        plVar2 = plVar6;
      } while (plVar6 != plVar4);
      plVar2 = *(long **)(param_1 + 0x110);
    }
    *(long **)(param_1 + 0x118) = plVar4;
    (**(code **)(**(long **)(param_1 + 0x128) + 0x18))
              (*(long **)(param_1 + 0x128),plVar2,*(long *)(param_1 + 0x120) - (long)plVar2,8);
  }
  lVar1 = *(long *)(param_1 + 0xe0);
  if (lVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0xe8);
    lVar5 = lVar1;
    if (lVar3 != lVar1) {
      do {
        lVar5 = lVar3 + -0x20;
        FUN__text__005b509c(lVar5);
        if (*(long *)(lVar3 + -0x18) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar3 + -0x18) + 0x48) + 0x18))();
          *(undefined8 *)(lVar3 + -0x18) = 0;
        }
        lVar3 = lVar5;
      } while (lVar5 != lVar1);
      lVar5 = *(long *)(param_1 + 0xe0);
    }
    *(long *)(param_1 + 0xe8) = lVar1;
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x18))
              (*(long **)(param_1 + 0xf8),lVar5,*(long *)(param_1 + 0xf0) - lVar5,8);
  }
  return param_1;
}


