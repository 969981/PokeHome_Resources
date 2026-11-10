/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b8ec0; name: FUN_.text__003b8ec0
 */


long * FUN__text__003b8ec0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)*param_1;
  plVar2 = (long *)((long *)*param_1)[1];
  if (plVar3 != plVar2) {
    while (*plVar3 != *param_2) {
      plVar3 = plVar3 + 3;
      if (plVar3 == plVar2) {
        return (long *)0x0;
      }
    }
  }
  plVar1 = (long *)0x0;
  if (plVar3 != plVar2) {
    plVar1 = plVar3;
  }
  return plVar1;
}


