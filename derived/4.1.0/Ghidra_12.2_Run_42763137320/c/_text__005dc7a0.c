/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005dc7a0; name: FUN_.text__005dc7a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__005dc7a0(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x1b0);
  if (plVar3 == *(long **)(param_1 + 0x1b8)) {
    iVar2 = -1;
  }
  else {
    iVar2 = 0;
    while( true ) {
      plVar1 = _DAT_0089f5c8;
      if (*plVar3 != 0) {
        plVar1 = (long *)(*plVar3 + 0x58);
      }
      if (*plVar1 == *param_2) break;
      plVar3 = plVar3 + 1;
      iVar2 = iVar2 + 1;
      if (plVar3 == *(long **)(param_1 + 0x1b8)) {
        return -1;
      }
    }
  }
  return iVar2;
}


