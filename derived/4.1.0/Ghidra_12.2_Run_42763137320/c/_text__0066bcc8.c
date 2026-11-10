/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066bcc8; name: FUN_.text__0066bcc8
 */


long * FUN__text__0066bcc8(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  lVar1 = FUN__text__00678404(param_2);
  if (lVar1 != 0) {
    plVar2 = (long *)FUN__text__006783d4(0x10);
    if (plVar2 != (long *)0x0) {
      *plVar2 = lVar1;
      plVar2[1] = 0;
      if (param_1 == (long *)0x0) {
        return plVar2;
      }
      plVar4 = param_1;
      do {
        plVar3 = plVar4;
        plVar4 = (long *)plVar3[1];
      } while (plVar4 != (long *)0x0);
      plVar3[1] = (long)plVar2;
      return param_1;
    }
    FUN__text__006783e4(lVar1);
  }
  return (long *)0x0;
}


