/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00443db0; name: FUN_.text__00443db0
 */


long * FUN__text__00443db0(undefined8 param_1,undefined8 param_2,undefined4 param_3,
                          undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  iVar1 = (int)param_1;
  if (iVar1 == 2) {
    plVar3 = (long *)FUN__text__00400f80(0,0x110);
    plVar2 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      FUN__text__00443ee0(plVar3,param_2,param_3,param_4);
      lVar4 = 0x8886e8;
      *(undefined1 *)(plVar3 + 0x21) = 0;
LAB__text__00443e8c:
      *plVar3 = lVar4 + 0x10;
      return plVar3;
    }
  }
  else if (iVar1 == 1) {
    plVar3 = (long *)FUN__text__00400f80(0,0x110);
    plVar2 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      FUN__text__00443ee0(plVar3,param_2,param_3,param_4);
      lVar4 = 0x888688;
      goto LAB__text__00443e8c;
    }
  }
  else {
    if (iVar1 != 0) {
      return (long *)0x0;
    }
    plVar2 = (long *)FUN__text__00400f80(param_1,0x140);
    if (plVar2 != (long *)0x0) {
      FUN__text__00443ee0(plVar2,param_2,param_3,param_4);
      *(undefined1 *)(plVar2 + 0x27) = 0;
      plVar2[0x23] = 0;
      plVar2[0x24] = 0;
      plVar2[0x25] = 0;
      plVar2[0x26] = 0;
      *plVar2 = 0x888638;
    }
  }
  return plVar2;
}


