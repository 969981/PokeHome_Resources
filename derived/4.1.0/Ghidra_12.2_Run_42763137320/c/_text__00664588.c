/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00664588; name: FUN_.text__00664588
 */


long * FUN__text__00664588(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN__text__00678414(1,*(long *)(param_2 + 0x28) + 0x10);
  if (plVar2 != (long *)0x0) {
    *plVar2 = param_2;
    plVar2[1] = param_3;
    iVar1 = (**(code **)(param_2 + 0x10))(param_1,plVar2);
    if (iVar1 != 0) {
      FUN__text__006783e4(plVar2);
      plVar2 = (long *)0x0;
    }
  }
  return plVar2;
}


