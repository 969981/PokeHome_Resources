/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b3460; name: FUN_.text__004b3460
 */


undefined8 FUN__text__004b3460(long param_1,int param_2,int param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = (long *)(param_1 + 0x60);
  plVar6 = (long *)*plVar5;
  if (plVar6 != (long *)0x0) {
    if (param_3 == 0) {
      plVar4 = (long *)0x0;
      do {
        while (lVar1 = plVar6[2], *(int *)(*(long *)(lVar1 + 8) + 0x10) != param_2) {
LAB__text__004b3538:
          plVar2 = (long *)*plVar6;
          plVar4 = plVar6;
          plVar6 = plVar2;
          if (plVar2 == (long *)0x0) {
            return 1;
          }
        }
        if (*(int *)(lVar1 + 0x34) != 0) {
          *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + -1;
          goto LAB__text__004b3538;
        }
        FUN__text__004b6060(param_1);
        plVar3 = (long *)*plVar6;
        plVar2 = plVar5;
        if (*(long **)(param_1 + 0x60) != plVar6) {
          plVar2 = plVar4;
        }
        *plVar2 = (long)plVar3;
        if (*(long **)(param_1 + 0x68) == plVar6) {
          *(long **)(param_1 + 0x68) = plVar4;
        }
        *plVar6 = *(long *)(param_1 + 0x70);
        *(long **)(param_1 + 0x70) = plVar6;
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
        plVar6 = plVar3;
        if (plVar3 == (long *)0x0) {
          return 1;
        }
      } while( true );
    }
    plVar4 = (long *)0x0;
    do {
      while ((plVar2 = plVar6, lVar1 = plVar2[2], *(int *)(*(long *)(lVar1 + 8) + 0x10) == param_2
             && (*(int *)(lVar1 + 0x30) == param_3))) {
        if (*(int *)(lVar1 + 0x34) != 0) {
          *(int *)(lVar1 + 0x34) = *(int *)(lVar1 + 0x34) + -1;
          break;
        }
        FUN__text__004b6060(param_1);
        plVar6 = (long *)*plVar2;
        plVar3 = plVar5;
        if (*(long **)(param_1 + 0x60) != plVar2) {
          plVar3 = plVar4;
        }
        *plVar3 = (long)plVar6;
        if (*(long **)(param_1 + 0x68) == plVar2) {
          *(long **)(param_1 + 0x68) = plVar4;
        }
        *plVar2 = *(long *)(param_1 + 0x70);
        *(long **)(param_1 + 0x70) = plVar2;
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
        if (plVar6 == (long *)0x0) {
          return 1;
        }
      }
      plVar6 = (long *)*plVar2;
      plVar4 = plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
  }
  return 1;
}


