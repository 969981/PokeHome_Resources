/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00691bec; name: FUN_.text__00691bec
 */


long * FUN__text__00691bec(long *param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[1];
  if (plVar2 != (long *)0x0) {
    param_1[1] = *plVar2;
    *plVar2 = (long)plVar2;
    plVar2[1] = (long)plVar2;
    plVar2[4] = 0;
    plVar2[5] = 0;
    *(undefined2 *)(plVar2 + 10) = 0;
    *(undefined4 *)(plVar2 + 6) = param_2;
    *(undefined2 *)((long)plVar2 + 0x36) = param_3;
    *(undefined2 *)((long)plVar2 + 0x34) = param_4;
    plVar2[8] = 0;
    plVar2[9] = 0;
    plVar2[2] = (long)(plVar2 + 2);
    plVar2[3] = (long)(plVar2 + 2);
    plVar2[7] = 0x100;
    lVar1 = FUN__text__00691c5c(param_1,*param_1,plVar2);
    *param_1 = lVar1;
    *(undefined1 *)(lVar1 + 0x39) = 0;
  }
  return plVar2;
}


