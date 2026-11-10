/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00529e60; name: FUN_.text__00529e60
 */


void FUN__text__00529e60(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x18) = 0;
    lVar1 = *param_1;
    if (lVar1 == 0) break;
    *param_1 = *(long *)(lVar1 + 8);
    *(undefined8 *)(lVar1 + 8) = 0;
    lVar1 = *param_1;
  }
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x28) = 4;
    if (*(long *)(lVar1 + 0x10) != 0) {
      *(undefined8 *)(*(long *)(lVar1 + 0x10) + 8) = 0;
      *(undefined8 *)(lVar1 + 0x10) = 0;
    }
    plVar2 = *(long **)(lVar1 + 0x18);
    if (plVar2 != (long *)0x0) {
      lVar4 = 0;
      plVar5 = plVar2;
      do {
        lVar3 = lVar4;
        lVar4 = *plVar5;
        plVar5 = (long *)(lVar4 + 8);
      } while (lVar4 != 0 && lVar4 != lVar1);
      if (lVar4 != 0) {
        if (*plVar2 != lVar4) {
          plVar2 = (long *)(lVar3 + 8);
        }
        *plVar2 = *(long *)(lVar4 + 8);
      }
      *(undefined8 *)(lVar1 + 0x18) = 0;
    }
  }
  *param_1 = 0;
  return;
}


