/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00431eb0; name: FUN_.text__00431eb0
 */


undefined8 FUN__text__00431eb0(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = *(long **)(param_1 + 0x40);
  if (plVar2 == (long *)0x0) {
    return 1;
  }
  plVar4 = (long *)0x0;
  do {
    while (plVar1 = (long *)*plVar2, plVar2[1] != param_2) {
joined_r0x00431f80:
      plVar4 = plVar2;
      plVar2 = plVar1;
      if (plVar1 == (long *)0x0) {
        return 1;
      }
    }
    plVar3 = (long *)(param_1 + 0x40);
    if (*(long **)(param_1 + 0x40) != plVar2) {
      plVar3 = plVar4;
    }
    *plVar3 = (long)plVar1;
    if (*(long **)(param_1 + 0x48) == plVar2) {
      *(long **)(param_1 + 0x48) = plVar4;
      plVar3 = *(long **)(param_1 + 0x58);
    }
    else {
      plVar3 = *(long **)(param_1 + 0x58);
    }
    if ((plVar2 < plVar3) || (plVar3 + (ulong)*(uint *)(param_1 + 0x60) * 4 <= plVar2)) {
      FUN__text__00400fc0(0);
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
      plVar2 = plVar4;
      goto joined_r0x00431f80;
    }
    *plVar2 = *(long *)(param_1 + 0x50);
    *(long **)(param_1 + 0x50) = plVar2;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
    plVar2 = plVar1;
    if (plVar1 == (long *)0x0) {
      return 1;
    }
  } while( true );
}


