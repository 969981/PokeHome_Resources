/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ed750; name: FUN_.text__004ed750
 */


/* WARNING: Removing unreachable block (ram,0x004ed778) */

void FUN__text__004ed750(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x10);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    if (*(int *)(param_2 + 0x10) < *(int *)(lVar2 + 0x10)) {
      *(long *)(param_2 + 8) = lVar2;
      *plVar1 = param_2;
      return;
    }
    while (lVar3 = lVar2, lVar2 = *(long *)(lVar3 + 8), lVar2 != 0) {
      if (*(int *)(param_2 + 0x10) < *(int *)(lVar2 + 0x10)) {
        *(long *)(param_2 + 8) = lVar2;
        if (lVar3 != 0) {
          plVar1 = (long *)(lVar3 + 8);
        }
        *plVar1 = param_2;
        return;
      }
    }
  }
  *(undefined8 *)(param_2 + 8) = 0;
  if (*plVar1 != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 8) + 8);
  }
  *plVar1 = param_2;
  *(long *)(param_1 + 8) = param_2;
  return;
}


