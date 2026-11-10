/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ff328; name: FUN_.text__004ff328
 */


long * FUN__text__004ff328(uint param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  if (param_1 < 2) {
    if ((param_2 & 0xffff) == 0) {
      return (long *)0x0;
    }
    plVar3 = (long *)FUN__text__00400f80(0,0x10);
    plVar2 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      FUN__text__004ce070(plVar3);
      return plVar3;
    }
  }
  else {
    if ((1 < param_1 - 2) || ((param_2 & 0xffff) == 0)) {
      return (long *)0x0;
    }
    plVar2 = (long *)FUN__text__00400f80(0,0x38);
    if (plVar2 != (long *)0x0) {
      FUN__text__004cd54c(plVar2,param_2);
      iVar1 = FUN__text__004cd580(plVar2,param_3);
      if (iVar1 != 1) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        plVar2 = (long *)0x0;
      }
    }
  }
  return plVar2;
}


