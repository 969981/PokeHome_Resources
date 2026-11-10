/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00529fa0; name: FUN_.text__00529fa0
 */


void FUN__text__00529fa0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x10) + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
    lVar3 = 0;
    plVar4 = plVar1;
    do {
      lVar2 = lVar3;
      lVar3 = *plVar4;
      plVar4 = (long *)(lVar3 + 8);
    } while (lVar3 != 0 && lVar3 != param_1);
    if (lVar3 != 0) {
      if (*plVar1 != lVar3) {
        plVar1 = (long *)(lVar2 + 8);
      }
      *plVar1 = *(long *)(lVar3 + 8);
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}


