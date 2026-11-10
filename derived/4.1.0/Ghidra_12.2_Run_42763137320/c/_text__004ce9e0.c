/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ce9e0; name: FUN_.text__004ce9e0
 */


void FUN__text__004ce9e0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = *(long **)(param_1 + 0x10);
  if (plVar2 == (long *)0x0) goto LAB__text__004cea7c;
  lVar1 = *plVar2;
  if ((int)plVar2[1] != 0) {
    lVar4 = lVar1;
    do {
      lVar3 = *(long *)(lVar4 + 8);
      if (lVar3 != 0) {
        FUN__text__004cfac0(lVar3);
        FUN__text__00400fc0(4,lVar3);
        plVar2 = *(long **)(param_1 + 0x10);
        lVar1 = *plVar2;
      }
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != lVar1 + (ulong)*(uint *)(plVar2 + 1) * 0x10);
  }
  if (lVar1 == 0) {
LAB__text__004cea6c:
    FUN__text__00400fc0(4,plVar2);
  }
  else {
    *(undefined4 *)(plVar2 + 1) = 0;
    FUN__text__00400fc0(0);
    *plVar2 = 0;
    *(undefined4 *)((long)plVar2 + 0xc) = 0;
    plVar2 = *(long **)(param_1 + 0x10);
    if (plVar2 != (long *)0x0) goto LAB__text__004cea6c;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
LAB__text__004cea7c:
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN__text__004cfac0(lVar1);
    FUN__text__00400fc0(4,lVar1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}


