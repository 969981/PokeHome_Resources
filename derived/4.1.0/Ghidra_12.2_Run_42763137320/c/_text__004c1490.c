/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c1490; name: FUN_.text__004c1490
 */


void FUN__text__004c1490(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  FUN__text__0040b5d0(FUN__text__004c1418,0x10);
  plVar1 = *(long **)(param_1 + 8);
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)plVar1[1];
    FUN__text__004c2840(param_1,plVar1);
    FUN__text__004c1fc0(param_1,plVar1);
    FUN__text__004c31a0(param_1,plVar1);
    (**(code **)(*plVar1 + 0x40))(plVar1);
    FUN__text__00447104(plVar1);
    plVar1 = plVar2;
  }
  FUN__text__004c1568(param_1);
  FUN__text__00400fc0(0,param_1);
  return;
}


