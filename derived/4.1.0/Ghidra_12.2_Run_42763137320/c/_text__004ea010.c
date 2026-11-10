/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ea010; name: FUN_.text__004ea010
 */


void FUN__text__004ea010(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  plVar2 = (long *)(param_1 + 0x10);
  if (*plVar2 != 0) {
    lVar5 = *plVar2;
    lVar4 = 0;
    do {
      while ((lVar3 = lVar5, *(long *)(lVar3 + 8) <= param_3 &&
             ((*(long *)(lVar3 + 8) != param_3 || (*(int *)(lVar3 + 0x18) != 0))))) {
        lVar5 = *(long *)(lVar3 + 0x10);
        lVar4 = lVar3;
        if (*(long *)(lVar3 + 0x10) == 0) {
          return;
        }
      }
      lVar5 = *(long *)(lVar3 + 0x10);
      plVar1 = plVar2;
      if (*plVar2 != lVar3) {
        plVar1 = (long *)(lVar4 + 0x10);
      }
      *plVar1 = lVar5;
      if (*param_2 == 0) {
        *param_2 = lVar3;
        *(undefined8 *)(lVar3 + 0x10) = 0;
      }
      else {
        *(long *)(lVar3 + 0x10) = *param_2;
        *param_2 = lVar3;
      }
    } while (lVar5 != 0);
  }
  return;
}


