/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d04c4; name: FUN_.text__005d04c4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__005d04c4(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = tpidr_el0;
  uVar5 = uVar5 & 0xffffffffffffe000;
  if (*(long *)(uVar5 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  lVar3 = uVar5 + 0x18;
  *(long **)(lVar3 + *(long *)(uVar5 + 0x98) * 8) = param_2;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xb0,8);
  lVar4 = _DAT_0089f690;
  if (plVar2 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0,0x5d05f8);
    (*pcVar1)();
  }
  plVar2[7] = 0;
  *(undefined4 *)(plVar2 + 8) = 0;
  plVar2[2] = 0;
  plVar2[3] = 0;
  *(undefined4 *)(plVar2 + 6) = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  *plVar2 = lVar4 + 0x10;
  if (uVar5 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(uVar5 + 0x98) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(uVar5 + 0x98) * 8 + -8);
    }
  }
  *(undefined4 *)(plVar2 + 10) = 0;
  plVar2[0xb] = 0;
  plVar2[0xc] = 0;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xf] = 0;
  plVar2[0x10] = 0;
  plVar2[0x11] = 0;
  plVar2[9] = 0x896b38;
  *plVar2 = 0x896af8;
  plVar2[1] = lVar4;
  if ((uVar5 != 0) && (*(long *)(uVar5 + 0x98) != 0)) {
    lVar3 = *(long *)(lVar3 + *(long *)(uVar5 + 0x98) * 8 + -8);
    if (lVar3 != 0) goto LAB__text__005d05a8;
  }
  lVar3 = FUN__text__005f52b0();
LAB__text__005d05a8:
  *(undefined4 *)(plVar2 + 0x14) = 0;
  plVar2[0x12] = lVar3;
  plVar2[0x13] = 0;
  plVar2[0x15] = 0;
  plVar2[1] = (long)param_2;
  plVar2[2] = (long)plVar2;
  plVar2[3] = 0xb0;
  plVar2[4] = 8;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
  return plVar2;
}


