/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00129260; name: FUN_.text__00129260
 */


undefined8 FUN__text__00129260(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  
  plVar7 = *(long **)(param_1 + 0x18);
  plVar6 = *(long **)(param_1 + 0x20);
  if (plVar7 != plVar6) {
    do {
      if ((*plVar7 == 0) || (puVar5 = *(undefined8 **)(*plVar7 + 0x60), puVar5 == (undefined8 *)0x0)
         ) {
        if (param_2 == (undefined8 *)0x0) goto LAB__text__00129314;
      }
      else {
        plVar1 = (long *)(**(code **)*puVar5)(puVar5);
        plVar2 = (long *)FUN__text__001280e4();
        if (plVar2 != plVar1) {
          do {
            plVar1 = (long *)*plVar1;
          } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
          if (plVar1 == (long *)0x0) {
            if (param_2 != (undefined8 *)0x0) goto LAB__text__001292f0;
            goto LAB__text__00129314;
          }
        }
        if (puVar5 + -10 == param_2) goto LAB__text__00129314;
      }
LAB__text__001292f0:
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar6);
    plVar7 = plVar6;
LAB__text__00129314:
    plVar6 = *(long **)(param_1 + 0x20);
    if (plVar7 != plVar6) {
      plVar1 = plVar7;
      if (plVar7 + 1 != plVar6) {
        do {
          if (*plVar1 != 0) {
            (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
          }
          plVar7 = plVar1 + 1;
          lVar3 = *plVar7;
          *plVar7 = 0;
          *plVar1 = lVar3;
          plVar2 = plVar1 + 2;
          plVar1 = plVar7;
        } while (plVar2 != plVar6);
        plVar6 = *(long **)(param_1 + 0x20);
      }
      if (plVar6 != plVar7) {
        do {
          plVar1 = plVar6 + -1;
          if (*plVar1 != 0) {
            (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
            plVar6[-1] = 0;
          }
          plVar6 = plVar1;
        } while (plVar1 != plVar7);
      }
      *(long **)(param_1 + 0x20) = plVar7;
      lVar4 = param_2[0xc2];
      lVar3 = *(long *)(lVar4 + 0x10);
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      }
      *(undefined8 *)(lVar4 + 0x10) = 0;
      return 1;
    }
  }
  return 0;
}


