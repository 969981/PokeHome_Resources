/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a2660; name: FUN_.text__004a2660
 */


void FUN__text__004a2660(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  if (*(int *)(param_1 + 0xd0) != 0) {
    plVar4 = (long *)**(long **)(param_1 + 200);
    if (plVar4 == (long *)0x0) {
      uVar3 = 0;
      do {
        if (*(int *)(param_1 + 0xd0) - 1 == uVar3) goto LAB__text__004a2710;
        plVar4 = (long *)(*(long **)(param_1 + 200))[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (plVar4 == (long *)0x0);
    }
    else {
      uVar3 = 0;
    }
    do {
      do {
        FUN__text__00400fc0(0,plVar4[2]);
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
      uVar1 = *(uint *)(param_1 + 0xd0);
      if (uVar1 <= (int)uVar3 + 1U) {
        uVar1 = (int)uVar3 + 1;
      }
      do {
        if (uVar1 - 1 == (int)uVar3) {
          if (*(int *)(param_1 + 0xd0) == 0) goto LAB__text__004a275c;
          goto LAB__text__004a2710;
        }
        uVar3 = (ulong)((int)uVar3 + 1);
        plVar4 = *(long **)(*(long *)(param_1 + 200) + uVar3 * 8);
      } while (plVar4 == (long *)0x0);
    } while( true );
  }
LAB__text__004a275c:
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(long *)(param_1 + 200) != 0) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  return;
LAB__text__004a2710:
  uVar3 = 0;
  do {
    lVar2 = *(long *)(param_1 + 200);
    plVar4 = *(long **)(lVar2 + uVar3 * 8);
    if (plVar4 != (long *)0x0) {
      do {
        plVar4 = (long *)*plVar4;
        FUN__text__00400fc0(0);
      } while (plVar4 != (long *)0x0);
      lVar2 = *(long *)(param_1 + 200);
    }
    *(undefined8 *)(lVar2 + uVar3 * 8) = 0;
    uVar3 = uVar3 + 1;
  } while (uVar3 < *(uint *)(param_1 + 0xd0));
  goto LAB__text__004a275c;
}


