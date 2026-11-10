/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0050a98c; name: FUN_.text__0050a98c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__0050a98c(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = (long *)FUN__text__00400f80(9,0x48);
  if (plVar3 != (long *)0x0) {
    plVar3[2] = 0;
    lVar1 = _DAT_008a40a0;
    *(undefined4 *)(plVar3 + 7) = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[1] = lVar1 + 0x10;
    *(undefined1 *)(plVar3 + 8) = 0x10;
    iVar2 = FUN__text__00542850(plVar3);
    if (iVar2 != 1) {
      FUN__text__00542970(plVar3);
      plVar3[1] = lVar1 + 0x10;
      if (plVar3[2] != 0) {
        FUN__text__0050cda0(plVar3 + 1);
        plVar3[2] = 0;
      }
      FUN__text__00400fc0(9,plVar3);
      return (long *)0x0;
    }
    if (*(long *)(param_1 + 0x80) == 0) {
      *(long **)(param_1 + 0x80) = plVar3;
      *plVar3 = 0;
      return plVar3;
    }
    *plVar3 = *(long *)(param_1 + 0x80);
    *(long **)(param_1 + 0x80) = plVar3;
  }
  return plVar3;
}


