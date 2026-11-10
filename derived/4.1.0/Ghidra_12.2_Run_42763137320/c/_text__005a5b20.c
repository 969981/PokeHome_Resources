/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a5b20; name: FUN_.text__005a5b20
 */


void FUN__text__005a5b20(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = *(long **)(param_1 + 0x288);
  plVar5 = *(long **)(param_1 + 0x290);
  if (plVar3 != plVar5) {
    do {
      if ((*plVar3 == 0) || (*(int *)(*plVar3 + 0x54) == 0)) {
        plVar4 = plVar3;
        if (plVar3 != plVar5) {
          while (plVar4 = plVar4 + 1, plVar4 != plVar5) {
            if ((*plVar4 != 0) && (*(int *)(*plVar4 + 0x54) != 0)) {
              if (*plVar3 != 0) {
                (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
                *plVar3 = 0;
              }
              lVar1 = *plVar4;
              *plVar4 = 0;
              *plVar3 = lVar1;
              plVar3 = plVar3 + 1;
            }
          }
        }
        goto LAB__text__005a5bc8;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar5);
    plVar3 = plVar5;
  }
LAB__text__005a5bc8:
  plVar5 = *(long **)(param_1 + 0x290);
  if (plVar3 != plVar5) {
    if ((long *)((long)plVar3 + ((long)plVar5 - (long)plVar3)) != plVar5) {
      lVar1 = (long)plVar5 - (long)plVar3 >> 3;
      plVar4 = plVar3;
      do {
        if (*plVar4 != 0) {
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
          *plVar4 = 0;
        }
        lVar2 = plVar4[lVar1];
        plVar4[lVar1] = 0;
        plVar3 = plVar4 + 1;
        *plVar4 = lVar2;
        plVar4 = plVar3;
      } while (plVar3 + lVar1 != plVar5);
      plVar5 = *(long **)(param_1 + 0x290);
    }
    if (plVar5 != plVar3) {
      do {
        plVar4 = plVar5 + -1;
        if (*plVar4 != 0) {
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
          plVar5[-1] = 0;
        }
        plVar5 = plVar4;
      } while (plVar4 != plVar3);
    }
    *(long **)(param_1 + 0x290) = plVar3;
  }
  return;
}


