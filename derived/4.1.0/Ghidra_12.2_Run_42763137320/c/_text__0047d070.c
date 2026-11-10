/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047d070; name: FUN_.text__0047d070
 */


long * FUN__text__0047d070(int param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  plVar1 = (long *)FUN__text__00400f80(0,0x18);
  if (plVar1 != (long *)0x0) {
    *(undefined2 *)(plVar1 + 2) = 0;
    *plVar1 = 0;
    plVar1[1] = 0;
    if (param_1 != 0) {
      lVar2 = FUN__text__00400f80(0,param_1);
      lVar3 = *plVar1;
      if (lVar2 == 0) {
        if (lVar3 != 0) {
          *(undefined4 *)(plVar1 + 1) = 0;
          FUN__text__00400fc0(0);
          *plVar1 = 0;
          *(undefined4 *)((long)plVar1 + 0xc) = 0;
        }
        FUN__text__00400fc0(0,plVar1);
        return (long *)0x0;
      }
      if ((lVar3 != 0) && (lVar3 != lVar2)) {
        FUN__text__00400fc0(0);
      }
      uVar4 = 0;
      *plVar1 = lVar2;
      *(int *)(plVar1 + 1) = param_1;
      *(int *)((long)plVar1 + 0xc) = param_1;
      do {
        *(undefined1 *)(*plVar1 + uVar4) = 0;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(plVar1 + 1));
    }
  }
  return plVar1;
}


